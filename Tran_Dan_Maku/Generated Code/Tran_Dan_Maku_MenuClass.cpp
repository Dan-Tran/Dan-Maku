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

IMPLEMENT_OBJECT(MenuClass);

IMPLEMENT_LIGHT_LUA_VARS(MenuClass)








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(MenuClass)
ADD_LUA_FCT(MenuClass,SetName)
ADD_LUA_FCT(MenuClass,GetName)
ADD_LUA_FCT(MenuClass,AddLayer)
ADD_LUA_FCT(MenuClass,GetLayersCount)
ADD_LUA_FCT(MenuClass,GetLayer)
ADD_LUA_FCT(MenuClass,AddViewport)
ADD_LUA_FCT(MenuClass,RemoveViewport)
ADD_LUA_FCT(MenuClass,GetViewportsCount)
ADD_LUA_FCT(MenuClass,GetViewport)
ADD_LUA_FCT(MenuClass,CreateJukeBox)
ADD_LUA_FCT(MenuClass,GetJukeBox)
ADD_LUA_FCT(MenuClass,SetClearBackBuffer)
ADD_LUA_FCT(MenuClass,GetClearBackBuffer)
ADD_LUA_FCT(MenuClass,SetClearColor)
ADD_LUA_FCT(MenuClass,GetClearColor)
ADD_LUA_FCT(MenuClass,GetGameObjects)
ADD_LUA_FCT(MenuClass,GetGameObjectsByName)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(MenuClass)
END_STRUCTURE

START_CLASS_OPERATORS(MenuClass)
END_STRUCTURE
//END LUA SPECIFIC
MenuClass::MenuClass(void):Level()
{





}

void MenuClass::Update(float dt)
{
// Generated Code //

// user code//
    MyGame* m = (MyGame*)GetMyGame();

    if (GetKeyboard()->IsTriggered(Keyboard::Down) && m->counter1 < 2) m->counter1++;

    else if (GetKeyboard()->IsTriggered(Keyboard::Down) && m->counter1 >= 2) m->counter1 = 0;

    if (GetKeyboard()->IsTriggered(Keyboard::Up) && m->counter1 > 0) m->counter1--;

    else if (GetKeyboard()->IsTriggered(Keyboard::Up) && m->counter1 <= 0) m->counter1 = 2;

//---------------------------------------------------------------------\\

    if (GetKeyboard()->IsTriggered(Keyboard::Z) || GetKeyboard()->IsTriggered(Keyboard::Return))
    {
        if (m->counter1 == 0)
        {
            GetMyGame()->GoToLevel("level0");
            m->counter1 = 0;
        }

        if (m->counter1 == 1)
        {
            GetMyGame()->GoToLevel("Instructions");
            m->counter1 = 0;
        }

        if (m->counter1 == 2)
        {
            GetMyGame()->Exit();
            m->counter1 = 0;
        }
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

        Bullet(0.0f, -1.0f, 5.0f, 2, -angle);
        Bullet(0.0f, -1.0f, 5.0f, 2, -(angle + 60));
        Bullet(0.0f, -1.0f, 5.0f, 2, -(angle + 120));
        Bullet(0.0f, -1.0f, 5.0f, 2, -(angle + 180));
        Bullet(0.0f, -1.0f, 5.0f, 2, -(angle + 240));
        Bullet(0.0f, -1.0f, 5.0f, 2, -(angle + 300));


        bl = timeGetTime();
    }
}

void MenuClass::Save(Core::File & file)  const
{
    Level::Save(file);



}

void MenuClass::Load(Core::File & file)
{
    Level::Load(file);


}

void MenuClass::OnStart()
{
// Generated Code //

// user code//
    bl = timeGetTime();
    angle = 0.0f;
}

void MenuClass::OnEnd()
{

}

void MenuClass::Bullet(float directionX, float directionY, float speed, int am, float angle)
{
// Generated Code //

// user code//
    EnemyBullet* eb = GetGameObject<EnemyBullet>("bullet1");

    if (eb)
    {
        EnemyBullet* ebClone = eb->Clone();

        if (ebClone)
        {
            ebClone->SetPositionX(3);
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

MenuClass::~MenuClass()
{

}



