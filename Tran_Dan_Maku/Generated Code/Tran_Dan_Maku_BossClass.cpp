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

IMPLEMENT_OBJECT(BossClass);

IMPLEMENT_LIGHT_LUA_VARS(BossClass)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(BossClass)
//GameObject Functions
ADD_LUA_FCT(BossClass,Mount)
ADD_LUA_FCT(BossClass,GetMount)
ADD_LUA_FCT(BossClass,UnMount)
ADD_LUA_FCT(BossClass,GetMountsCount)
ADD_LUA_FCT(BossClass,IsMounted)
ADD_LUA_FCT(BossClass,GetMountSupport)
ADD_LUA_FCT(BossClass,GetLayer)
ADD_LUA_FCT(BossClass,SetName)
ADD_LUA_FCT(BossClass,GetName)
ADD_LUA_FCT(BossClass,GetID)
ADD_LUA_FCT(BossClass,SetLifeTime)
ADD_LUA_FCT(BossClass,GetLifeTime)
ADD_LUA_FCT(BossClass,GetAge)
ADD_LUA_FCT(BossClass,SetVisible)
ADD_LUA_FCT(BossClass,GetVisible)
ADD_LUA_FCT(BossClass,IsDestroyed)
ADD_LUA_FCT(BossClass,SetPosition)
ADD_LUA_FCT(BossClass,SetPositionX)
ADD_LUA_FCT(BossClass,SetPositionY)
ADD_LUA_FCT(BossClass,GetPosition)
ADD_LUA_FCT(BossClass,GetPositionX)
ADD_LUA_FCT(BossClass,GetPositionY)
ADD_LUA_FCT(BossClass,SetOldPosition)
ADD_LUA_FCT(BossClass,SetZOrder)
ADD_LUA_FCT(BossClass,GetZOrder)
ADD_LUA_FCT(BossClass,SetRotationAngle)
ADD_LUA_FCT(BossClass,SetOldRotationAngle)
ADD_LUA_FCT(BossClass,GetRotationAngle)
ADD_LUA_FCT(BossClass,SetDirection)
ADD_LUA_FCT(BossClass,SetDirectionX)
ADD_LUA_FCT(BossClass,SetDirectionY)
ADD_LUA_FCT(BossClass,GetDirection)
ADD_LUA_FCT(BossClass,GetDirectionX)
ADD_LUA_FCT(BossClass,GetDirectionY)
ADD_LUA_FCT(BossClass,SetScale)
ADD_LUA_FCT(BossClass,SetScaleX)
ADD_LUA_FCT(BossClass,SetScaleY)
ADD_LUA_FCT(BossClass,GetScale)
ADD_LUA_FCT(BossClass,GetScaleX)
ADD_LUA_FCT(BossClass,GetScaleY)
ADD_LUA_FCT(BossClass,SetCenter)
ADD_LUA_FCT(BossClass,SetCenterX)
ADD_LUA_FCT(BossClass,SetCenterY)
ADD_LUA_FCT(BossClass,GetCenter)
ADD_LUA_FCT(BossClass,GetCenterX)
ADD_LUA_FCT(BossClass,GetCenterY)
ADD_LUA_FCT(BossClass,SetModulationColor)
ADD_LUA_FCT(BossClass,SetModulationR)
ADD_LUA_FCT(BossClass,SetModulationG)
ADD_LUA_FCT(BossClass,SetModulationB)
ADD_LUA_FCT(BossClass,GetModulationColor)
ADD_LUA_FCT(BossClass,GetModulationR)
ADD_LUA_FCT(BossClass,GetModulationG)
ADD_LUA_FCT(BossClass,GetModulationB)
ADD_LUA_FCT(BossClass,SetOpacity)
ADD_LUA_FCT(BossClass,GetOpacity)
ADD_LUA_FCT(BossClass,AddCollision)
ADD_LUA_FCT(BossClass,RemoveCollision)
ADD_LUA_FCT(BossClass,ObjectInCollision)
ADD_LUA_FCT(BossClass,GetCollisionId)
ADD_LUA_FCT(BossClass,GetCollisionObject)
ADD_LUA_FCT(BossClass,GetTileMapCollisionObject)
ADD_LUA_FCT(BossClass,AddPhysicalProperties)
ADD_LUA_FCT(BossClass,RemovePhysicalProperties)
ADD_LUA_FCT(BossClass,SetMassProperties)
ADD_LUA_FCT(BossClass,GetMassProperties)
ADD_LUA_FCT(BossClass,GetCenterOfMass)
ADD_LUA_FCT(BossClass,SetVelocity)
ADD_LUA_FCT(BossClass,GetVelocity)
ADD_LUA_FCT(BossClass,SetAngularVelocity)
ADD_LUA_FCT(BossClass,GetAngularVelocity)
ADD_LUA_FCT(BossClass,SetSpeed)
ADD_LUA_FCT(BossClass,GetSpeed)
ADD_LUA_FCT(BossClass,SetVelocityDirection)
ADD_LUA_FCT(BossClass,GetVelocityDirection)
ADD_LUA_FCT(BossClass,AddForce)
ADD_LUA_FCT(BossClass,RemoveForce)
ADD_LUA_FCT(BossClass,RemoveAllForces)
ADD_LUA_FCT(BossClass,GetPhysicsId)
ADD_LUA_FCT(BossClass,GetNetworkKeyboard)
ADD_LUA_FCT(BossClass,GetNetworkMouse)
ADD_LUA_FCT(BossClass,GetNetworkOwner)
ADD_LUA_FCT(BossClass,GetNumberOfCollidedSprites)
ADD_LUA_FCT(BossClass,GetNumberOfCollidedCircles)
ADD_LUA_FCT(BossClass,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(BossClass,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(BossClass,GetCollidedSprite)
ADD_LUA_FCT(BossClass,GetCollidedTileMap)
ADD_LUA_FCT(BossClass,IsCollidedWithSprite)
ADD_LUA_FCT(BossClass,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(BossClass,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(BossClass,IsCollidedWithLineSegment)
ADD_LUA_FCT(BossClass,IsCollidedWithCircle)
ADD_LUA_FCT(BossClass,IsCollidedWithTileMap)
ADD_LUA_FCT(BossClass,IsMyLineSegmentCollided)
ADD_LUA_FCT(BossClass,IsMyCircleCollided)
ADD_LUA_FCT(BossClass,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(BossClass,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(BossClass,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(BossClass,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(BossClass,GetCollidedCircleData)
ADD_LUA_FCT(BossClass,GetCollidedLineSegmentData)
ADD_LUA_FCT(BossClass,GetCollidedTileMapData)
ADD_LUA_FCT(BossClass,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(BossClass,SetFlipHorizontal)
ADD_LUA_FCT(BossClass,GetFlipHorizontal)
ADD_LUA_FCT(BossClass,SetFlipVertical)
ADD_LUA_FCT(BossClass,GetFlipVertical)
ADD_LUA_FCT(BossClass,GetCurrentFrameDelay)
ADD_LUA_FCT(BossClass,GetFrameDelay)
ADD_LUA_FCT(BossClass,GetFramesCount)
ADD_LUA_FCT(BossClass,GetFrameWidth)
ADD_LUA_FCT(BossClass,GetFrameHeight)
ADD_LUA_FCT(BossClass,SetCurrentFrameIndex)
ADD_LUA_FCT(BossClass,GetCurrentFrameIndex)
ADD_LUA_FCT(BossClass,IsEndOfAnimation)
ADD_LUA_FCT(BossClass,SetLoop)
ADD_LUA_FCT(BossClass,GetLoop)
ADD_LUA_FCT(BossClass,GoToFirstFrame)
ADD_LUA_FCT(BossClass,GoToLastFrame)
ADD_LUA_FCT(BossClass,SetAnimationSpeed)
ADD_LUA_FCT(BossClass,GetAnimationSpeed)
ADD_LUA_FCT(BossClass,Play)
ADD_LUA_FCT(BossClass,Stop)
ADD_LUA_FCT(BossClass,IsPlaying)
ADD_LUA_FCT(BossClass,Pause)
ADD_LUA_FCT(BossClass,IsPaused)
ADD_LUA_FCT(BossClass,GetAnimationsCount)
ADD_LUA_FCT(BossClass,SetCurrentAnimationIndex)
ADD_LUA_FCT(BossClass,GetCurrentAnimationIndex)
ADD_LUA_FCT(BossClass,SetCurrentAnimationName)
ADD_LUA_FCT(BossClass,GetCurrentAnimationName)
ADD_LUA_FCT(BossClass,IsInViewport)
ADD_LUA_FCT(BossClass,SetHUDObject)
ADD_LUA_FCT(BossClass,IsHUDObject)
ADD_LUA_FCT(BossClass,SetCollisionActorIndex)
ADD_LUA_FCT(BossClass,SetVisibleCollisionData)
ADD_LUA_FCT(BossClass,GetVisibleCollisionData)
ADD_LUA_FCT(BossClass,SetCollisionDataColor)
ADD_LUA_FCT(BossClass,GetCollisionDataColor)
ADD_LUA_FCT(BossClass,SetVisibleBoundingRectangle)
ADD_LUA_FCT(BossClass,GetVisibleBoundingRectangle)
ADD_LUA_FCT(BossClass,SetBoundingRectangleColor)
ADD_LUA_FCT(BossClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(BossClass)
END_STRUCTURE

START_CLASS_OPERATORS(BossClass)
END_STRUCTURE
//END LUA SPECIFIC
BossClass::BossClass():Sprite()
{

}
BossClass::BossClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

BossClass::BossClass(const BossClass & other):Sprite(other)
{
    OnClone(other);


}

BossClass *BossClass::Clone()
{
    return new BossClass(*this);
}

void BossClass::Update(float dt)
{
// Generated Code //

// user code//
    Collision();

    Level1* l = (Level1*)GetMyGame()->GetCurrentLevel();

    if (GetVisible() == true)
    {
        if (l->pathIdentifier1 >= 20 && stage == 0)
        {
            BulletPhase1();
        }

        if (l->pathIdentifier1 >= 20 && stage == 1)
        {
            BulletSpell1();
        }

        if (l->pathIdentifier1 >= 20 && stage == 2)
        {
            BulletPhase2();
        }

        if (l->pathIdentifier1 >= 20 && stage == 3)
        {
            BulletSpell2();
        }

        if (l->pathIdentifier1 >= 20 && stage == 4)
        {
            BulletPhase3();
        }

        if (l->pathIdentifier1 >= 20 && stage == 5)
        {
            BulletSpell3();
        }

        if (l->pathIdentifier1 >= 20 && stage == 6)
        {
            BulletPhase4();
        }

        if (l->pathIdentifier1 >= 20 && stage == 7)
        {
            BulletSpell4();
        }

        if (l->pathIdentifier1 >= 20 && stage == 8)
        {
            BulletPhase5();
        }


        if (l->pathIdentifier1 >= 20 && stage == 9)
        {
            BulletSpell5();
        }

        if (l->pathIdentifier1 >= 20 && stage == 10)
        {
            Destruction();
        }
    }

}

void BossClass::Destroy()
{
    Sprite::Destroy();

}

void BossClass::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void BossClass::Load(Core::File & file)
{
    Sprite::Load(file);


}

void BossClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void BossClass::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void BossClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void BossClass::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void BossClass::OnStart()
{
// Generated Code //

// user code//
    health = 200;
    stage = 0;
    bl = timeGetTime();
    bl2 = timeGetTime();

    bl3 = timeGetTime();

    angle = 0.0f;

    timer2 = 0;

    spellcard = 0;
}

void BossClass::OnEnd()
{

}

void BossClass::OnClone(const BossClass & other)
{

}

void BossClass::BulletPhase1()
{
// Generated Code //

// user code//
    if (timeGetTime() - bl > 1000)
    {
        Bullet(0.0f, -1.0f, 10.0f, 0, 0.0f);
        Bullet(0.5f, -1.0f, 10.0f, 0, 0.0f);
        Bullet(-0.5f, -1.0f, 10.0f, 0, 0.0f);
        Bullet(-1.0f, -1.0f, 10.0f, 0, 0.0f);
        Bullet(1.0f, -1.0f, 10.0f, 0, 0.0f);
        Bullet(1.5f, -1.0f, 10.0f, 0, 0.0f);
        Bullet(-1.5f, -1.0f, 10.0f, 0, 0.0f);
        bl = timeGetTime();

    }



    if (timeGetTime() - bl2 > 2500)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");

        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D direction;

            direction.X = pp.X - ep.X;
            direction.Y = 0.0f;

            direction.SetNormalize();

            if (pp.X != ep.X)
            {
                SetPositionX(GetPositionX() + direction.X);
            }
            else
            {
                bl2 = timeGetTime();
            }

        }
    }


}

void BossClass::BulletSpell1()
{
// Generated Code //

// user code//
    if (GetPositionX() != -90 && GetPositionY() != 105)
    {
        Point2D ep = GetPosition();
        Vector2D d;

        d.X = -90 - ep.X;
        d.Y = 105 - ep.Y;

        d.SetNormalize();

        SetPositionX(GetPositionX() + d.X);
        SetPositionY(GetPositionY() + d.Y);
    }

    if (timeGetTime() - bl > 500)
    {
        angle +=14.5;
        Bullet(0.0f, -1.0f, 10.0f, 0, angle);
        Bullet(0.0f, -1.0f, 10.0f, 0, -angle);
        bl = timeGetTime();
    }

    if (timeGetTime() -bl2 > 250)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");
        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D d;

            d.X = pp.X - ep.X;
            d.Y = pp.Y - ep.Y;
            d.SetNormalize();

            Bullet(d.X, d.Y, 20.0f, 1, 0.0f);
            bl2 = timeGetTime();
        }
    }

    spellcard++;

    if (spellcard == 1)
    {
        SpellCall(0);
    }



}

void BossClass::BulletPhase2()
{
// Generated Code //

// user code//
    if (timeGetTime() - bl > 250)
    {
        angle += 10;
        Bullet(0.0f, -1.0f, 10.0f, 0, angle);
        Bullet(0.5f, -1.0f, 10.0f, 0, (angle + 180.0f));
        Bullet(0.5f, -1.0f, 10.0f, 0, (angle + 90.0f));
        Bullet(0.5f, -1.0f, 10.0f, 0, (angle + 270.0f));
        bl = timeGetTime();
    }

    if (timeGetTime() - bl2 > 2500)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");

        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D direction;

            direction.X = pp.X - ep.X;
            direction.Y = 0.0f;

            direction.SetNormalize();

            if (pp.X != ep.X)
            {
                SetPositionX(GetPositionX() + direction.X);
            }
            else
            {
                bl2 = timeGetTime();
            }

        }
    }

    spellcard = 0;
}

void BossClass::BulletSpell2()
{
// Generated Code //

// user code//
    if (GetPositionX() != -90 && GetPositionY() != 105)
    {
        Point2D ep = GetPosition();
        Vector2D d;

        d.X = -90 - ep.X;
        d.Y = 105 - ep.Y;

        d.SetNormalize();

        SetPositionX(GetPositionX() + d.X);
        SetPositionY(GetPositionY() + d.Y);
    }

    if (timeGetTime() - bl > 50)
    {
        angle +=7.5;
        Bullet(0.0f, -1.0f, 10.0f, 0, angle + 40.0f);
        Bullet(0.0f, -1.0f, 10.0f, 0, angle - 40.0f);
        bl = timeGetTime();
    }

    if (timeGetTime() - bl2 > 500)
    {
        angle -= 3;
        Bullet(0.0f, -1.0f, 10.0f, 1, angle);
        bl2 = timeGetTime();
    }

    spellcard++;

    if (spellcard == 1)
    {
        SpellCall(1);
    }
}

void BossClass::BulletPhase3()
{
// Generated Code //

// user code//
    if (timeGetTime() - bl2 > 2500)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");

        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D direction;

            direction.X = pp.X - ep.X;
            direction.Y = 0.0f;

            direction.SetNormalize();

            if (pp.X != ep.X)
            {
                SetPositionX(GetPositionX() + direction.X);
            }
            else
            {
                bl2 = timeGetTime();
            }

        }
    }


    if (timeGetTime() - bl > 250)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");
        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D d;

            d.X = pp.X - ep.X;
            d.Y = pp.Y - ep.Y;
            d.SetNormalize();

            Bullet(d.X, d.Y, 20.0f, 1, 0.0f);
            Bullet(d.X, d.Y, 20.0f, 1, 20.0f);
            Bullet(d.X, d.Y, 20.0f, 1, -20.0f);
            bl = timeGetTime();
        }
    }

    spellcard = 0;
}

