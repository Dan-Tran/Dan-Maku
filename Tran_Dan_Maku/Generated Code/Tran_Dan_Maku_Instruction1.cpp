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

IMPLEMENT_OBJECT(Instruction1);

IMPLEMENT_LIGHT_LUA_VARS(Instruction1)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(Instruction1)
//GameObject Functions
ADD_LUA_FCT(Instruction1,Mount)
ADD_LUA_FCT(Instruction1,GetMount)
ADD_LUA_FCT(Instruction1,UnMount)
ADD_LUA_FCT(Instruction1,GetMountsCount)
ADD_LUA_FCT(Instruction1,IsMounted)
ADD_LUA_FCT(Instruction1,GetMountSupport)
ADD_LUA_FCT(Instruction1,GetLayer)
ADD_LUA_FCT(Instruction1,SetName)
ADD_LUA_FCT(Instruction1,GetName)
ADD_LUA_FCT(Instruction1,GetID)
ADD_LUA_FCT(Instruction1,SetLifeTime)
ADD_LUA_FCT(Instruction1,GetLifeTime)
ADD_LUA_FCT(Instruction1,GetAge)
ADD_LUA_FCT(Instruction1,SetVisible)
ADD_LUA_FCT(Instruction1,GetVisible)
ADD_LUA_FCT(Instruction1,IsDestroyed)
ADD_LUA_FCT(Instruction1,SetPosition)
ADD_LUA_FCT(Instruction1,SetPositionX)
ADD_LUA_FCT(Instruction1,SetPositionY)
ADD_LUA_FCT(Instruction1,GetPosition)
ADD_LUA_FCT(Instruction1,GetPositionX)
ADD_LUA_FCT(Instruction1,GetPositionY)
ADD_LUA_FCT(Instruction1,SetOldPosition)
ADD_LUA_FCT(Instruction1,SetZOrder)
ADD_LUA_FCT(Instruction1,GetZOrder)
ADD_LUA_FCT(Instruction1,SetRotationAngle)
ADD_LUA_FCT(Instruction1,SetOldRotationAngle)
ADD_LUA_FCT(Instruction1,GetRotationAngle)
ADD_LUA_FCT(Instruction1,SetDirection)
ADD_LUA_FCT(Instruction1,SetDirectionX)
ADD_LUA_FCT(Instruction1,SetDirectionY)
ADD_LUA_FCT(Instruction1,GetDirection)
ADD_LUA_FCT(Instruction1,GetDirectionX)
ADD_LUA_FCT(Instruction1,GetDirectionY)
ADD_LUA_FCT(Instruction1,SetScale)
ADD_LUA_FCT(Instruction1,SetScaleX)
ADD_LUA_FCT(Instruction1,SetScaleY)
ADD_LUA_FCT(Instruction1,GetScale)
ADD_LUA_FCT(Instruction1,GetScaleX)
ADD_LUA_FCT(Instruction1,GetScaleY)
ADD_LUA_FCT(Instruction1,SetCenter)
ADD_LUA_FCT(Instruction1,SetCenterX)
ADD_LUA_FCT(Instruction1,SetCenterY)
ADD_LUA_FCT(Instruction1,GetCenter)
ADD_LUA_FCT(Instruction1,GetCenterX)
ADD_LUA_FCT(Instruction1,GetCenterY)
ADD_LUA_FCT(Instruction1,SetModulationColor)
ADD_LUA_FCT(Instruction1,SetModulationR)
ADD_LUA_FCT(Instruction1,SetModulationG)
ADD_LUA_FCT(Instruction1,SetModulationB)
ADD_LUA_FCT(Instruction1,GetModulationColor)
ADD_LUA_FCT(Instruction1,GetModulationR)
ADD_LUA_FCT(Instruction1,GetModulationG)
ADD_LUA_FCT(Instruction1,GetModulationB)
ADD_LUA_FCT(Instruction1,SetOpacity)
ADD_LUA_FCT(Instruction1,GetOpacity)
ADD_LUA_FCT(Instruction1,AddCollision)
ADD_LUA_FCT(Instruction1,RemoveCollision)
ADD_LUA_FCT(Instruction1,ObjectInCollision)
ADD_LUA_FCT(Instruction1,GetCollisionId)
ADD_LUA_FCT(Instruction1,GetCollisionObject)
ADD_LUA_FCT(Instruction1,GetTileMapCollisionObject)
ADD_LUA_FCT(Instruction1,AddPhysicalProperties)
ADD_LUA_FCT(Instruction1,RemovePhysicalProperties)
ADD_LUA_FCT(Instruction1,SetMassProperties)
ADD_LUA_FCT(Instruction1,GetMassProperties)
ADD_LUA_FCT(Instruction1,GetCenterOfMass)
ADD_LUA_FCT(Instruction1,SetVelocity)
ADD_LUA_FCT(Instruction1,GetVelocity)
ADD_LUA_FCT(Instruction1,SetAngularVelocity)
ADD_LUA_FCT(Instruction1,GetAngularVelocity)
ADD_LUA_FCT(Instruction1,SetSpeed)
ADD_LUA_FCT(Instruction1,GetSpeed)
ADD_LUA_FCT(Instruction1,SetVelocityDirection)
ADD_LUA_FCT(Instruction1,GetVelocityDirection)
ADD_LUA_FCT(Instruction1,AddForce)
ADD_LUA_FCT(Instruction1,RemoveForce)
ADD_LUA_FCT(Instruction1,RemoveAllForces)
ADD_LUA_FCT(Instruction1,GetPhysicsId)
ADD_LUA_FCT(Instruction1,GetNetworkKeyboard)
ADD_LUA_FCT(Instruction1,GetNetworkMouse)
ADD_LUA_FCT(Instruction1,GetNetworkOwner)
ADD_LUA_FCT(Instruction1,GetNumberOfCollidedSprites)
ADD_LUA_FCT(Instruction1,GetNumberOfCollidedCircles)
ADD_LUA_FCT(Instruction1,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(Instruction1,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(Instruction1,GetCollidedSprite)
ADD_LUA_FCT(Instruction1,GetCollidedTileMap)
ADD_LUA_FCT(Instruction1,IsCollidedWithSprite)
ADD_LUA_FCT(Instruction1,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(Instruction1,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(Instruction1,IsCollidedWithLineSegment)
ADD_LUA_FCT(Instruction1,IsCollidedWithCircle)
ADD_LUA_FCT(Instruction1,IsCollidedWithTileMap)
ADD_LUA_FCT(Instruction1,IsMyLineSegmentCollided)
ADD_LUA_FCT(Instruction1,IsMyCircleCollided)
ADD_LUA_FCT(Instruction1,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(Instruction1,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(Instruction1,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(Instruction1,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(Instruction1,GetCollidedCircleData)
ADD_LUA_FCT(Instruction1,GetCollidedLineSegmentData)
ADD_LUA_FCT(Instruction1,GetCollidedTileMapData)
ADD_LUA_FCT(Instruction1,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(Instruction1,SetFlipHorizontal)
ADD_LUA_FCT(Instruction1,GetFlipHorizontal)
ADD_LUA_FCT(Instruction1,SetFlipVertical)
ADD_LUA_FCT(Instruction1,GetFlipVertical)
ADD_LUA_FCT(Instruction1,GetCurrentFrameDelay)
ADD_LUA_FCT(Instruction1,GetFrameDelay)
ADD_LUA_FCT(Instruction1,GetFramesCount)
ADD_LUA_FCT(Instruction1,GetFrameWidth)
ADD_LUA_FCT(Instruction1,GetFrameHeight)
ADD_LUA_FCT(Instruction1,SetCurrentFrameIndex)
ADD_LUA_FCT(Instruction1,GetCurrentFrameIndex)
ADD_LUA_FCT(Instruction1,IsEndOfAnimation)
ADD_LUA_FCT(Instruction1,SetLoop)
ADD_LUA_FCT(Instruction1,GetLoop)
ADD_LUA_FCT(Instruction1,GoToFirstFrame)
ADD_LUA_FCT(Instruction1,GoToLastFrame)
ADD_LUA_FCT(Instruction1,SetAnimationSpeed)
ADD_LUA_FCT(Instruction1,GetAnimationSpeed)
ADD_LUA_FCT(Instruction1,Play)
ADD_LUA_FCT(Instruction1,Stop)
ADD_LUA_FCT(Instruction1,IsPlaying)
ADD_LUA_FCT(Instruction1,Pause)
ADD_LUA_FCT(Instruction1,IsPaused)
ADD_LUA_FCT(Instruction1,GetAnimationsCount)
ADD_LUA_FCT(Instruction1,SetCurrentAnimationIndex)
ADD_LUA_FCT(Instruction1,GetCurrentAnimationIndex)
ADD_LUA_FCT(Instruction1,SetCurrentAnimationName)
ADD_LUA_FCT(Instruction1,GetCurrentAnimationName)
ADD_LUA_FCT(Instruction1,IsInViewport)
ADD_LUA_FCT(Instruction1,SetHUDObject)
ADD_LUA_FCT(Instruction1,IsHUDObject)
ADD_LUA_FCT(Instruction1,SetCollisionActorIndex)
ADD_LUA_FCT(Instruction1,SetVisibleCollisionData)
ADD_LUA_FCT(Instruction1,GetVisibleCollisionData)
ADD_LUA_FCT(Instruction1,SetCollisionDataColor)
ADD_LUA_FCT(Instruction1,GetCollisionDataColor)
ADD_LUA_FCT(Instruction1,SetVisibleBoundingRectangle)
ADD_LUA_FCT(Instruction1,GetVisibleBoundingRectangle)
ADD_LUA_FCT(Instruction1,SetBoundingRectangleColor)
ADD_LUA_FCT(Instruction1,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(Instruction1)
END_STRUCTURE

START_CLASS_OPERATORS(Instruction1)
END_STRUCTURE
//END LUA SPECIFIC
Instruction1::Instruction1():Sprite()
{

}
Instruction1::Instruction1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

Instruction1::Instruction1(const Instruction1 & other):Sprite(other)
{
    OnClone(other);


}

Instruction1 *Instruction1::Clone()
{
    return new Instruction1(*this);
}

void Instruction1::Update(float dt)
{
// Generated Code //

// user code//
    MyGame* m = (MyGame*)GetMyGame();

    if (m->counter1 == 1) SetCurrentFrameIndex(1);
    else SetCurrentFrameIndex(0);
}

void Instruction1::Destroy()
{
    Sprite::Destroy();

}

void Instruction1::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void Instruction1::Load(Core::File & file)
{
    Sprite::Load(file);


}

void Instruction1::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void Instruction1::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void Instruction1::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void Instruction1::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void Instruction1::OnStart()
{

}

void Instruction1::OnEnd()
{

}

void Instruction1::OnClone(const Instruction1 & other)
{

}

Instruction1::~Instruction1()
{

}



