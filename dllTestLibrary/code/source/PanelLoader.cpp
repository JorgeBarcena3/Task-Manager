#include "../headers/PanelLoader.hpp"
#include "../headers/LuaScripting.hpp"

TaskManager::TaskStatus TaskManager::PanelLoader::loadPanel(std::string path)
{

    return true;
}

TaskManager::TaskStatus TaskManager::PanelLoader::initializeLuaScripting(TaskManager::LuaScripting& scripting)
{
    //scripting.vm->set("loadScene", [this](const char* path) {this->loadScene(path);  });

    return true;
}