void BossClass::BulletSpell3()
{
// Generated Code //

// user code//
    if (GetPositionX() != -90 && GetPositionY() != 105)
    {
        Point2D ep = GetPosition();
        Vector2D d;

        d.X = -90 - ep.X;
        d.Y = 105 - ep.Y;

        d.SetNormalize();

        SetPositionX(GetPositionX() + d.X);
        SetPositionY(GetPositionY() + d.Y);
    }

    if (timeGetTime() - bl > 500)
    {
        angle += 1.0f;

        Bullet(0.0f, -1.0f, 5.0f, 0, angle);
        Bullet(0.25f, -1.0f, 5.0f, 0, angle);
        Bullet(-0.25f, -1.0f, 5.0f, 0, angle);
        Bullet(0.5f, -1.0f, 5.0f, 0, angle);
        Bullet(-0.5f, -1.0f, 5.0f, 0, angle);
        Bullet(0.75f, -1.0f, 5.0f, 0, angle);
        Bullet(-0.75f, -1.0f, 5.0f, 0, angle);
        Bullet(1.0f, -1.0f, 5.0f, 0, angle);
        Bullet(-1.0f, -1.0f, 5.0f, 0, angle);

        Bullet(1.0f, -0.75f, 5.0f, 1, angle);
        Bullet(1.0f, -0.5f, 5.0f, 1, angle);
        Bullet(1.0f, -0.25f, 5.0f, 1, angle);
        Bullet(1.0f, 0.0f, 5.0f, 1, angle);
        Bullet(1.0f, 0.25f, 5.0f, 1, angle);
        Bullet(1.0f, 0.5f, 5.0f, 1, angle);
        Bullet(1.0f, 0.75f, 5.0f, 1, angle);
        Bullet(1.0f, 1.0f, 5.0f, 1, angle);

        Bullet(-1.0f, -0.75f, 5.0f, 1, angle);
        Bullet(-1.0f, -0.5f, 5.0f, 1, angle);
        Bullet(-1.0f, -0.25f, 5.0f, 1, angle);
        Bullet(-1.0f, 0.0f, 5.0f, 1, angle);
        Bullet(-1.0f, 0.25f, 5.0f, 1, angle);
        Bullet(-1.0f, 0.5f, 5.0f, 1, angle);
        Bullet(-1.0f, 0.75f, 5.0f, 1, angle);
        Bullet(-1.0f, 1.0f, 5.0f, 1, angle);

        Bullet(0.0f, 1.0f, 5.0f, 0, angle);
        Bullet(0.25f, 1.0f, 5.0f, 0, angle);
        Bullet(-0.25f, 1.0f, 5.0f, 0, angle);
        Bullet(0.5f, 1.0f, 5.0f, 0, angle);
        Bullet(-0.5f, 1.0f, 5.0f, 0, angle);
        Bullet(0.75f, 1.0f, 5.0f, 0, angle);
        Bullet(-0.75f, 1.0f, 5.0f, 0, angle);
        Bullet(1.0f, 1.0f, 5.0f, 0, angle);
        Bullet(-1.0f, 1.0f, 5.0f, 0, angle);
        bl = timeGetTime();
    }

    spellcard++;

    if (spellcard == 1)
    {
        SpellCall(2);
    }

}

