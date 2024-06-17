#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

void countStringLengthInFile(const char* fileName)
{
    std::ifstream file(fileName);

    if (!file.is_open())
    {
        std::cerr << "�� ������� ������� ����: " << fileName << std::endl;
        return;
    }

    std::string line;
    int lineNumber = 1;

    while (std::getline(file, line))
    {
        std::cout << "������ " << lineNumber << ": " << line.length() << std::endl;
        lineNumber++;
    }

    file.close();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const char* fileName = "example.txt";
    countStringLengthInFile(fileName);

    return 0;
}