#include "saver.h"

#include <chrono>
#include <fstream>

using namespace std;

Saver::Saver()
{

}

void Saver::init()
{
    if (m_filename.empty()) {
        const auto now = std::chrono::system_clock::now();
        const std::time_t t_c = std::chrono::system_clock::to_time_t(now);
        m_filename = std::to_string(t_c) + ".log";
    }
}

void Saver::out(vector<string>& data)
{
    ofstream file;
    file.open(m_filename, std::ios::out);

    file << "bulk: ";
    for (auto it = data.begin(); it != data.end(); ++it) {
        file << *it;
        if (it != data.end() -1) {
            file << ", ";
        }
    }

    file.close();
    m_filename.clear();
}
