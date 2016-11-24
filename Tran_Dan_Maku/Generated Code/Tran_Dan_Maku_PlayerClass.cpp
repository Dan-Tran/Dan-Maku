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

IMPLEMENT_OBJECT(PlayerClass);

IMPLEMENT_LIGHT_LUA_VARS(PlayerClass)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);




timer = timeGetTime();



END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(PlayerClass)
//GameObject Functions
ADD_LUA_FCT(PlayerClass,Mount)
ADD_LUA_FCT(PlayerClass,GetMount)
ADD_LUA_FCT(PlayerClass,UnMount)
ADD_LUA_FCT(PlayerClass,GetMountsCount)
ADD_LUA_FCT(PlayerClass,IsMounted)
ADD_LUA_FCT(PlayerClass,GetMountSupport)
ADD_LUA_FCT(PlayerClass,GetLayer)
ADD_LUA_FCT(PlayerClass,SetName)
ADD_LUA_FCT(PlayerClass,GetName)
ADD_LUA_FCT(PlayerClass,GetID)
ADD_LUA_FCT(PlayerClass,SetLifeTime)
ADD_LUA_FCT(PlayerClass,GetLifeTime)
ADD_LUA_FCT(PlayerClass,GetAge)
ADD_LUA_FCT(PlayerClass,SetVisible)
ADD_LUA_FCT(PlayerClass,GetVisible)
ADD_LUA_FCT(PlayerClass,IsDestroyed)
ADD_LUA_FCT(PlayerClass,SetPosition)
ADD_LUA_FCT(PlayerClass,SetPositionX)
ADD_LUA_FCT(PlayerClass,SetPositionY)
ADD_LUA_FCT(PlayerClass,GetPosition)
ADD_LUA_FCT(PlayerClass,GetPositionX)
ADD_LUA_FCT(PlayerClass,GetPositionY)
ADD_LUA_FCT(PlayerClass,SetOldPosition)
ADD_LUA_FCT(PlayerClass,SetZOrder)
ADD_LUA_FCT(PlayerClass,GetZOrder)
ADD_LUA_FCT(PlayerClass,SetRotationAngle)
ADD_LUA_FCT(PlayerClass,SetOldRotationAngle)
ADD_LUA_FCT(PlayerClass,GetRotationAngle)
ADD_LUA_FCT(PlayerClass,SetDirection)
ADD_LUA_FCT(PlayerClass,SetDirectionX)
ADD_LUA_FCT(PlayerClass,SetDirectionY)
ADD_LUA_FCT(PlayerClass,GetDirection)
ADD_LUA_FCT(PlayerClass,GetDirectionX)
ADD_LUA_FCT(PlayerClass,GetDirectionY)
ADD_LUA_FCT(PlayerClass,SetScale)
ADD_LUA_FCT(PlayerClass,SetScaleX)
ADD_LUA_FCT(PlayerClass,SetScaleY)
ADD_LUA_FCT(PlayerClass,GetScale)
ADD_LUA_FCT(PlayerClass,GetScaleX)
ADD_LUA_FCT(PlayerClass,GetScaleY)
ADD_LUA_FCT(PlayerClass,SetCenter)
ADD_LUA_FCT(PlayerClass,SetCenterX)
ADD_LUA_FCT(PlayerClass,SetCenterY)
ADD_LUA_FCT(PlayerClass,GetCenter)
ADD_LUA_FCT(PlayerClass,GetCenterX)
ADD_LUA_FCT(PlayerClass,GetCenterY)
ADD_LUA_FCT(PlayerClass,SetModulationColor)
ADD_LUA_FCT(PlayerClass,SetModulationR)
ADD_LUA_FCT(PlayerClass,SetModulationG)
ADD_LUA_FCT(PlayerClass,SetModulationB)
ADD_LUA_FCT(PlayerClass,GetModulationColor)
ADD_LUA_FCT(PlayerClass,GetModulationR)
ADD_LUA_FCT(PlayerClass,GetModulationG)
ADD_LUA_FCT(PlayerClass,GetModulationB)
ADD_LUA_FCT(PlayerClass,SetOpacity)
ADD_LUA_FCT(PlayerClass,GetOpacity)
ADD_LUA_FCT(PlayerClass,AddCollision)
ADD_LUA_FCT(PlayerClass,RemoveCollision)
ADD_LUA_FCT(PlayerClass,ObjectInCollision)
ADD_LUA_FCT(PlayerClass,GetCollisionId)
ADD_LUA_FCT(PlayerClass,GetCollisionObject)
ADD_LUA_FCT(PlayerClass,GetTileMapCollisionObject)
ADD_LUA_FCT(PlayerClass,AddPhysicalProperties)
ADD_LUA_FCT(PlayerClass,RemovePhysicalProperties)
ADD_LUA_FCT(PlayerClass,SetMassProperties)
ADD_LUA_FCT(PlayerClass,GetMassProperties)
ADD_LUA_FCT(PlayerClass,GetCenterOfMass)
ADD_LUA_FCT(PlayerClass,SetVelocity)
ADD_LUA_FCT(PlayerClass,GetVelocity)
ADD_LUA_FCT(PlayerClass,SetAngularVelocity)
ADD_LUA_FCT(PlayerClass,GetAngularVelocity)
ADD_LUA_FCT(PlayerClass,SetSpeed)
ADD_LUA_FCT(PlayerClass,GetSpeed)
ADD_LUA_FCT(PlayerClass,SetVelocityDirection)
ADD_LUA_FCT(PlayerClass,GetVelocityDirection)
ADD_LUA_FCT(PlayerClass,AddForce)
ADD_LUA_FCT(PlayerClass,RemoveForce)
ADD_LUA_FCT(PlayerClass,RemoveAllForces)
ADD_LUA_FCT(PlayerClass,GetPhysicsId)
ADD_LUA_FCT(PlayerClass,GetNetworkKeyboard)
ADD_LUA_FCT(PlayerClass,GetNetworkMouse)
ADD_LUA_FCT(PlayerClass,GetNetworkOwner)
ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedSprites)
ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedCircles)
ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(PlayerClass,GetCollidedSprite)
ADD_LUA_FCT(PlayerClass,GetCollidedTileMap)
ADD_LUA_FCT(PlayerClass,IsCollidedWithSprite)
ADD_LUA_FCT(PlayerClass,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(PlayerClass,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(PlayerClass,IsCollidedWithLineSegment)
ADD_LUA_FCT(PlayerClass,IsCollidedWithCircle)
ADD_LUA_FCT(PlayerClass,IsCollidedWithTileMap)
ADD_LUA_FCT(PlayerClass,IsMyLineSegmentCollided)
ADD_LUA_FCT(PlayerClass,IsMyCircleCollided)
ADD_LUA_FCT(PlayerClass,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(PlayerClass,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(PlayerClass,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(PlayerClass,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(PlayerClass,GetCollidedCircleData)
ADD_LUA_FCT(PlayerClass,GetCollidedLineSegmentData)
ADD_LUA_FCT(PlayerClass,GetCollidedTileMapData)
ADD_LUA_FCT(PlayerClass,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(PlayerClass,SetFlipHorizontal)
ADD_LUA_FCT(PlayerClass,GetFlipHorizontal)
ADD_LUA_FCT(PlayerClass,SetFlipVertical)
ADD_LUA_FCT(PlayerClass,GetFlipVertical)
ADD_LUA_FCT(PlayerClass,GetCurrentFrameDelay)
ADD_LUA_FCT(PlayerClass,GetFrameDelay)
ADD_LUA_FCT(PlayerClass,GetFramesCount)
ADD_LUA_FCT(PlayerClass,GetFrameWidth)
ADD_LUA_FCT(PlayerClass,GetFrameHeight)
ADD_LUA_FCT(PlayerClass,SetCurrentFrameIndex)
ADD_LUA_FCT(PlayerClass,GetCurrentFrameIndex)
ADD_LUA_FCT(PlayerClass,IsEndOfAnimation)
ADD_LUA_FCT(PlayerClass,SetLoop)
ADD_LUA_FCT(PlayerClass,GetLoop)
ADD_LUA_FCT(PlayerClass,GoToFirstFrame)
ADD_LUA_FCT(PlayerClass,GoToLastFrame)
ADD_LUA_FCT(PlayerClass,SetAnimationSpeed)
ADD_LUA_FCT(PlayerClass,GetAnimationSpeed)
ADD_LUA_FCT(PlayerClass,Play)
ADD_LUA_FCT(PlayerClass,Stop)
ADD_LUA_FCT(PlayerClass,IsPlaying)
ADD_LUA_FCT(PlayerClass,Pause)
ADD_LUA_FCT(PlayerClass,IsPaused)
ADD_LUA_FCT(PlayerClass,GetAnimationsCount)
ADD_LUA_FCT(PlayerClass,SetCurrentAnimationIndex)
ADD_LUA_FCT(PlayerClass,GetCurrentAnimationIndex)
ADD_LUA_FCT(PlayerClass,SetCurrentAnimationName)
ADD_LUA_FCT(PlayerClass,GetCurrentAnimationName)
ADD_LUA_FCT(PlayerClass,IsInViewport)
ADD_LUA_FCT(PlayerClass,SetHUDObject)
ADD_LUA_FCT(PlayerClass,IsHUDObject)
ADD_LUA_FCT(PlayerClass,SetCollisionActorIndex)
ADD_LUA_FCT(PlayerClass,SetVisibleCollisionData)
ADD_LUA_FCT(PlayerClass,GetVisibleCollisionData)
ADD_LUA_FCT(PlayerClass,SetCollisionDataColor)
ADD_LUA_FCT(PlayerClass,GetCollisionDataColor)
ADD_LUA_FCT(PlayerClass,SetVisibleBoundingRectangle)
ADD_LUA_FCT(PlayerClass,GetVisibleBoundingRectangle)
ADD_LUA_FCT(PlayerClass,SetBoundingRectangleColor)
ADD_LUA_FCT(PlayerClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(PlayerClass)
END_STRUCTURE

START_CLASS_OPERATORS(PlayerClass)
END_STRUCTURE
//END LUA SPECIFIC
PlayerClass::PlayerClass():Sprite()
{

}
PlayerClass::PlayerClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{


    timer = timeGetTime();


}

PlayerClass::PlayerClass(const PlayerClass & other):Sprite(other)
{
    OnClone(other);


}

PlayerClass *PlayerClass::Clone()
{
    return new PlayerClass(*this);
}

void PlayerClass::Update(float dt)
{
// Generated Code //

// user code//
    Movement();

    Firing();

    Collision();

    SpellCard();

    invincible--;

    if (GetKeyboard()->IsTriggered(Keyboard::Key1))
    {
        invincible = 100000000000;
    }

    if (GetKeyboard()->IsTriggered(Keyboard::Key2))
    {
        invincible = 0;
    }

    if (invincible > 0)
    {
        SetCurrentAnimationIndex(1);
    }
    else
    {
        SetCurrentAnimationIndex(0);
    }
}

void PlayerClass::Destroy()
{
    Sprite::Destroy();

}

void PlayerClass::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void PlayerClass::Load(Core::File & file)
{
    Sprite::Load(file);


}

void PlayerClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void PlayerClass::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void PlayerClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void PlayerClass::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void PlayerClass::OnStart()
{
// Generated Code //

// user code//
    speed = 5;

    bullet = 75;
}

void PlayerClass::OnEnd()
{

}

void PlayerClass::OnClone(const PlayerClass & other)
{

}

void PlayerClass::Movement()
{
// Generated Code //

// user code//

    if (GetKeyboard()->IsPressed(Keyboard::LShift))
    {
        speed = 2;
    }
    else
    {
        speed = 6;
    }

    if (GetKeyboard()->IsPressed(Keyboard::Left) && GetPositionX() > -292)
    {
        SetPositionX(GetPositionX() - speed);
    }

    if (GetKeyboard()->IsPressed(Keyboard::Right) && GetPositionX() < 127)
    {
        SetPositionX(GetPositionX() + speed);
    }

    if (GetKeyboard()->IsPressed(Keyboard::Down) && GetPositionY() > -210)
    {
        SetPositionY(GetPositionY() - speed);
    }

    if (GetKeyboard()->IsPressed(Keyboard::Up) && GetPositionY() < 210)
    {
        SetPositionY(GetPositionY() + speed);
    }
}

void PlayerClass::Firing()
{
// Generated Code //

// user code//
    if (GetKeyboard()->IsPressed(Keyboard::Z))
    {
        if ((timeGetTime() - timer) > bullet)
        {
            PlayerBullet* pb = GetGameObject<PlayerBullet>("playerBullet");

            if (pb)
            {
                PlayerBullet* pbClone = pb->Clone();

                if (pbClone)
                {
                    pbClone->SetVisible(true);
                    pbClone->SetName("PBullet");
                    pbClone->SetPositionX(GetPositionX());
                    pbClone->SetPositionY(GetPositionY() + 48);
                    pbClone->SetOldPosition(pbClone->GetPosition());

                    GetLayer()->AddGameObject(pbClone);

                    Sound* fs = GetGameObject<Sound>("FS");

                    if (fs) fs->Play();

                    timer = timeGetTime();
                }

                MyGame* m = (MyGame*)GetMyGame();

                if (m)
                {
                    if (m->power >= 8)
                    {
                        PlayerBullet* pbClone1 = pb->Clone();

                        if (pbClone1)
                        {
                            pbClone1->SetVisible(true);
                            pbClone1->SetName("PBullet");
                            pbClone1->SetPositionX(GetPositionX() - 24);
                            pbClone1->SetPositionY(GetPositionY() + 48);
                            pbClone1->SetOldPosition(pbClone1->GetPosition());

                            GetLayer()->AddGameObject(pbClone1);
                        }

                        PlayerBullet* pbClone2 = pb->Clone();

                        if (pbClone2)
                        {
                            pbClone2->SetVisible(true);
                            pbClone2->SetName("PBullet");
                            pbClone2->SetPositionX(GetPositionX() + 24);
                            pbClone2->SetPositionY(GetPositionY() + 48);
                            pbClone2->SetOldPosition(pbClone2->GetPosition());

                            GetLayer()->AddGameObject(pbClone2);
                        }
                    }

                    if (m->power >= 16)
                    {
                        PlayerBullet* pbClone3 = pb->Clone();

                        if (pbClone3)
                        {
                            pbClone3->SetVisible(true);
                            pbClone3->SetName("PBullet");
                            pbClone3->SetPositionX(GetPositionX() - 48);
                            pbClone3->SetPositionY(GetPositionY() + 48);
                            pbClone3->SetOldPosition(pbClone3->GetPosition());

                            GetLayer()->AddGameObject(pbClone3);
                        }

                        PlayerBullet* pbClone4 = pb->Clone();

                        if (pbClone4)
                        {
                            pbClone4->SetVisible(true);
                            pbClone4->SetName("PBullet");
                            pbClone4->SetPositionX(GetPositionX() + 48);
                            pbClone4->SetPositionY(GetPositionY() + 48);
                            pbClone4->SetOldPosition(pbClone4->GetPosition());

                            GetLayer()->AddGameObject(pbClone4);
                        }
                    }

                    if (m->power >= 32)
                    {
                        PlayerBullet* pbClone5 = pb->Clone();

                        if (pbClone5)
                        {
                            pbClone5->SetVisible(true);
                            pbClone5->SetName("PBullet");
                            pbClone5->SetPositionX(GetPositionX() - 72);
                            pbClone5->SetPositionY(GetPositionY() + 48);
                            pbClone5->SetOldPosition(pbClone5->GetPosition());

                            GetLayer()->AddGameObject(pbClone5);
                        }

                        PlayerBullet* pbClone6 = pb->Clone();

                        if (pbClone6)
                        {
                            pbClone6->SetVisible(true);
                            pbClone6->SetName("PBullet");
                            pbClone6->SetPositionX(GetPositionX() + 72);
                            pbClone6->SetPositionY(GetPositionY() + 48);
                            pbClone6->SetOldPosition(pbClone6->GetPosition());

                            GetLayer()->AddGameObject(pbClone6);
                        }
                    }

                    if (m->power >= 64)
                    {
                        bullet = 40;
                    }
                    else
                    {
                        bullet = 75;
                    }
                }
            }
        }
    }
}

void PlayerClass::Collision()
{
// Generated Code //

// user code//
    if ((GetCollisionInfo().IsCollidedWithSprite("EnemyClone", true) || GetCollisionInfo().IsCollidedWithSprite("BulletClone", true)) && invincible <= 0)
    {
        ParticleSystem* exp = GetGameObject<ParticleSystem>("particleSystem2");

        if (exp)
        {
            ParticleSystem* expC = exp->Clone();

            if (expC)
            {
                int posX = GetPositionX();
                int posY = GetPositionY();

                expC->SetPositionX(posX);
                expC->SetPositionY(posY );
                expC->SetParticleLifeTime(0.1f, 1.0f);
                expC->SetLifeTime(2.0f);

                expC->SetRecycleParticles(false);
                expC->SetDestroyIfNotRecycling(true);

                GetLayer()->AddGameObject(expC);
            }
        }


        Sound* es = GetGameObject<Sound>("F");

        if (es)
        {
            es->Play(true);
        }

        SetPositionX(-76);
        SetPositionY(-100);

        invincible = 180;

        MyGame* m = (MyGame*)GetMyGame();

        if (m->life <= 0)
        {
            GetMyGame()->GoToLevel("Lose");
            m->score = 0;
        }

        if (m->power > 8)
        {
            m->power -= 8;
        }
        else
        {
            m->power = 0;
        }

        m->life--;

        if (m->score <= 1000)
        {
            m->score = 0;
        }
        else
        {
            m->score -= 1000;
        }
    }

}

void PlayerClass::SpellCard()
{
// Generated Code //

// user code//
    MyGame* m = (MyGame*)GetMyGame();

    if (GetKeyboard()->IsTriggered(Keyboard::X) && m->spell > 0)
    {
        SpellClass1* sp = GetGameObject<SpellClass1>("spell1");

        if (sp)
        {
            SpellClass1* spClone = sp->Clone();

            if (spClone)
            {
                spClone->SetName("Spell");
                spClone->SetVisible(true);

                spClone->SetPositionX(GetPositionX());
                spClone->SetPositionY(GetPositionY() + 48);
                spClone->SetOldPosition(spClone->GetPosition());

                GetLayer()->AddGameObject(spClone);
            }
        }

        SpellClass2* sp2 = GetGameObject<SpellClass2>("spell2");

        if (sp2)
        {
            SpellClass2* spClone2 = sp2->Clone();

            if (spClone2)
            {
                spClone2->SetName("Spell");
                spClone2->SetVisible(true);

                spClone2->SetPositionX(GetPositionX());
                spClone2->SetPositionY(GetPositionY() - 48);
                spClone2->SetOldPosition(spClone2->GetPosition());

                GetLayer()->AddGameObject(spClone2);
            }
        }

        SpellClass3* sp3 = GetGameObject<SpellClass3>("spell3");

        if (sp3)
        {
            SpellClass3* spClone3 = sp3->Clone();

            if (spClone3)
            {
                spClone3->SetName("Spell");
                spClone3->SetVisible(true);

                spClone3->SetPositionX(GetPositionX() - 48);
                spClone3->SetPositionY(GetPositionY());
                spClone3->SetOldPosition(spClone3->GetPosition());

                GetLayer()->AddGameObject(spClone3);
            }
        }

        SpellClass4* sp4 = GetGameObject<SpellClass4>("spell4");

        if (sp4)
        {
            SpellClass4* spClone4 = sp4->Clone();

            if (spClone4)
            {
                spClone4->SetName("Spell");
                spClone4->SetVisible(true);

                spClone4->SetPositionX(GetPositionX() + 48);
                spClone4->SetPositionY(GetPositionY());
                spClone4->SetOldPosition(spClone4->GetPosition());

                GetLayer()->AddGameObject(spClone4);
            }
        }

        invincible = 180;
        m->spell--;

        Sound* se = GetGameObject<Sound>("F");

        if (se) se->Play(true);
    }
}

PlayerClass::~PlayerClass()
{

}



