#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char *argv[])
{
    string text;
    string file_content;
    int found;

    if (argc != 2)
    {
        cout << "Usage: deb <filename>" << std::endl;
    }

    ifstream File(argv[1]);

    while (getline(File, text))
    {
        found = text.find("deb");
        if (found != -1)
        {
            text = "";
        }
        file_content += text + "\n";
    }
    File.close();

    ofstream file(argv[1], std::ofstream::trunc);

    istringstream iss(file_content);

    std::string line;
    int lineNumber = 1;

    // Read each line from the string
    while (getline(iss, line))
    {
        // Output the current line
        file << line << std::endl;
        lineNumber++;
    }
    file.close();
}
