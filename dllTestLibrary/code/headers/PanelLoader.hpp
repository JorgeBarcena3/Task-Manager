// Author: Jorge B�rcena Lumbreras

// � Copyright (C) 2020  Jorge B�rcena Lumbreras

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.



#ifndef PANELLOADER_HEADER
#define PANELLOADER_HEADER

#define LUA_COMPAT_APIINTCASTS

#include <string>
#include "Component.hpp"

namespace TaskManager
{
    class TASKMANAGERAPI PanelLoader : public Component
    {

    public:

        TaskStatus_b loadPanel(std::string path);

        TaskStatus_b initializeLuaScripting(TaskManager::LuaScripting& scripting) override;

    };

}
#endif