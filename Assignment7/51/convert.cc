#include "main.ih"

void convert(const string &filename)
{
    fstream file(filename, std::ios::in | std::ios::out);
    if (!file)
    {
        cerr << "The file does not exist: " << filename << "\n";
        return;
    }
    
    // Read the entire file an store the updated version in content
    string line;
    string content;
    while (getline(file,line))
    {
        if (line.find("email:") == 0)
        {
            size_t idx = line.find(':') + 1;
            string prefix = line.substr(0, idx +1);
            string email = line.substr(idx + 1);
            line = prefix + lowercase(email);
        }
        content += line + "\n";
      
    }
    file.close();
    // Rewrite the modified content to the file
    file.open(filename, std::ios::out | std::ios::trunc);
    file << content;
    file.close();
}
