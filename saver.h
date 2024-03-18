#ifndef SAVER_H
#define SAVER_H

#include <string>
#include <vector>

class Saver
{
public:
    Saver();
    void init();
    void save(std::vector<std::string> &data);
private:
    std::string m_filename;
};

#endif // SAVER_H