void BossClass::Explosion()
{
// Generated Code //

// user code//
    ParticleSystem* exp = GetGameObject<ParticleSystem>("particleSystem1");

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

    bl = timeGetTime();
    bl2 = timeGetTime();
}

void BossClass::Destruction()
{
// Generated Code //

// user code//
    if (timeGetTime() -bl > 500) Explosion();

    timer2++;

    if (timer2 > 300) GetMyGame()->GoToLevel("Win");
}

void BossClass::Bullet(float directionX, float directionY, float speed, int am, float angle)
{
// Generated Code //

// user code//
    EnemyBullet* eb = GetGameObject<EnemyBullet>("bullet1");

    if (eb)
    {
        EnemyBullet* ebClone = eb->Clone();

        if (ebClone)
        {
            ebClone->SetPositionX(GetPositionX());
            ebClone->SetPositionY(GetPositionY());
            ebClone->SetName("BulletClone");
            ebClone->SetVisible(true);
            ebClone->SetCurrentAnimationIndex(am);

            Vector2D d = Vector2D(directionX, directionY);
            d.SetNormalize();
            d.Rotate(angle);
            ebClone->SetVelocity(d * speed);

            GetLayer()->AddGameObject(ebClone);
        }
    }
}

void BossClass::Collision()
{
// Generated Code //

// user code//
    if (GetCollisionInfo().IsCollidedWithSprite("PBullet", false) && GetVisible() == true)
    {
        health--;

        MyGame* m = (MyGame*)GetMyGame();

        if (health <=1)
        {
            int rand = Random::GetNumber(0, 10);

            if (rand < 11)
            {
                PowerUp();
                PowerUp();
                PowerUp();
                PowerUp();
                PowerUp();
                PowerUp();
                PowerUp();
                PowerUp();
            }

            m->score += 1000;
            Explosion();
            health = 200;
            stage++;
            angle = 0.0f;
        }
        else
        {
            m->score++;

            ParticleSystem* exp = GetGameObject<ParticleSystem>("particleSystem0");

            if (exp)
            {
                ParticleSystem* expC = exp->Clone();

                if (expC)
                {
                    int posX = GetPositionX();
                    int posY = GetPositionY();

                    expC->SetPositionX(posX);
                    expC->SetPositionY(posY - 30);
                    expC->SetParticleLifeTime(1.0f, 1.0f);
                    expC->SetLifeTime(1.0f);

                    GetLayer()->AddGameObject(expC);
                }
            }

        }

    }

    if (GetCollisionInfo().IsCollidedWithSprite("Spell", true) && GetVisible() == true)
    {
        health--;

        MyGame* m = (MyGame*)GetMyGame();

        if (health <=1)
        {
            int rand = Random::GetNumber(0, 10);

            m->score += 1000;

            ParticleSystem* exp3 = GetGameObject<ParticleSystem>("particleSystem1");

            if (exp3)
            {
                ParticleSystem* expC3 = exp3->Clone();

                if (expC3)
                {
                    int posX = GetPositionX();
                    int posY = GetPositionY();

                    expC3->SetPositionX(posX);
                    expC3->SetPositionY(posY );
                    expC3->SetParticleLifeTime(0.1f, 1.0f);
                    expC3->SetLifeTime(2.0f);

                    expC3->SetRecycleParticles(false);
                    expC3->SetDestroyIfNotRecycling(true);

                    GetLayer()->AddGameObject(expC3);
                }
            }

            stage++;
        }
        else
        {
            m->score += 1;
        }

    }
}

