#include <iostream>
#include <chrono>
#include <cstdlib>
#include <string>
#include <vector>

std::string version = "0.0.0";

void printhelp() 
{
    std::cout << "measure - a simple utility to measure how much time any command takes to execute." << std::endl;
    std::cout << std::endl;
    std::cout << "Usage:" << std::endl;
    std::cout << "    measure <command>" << std::endl;
    std::cout << std::endl;
    std::cout << "Optional arguments:" << std::endl;
    std::cout << "    -h|--help: Show this help message and exit." << std::endl;
    std::cout << "    -v|--version: Show version and exit." << std::endl;
    std::cout << std::endl;
    std::cout << "Homepage: https://github.com/hinqiwame/measure" << std::endl;
    std::cout << "Submit a bug: https://github.com/hinqiwame/measure/issues/" << std::endl;
}

void printversion() 
{
    std::cout << version << std::endl;
}

int main(int argc, char* argv[]) 
{
    if (argc < 2) {
        std::cerr << "You didn't provide a command to execute." << std::endl;
        return 1;
    }

    std::vector<std::string> args(argv + 1, argv + argc);
    if (args[0] == "-h" || args[0] == "--help") {
        printhelp();
        return 0;
    } else if (args[0] == "-v" || args[0] == "--version") {
        printversion();
        return 0;
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::string command;
    for (const auto& arg : args) {
        command += arg;
        command += ""; // " "
    }
    int result = std::system(command.c_str());
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Time taken to execute '" << command << "' is " << elapsed.count() << " second(s)." << std::endl;

    return result;
}
