#include "MYGAME_MainDeclarations.h"
#include "MYGAME_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;

IMPLEMENT_OBJECT(Level1);

	IMPLEMENT_LIGHT_LUA_VARS(Level1)








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(Level1)
	ADD_LUA_FCT(Level1,SetName)
	ADD_LUA_FCT(Level1,GetName)
	ADD_LUA_FCT(Level1,AddLayer)
	ADD_LUA_FCT(Level1,GetLayersCount)
	ADD_LUA_FCT(Level1,GetLayer)
	ADD_LUA_FCT(Level1,AddViewport)
	ADD_LUA_FCT(Level1,RemoveViewport)
	ADD_LUA_FCT(Level1,GetViewportsCount)
	ADD_LUA_FCT(Level1,GetViewport)
	ADD_LUA_FCT(Level1,CreateJukeBox)
	ADD_LUA_FCT(Level1,GetJukeBox)
	ADD_LUA_FCT(Level1,SetClearBackBuffer)
	ADD_LUA_FCT(Level1,GetClearBackBuffer)
	ADD_LUA_FCT(Level1,SetClearColor)
	ADD_LUA_FCT(Level1,GetClearColor)
	ADD_LUA_FCT(Level1,GetGameObjects)
	ADD_LUA_FCT(Level1,GetGameObjectsByName)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(Level1)
END_STRUCTURE

START_CLASS_OPERATORS(Level1)
END_STRUCTURE
//END LUA SPECIFIC
Level1::Level1(void):Level()
{





}

void Level1::Update(float dt) 
{
// Generated Code //

// user code//
timer++;
}

void Level1::Save(Core::File & file)  const
{
	Level::Save(file);



}

void Level1::Load(Core::File & file) 
{
	Level::Load(file);


}

void Level1::OnStart() 
{
// Generated Code //

// user code//
timer = 0;
}

void Level1::OnEnd() 
{

}

 Level1::~Level1() 
{

}



