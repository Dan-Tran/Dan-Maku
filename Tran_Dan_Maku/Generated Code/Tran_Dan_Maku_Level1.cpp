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
    TextUpdates();

    timer++;

    if (timer == 400) pathIdentifier1++;

    if (timer == 710) pathIdentifier1++;

    if (timer == 1190) pathIdentifier1++;

    if (timer == 1610) pathIdentifier1++;

    if (timer == 2400) pathIdentifier1++;

    if (timer == 2450) pathIdentifier1++;

    if (timer == 2890) pathIdentifier1++;

    if (timer == 3320) pathIdentifier1++;

    if (timer == 3370) pathIdentifier1++;

    if (timer == 5170) pathIdentifier1++;

    if (timer == 5230) pathIdentifier1++;

    if (timer == 5650) pathIdentifier1++;

    if (timer == 6170) pathIdentifier1++;

    if (timer == 7070) pathIdentifier1++;

    if (timer == 7130) pathIdentifier1++;

    if (timer == 7610) pathIdentifier1++;

    if (timer == 8090) pathIdentifier1++;

    if (timer == 8570) pathIdentifier1++;

    if (timer == 9650) pathIdentifier1++;

    if (timer == 10550) // 10550
    {
        pathIdentifier1++;

        BossClass* b = GetGameObject<BossClass>("boss");

        if (b)
        {
            BossClass* bc = b->Clone();

            if (bc)
            {
                bc->SetVisible(true);
                bc->SetName("EnemyClone");
                bc->SetPosition(Vector2D(-50, 150));

                GetLayer(1)->AddGameObject(bc);

                ParticleSystem* exp = GetGameObject<ParticleSystem>("particleSystem1");

                if (exp)
                {
                    ParticleSystem* expC = exp->Clone();

                    if (expC)
                    {
                        int posX = bc->GetPositionX();
                        int posY = bc->GetPositionY();

                        expC->SetPositionX(posX);
                        expC->SetPositionY(posY );
                        expC->SetParticleLifeTime(0.1f, 1.0f);
                        expC->SetLifeTime(2.0f);

                        expC->SetRecycleParticles(false);
                        expC->SetDestroyIfNotRecycling(true);

                        GetLayer(1)->AddGameObject(expC);
                    }
                }
            }
        }

        Sound* bm = GetGameObject<Sound>("BossMusic");

        if (bm) bm->Play(true);


        Sound* es = GetGameObject<Sound>("F");

        if (es) es->Play(true);

        Sound* lm = GetGameObject<Sound>("Level");

        if (lm) lm->Stop();
    }

    if (GetKeyboard()->IsTriggered(Keyboard::Return))
    {
        GetMyGame()->GoToLevel("Win");
    }

    if (Explosion != 0)
    {
        Sound* es = GetGameObject<Sound>("F");

        if (es) es->Play(true);

        Explosion = 0;
    }



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
    pathIdentifier1 = 0;

    MyGame* m = (MyGame*)GetMyGame();

    m->power = 0;

    m->spell = 3;

    m->life = 3;

    m->score = 0;
}

void Level1::OnEnd()
{

}

void Level1::TextUpdates()
{
// Generated Code //

// user code//
    Text* txt = GetGameObject<Text>("text0");

    if (txt)
    {
        txt->SetText(String::From(pathIdentifier1));
    }

    MyGame* m = (MyGame*)GetMyGame();

    Text* txt1 = GetGameObject<Text>("text1");

    if (txt1)
    {
        txt1->SetText("Power: " + String::From(m->power));
    }


    Text* txt2 = GetGameObject<Text>("text2");

    if (txt2)
    {
        txt2->SetText("Lives: " + String::From(m->life));
    }

    Text* txt3 = GetGameObject<Text>("text3");

    if (txt3)
    {
        if (m->spell < 64)
        {
            txt3->SetText("Spells: " + String::From(m->spell));
        }
        else
        {
            txt3->SetText("Spells: MAX");
        }
    }

    Text* txt5 = GetGameObject<Text>("text5");

    if (txt5)
    {
        txt5->SetText(String::From(m->score));
    }
}

Level1::~Level1()
{

}



