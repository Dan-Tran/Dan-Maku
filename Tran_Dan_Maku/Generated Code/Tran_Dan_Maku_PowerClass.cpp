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

IMPLEMENT_OBJECT(PowerClass);

IMPLEMENT_LIGHT_LUA_VARS(PowerClass)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(PowerClass)
//GameObject Functions
ADD_LUA_FCT(PowerClass,Mount)
ADD_LUA_FCT(PowerClass,GetMount)
ADD_LUA_FCT(PowerClass,UnMount)
ADD_LUA_FCT(PowerClass,GetMountsCount)
ADD_LUA_FCT(PowerClass,IsMounted)
ADD_LUA_FCT(PowerClass,GetMountSupport)
ADD_LUA_FCT(PowerClass,GetLayer)
ADD_LUA_FCT(PowerClass,SetName)
ADD_LUA_FCT(PowerClass,GetName)
ADD_LUA_FCT(PowerClass,GetID)
ADD_LUA_FCT(PowerClass,SetLifeTime)
ADD_LUA_FCT(PowerClass,GetLifeTime)
ADD_LUA_FCT(PowerClass,GetAge)
ADD_LUA_FCT(PowerClass,SetVisible)
ADD_LUA_FCT(PowerClass,GetVisible)
ADD_LUA_FCT(PowerClass,IsDestroyed)
ADD_LUA_FCT(PowerClass,SetPosition)
ADD_LUA_FCT(PowerClass,SetPositionX)
ADD_LUA_FCT(PowerClass,SetPositionY)
ADD_LUA_FCT(PowerClass,GetPosition)
ADD_LUA_FCT(PowerClass,GetPositionX)
ADD_LUA_FCT(PowerClass,GetPositionY)
ADD_LUA_FCT(PowerClass,SetOldPosition)
ADD_LUA_FCT(PowerClass,SetZOrder)
ADD_LUA_FCT(PowerClass,GetZOrder)
ADD_LUA_FCT(PowerClass,SetRotationAngle)
ADD_LUA_FCT(PowerClass,SetOldRotationAngle)
ADD_LUA_FCT(PowerClass,GetRotationAngle)
ADD_LUA_FCT(PowerClass,SetDirection)
ADD_LUA_FCT(PowerClass,SetDirectionX)
ADD_LUA_FCT(PowerClass,SetDirectionY)
ADD_LUA_FCT(PowerClass,GetDirection)
ADD_LUA_FCT(PowerClass,GetDirectionX)
ADD_LUA_FCT(PowerClass,GetDirectionY)
ADD_LUA_FCT(PowerClass,SetScale)
ADD_LUA_FCT(PowerClass,SetScaleX)
ADD_LUA_FCT(PowerClass,SetScaleY)
ADD_LUA_FCT(PowerClass,GetScale)
ADD_LUA_FCT(PowerClass,GetScaleX)
ADD_LUA_FCT(PowerClass,GetScaleY)
ADD_LUA_FCT(PowerClass,SetCenter)
ADD_LUA_FCT(PowerClass,SetCenterX)
ADD_LUA_FCT(PowerClass,SetCenterY)
ADD_LUA_FCT(PowerClass,GetCenter)
ADD_LUA_FCT(PowerClass,GetCenterX)
ADD_LUA_FCT(PowerClass,GetCenterY)
ADD_LUA_FCT(PowerClass,SetModulationColor)
ADD_LUA_FCT(PowerClass,SetModulationR)
ADD_LUA_FCT(PowerClass,SetModulationG)
ADD_LUA_FCT(PowerClass,SetModulationB)
ADD_LUA_FCT(PowerClass,GetModulationColor)
ADD_LUA_FCT(PowerClass,GetModulationR)
ADD_LUA_FCT(PowerClass,GetModulationG)
ADD_LUA_FCT(PowerClass,GetModulationB)
ADD_LUA_FCT(PowerClass,SetOpacity)
ADD_LUA_FCT(PowerClass,GetOpacity)
ADD_LUA_FCT(PowerClass,AddCollision)
ADD_LUA_FCT(PowerClass,RemoveCollision)
ADD_LUA_FCT(PowerClass,ObjectInCollision)
ADD_LUA_FCT(PowerClass,GetCollisionId)
ADD_LUA_FCT(PowerClass,GetCollisionObject)
ADD_LUA_FCT(PowerClass,GetTileMapCollisionObject)
ADD_LUA_FCT(PowerClass,AddPhysicalProperties)
ADD_LUA_FCT(PowerClass,RemovePhysicalProperties)
ADD_LUA_FCT(PowerClass,SetMassProperties)
ADD_LUA_FCT(PowerClass,GetMassProperties)
ADD_LUA_FCT(PowerClass,GetCenterOfMass)
ADD_LUA_FCT(PowerClass,SetVelocity)
ADD_LUA_FCT(PowerClass,GetVelocity)
ADD_LUA_FCT(PowerClass,SetAngularVelocity)
ADD_LUA_FCT(PowerClass,GetAngularVelocity)
ADD_LUA_FCT(PowerClass,SetSpeed)
ADD_LUA_FCT(PowerClass,GetSpeed)
ADD_LUA_FCT(PowerClass,SetVelocityDirection)
ADD_LUA_FCT(PowerClass,GetVelocityDirection)
ADD_LUA_FCT(PowerClass,AddForce)
ADD_LUA_FCT(PowerClass,RemoveForce)
ADD_LUA_FCT(PowerClass,RemoveAllForces)
ADD_LUA_FCT(PowerClass,GetPhysicsId)
ADD_LUA_FCT(PowerClass,GetNetworkKeyboard)
ADD_LUA_FCT(PowerClass,GetNetworkMouse)
ADD_LUA_FCT(PowerClass,GetNetworkOwner)
ADD_LUA_FCT(PowerClass,GetNumberOfCollidedSprites)
ADD_LUA_FCT(PowerClass,GetNumberOfCollidedCircles)
ADD_LUA_FCT(PowerClass,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(PowerClass,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(PowerClass,GetCollidedSprite)
ADD_LUA_FCT(PowerClass,GetCollidedTileMap)
ADD_LUA_FCT(PowerClass,IsCollidedWithSprite)
ADD_LUA_FCT(PowerClass,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(PowerClass,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(PowerClass,IsCollidedWithLineSegment)
ADD_LUA_FCT(PowerClass,IsCollidedWithCircle)
ADD_LUA_FCT(PowerClass,IsCollidedWithTileMap)
ADD_LUA_FCT(PowerClass,IsMyLineSegmentCollided)
ADD_LUA_FCT(PowerClass,IsMyCircleCollided)
ADD_LUA_FCT(PowerClass,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(PowerClass,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(PowerClass,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(PowerClass,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(PowerClass,GetCollidedCircleData)
ADD_LUA_FCT(PowerClass,GetCollidedLineSegmentData)
ADD_LUA_FCT(PowerClass,GetCollidedTileMapData)
ADD_LUA_FCT(PowerClass,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(PowerClass,SetFlipHorizontal)
ADD_LUA_FCT(PowerClass,GetFlipHorizontal)
ADD_LUA_FCT(PowerClass,SetFlipVertical)
ADD_LUA_FCT(PowerClass,GetFlipVertical)
ADD_LUA_FCT(PowerClass,GetCurrentFrameDelay)
ADD_LUA_FCT(PowerClass,GetFrameDelay)
ADD_LUA_FCT(PowerClass,GetFramesCount)
ADD_LUA_FCT(PowerClass,GetFrameWidth)
ADD_LUA_FCT(PowerClass,GetFrameHeight)
ADD_LUA_FCT(PowerClass,SetCurrentFrameIndex)
ADD_LUA_FCT(PowerClass,GetCurrentFrameIndex)
ADD_LUA_FCT(PowerClass,IsEndOfAnimation)
ADD_LUA_FCT(PowerClass,SetLoop)
ADD_LUA_FCT(PowerClass,GetLoop)
ADD_LUA_FCT(PowerClass,GoToFirstFrame)
ADD_LUA_FCT(PowerClass,GoToLastFrame)
ADD_LUA_FCT(PowerClass,SetAnimationSpeed)
ADD_LUA_FCT(PowerClass,GetAnimationSpeed)
ADD_LUA_FCT(PowerClass,Play)
ADD_LUA_FCT(PowerClass,Stop)
ADD_LUA_FCT(PowerClass,IsPlaying)
ADD_LUA_FCT(PowerClass,Pause)
ADD_LUA_FCT(PowerClass,IsPaused)
ADD_LUA_FCT(PowerClass,GetAnimationsCount)
ADD_LUA_FCT(PowerClass,SetCurrentAnimationIndex)
ADD_LUA_FCT(PowerClass,GetCurrentAnimationIndex)
ADD_LUA_FCT(PowerClass,SetCurrentAnimationName)
ADD_LUA_FCT(PowerClass,GetCurrentAnimationName)
ADD_LUA_FCT(PowerClass,IsInViewport)
ADD_LUA_FCT(PowerClass,SetHUDObject)
ADD_LUA_FCT(PowerClass,IsHUDObject)
ADD_LUA_FCT(PowerClass,SetCollisionActorIndex)
ADD_LUA_FCT(PowerClass,SetVisibleCollisionData)
ADD_LUA_FCT(PowerClass,GetVisibleCollisionData)
ADD_LUA_FCT(PowerClass,SetCollisionDataColor)
ADD_LUA_FCT(PowerClass,GetCollisionDataColor)
ADD_LUA_FCT(PowerClass,SetVisibleBoundingRectangle)
ADD_LUA_FCT(PowerClass,GetVisibleBoundingRectangle)
ADD_LUA_FCT(PowerClass,SetBoundingRectangleColor)
ADD_LUA_FCT(PowerClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(PowerClass)
END_STRUCTURE

START_CLASS_OPERATORS(PowerClass)
END_STRUCTURE
//END LUA SPECIFIC
PowerClass::PowerClass():Sprite()
{

}
PowerClass::PowerClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

PowerClass::PowerClass(const PowerClass & other):Sprite(other)
{
    OnClone(other);


}

PowerClass *PowerClass::Clone()
{
    return new PowerClass(*this);
}

void PowerClass::Update(float dt)
{
// Generated Code //

// user code//
    if (GetVisible())
    {
        SetPositionY(GetPositionY() - 1);
    }

    if (GetCollisionInfo().IsCollidedWithSprite("Player1", false))
    {
        MyGame* g = (MyGame*)GetMyGame();

        if (g->power < 64)
        {
            g->power += 1;
        }
        else
        {
            g->power = 64;
        }

        g->score += 100;

        Destroy();
    }

    if (IsInViewport(0u) == false && GetVisible() == true)
    {
        Destroy();
    }
}

void PowerClass::Destroy()
{
    Sprite::Destroy();

}

void PowerClass::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void PowerClass::Load(Core::File & file)
{
    Sprite::Load(file);


}

void PowerClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void PowerClass::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void PowerClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void PowerClass::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void PowerClass::OnStart()
{

}

void PowerClass::OnEnd()
{

}

void PowerClass::OnClone(const PowerClass & other)
{

}

PowerClass::~PowerClass()
{

}



