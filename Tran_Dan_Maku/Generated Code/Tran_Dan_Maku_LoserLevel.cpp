#include "TRAN_DAN_MAKU_MainDeclarations.h"
#include "TRAN_DAN_MAKU_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;

IMPLEMENT_OBJECT(LoserLevel);

IMPLEMENT_LIGHT_LUA_VARS(LoserLevel)








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(LoserLevel)
ADD_LUA_FCT(LoserLevel,SetName)
ADD_LUA_FCT(LoserLevel,GetName)
ADD_LUA_FCT(LoserLevel,AddLayer)
ADD_LUA_FCT(LoserLevel,GetLayersCount)
ADD_LUA_FCT(LoserLevel,GetLayer)
ADD_LUA_FCT(LoserLevel,AddViewport)
ADD_LUA_FCT(LoserLevel,RemoveViewport)
ADD_LUA_FCT(LoserLevel,GetViewportsCount)
ADD_LUA_FCT(LoserLevel,GetViewport)
ADD_LUA_FCT(LoserLevel,CreateJukeBox)
ADD_LUA_FCT(LoserLevel,GetJukeBox)
ADD_LUA_FCT(LoserLevel,SetClearBackBuffer)
ADD_LUA_FCT(LoserLevel,GetClearBackBuffer)
ADD_LUA_FCT(LoserLevel,SetClearColor)
ADD_LUA_FCT(LoserLevel,GetClearColor)
ADD_LUA_FCT(LoserLevel,GetGameObjects)
ADD_LUA_FCT(LoserLevel,GetGameObjectsByName)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(LoserLevel)
END_STRUCTURE

START_CLASS_OPERATORS(LoserLevel)
END_STRUCTURE
//END LUA SPECIFIC
LoserLevel::LoserLevel(void):Level()
{





}

void LoserLevel::Update(float dt)
{
// Generated Code //

// user code//
    if (GetKeyboard()->IsTriggered(Keyboard::Return))
    {
        GetMyGame()->GoToLevel("Menu");
    }

    if (timeGetTime() - bl > 75)
    {
        angle += 10;

        Bullet(0.0f, -1.0f, 2.5f, 2, angle);


        bl = timeGetTime();
    }
}

void LoserLevel::Save(Core::File & file)  const
{
    Level::Save(file);



}

void LoserLevel::Load(Core::File & file)
{
    Level::Load(file);


}

void LoserLevel::OnStart()
{
// Generated Code //

// user code//
    bl = timeGetTime();
    angle = 0.0f;
}

void LoserLevel::OnEnd()
{

}

void LoserLevel::Bullet(float directionX, float directionY, float speed, int am, float angle)
{
// Generated Code //

// user code//
    EnemyBullet* eb = GetGameObject<EnemyBullet>("bullet1");

    if (eb)
    {
        EnemyBullet* ebClone = eb->Clone();

        if (ebClone)
        {
            ebClone->SetPositionX(0);
            ebClone->SetPositionY(0);
            ebClone->SetName("BulletClone");
            ebClone->SetVisible(true);
            ebClone->SetCurrentAnimationIndex(am);

            Vector2D d = Vector2D(directionX, directionY);
            d.SetNormalize();
            d.Rotate(angle);
            ebClone->SetVelocity(d * speed);

            GetLayer(1)->AddGameObject(ebClone);
        }
    }
}

LoserLevel::~LoserLevel()
{

}



