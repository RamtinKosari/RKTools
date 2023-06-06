//-- Include Tools List
# ifndef RKTOOLS_TOOLS_LIST
    # include "toolsList.hpp"
# endif // RKTOOLS_TOOLS_LIST

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << FAILED << "You Must Choose Specefic Tool" << std::endl;
        std::cout << TIP << "to Get Tools List and Other Informations Enter : ./menu help" << std::endl;
        return 0;
    } else {
        std::string toolName = argv[1];
        int toolSize = sizeof(toolsList) / sizeof(toolsList[0]);
        bool isSelected = false;
        if (toolSize == 0) {
            std::cout << FAILED << " No Tool Avalible" << std::endl;
        } else if (toolSize == 1) {
            std::cout << LOG << toolSize << " Tool is Avalible" << std::endl;
        } else {
            std::cout << LOG << toolSize << " Tools are Avalible" << std::endl;
        }
        for (int toolNumber = 0; toolNumber < toolSize; toolNumber++) {
            if (toolName == toolsList[toolNumber]) {
                std::cout << SUCCESS << toolName << " Tool has been Selected" << std::endl;
                switch (toolNumber) {
                    case IMAGE_TO_ASCII: {
                        break;
                    };
                    case LOGGER: {
                        break;
                    };
                }
                isSelected = true;
                break;
            }
        }
        if (isSelected == false) {
            std::cout << FAILED << "No Avalible Tool Called " << toolName << std::endl;
        }
    }
}