void BossClass::PowerUp()
{
// Generated Code //

// user code//
    PowerClass* pu = GetGameObject<PowerClass>("Power");

    if (pu)
    {
        PowerClass* puClone = pu->Clone();

        if (puClone)
        {
            puClone->SetPositionX(GetPositionX());
            puClone->SetPositionY(GetPositionY());
            puClone->SetVisible(true);
            puClone->SetName("PowerUp");

            GetLayer()->AddGameObject(puClone);
        }
    }
}

void BossClass::BulletPhase4()
{
// Generated Code //

// user code//
    if (timeGetTime() - bl2 > 2500)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");

        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D direction;

            direction.X = pp.X - ep.X;
            direction.Y = 0.0f;

            direction.SetNormalize();

            if (pp.X != ep.X)
            {
                SetPositionX(GetPositionX() + direction.X);
            }
            else
            {
                bl2 = timeGetTime();
            }

        }
    }

    if (timeGetTime() - bl > 250)
    {
        angle +=5.5;
        Bullet(0.0f, -1.0f, 5.0f, 0, angle + 120);
        Bullet(0.0f, -1.0f, 5.0f, 0, angle + 240);
        Bullet(0.0f, -1.0f, 5.0f, 0, angle);
        bl = timeGetTime();
    }

    spellcard = 0;
}

