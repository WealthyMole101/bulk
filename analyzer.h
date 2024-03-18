#ifndef ANALYZER_H
#define ANALYZER_H

#include <string>
#include <vector>
#include <stack>

#include "saver.h"

class Analyzer
{
public:
    explicit Analyzer(int block_count);
    ~Analyzer();
    void analize(std::string line);

private:
    void print_bulk(std::vector<std::string>& blocks);

    int m_block_count;
    std::string m_line;
    std::vector<std::string> m_commands;
    std::stack<bool> m_dynamic_validator;
    Saver m_saver;
};

#endif // ANALYZER_H
