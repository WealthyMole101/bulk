#include <iostream>
#include <string>

#include "version.h"
#include "analyzer.h"

int version() {
    return PROJECT_VERSION_PATCH;
}

using namespace std;

int main(int argc, char* argv[])
{
    const int BLOCK_COUNT_OFFSET_ARG = 1;
    int block_count = atoi(argv[BLOCK_COUNT_OFFSET_ARG]);
    Analyzer analyzer(block_count);

    std::string line;

    //for generate EOF: Ctrl+Z (Win), or Ctrl+D (Linux)
    while (cin >> line) {
        analyzer.analize(line);
    }

    return 0;
}
