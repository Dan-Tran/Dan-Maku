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

IMPLEMENT_OBJECT(SpellClass3);

IMPLEMENT_LIGHT_LUA_VARS(SpellClass3)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(SpellClass3)
//GameObject Functions
ADD_LUA_FCT(SpellClass3,Mount)
ADD_LUA_FCT(SpellClass3,GetMount)
ADD_LUA_FCT(SpellClass3,UnMount)
ADD_LUA_FCT(SpellClass3,GetMountsCount)
ADD_LUA_FCT(SpellClass3,IsMounted)
ADD_LUA_FCT(SpellClass3,GetMountSupport)
ADD_LUA_FCT(SpellClass3,GetLayer)
ADD_LUA_FCT(SpellClass3,SetName)
ADD_LUA_FCT(SpellClass3,GetName)
ADD_LUA_FCT(SpellClass3,GetID)
ADD_LUA_FCT(SpellClass3,SetLifeTime)
ADD_LUA_FCT(SpellClass3,GetLifeTime)
ADD_LUA_FCT(SpellClass3,GetAge)
ADD_LUA_FCT(SpellClass3,SetVisible)
ADD_LUA_FCT(SpellClass3,GetVisible)
ADD_LUA_FCT(SpellClass3,IsDestroyed)
ADD_LUA_FCT(SpellClass3,SetPosition)
ADD_LUA_FCT(SpellClass3,SetPositionX)
ADD_LUA_FCT(SpellClass3,SetPositionY)
ADD_LUA_FCT(SpellClass3,GetPosition)
ADD_LUA_FCT(SpellClass3,GetPositionX)
ADD_LUA_FCT(SpellClass3,GetPositionY)
ADD_LUA_FCT(SpellClass3,SetOldPosition)
ADD_LUA_FCT(SpellClass3,SetZOrder)
ADD_LUA_FCT(SpellClass3,GetZOrder)
ADD_LUA_FCT(SpellClass3,SetRotationAngle)
ADD_LUA_FCT(SpellClass3,SetOldRotationAngle)
ADD_LUA_FCT(SpellClass3,GetRotationAngle)
ADD_LUA_FCT(SpellClass3,SetDirection)
ADD_LUA_FCT(SpellClass3,SetDirectionX)
ADD_LUA_FCT(SpellClass3,SetDirectionY)
ADD_LUA_FCT(SpellClass3,GetDirection)
ADD_LUA_FCT(SpellClass3,GetDirectionX)
ADD_LUA_FCT(SpellClass3,GetDirectionY)
ADD_LUA_FCT(SpellClass3,SetScale)
ADD_LUA_FCT(SpellClass3,SetScaleX)
ADD_LUA_FCT(SpellClass3,SetScaleY)
ADD_LUA_FCT(SpellClass3,GetScale)
ADD_LUA_FCT(SpellClass3,GetScaleX)
ADD_LUA_FCT(SpellClass3,GetScaleY)
ADD_LUA_FCT(SpellClass3,SetCenter)
ADD_LUA_FCT(SpellClass3,SetCenterX)
ADD_LUA_FCT(SpellClass3,SetCenterY)
ADD_LUA_FCT(SpellClass3,GetCenter)
ADD_LUA_FCT(SpellClass3,GetCenterX)
ADD_LUA_FCT(SpellClass3,GetCenterY)
ADD_LUA_FCT(SpellClass3,SetModulationColor)
ADD_LUA_FCT(SpellClass3,SetModulationR)
ADD_LUA_FCT(SpellClass3,SetModulationG)
ADD_LUA_FCT(SpellClass3,SetModulationB)
ADD_LUA_FCT(SpellClass3,GetModulationColor)
ADD_LUA_FCT(SpellClass3,GetModulationR)
ADD_LUA_FCT(SpellClass3,GetModulationG)
ADD_LUA_FCT(SpellClass3,GetModulationB)
ADD_LUA_FCT(SpellClass3,SetOpacity)
ADD_LUA_FCT(SpellClass3,GetOpacity)
ADD_LUA_FCT(SpellClass3,AddCollision)
ADD_LUA_FCT(SpellClass3,RemoveCollision)
ADD_LUA_FCT(SpellClass3,ObjectInCollision)
ADD_LUA_FCT(SpellClass3,GetCollisionId)
ADD_LUA_FCT(SpellClass3,GetCollisionObject)
ADD_LUA_FCT(SpellClass3,GetTileMapCollisionObject)
ADD_LUA_FCT(SpellClass3,AddPhysicalProperties)
ADD_LUA_FCT(SpellClass3,RemovePhysicalProperties)
ADD_LUA_FCT(SpellClass3,SetMassProperties)
ADD_LUA_FCT(SpellClass3,GetMassProperties)
ADD_LUA_FCT(SpellClass3,GetCenterOfMass)
ADD_LUA_FCT(SpellClass3,SetVelocity)
ADD_LUA_FCT(SpellClass3,GetVelocity)
ADD_LUA_FCT(SpellClass3,SetAngularVelocity)
ADD_LUA_FCT(SpellClass3,GetAngularVelocity)
ADD_LUA_FCT(SpellClass3,SetSpeed)
ADD_LUA_FCT(SpellClass3,GetSpeed)
ADD_LUA_FCT(SpellClass3,SetVelocityDirection)
ADD_LUA_FCT(SpellClass3,GetVelocityDirection)
ADD_LUA_FCT(SpellClass3,AddForce)
ADD_LUA_FCT(SpellClass3,RemoveForce)
ADD_LUA_FCT(SpellClass3,RemoveAllForces)
ADD_LUA_FCT(SpellClass3,GetPhysicsId)
ADD_LUA_FCT(SpellClass3,GetNetworkKeyboard)
ADD_LUA_FCT(SpellClass3,GetNetworkMouse)
ADD_LUA_FCT(SpellClass3,GetNetworkOwner)
ADD_LUA_FCT(SpellClass3,GetNumberOfCollidedSprites)
ADD_LUA_FCT(SpellClass3,GetNumberOfCollidedCircles)
ADD_LUA_FCT(SpellClass3,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(SpellClass3,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(SpellClass3,GetCollidedSprite)
ADD_LUA_FCT(SpellClass3,GetCollidedTileMap)
ADD_LUA_FCT(SpellClass3,IsCollidedWithSprite)
ADD_LUA_FCT(SpellClass3,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(SpellClass3,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(SpellClass3,IsCollidedWithLineSegment)
ADD_LUA_FCT(SpellClass3,IsCollidedWithCircle)
ADD_LUA_FCT(SpellClass3,IsCollidedWithTileMap)
ADD_LUA_FCT(SpellClass3,IsMyLineSegmentCollided)
ADD_LUA_FCT(SpellClass3,IsMyCircleCollided)
ADD_LUA_FCT(SpellClass3,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(SpellClass3,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(SpellClass3,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(SpellClass3,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(SpellClass3,GetCollidedCircleData)
ADD_LUA_FCT(SpellClass3,GetCollidedLineSegmentData)
ADD_LUA_FCT(SpellClass3,GetCollidedTileMapData)
ADD_LUA_FCT(SpellClass3,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(SpellClass3,SetFlipHorizontal)
ADD_LUA_FCT(SpellClass3,GetFlipHorizontal)
ADD_LUA_FCT(SpellClass3,SetFlipVertical)
ADD_LUA_FCT(SpellClass3,GetFlipVertical)
ADD_LUA_FCT(SpellClass3,GetCurrentFrameDelay)
ADD_LUA_FCT(SpellClass3,GetFrameDelay)
ADD_LUA_FCT(SpellClass3,GetFramesCount)
ADD_LUA_FCT(SpellClass3,GetFrameWidth)
ADD_LUA_FCT(SpellClass3,GetFrameHeight)
ADD_LUA_FCT(SpellClass3,SetCurrentFrameIndex)
ADD_LUA_FCT(SpellClass3,GetCurrentFrameIndex)
ADD_LUA_FCT(SpellClass3,IsEndOfAnimation)
ADD_LUA_FCT(SpellClass3,SetLoop)
ADD_LUA_FCT(SpellClass3,GetLoop)
ADD_LUA_FCT(SpellClass3,GoToFirstFrame)
ADD_LUA_FCT(SpellClass3,GoToLastFrame)
ADD_LUA_FCT(SpellClass3,SetAnimationSpeed)
ADD_LUA_FCT(SpellClass3,GetAnimationSpeed)
ADD_LUA_FCT(SpellClass3,Play)
ADD_LUA_FCT(SpellClass3,Stop)
ADD_LUA_FCT(SpellClass3,IsPlaying)
ADD_LUA_FCT(SpellClass3,Pause)
ADD_LUA_FCT(SpellClass3,IsPaused)
ADD_LUA_FCT(SpellClass3,GetAnimationsCount)
ADD_LUA_FCT(SpellClass3,SetCurrentAnimationIndex)
ADD_LUA_FCT(SpellClass3,GetCurrentAnimationIndex)
ADD_LUA_FCT(SpellClass3,SetCurrentAnimationName)
ADD_LUA_FCT(SpellClass3,GetCurrentAnimationName)
ADD_LUA_FCT(SpellClass3,IsInViewport)
ADD_LUA_FCT(SpellClass3,SetHUDObject)
ADD_LUA_FCT(SpellClass3,IsHUDObject)
ADD_LUA_FCT(SpellClass3,SetCollisionActorIndex)
ADD_LUA_FCT(SpellClass3,SetVisibleCollisionData)
ADD_LUA_FCT(SpellClass3,GetVisibleCollisionData)
ADD_LUA_FCT(SpellClass3,SetCollisionDataColor)
ADD_LUA_FCT(SpellClass3,GetCollisionDataColor)
ADD_LUA_FCT(SpellClass3,SetVisibleBoundingRectangle)
ADD_LUA_FCT(SpellClass3,GetVisibleBoundingRectangle)
ADD_LUA_FCT(SpellClass3,SetBoundingRectangleColor)
ADD_LUA_FCT(SpellClass3,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(SpellClass3)
END_STRUCTURE

START_CLASS_OPERATORS(SpellClass3)
END_STRUCTURE
//END LUA SPECIFIC
SpellClass3::SpellClass3():Sprite()
{

}
SpellClass3::SpellClass3(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

SpellClass3::SpellClass3(const SpellClass3 & other):Sprite(other)
{
    OnClone(other);


}

SpellClass3 *SpellClass3::Clone()
{
    return new SpellClass3(*this);
}

void SpellClass3::Update(float dt)
{
// Generated Code //

// user code//
    if (IsInViewport(0u) == false && GetVisible() == true)
    {
        Destroy();
    }

    SetPositionX(GetPositionX() - 8);
}

void SpellClass3::Destroy()
{
    Sprite::Destroy();

}

void SpellClass3::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void SpellClass3::Load(Core::File & file)
{
    Sprite::Load(file);


}

void SpellClass3::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void SpellClass3::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void SpellClass3::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void SpellClass3::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void SpellClass3::OnStart()
{

}

void SpellClass3::OnEnd()
{

}

void SpellClass3::OnClone(const SpellClass3 & other)
{

}

SpellClass3::~SpellClass3()
{

}



