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

IMPLEMENT_OBJECT(EnemyClass);

IMPLEMENT_LIGHT_LUA_VARS(EnemyClass)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);






PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path1");
Path1.SetCurve(plp0);
Path1.SetPosition(0.0f);
Path1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
Path1.SetSpeed(350.0f);
Path1.SetLoop(false);

PolylinePathPtr plp1 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path2");
Path2.SetCurve(plp1);
Path2.SetPosition(0.0f);
Path2.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
Path2.SetSpeed(350.0f);
Path2.SetLoop(false);

PolylinePathPtr plp2 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path3");
Path3.SetCurve(plp2);
Path3.SetPosition(0.0f);
Path3.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
Path3.SetSpeed(100.0f);
Path3.SetLoop(false);

PolylinePathPtr plp3 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path4");
Path4.SetCurve(plp3);
Path4.SetPosition(0.0f);
Path4.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
Path4.SetSpeed(100.0f);
Path4.SetLoop(false);



END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(EnemyClass)
//GameObject Functions
ADD_LUA_FCT(EnemyClass,Mount)
ADD_LUA_FCT(EnemyClass,GetMount)
ADD_LUA_FCT(EnemyClass,UnMount)
ADD_LUA_FCT(EnemyClass,GetMountsCount)
ADD_LUA_FCT(EnemyClass,IsMounted)
ADD_LUA_FCT(EnemyClass,GetMountSupport)
ADD_LUA_FCT(EnemyClass,GetLayer)
ADD_LUA_FCT(EnemyClass,SetName)
ADD_LUA_FCT(EnemyClass,GetName)
ADD_LUA_FCT(EnemyClass,GetID)
ADD_LUA_FCT(EnemyClass,SetLifeTime)
ADD_LUA_FCT(EnemyClass,GetLifeTime)
ADD_LUA_FCT(EnemyClass,GetAge)
ADD_LUA_FCT(EnemyClass,SetVisible)
ADD_LUA_FCT(EnemyClass,GetVisible)
ADD_LUA_FCT(EnemyClass,IsDestroyed)
ADD_LUA_FCT(EnemyClass,SetPosition)
ADD_LUA_FCT(EnemyClass,SetPositionX)
ADD_LUA_FCT(EnemyClass,SetPositionY)
ADD_LUA_FCT(EnemyClass,GetPosition)
ADD_LUA_FCT(EnemyClass,GetPositionX)
ADD_LUA_FCT(EnemyClass,GetPositionY)
ADD_LUA_FCT(EnemyClass,SetOldPosition)
ADD_LUA_FCT(EnemyClass,SetZOrder)
ADD_LUA_FCT(EnemyClass,GetZOrder)
ADD_LUA_FCT(EnemyClass,SetRotationAngle)
ADD_LUA_FCT(EnemyClass,SetOldRotationAngle)
ADD_LUA_FCT(EnemyClass,GetRotationAngle)
ADD_LUA_FCT(EnemyClass,SetDirection)
ADD_LUA_FCT(EnemyClass,SetDirectionX)
ADD_LUA_FCT(EnemyClass,SetDirectionY)
ADD_LUA_FCT(EnemyClass,GetDirection)
ADD_LUA_FCT(EnemyClass,GetDirectionX)
ADD_LUA_FCT(EnemyClass,GetDirectionY)
ADD_LUA_FCT(EnemyClass,SetScale)
ADD_LUA_FCT(EnemyClass,SetScaleX)
ADD_LUA_FCT(EnemyClass,SetScaleY)
ADD_LUA_FCT(EnemyClass,GetScale)
ADD_LUA_FCT(EnemyClass,GetScaleX)
ADD_LUA_FCT(EnemyClass,GetScaleY)
ADD_LUA_FCT(EnemyClass,SetCenter)
ADD_LUA_FCT(EnemyClass,SetCenterX)
ADD_LUA_FCT(EnemyClass,SetCenterY)
ADD_LUA_FCT(EnemyClass,GetCenter)
ADD_LUA_FCT(EnemyClass,GetCenterX)
ADD_LUA_FCT(EnemyClass,GetCenterY)
ADD_LUA_FCT(EnemyClass,SetModulationColor)
ADD_LUA_FCT(EnemyClass,SetModulationR)
ADD_LUA_FCT(EnemyClass,SetModulationG)
ADD_LUA_FCT(EnemyClass,SetModulationB)
ADD_LUA_FCT(EnemyClass,GetModulationColor)
ADD_LUA_FCT(EnemyClass,GetModulationR)
ADD_LUA_FCT(EnemyClass,GetModulationG)
ADD_LUA_FCT(EnemyClass,GetModulationB)
ADD_LUA_FCT(EnemyClass,SetOpacity)
ADD_LUA_FCT(EnemyClass,GetOpacity)
ADD_LUA_FCT(EnemyClass,AddCollision)
ADD_LUA_FCT(EnemyClass,RemoveCollision)
ADD_LUA_FCT(EnemyClass,ObjectInCollision)
ADD_LUA_FCT(EnemyClass,GetCollisionId)
ADD_LUA_FCT(EnemyClass,GetCollisionObject)
ADD_LUA_FCT(EnemyClass,GetTileMapCollisionObject)
ADD_LUA_FCT(EnemyClass,AddPhysicalProperties)
ADD_LUA_FCT(EnemyClass,RemovePhysicalProperties)
ADD_LUA_FCT(EnemyClass,SetMassProperties)
ADD_LUA_FCT(EnemyClass,GetMassProperties)
ADD_LUA_FCT(EnemyClass,GetCenterOfMass)
ADD_LUA_FCT(EnemyClass,SetVelocity)
ADD_LUA_FCT(EnemyClass,GetVelocity)
ADD_LUA_FCT(EnemyClass,SetAngularVelocity)
ADD_LUA_FCT(EnemyClass,GetAngularVelocity)
ADD_LUA_FCT(EnemyClass,SetSpeed)
ADD_LUA_FCT(EnemyClass,GetSpeed)
ADD_LUA_FCT(EnemyClass,SetVelocityDirection)
ADD_LUA_FCT(EnemyClass,GetVelocityDirection)
ADD_LUA_FCT(EnemyClass,AddForce)
ADD_LUA_FCT(EnemyClass,RemoveForce)
ADD_LUA_FCT(EnemyClass,RemoveAllForces)
ADD_LUA_FCT(EnemyClass,GetPhysicsId)
ADD_LUA_FCT(EnemyClass,GetNetworkKeyboard)
ADD_LUA_FCT(EnemyClass,GetNetworkMouse)
ADD_LUA_FCT(EnemyClass,GetNetworkOwner)
ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedSprites)
ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedCircles)
ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(EnemyClass,GetCollidedSprite)
ADD_LUA_FCT(EnemyClass,GetCollidedTileMap)
ADD_LUA_FCT(EnemyClass,IsCollidedWithSprite)
ADD_LUA_FCT(EnemyClass,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(EnemyClass,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(EnemyClass,IsCollidedWithLineSegment)
ADD_LUA_FCT(EnemyClass,IsCollidedWithCircle)
ADD_LUA_FCT(EnemyClass,IsCollidedWithTileMap)
ADD_LUA_FCT(EnemyClass,IsMyLineSegmentCollided)
ADD_LUA_FCT(EnemyClass,IsMyCircleCollided)
ADD_LUA_FCT(EnemyClass,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(EnemyClass,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(EnemyClass,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(EnemyClass,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(EnemyClass,GetCollidedCircleData)
ADD_LUA_FCT(EnemyClass,GetCollidedLineSegmentData)
ADD_LUA_FCT(EnemyClass,GetCollidedTileMapData)
ADD_LUA_FCT(EnemyClass,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(EnemyClass,SetFlipHorizontal)
ADD_LUA_FCT(EnemyClass,GetFlipHorizontal)
ADD_LUA_FCT(EnemyClass,SetFlipVertical)
ADD_LUA_FCT(EnemyClass,GetFlipVertical)
ADD_LUA_FCT(EnemyClass,GetCurrentFrameDelay)
ADD_LUA_FCT(EnemyClass,GetFrameDelay)
ADD_LUA_FCT(EnemyClass,GetFramesCount)
ADD_LUA_FCT(EnemyClass,GetFrameWidth)
ADD_LUA_FCT(EnemyClass,GetFrameHeight)
ADD_LUA_FCT(EnemyClass,SetCurrentFrameIndex)
ADD_LUA_FCT(EnemyClass,GetCurrentFrameIndex)
ADD_LUA_FCT(EnemyClass,IsEndOfAnimation)
ADD_LUA_FCT(EnemyClass,SetLoop)
ADD_LUA_FCT(EnemyClass,GetLoop)
ADD_LUA_FCT(EnemyClass,GoToFirstFrame)
ADD_LUA_FCT(EnemyClass,GoToLastFrame)
ADD_LUA_FCT(EnemyClass,SetAnimationSpeed)
ADD_LUA_FCT(EnemyClass,GetAnimationSpeed)
ADD_LUA_FCT(EnemyClass,Play)
ADD_LUA_FCT(EnemyClass,Stop)
ADD_LUA_FCT(EnemyClass,IsPlaying)
ADD_LUA_FCT(EnemyClass,Pause)
ADD_LUA_FCT(EnemyClass,IsPaused)
ADD_LUA_FCT(EnemyClass,GetAnimationsCount)
ADD_LUA_FCT(EnemyClass,SetCurrentAnimationIndex)
ADD_LUA_FCT(EnemyClass,GetCurrentAnimationIndex)
ADD_LUA_FCT(EnemyClass,SetCurrentAnimationName)
ADD_LUA_FCT(EnemyClass,GetCurrentAnimationName)
ADD_LUA_FCT(EnemyClass,IsInViewport)
ADD_LUA_FCT(EnemyClass,SetHUDObject)
ADD_LUA_FCT(EnemyClass,IsHUDObject)
ADD_LUA_FCT(EnemyClass,SetCollisionActorIndex)
ADD_LUA_FCT(EnemyClass,SetVisibleCollisionData)
ADD_LUA_FCT(EnemyClass,GetVisibleCollisionData)
ADD_LUA_FCT(EnemyClass,SetCollisionDataColor)
ADD_LUA_FCT(EnemyClass,GetCollisionDataColor)
ADD_LUA_FCT(EnemyClass,SetVisibleBoundingRectangle)
ADD_LUA_FCT(EnemyClass,GetVisibleBoundingRectangle)
ADD_LUA_FCT(EnemyClass,SetBoundingRectangleColor)
ADD_LUA_FCT(EnemyClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(EnemyClass)
END_STRUCTURE

START_CLASS_OPERATORS(EnemyClass)
END_STRUCTURE
//END LUA SPECIFIC
EnemyClass::EnemyClass():Sprite()
{

}
EnemyClass::EnemyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{




    PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path1");
    Path1.SetCurve(plp0);
    Path1.SetPosition(0.0f);
    Path1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
    Path1.SetSpeed(350.0f);
    Path1.SetLoop(false);

    PolylinePathPtr plp1 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path2");
    Path2.SetCurve(plp1);
    Path2.SetPosition(0.0f);
    Path2.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
    Path2.SetSpeed(350.0f);
    Path2.SetLoop(false);

    PolylinePathPtr plp2 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path3");
    Path3.SetCurve(plp2);
    Path3.SetPosition(0.0f);
    Path3.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
    Path3.SetSpeed(100.0f);
    Path3.SetLoop(false);

    PolylinePathPtr plp3 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_Path4");
    Path4.SetCurve(plp3);
    Path4.SetPosition(0.0f);
    Path4.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
    Path4.SetSpeed(100.0f);
    Path4.SetLoop(false);


}

EnemyClass::EnemyClass(const EnemyClass & other):Sprite(other)
{
    OnClone(other);

    Path1 = other.Path1;
    Path2 = other.Path2;
    Path3 = other.Path3;
    Path4 = other.Path4;

}

EnemyClass *EnemyClass::Clone()
{
    return new EnemyClass(*this);
}

void EnemyClass::Update(float dt)
{

}

void EnemyClass::Destroy()
{
    Sprite::Destroy();

}

void EnemyClass::Save(Core::File & file)  const
{
    Sprite::Save(file);


    // save Pathes //
    file << Path1;
    file << Path2;
    file << Path3;
    file << Path4;



}

void EnemyClass::Load(Core::File & file)
{
    Sprite::Load(file);

    // load Pathes //
    file >> Path1;
    file >> Path2;
    file >> Path3;
    file >> Path4;



}

void EnemyClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void EnemyClass::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void EnemyClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void EnemyClass::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void EnemyClass::OnStart()
{
// Generated Code //

// user code//
    time = 0;
    p = 0;
    lifetime = timeGetTime();
    lifetime2 = timeGetTime();
    lifetime3 = timeGetTime();
    angle = 0.0f;
}

void EnemyClass::OnEnd()
{

}

void EnemyClass::Timer()
{

}

void EnemyClass::Cloning()
{

}

void EnemyClass::OnClone(const EnemyClass & other)
{

}

void EnemyClass::Bullet(float directionX, float directionY, float speed, int am, float angle)
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

            Vector2D direction = Vector2D(directionX, directionY);
            direction.SetNormalize();
            direction.Rotate(angle);
            ebClone->SetVelocity(direction * speed);

            GetLayer()->AddGameObject(ebClone);
        }
    }
}

void EnemyClass::PowerUp()
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

void EnemyClass::Destruction()
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

            if (rand < 3)
            {
                PowerUp();
            }

            m->score += 1000;

            Sound* se = GetGameObject<Sound>("F");

            GetMyGame()->SetMasterVolume(1.0f);
            if (se) se->Play(true);

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

            Destroy();
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
        health -= 10;

        MyGame* m = (MyGame*)GetMyGame();

        if (health <=1)
        {
            int rand = Random::GetNumber(0, 10);

            if (rand < 3)
            {
                PowerUp();
            }

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

            Sound* se = GetGameObject<Sound>("F");

            if (se) se->Play(true);

            Destroy();
        }
        else
        {
            m->score += 100;
        }
    }

    if ((GetPositionX() > 250 || GetPositionX() < -375 || GetPositionY() > 300 || GetPositionY() < -300 || IsInViewport(0u) == false) && GetVisible() == true)
    {
        Destroy();
    }
}

EnemyClass::~EnemyClass()
{

}



