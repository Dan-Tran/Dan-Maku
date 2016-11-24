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

IMPLEMENT_OBJECT(StartClass);

IMPLEMENT_LIGHT_LUA_VARS(StartClass)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(StartClass)
//GameObject Functions
ADD_LUA_FCT(StartClass,Mount)
ADD_LUA_FCT(StartClass,GetMount)
ADD_LUA_FCT(StartClass,UnMount)
ADD_LUA_FCT(StartClass,GetMountsCount)
ADD_LUA_FCT(StartClass,IsMounted)
ADD_LUA_FCT(StartClass,GetMountSupport)
ADD_LUA_FCT(StartClass,GetLayer)
ADD_LUA_FCT(StartClass,SetName)
ADD_LUA_FCT(StartClass,GetName)
ADD_LUA_FCT(StartClass,GetID)
ADD_LUA_FCT(StartClass,SetLifeTime)
ADD_LUA_FCT(StartClass,GetLifeTime)
ADD_LUA_FCT(StartClass,GetAge)
ADD_LUA_FCT(StartClass,SetVisible)
ADD_LUA_FCT(StartClass,GetVisible)
ADD_LUA_FCT(StartClass,IsDestroyed)
ADD_LUA_FCT(StartClass,SetPosition)
ADD_LUA_FCT(StartClass,SetPositionX)
ADD_LUA_FCT(StartClass,SetPositionY)
ADD_LUA_FCT(StartClass,GetPosition)
ADD_LUA_FCT(StartClass,GetPositionX)
ADD_LUA_FCT(StartClass,GetPositionY)
ADD_LUA_FCT(StartClass,SetOldPosition)
ADD_LUA_FCT(StartClass,SetZOrder)
ADD_LUA_FCT(StartClass,GetZOrder)
ADD_LUA_FCT(StartClass,SetRotationAngle)
ADD_LUA_FCT(StartClass,SetOldRotationAngle)
ADD_LUA_FCT(StartClass,GetRotationAngle)
ADD_LUA_FCT(StartClass,SetDirection)
ADD_LUA_FCT(StartClass,SetDirectionX)
ADD_LUA_FCT(StartClass,SetDirectionY)
ADD_LUA_FCT(StartClass,GetDirection)
ADD_LUA_FCT(StartClass,GetDirectionX)
ADD_LUA_FCT(StartClass,GetDirectionY)
ADD_LUA_FCT(StartClass,SetScale)
ADD_LUA_FCT(StartClass,SetScaleX)
ADD_LUA_FCT(StartClass,SetScaleY)
ADD_LUA_FCT(StartClass,GetScale)
ADD_LUA_FCT(StartClass,GetScaleX)
ADD_LUA_FCT(StartClass,GetScaleY)
ADD_LUA_FCT(StartClass,SetCenter)
ADD_LUA_FCT(StartClass,SetCenterX)
ADD_LUA_FCT(StartClass,SetCenterY)
ADD_LUA_FCT(StartClass,GetCenter)
ADD_LUA_FCT(StartClass,GetCenterX)
ADD_LUA_FCT(StartClass,GetCenterY)
ADD_LUA_FCT(StartClass,SetModulationColor)
ADD_LUA_FCT(StartClass,SetModulationR)
ADD_LUA_FCT(StartClass,SetModulationG)
ADD_LUA_FCT(StartClass,SetModulationB)
ADD_LUA_FCT(StartClass,GetModulationColor)
ADD_LUA_FCT(StartClass,GetModulationR)
ADD_LUA_FCT(StartClass,GetModulationG)
ADD_LUA_FCT(StartClass,GetModulationB)
ADD_LUA_FCT(StartClass,SetOpacity)
ADD_LUA_FCT(StartClass,GetOpacity)
ADD_LUA_FCT(StartClass,AddCollision)
ADD_LUA_FCT(StartClass,RemoveCollision)
ADD_LUA_FCT(StartClass,ObjectInCollision)
ADD_LUA_FCT(StartClass,GetCollisionId)
ADD_LUA_FCT(StartClass,GetCollisionObject)
ADD_LUA_FCT(StartClass,GetTileMapCollisionObject)
ADD_LUA_FCT(StartClass,AddPhysicalProperties)
ADD_LUA_FCT(StartClass,RemovePhysicalProperties)
ADD_LUA_FCT(StartClass,SetMassProperties)
ADD_LUA_FCT(StartClass,GetMassProperties)
ADD_LUA_FCT(StartClass,GetCenterOfMass)
ADD_LUA_FCT(StartClass,SetVelocity)
ADD_LUA_FCT(StartClass,GetVelocity)
ADD_LUA_FCT(StartClass,SetAngularVelocity)
ADD_LUA_FCT(StartClass,GetAngularVelocity)
ADD_LUA_FCT(StartClass,SetSpeed)
ADD_LUA_FCT(StartClass,GetSpeed)
ADD_LUA_FCT(StartClass,SetVelocityDirection)
ADD_LUA_FCT(StartClass,GetVelocityDirection)
ADD_LUA_FCT(StartClass,AddForce)
ADD_LUA_FCT(StartClass,RemoveForce)
ADD_LUA_FCT(StartClass,RemoveAllForces)
ADD_LUA_FCT(StartClass,GetPhysicsId)
ADD_LUA_FCT(StartClass,GetNetworkKeyboard)
ADD_LUA_FCT(StartClass,GetNetworkMouse)
ADD_LUA_FCT(StartClass,GetNetworkOwner)
ADD_LUA_FCT(StartClass,GetNumberOfCollidedSprites)
ADD_LUA_FCT(StartClass,GetNumberOfCollidedCircles)
ADD_LUA_FCT(StartClass,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(StartClass,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(StartClass,GetCollidedSprite)
ADD_LUA_FCT(StartClass,GetCollidedTileMap)
ADD_LUA_FCT(StartClass,IsCollidedWithSprite)
ADD_LUA_FCT(StartClass,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(StartClass,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(StartClass,IsCollidedWithLineSegment)
ADD_LUA_FCT(StartClass,IsCollidedWithCircle)
ADD_LUA_FCT(StartClass,IsCollidedWithTileMap)
ADD_LUA_FCT(StartClass,IsMyLineSegmentCollided)
ADD_LUA_FCT(StartClass,IsMyCircleCollided)
ADD_LUA_FCT(StartClass,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(StartClass,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(StartClass,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(StartClass,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(StartClass,GetCollidedCircleData)
ADD_LUA_FCT(StartClass,GetCollidedLineSegmentData)
ADD_LUA_FCT(StartClass,GetCollidedTileMapData)
ADD_LUA_FCT(StartClass,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(StartClass,SetFlipHorizontal)
ADD_LUA_FCT(StartClass,GetFlipHorizontal)
ADD_LUA_FCT(StartClass,SetFlipVertical)
ADD_LUA_FCT(StartClass,GetFlipVertical)
ADD_LUA_FCT(StartClass,GetCurrentFrameDelay)
ADD_LUA_FCT(StartClass,GetFrameDelay)
ADD_LUA_FCT(StartClass,GetFramesCount)
ADD_LUA_FCT(StartClass,GetFrameWidth)
ADD_LUA_FCT(StartClass,GetFrameHeight)
ADD_LUA_FCT(StartClass,SetCurrentFrameIndex)
ADD_LUA_FCT(StartClass,GetCurrentFrameIndex)
ADD_LUA_FCT(StartClass,IsEndOfAnimation)
ADD_LUA_FCT(StartClass,SetLoop)
ADD_LUA_FCT(StartClass,GetLoop)
ADD_LUA_FCT(StartClass,GoToFirstFrame)
ADD_LUA_FCT(StartClass,GoToLastFrame)
ADD_LUA_FCT(StartClass,SetAnimationSpeed)
ADD_LUA_FCT(StartClass,GetAnimationSpeed)
ADD_LUA_FCT(StartClass,Play)
ADD_LUA_FCT(StartClass,Stop)
ADD_LUA_FCT(StartClass,IsPlaying)
ADD_LUA_FCT(StartClass,Pause)
ADD_LUA_FCT(StartClass,IsPaused)
ADD_LUA_FCT(StartClass,GetAnimationsCount)
ADD_LUA_FCT(StartClass,SetCurrentAnimationIndex)
ADD_LUA_FCT(StartClass,GetCurrentAnimationIndex)
ADD_LUA_FCT(StartClass,SetCurrentAnimationName)
ADD_LUA_FCT(StartClass,GetCurrentAnimationName)
ADD_LUA_FCT(StartClass,IsInViewport)
ADD_LUA_FCT(StartClass,SetHUDObject)
ADD_LUA_FCT(StartClass,IsHUDObject)
ADD_LUA_FCT(StartClass,SetCollisionActorIndex)
ADD_LUA_FCT(StartClass,SetVisibleCollisionData)
ADD_LUA_FCT(StartClass,GetVisibleCollisionData)
ADD_LUA_FCT(StartClass,SetCollisionDataColor)
ADD_LUA_FCT(StartClass,GetCollisionDataColor)
ADD_LUA_FCT(StartClass,SetVisibleBoundingRectangle)
ADD_LUA_FCT(StartClass,GetVisibleBoundingRectangle)
ADD_LUA_FCT(StartClass,SetBoundingRectangleColor)
ADD_LUA_FCT(StartClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(StartClass)
END_STRUCTURE

START_CLASS_OPERATORS(StartClass)
END_STRUCTURE
//END LUA SPECIFIC
StartClass::StartClass():Sprite()
{

}
StartClass::StartClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

StartClass::StartClass(const StartClass & other):Sprite(other)
{
    OnClone(other);


}

StartClass *StartClass::Clone()
{
    return new StartClass(*this);
}

void StartClass::Update(float dt)
{
// Generated Code //

// user code//
    MyGame* m = (MyGame*)GetMyGame();

    if (m->counter1 == 0) SetCurrentFrameIndex(1);
    else SetCurrentFrameIndex(0);
}

void StartClass::Destroy()
{
    Sprite::Destroy();

}

void StartClass::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void StartClass::Load(Core::File & file)
{
    Sprite::Load(file);


}

void StartClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void StartClass::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void StartClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void StartClass::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void StartClass::OnStart()
{

}

void StartClass::OnEnd()
{

}

void StartClass::OnClone(const StartClass & other)
{

}

StartClass::~StartClass()
{

}



