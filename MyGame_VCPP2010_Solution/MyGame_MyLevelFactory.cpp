#include "MyGame_MainDeclarations.h"
#include "MyGame_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace std;

MyLevelFactory::MyLevelFactory()
{
    script = LuaScriptEngine::CreateScript();
    script->RunFromFile((String(PAL::Program::GetDirectory()) + String("\\Resources\\Scripts\\LevelFactory.Lua")).ToCString());
}

size_t MyLevelFactory::GetLevelsCount()
{
    lua_State * L = script->GetScriptState();
    lua_getglobal(L,"GetLevelsCount");
    lua_pcall(L,0,1,0);
    return (size_t)luaL_checknumber(L,-1);
}

Level * MyLevelFactory::CreateLevel(size_t index)
{
    lua_State * L = script->GetScriptState();
    lua_getglobal(L,"CreateLevel");
    lua_pushnumber(L,index);
    lua_pcall(L,1,1,0);
    if(!lua_isuserdata(L,-1)) return 0;
    return GetObjectOfType<Level>(L,-1);
}
bool MyLevelFactory::GetLevelIndexFromName(const Core::String & levelName, size_t & levelIndex)
{
    lua_State * L = script->GetScriptState();
    lua_getglobal(L,"GetLevelIndexFromName");
    //push the arguments
    lua_pushstring(L,levelName.ToCString());
    lua_pcall(L,1,1,0);
    int result = lua_tointeger(L,-1);
    if(result == -1) return false;
    levelIndex = result;
    //get result
    return true;
}

void MyLevelFactory::Reset()
{
    script = LuaScriptEngine::CreateScript();
    script->RunFromFile((String(PAL::Program::GetDirectory()) + String("\\Resources\\Scripts\\LevelFactory.Lua")).ToCString());
    lua_State * L = script->GetScriptState();
    lua_getglobal(L,"Reset");
    lua_pcall(L,0,0,0);
}
