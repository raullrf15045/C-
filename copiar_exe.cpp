#include <iostream>
#include <filesystem>
#include <string>
#include <system_error>

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
    // Verifica se recebeu exatamente 1 parâmetro (além do nome do programa)
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " \"caminho\\para\\pasta\\de\\lixo\"\n";
        std::cerr << "Exemplo: " << argv[0] << " \"D:\\15045\\lixo\"\n";
        return 1;
    }

    fs::path pasta_lixo = argv[1];

    // Verifica se a pasta de lixo existe
    if (!fs::exists(pasta_lixo) || !fs::is_directory(pasta_lixo)) {
        std::cerr << "Erro: A pasta de lixo nao existe ou nao e uma pasta:\n"
                  << pasta_lixo << "\n";
        return 1;
    }

    std::cout << "A procurar todos os .exe em C:\\ ...\n";
    std::cout << "A copiar para: " << pasta_lixo << "\n\n";

    int total_encontrados = 0;
    int total_copiados = 0;
    int total_erros = 0;

    try {
        // Percorre recursivamente todo o C:\
        for (const auto& entry : fs::recursive_directory_iterator(
                "C:\\",
                fs::directory_options::skip_permission_denied))
        {
            if (entry.is_regular_file()) {
                fs::path caminho = entry.path();

                // Verifica se a extensão é .exe (case-insensitive)
                if (caminho.extension() == ".exe" || caminho.extension() == ".EXE") {
                    total_encontrados++;

                    // Nome do ficheiro de destino (só o nome, sem caminho)
                    fs::path destino = pasta_lixo / caminho.filename();

                    // Se já existir um ficheiro com o mesmo nome, adiciona um número
                    int contador = 1;
                    while (fs::exists(destino)) {
                        destino = pasta_lixo / (caminho.stem().string() + "_" +
                                               std::to_string(contador) +
                                               caminho.extension().string());
                        contador++;
                    }

                    // Tenta copiar
                    std::error_code ec;
                    fs::copy_file(caminho, destino, fs::copy_options::none, ec);

                    if (ec) {
                        total_erros++;
                        // Mostra só alguns erros para não encher o ecrã
                        if (total_erros <= 10) {
                            std::cerr << "Erro ao copiar: " << caminho << "\n"
                                      << "  Motivo: " << ec.message() << "\n";
                        }
                    } else {
                        total_copiados++;
                        if (total_copiados % 50 == 0) { // mostra progresso de 50 em 50
                            std::cout << "Copiados: " << total_copiados << "...\n";
                        }
                    }
                }
            }
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Excecao: " << e.what() << "\n";
    }

    std::cout << "\n========== RESUMO ==========\n";
    std::cout << "Total de .exe encontrados : " << total_encontrados << "\n";
    std::cout << "Total de .exe copiados    : " << total_copiados << "\n";
    std::cout << "Total de erros            : " << total_erros << "\n";
    std::cout << "Pasta de destino          : " << pasta_lixo << "\n";

    return 0;
}