void BossClass::BulletSpell4()
{
// Generated Code //

// user code//
    if (GetPositionX() != -90 && GetPositionY() != 105)
    {
        Point2D ep = GetPosition();
        Vector2D d;

        d.X = -90 - ep.X;
        d.Y = 105 - ep.Y;

        d.SetNormalize();

        SetPositionX(GetPositionX() + d.X);
        SetPositionY(GetPositionY() + d.Y);
    }

    if (timeGetTime() -bl2 > 250)
    {
        PlayerClass* p = GetGameObject<PlayerClass>("Player1");
        if (p)
        {
            Point2D pp = p->GetPosition();
            Point2D ep = GetPosition();
            Vector2D d;

            d.X = pp.X - ep.X;
            d.Y = pp.Y - ep.Y;
            d.SetNormalize();

            Bullet(d.X, d.Y, 10.0f, 2, 0.0f);
            Bullet(d.X, d.Y, 10.0f, 2, 40.0f);
            Bullet(d.X, d.Y, 10.0f, 2, -40.0f);
            bl2 = timeGetTime();
        }
    }

    if (timeGetTime() - bl > 200)
    {
        angle +=10;
        Bullet(0.0f, -1.0f, 5.0f, 0, angle + 72);
        Bullet(0.0f, -1.0f, 5.0f, 0, angle + 144);
        Bullet(0.0f, -1.0f, 5.0f, 0, angle + 216);
        Bullet(0.0f, -1.0f, 5.0f, 0, angle + 288);
        Bullet(0.0f, -1.0f, 5.0f, 0, angle);
        bl = timeGetTime();
    }

    spellcard++;

    if (spellcard == 1)
    {
        SpellCall(3);
    }

}

