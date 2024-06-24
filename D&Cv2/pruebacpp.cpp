#include <iostream>
#include <fstream>
#include <iomanip>

void printBinaryFile(const std::string& filePath) {
    // Open the binary file
    std::ifstream file(filePath, std::ios::binary);
    
    if (!file) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return;
    }

    // Read the file contents
    char buffer[16];  // Buffer to hold chunks of the file
    while (file.read(buffer, sizeof(buffer)) || file.gcount() > 0) {
        std::streamsize bytesRead = file.gcount();

        // Print the contents in a readable format (hexadecimal)
        for (std::streamsize i = 0; i < bytesRead; ++i) {
            std::cout << std::hex << std::setw(2) << std::setfill('0') 
                      << (static_cast<unsigned int>(buffer[i]) & 0xFF) << " ";
        }
        std::cout << "  ";
        // Print the contents in a readable format (ASCII)
        for (std::streamsize i = 0; i < bytesRead; ++i) {
            char ch = buffer[i];
            if (std::isprint(ch)) {
                std::cout << ch;
            } else {
                std::cout << '.';
            }
        }

        std::cout << std::endl;
    }

    file.close();
}

int main() {
    std::string filePath = "./prueba.bin";  // Replace with your binary file path
    printBinaryFile(filePath);
    return 0;
}
