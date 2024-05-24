#ifndef PRINTER_H
#define PRINTER_H

#include <string>
#include <vector>
#include "out.h"

class Printer: public Observer
{
public:
    Printer();
    void init();
    void out(std::vector<std::string> &data) override;
private:
    std::string m_filename;
};

#endif // PRINTER_H