void BossClass::BulletSpell5()
{
// Generated Code //

// user code//
    if (GetPositionX() != -90 && GetPositionY() != 105)
    {
        Point2D ep = GetPosition();
        Vector2D d;

        d.X = -90 - ep.X;
        d.Y = 105 - ep.Y;

        d.SetNormalize();

        SetPositionX(GetPositionX() + d.X);
        SetPositionY(GetPositionY() + d.Y);
    }


    if (timeGetTime() - bl > 200)
    {
        angle += 7.123f;

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

    spellcard++;

    if (spellcard == 1)
    {
        SpellCall(4);
    }
}

void BossClass::SpellCall(int x)
{
// Generated Code //

// user code//
    SpellCall1* sc = GetGameObject<SpellCall1>("sprite0");

    if (sc)
    {
        SpellCall1* sc1 = sc->Clone();

        if (sc1)
        {
            sc1->SetCurrentAnimationIndex(x);
            sc1->SetVisible(true);
            sc1->SetPositionX(-90);
            sc1->SetPositionY(10);
            sc1->Play();
            GetLayer()->AddGameObject(sc1);
        }
    }
}

void BossClass::BulletPhase5()
{
// Generated Code //

// user code//
    spellcard = 0;
    stage = 9;
}

BossClass::~BossClass()
{

}



