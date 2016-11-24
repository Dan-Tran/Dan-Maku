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

IMPLEMENT_OBJECT(WinLevel);

IMPLEMENT_LIGHT_LUA_VARS(WinLevel)








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(WinLevel)
ADD_LUA_FCT(WinLevel,SetName)
ADD_LUA_FCT(WinLevel,GetName)
ADD_LUA_FCT(WinLevel,AddLayer)
ADD_LUA_FCT(WinLevel,GetLayersCount)
ADD_LUA_FCT(WinLevel,GetLayer)
ADD_LUA_FCT(WinLevel,AddViewport)
ADD_LUA_FCT(WinLevel,RemoveViewport)
ADD_LUA_FCT(WinLevel,GetViewportsCount)
ADD_LUA_FCT(WinLevel,GetViewport)
ADD_LUA_FCT(WinLevel,CreateJukeBox)
ADD_LUA_FCT(WinLevel,GetJukeBox)
ADD_LUA_FCT(WinLevel,SetClearBackBuffer)
ADD_LUA_FCT(WinLevel,GetClearBackBuffer)
ADD_LUA_FCT(WinLevel,SetClearColor)
ADD_LUA_FCT(WinLevel,GetClearColor)
ADD_LUA_FCT(WinLevel,GetGameObjects)
ADD_LUA_FCT(WinLevel,GetGameObjectsByName)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(WinLevel)
END_STRUCTURE

START_CLASS_OPERATORS(WinLevel)
END_STRUCTURE
//END LUA SPECIFIC
WinLevel::WinLevel(void):Level()
{





}

void WinLevel::Update(float dt)
{
// Generated Code //

// user code//
    if (GetKeyboard()->IsTriggered(Keyboard::Return))
    {
        GetMyGame()->GoToLevel("Menu");
    }

    MyGame* m = (MyGame*)GetMyGame();

    Text* t = GetGameObject<Text>("text1");

    if (t)
    {
        t->SetText("You finished with a score of " + String::From(m->score) + " points!");
    }

    if (timeGetTime() - bl > 200)
    {
        angle += 10;
        Bullet(0.0f, -1.0f, 5.0f, 2, angle);
        Bullet(0.0f, -1.0f, 5.0f, 2, angle + 60);
        Bullet(0.0f, -1.0f, 5.0f, 2, angle + 120);
        Bullet(0.0f, -1.0f, 5.0f, 2, angle + 180);
        Bullet(0.0f, -1.0f, 5.0f, 2, angle + 240);
        Bullet(0.0f, -1.0f, 5.0f, 2, angle + 300);

        bl = timeGetTime();

    }
}

void WinLevel::Save(Core::File & file)  const
{
    Level::Save(file);



}

void WinLevel::Load(Core::File & file)
{
    Level::Load(file);


}

void WinLevel::OnStart()
{
// Generated Code //

// user code//
    bl = timeGetTime();
    angle = 0.0f;
}

void WinLevel::OnEnd()
{

}

void WinLevel::Bullet(float directionX, float directionY, float speed, int am, float angle)
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

WinLevel::~WinLevel()
{

}



