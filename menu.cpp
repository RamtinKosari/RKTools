# ifndef __RKTOOLS_CORE
    // # include "Core.hpp"
    # include "Definitions.hpp"
    # include <iostream>
# endif // __RKTOOLS_CORE

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << FAILED << "You Must Choose Specefic Tool" << std::endl;
        std::cout << TIP << "to Get Tools List and Other Informations Enter : " << HIGHLIGHT("./menu help") << std::endl;
    }
}