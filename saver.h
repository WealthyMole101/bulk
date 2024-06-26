#ifndef SAVER_H
#define SAVER_H

#include <string>
#include <vector>
#include "out.h"

class Saver: public Observer
{
public:
    Saver();
    void init();
    void out(std::vector<std::string> &data) override;
private:
    std::string m_filename;
};

#endif // SAVER_H
