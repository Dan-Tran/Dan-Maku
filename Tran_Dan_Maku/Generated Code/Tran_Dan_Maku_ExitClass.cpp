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

IMPLEMENT_OBJECT(ExitClass);

IMPLEMENT_LIGHT_LUA_VARS(ExitClass)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(ExitClass)
//GameObject Functions
ADD_LUA_FCT(ExitClass,Mount)
ADD_LUA_FCT(ExitClass,GetMount)
ADD_LUA_FCT(ExitClass,UnMount)
ADD_LUA_FCT(ExitClass,GetMountsCount)
ADD_LUA_FCT(ExitClass,IsMounted)
ADD_LUA_FCT(ExitClass,GetMountSupport)
ADD_LUA_FCT(ExitClass,GetLayer)
ADD_LUA_FCT(ExitClass,SetName)
ADD_LUA_FCT(ExitClass,GetName)
ADD_LUA_FCT(ExitClass,GetID)
ADD_LUA_FCT(ExitClass,SetLifeTime)
ADD_LUA_FCT(ExitClass,GetLifeTime)
ADD_LUA_FCT(ExitClass,GetAge)
ADD_LUA_FCT(ExitClass,SetVisible)
ADD_LUA_FCT(ExitClass,GetVisible)
ADD_LUA_FCT(ExitClass,IsDestroyed)
ADD_LUA_FCT(ExitClass,SetPosition)
ADD_LUA_FCT(ExitClass,SetPositionX)
ADD_LUA_FCT(ExitClass,SetPositionY)
ADD_LUA_FCT(ExitClass,GetPosition)
ADD_LUA_FCT(ExitClass,GetPositionX)
ADD_LUA_FCT(ExitClass,GetPositionY)
ADD_LUA_FCT(ExitClass,SetOldPosition)
ADD_LUA_FCT(ExitClass,SetZOrder)
ADD_LUA_FCT(ExitClass,GetZOrder)
ADD_LUA_FCT(ExitClass,SetRotationAngle)
ADD_LUA_FCT(ExitClass,SetOldRotationAngle)
ADD_LUA_FCT(ExitClass,GetRotationAngle)
ADD_LUA_FCT(ExitClass,SetDirection)
ADD_LUA_FCT(ExitClass,SetDirectionX)
ADD_LUA_FCT(ExitClass,SetDirectionY)
ADD_LUA_FCT(ExitClass,GetDirection)
ADD_LUA_FCT(ExitClass,GetDirectionX)
ADD_LUA_FCT(ExitClass,GetDirectionY)
ADD_LUA_FCT(ExitClass,SetScale)
ADD_LUA_FCT(ExitClass,SetScaleX)
ADD_LUA_FCT(ExitClass,SetScaleY)
ADD_LUA_FCT(ExitClass,GetScale)
ADD_LUA_FCT(ExitClass,GetScaleX)
ADD_LUA_FCT(ExitClass,GetScaleY)
ADD_LUA_FCT(ExitClass,SetCenter)
ADD_LUA_FCT(ExitClass,SetCenterX)
ADD_LUA_FCT(ExitClass,SetCenterY)
ADD_LUA_FCT(ExitClass,GetCenter)
ADD_LUA_FCT(ExitClass,GetCenterX)
ADD_LUA_FCT(ExitClass,GetCenterY)
ADD_LUA_FCT(ExitClass,SetModulationColor)
ADD_LUA_FCT(ExitClass,SetModulationR)
ADD_LUA_FCT(ExitClass,SetModulationG)
ADD_LUA_FCT(ExitClass,SetModulationB)
ADD_LUA_FCT(ExitClass,GetModulationColor)
ADD_LUA_FCT(ExitClass,GetModulationR)
ADD_LUA_FCT(ExitClass,GetModulationG)
ADD_LUA_FCT(ExitClass,GetModulationB)
ADD_LUA_FCT(ExitClass,SetOpacity)
ADD_LUA_FCT(ExitClass,GetOpacity)
ADD_LUA_FCT(ExitClass,AddCollision)
ADD_LUA_FCT(ExitClass,RemoveCollision)
ADD_LUA_FCT(ExitClass,ObjectInCollision)
ADD_LUA_FCT(ExitClass,GetCollisionId)
ADD_LUA_FCT(ExitClass,GetCollisionObject)
ADD_LUA_FCT(ExitClass,GetTileMapCollisionObject)
ADD_LUA_FCT(ExitClass,AddPhysicalProperties)
ADD_LUA_FCT(ExitClass,RemovePhysicalProperties)
ADD_LUA_FCT(ExitClass,SetMassProperties)
ADD_LUA_FCT(ExitClass,GetMassProperties)
ADD_LUA_FCT(ExitClass,GetCenterOfMass)
ADD_LUA_FCT(ExitClass,SetVelocity)
ADD_LUA_FCT(ExitClass,GetVelocity)
ADD_LUA_FCT(ExitClass,SetAngularVelocity)
ADD_LUA_FCT(ExitClass,GetAngularVelocity)
ADD_LUA_FCT(ExitClass,SetSpeed)
ADD_LUA_FCT(ExitClass,GetSpeed)
ADD_LUA_FCT(ExitClass,SetVelocityDirection)
ADD_LUA_FCT(ExitClass,GetVelocityDirection)
ADD_LUA_FCT(ExitClass,AddForce)
ADD_LUA_FCT(ExitClass,RemoveForce)
ADD_LUA_FCT(ExitClass,RemoveAllForces)
ADD_LUA_FCT(ExitClass,GetPhysicsId)
ADD_LUA_FCT(ExitClass,GetNetworkKeyboard)
ADD_LUA_FCT(ExitClass,GetNetworkMouse)
ADD_LUA_FCT(ExitClass,GetNetworkOwner)
ADD_LUA_FCT(ExitClass,GetNumberOfCollidedSprites)
ADD_LUA_FCT(ExitClass,GetNumberOfCollidedCircles)
ADD_LUA_FCT(ExitClass,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(ExitClass,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(ExitClass,GetCollidedSprite)
ADD_LUA_FCT(ExitClass,GetCollidedTileMap)
ADD_LUA_FCT(ExitClass,IsCollidedWithSprite)
ADD_LUA_FCT(ExitClass,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(ExitClass,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(ExitClass,IsCollidedWithLineSegment)
ADD_LUA_FCT(ExitClass,IsCollidedWithCircle)
ADD_LUA_FCT(ExitClass,IsCollidedWithTileMap)
ADD_LUA_FCT(ExitClass,IsMyLineSegmentCollided)
ADD_LUA_FCT(ExitClass,IsMyCircleCollided)
ADD_LUA_FCT(ExitClass,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(ExitClass,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(ExitClass,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(ExitClass,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(ExitClass,GetCollidedCircleData)
ADD_LUA_FCT(ExitClass,GetCollidedLineSegmentData)
ADD_LUA_FCT(ExitClass,GetCollidedTileMapData)
ADD_LUA_FCT(ExitClass,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(ExitClass,SetFlipHorizontal)
ADD_LUA_FCT(ExitClass,GetFlipHorizontal)
ADD_LUA_FCT(ExitClass,SetFlipVertical)
ADD_LUA_FCT(ExitClass,GetFlipVertical)
ADD_LUA_FCT(ExitClass,GetCurrentFrameDelay)
ADD_LUA_FCT(ExitClass,GetFrameDelay)
ADD_LUA_FCT(ExitClass,GetFramesCount)
ADD_LUA_FCT(ExitClass,GetFrameWidth)
ADD_LUA_FCT(ExitClass,GetFrameHeight)
ADD_LUA_FCT(ExitClass,SetCurrentFrameIndex)
ADD_LUA_FCT(ExitClass,GetCurrentFrameIndex)
ADD_LUA_FCT(ExitClass,IsEndOfAnimation)
ADD_LUA_FCT(ExitClass,SetLoop)
ADD_LUA_FCT(ExitClass,GetLoop)
ADD_LUA_FCT(ExitClass,GoToFirstFrame)
ADD_LUA_FCT(ExitClass,GoToLastFrame)
ADD_LUA_FCT(ExitClass,SetAnimationSpeed)
ADD_LUA_FCT(ExitClass,GetAnimationSpeed)
ADD_LUA_FCT(ExitClass,Play)
ADD_LUA_FCT(ExitClass,Stop)
ADD_LUA_FCT(ExitClass,IsPlaying)
ADD_LUA_FCT(ExitClass,Pause)
ADD_LUA_FCT(ExitClass,IsPaused)
ADD_LUA_FCT(ExitClass,GetAnimationsCount)
ADD_LUA_FCT(ExitClass,SetCurrentAnimationIndex)
ADD_LUA_FCT(ExitClass,GetCurrentAnimationIndex)
ADD_LUA_FCT(ExitClass,SetCurrentAnimationName)
ADD_LUA_FCT(ExitClass,GetCurrentAnimationName)
ADD_LUA_FCT(ExitClass,IsInViewport)
ADD_LUA_FCT(ExitClass,SetHUDObject)
ADD_LUA_FCT(ExitClass,IsHUDObject)
ADD_LUA_FCT(ExitClass,SetCollisionActorIndex)
ADD_LUA_FCT(ExitClass,SetVisibleCollisionData)
ADD_LUA_FCT(ExitClass,GetVisibleCollisionData)
ADD_LUA_FCT(ExitClass,SetCollisionDataColor)
ADD_LUA_FCT(ExitClass,GetCollisionDataColor)
ADD_LUA_FCT(ExitClass,SetVisibleBoundingRectangle)
ADD_LUA_FCT(ExitClass,GetVisibleBoundingRectangle)
ADD_LUA_FCT(ExitClass,SetBoundingRectangleColor)
ADD_LUA_FCT(ExitClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(ExitClass)
END_STRUCTURE

START_CLASS_OPERATORS(ExitClass)
END_STRUCTURE
//END LUA SPECIFIC
ExitClass::ExitClass():Sprite()
{

}
ExitClass::ExitClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ExitClass::ExitClass(const ExitClass & other):Sprite(other)
{
    OnClone(other);


}

ExitClass *ExitClass::Clone()
{
    return new ExitClass(*this);
}

void ExitClass::Update(float dt)
{
// Generated Code //

// user code//
    MyGame* m = (MyGame*)GetMyGame();

    if (m->counter1 == 2) SetCurrentFrameIndex(1);
    else SetCurrentFrameIndex(0);
}

void ExitClass::Destroy()
{
    Sprite::Destroy();

}

void ExitClass::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void ExitClass::Load(Core::File & file)
{
    Sprite::Load(file);


}

void ExitClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void ExitClass::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void ExitClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void ExitClass::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void ExitClass::OnStart()
{

}

void ExitClass::OnEnd()
{

}

void ExitClass::OnClone(const ExitClass & other)
{

}

ExitClass::~ExitClass()
{

}



