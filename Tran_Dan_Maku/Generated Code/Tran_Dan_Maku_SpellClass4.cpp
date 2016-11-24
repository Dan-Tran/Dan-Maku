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

IMPLEMENT_OBJECT(SpellClass4);

IMPLEMENT_LIGHT_LUA_VARS(SpellClass4)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(SpellClass4)
//GameObject Functions
ADD_LUA_FCT(SpellClass4,Mount)
ADD_LUA_FCT(SpellClass4,GetMount)
ADD_LUA_FCT(SpellClass4,UnMount)
ADD_LUA_FCT(SpellClass4,GetMountsCount)
ADD_LUA_FCT(SpellClass4,IsMounted)
ADD_LUA_FCT(SpellClass4,GetMountSupport)
ADD_LUA_FCT(SpellClass4,GetLayer)
ADD_LUA_FCT(SpellClass4,SetName)
ADD_LUA_FCT(SpellClass4,GetName)
ADD_LUA_FCT(SpellClass4,GetID)
ADD_LUA_FCT(SpellClass4,SetLifeTime)
ADD_LUA_FCT(SpellClass4,GetLifeTime)
ADD_LUA_FCT(SpellClass4,GetAge)
ADD_LUA_FCT(SpellClass4,SetVisible)
ADD_LUA_FCT(SpellClass4,GetVisible)
ADD_LUA_FCT(SpellClass4,IsDestroyed)
ADD_LUA_FCT(SpellClass4,SetPosition)
ADD_LUA_FCT(SpellClass4,SetPositionX)
ADD_LUA_FCT(SpellClass4,SetPositionY)
ADD_LUA_FCT(SpellClass4,GetPosition)
ADD_LUA_FCT(SpellClass4,GetPositionX)
ADD_LUA_FCT(SpellClass4,GetPositionY)
ADD_LUA_FCT(SpellClass4,SetOldPosition)
ADD_LUA_FCT(SpellClass4,SetZOrder)
ADD_LUA_FCT(SpellClass4,GetZOrder)
ADD_LUA_FCT(SpellClass4,SetRotationAngle)
ADD_LUA_FCT(SpellClass4,SetOldRotationAngle)
ADD_LUA_FCT(SpellClass4,GetRotationAngle)
ADD_LUA_FCT(SpellClass4,SetDirection)
ADD_LUA_FCT(SpellClass4,SetDirectionX)
ADD_LUA_FCT(SpellClass4,SetDirectionY)
ADD_LUA_FCT(SpellClass4,GetDirection)
ADD_LUA_FCT(SpellClass4,GetDirectionX)
ADD_LUA_FCT(SpellClass4,GetDirectionY)
ADD_LUA_FCT(SpellClass4,SetScale)
ADD_LUA_FCT(SpellClass4,SetScaleX)
ADD_LUA_FCT(SpellClass4,SetScaleY)
ADD_LUA_FCT(SpellClass4,GetScale)
ADD_LUA_FCT(SpellClass4,GetScaleX)
ADD_LUA_FCT(SpellClass4,GetScaleY)
ADD_LUA_FCT(SpellClass4,SetCenter)
ADD_LUA_FCT(SpellClass4,SetCenterX)
ADD_LUA_FCT(SpellClass4,SetCenterY)
ADD_LUA_FCT(SpellClass4,GetCenter)
ADD_LUA_FCT(SpellClass4,GetCenterX)
ADD_LUA_FCT(SpellClass4,GetCenterY)
ADD_LUA_FCT(SpellClass4,SetModulationColor)
ADD_LUA_FCT(SpellClass4,SetModulationR)
ADD_LUA_FCT(SpellClass4,SetModulationG)
ADD_LUA_FCT(SpellClass4,SetModulationB)
ADD_LUA_FCT(SpellClass4,GetModulationColor)
ADD_LUA_FCT(SpellClass4,GetModulationR)
ADD_LUA_FCT(SpellClass4,GetModulationG)
ADD_LUA_FCT(SpellClass4,GetModulationB)
ADD_LUA_FCT(SpellClass4,SetOpacity)
ADD_LUA_FCT(SpellClass4,GetOpacity)
ADD_LUA_FCT(SpellClass4,AddCollision)
ADD_LUA_FCT(SpellClass4,RemoveCollision)
ADD_LUA_FCT(SpellClass4,ObjectInCollision)
ADD_LUA_FCT(SpellClass4,GetCollisionId)
ADD_LUA_FCT(SpellClass4,GetCollisionObject)
ADD_LUA_FCT(SpellClass4,GetTileMapCollisionObject)
ADD_LUA_FCT(SpellClass4,AddPhysicalProperties)
ADD_LUA_FCT(SpellClass4,RemovePhysicalProperties)
ADD_LUA_FCT(SpellClass4,SetMassProperties)
ADD_LUA_FCT(SpellClass4,GetMassProperties)
ADD_LUA_FCT(SpellClass4,GetCenterOfMass)
ADD_LUA_FCT(SpellClass4,SetVelocity)
ADD_LUA_FCT(SpellClass4,GetVelocity)
ADD_LUA_FCT(SpellClass4,SetAngularVelocity)
ADD_LUA_FCT(SpellClass4,GetAngularVelocity)
ADD_LUA_FCT(SpellClass4,SetSpeed)
ADD_LUA_FCT(SpellClass4,GetSpeed)
ADD_LUA_FCT(SpellClass4,SetVelocityDirection)
ADD_LUA_FCT(SpellClass4,GetVelocityDirection)
ADD_LUA_FCT(SpellClass4,AddForce)
ADD_LUA_FCT(SpellClass4,RemoveForce)
ADD_LUA_FCT(SpellClass4,RemoveAllForces)
ADD_LUA_FCT(SpellClass4,GetPhysicsId)
ADD_LUA_FCT(SpellClass4,GetNetworkKeyboard)
ADD_LUA_FCT(SpellClass4,GetNetworkMouse)
ADD_LUA_FCT(SpellClass4,GetNetworkOwner)
ADD_LUA_FCT(SpellClass4,GetNumberOfCollidedSprites)
ADD_LUA_FCT(SpellClass4,GetNumberOfCollidedCircles)
ADD_LUA_FCT(SpellClass4,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(SpellClass4,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(SpellClass4,GetCollidedSprite)
ADD_LUA_FCT(SpellClass4,GetCollidedTileMap)
ADD_LUA_FCT(SpellClass4,IsCollidedWithSprite)
ADD_LUA_FCT(SpellClass4,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(SpellClass4,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(SpellClass4,IsCollidedWithLineSegment)
ADD_LUA_FCT(SpellClass4,IsCollidedWithCircle)
ADD_LUA_FCT(SpellClass4,IsCollidedWithTileMap)
ADD_LUA_FCT(SpellClass4,IsMyLineSegmentCollided)
ADD_LUA_FCT(SpellClass4,IsMyCircleCollided)
ADD_LUA_FCT(SpellClass4,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(SpellClass4,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(SpellClass4,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(SpellClass4,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(SpellClass4,GetCollidedCircleData)
ADD_LUA_FCT(SpellClass4,GetCollidedLineSegmentData)
ADD_LUA_FCT(SpellClass4,GetCollidedTileMapData)
ADD_LUA_FCT(SpellClass4,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(SpellClass4,SetFlipHorizontal)
ADD_LUA_FCT(SpellClass4,GetFlipHorizontal)
ADD_LUA_FCT(SpellClass4,SetFlipVertical)
ADD_LUA_FCT(SpellClass4,GetFlipVertical)
ADD_LUA_FCT(SpellClass4,GetCurrentFrameDelay)
ADD_LUA_FCT(SpellClass4,GetFrameDelay)
ADD_LUA_FCT(SpellClass4,GetFramesCount)
ADD_LUA_FCT(SpellClass4,GetFrameWidth)
ADD_LUA_FCT(SpellClass4,GetFrameHeight)
ADD_LUA_FCT(SpellClass4,SetCurrentFrameIndex)
ADD_LUA_FCT(SpellClass4,GetCurrentFrameIndex)
ADD_LUA_FCT(SpellClass4,IsEndOfAnimation)
ADD_LUA_FCT(SpellClass4,SetLoop)
ADD_LUA_FCT(SpellClass4,GetLoop)
ADD_LUA_FCT(SpellClass4,GoToFirstFrame)
ADD_LUA_FCT(SpellClass4,GoToLastFrame)
ADD_LUA_FCT(SpellClass4,SetAnimationSpeed)
ADD_LUA_FCT(SpellClass4,GetAnimationSpeed)
ADD_LUA_FCT(SpellClass4,Play)
ADD_LUA_FCT(SpellClass4,Stop)
ADD_LUA_FCT(SpellClass4,IsPlaying)
ADD_LUA_FCT(SpellClass4,Pause)
ADD_LUA_FCT(SpellClass4,IsPaused)
ADD_LUA_FCT(SpellClass4,GetAnimationsCount)
ADD_LUA_FCT(SpellClass4,SetCurrentAnimationIndex)
ADD_LUA_FCT(SpellClass4,GetCurrentAnimationIndex)
ADD_LUA_FCT(SpellClass4,SetCurrentAnimationName)
ADD_LUA_FCT(SpellClass4,GetCurrentAnimationName)
ADD_LUA_FCT(SpellClass4,IsInViewport)
ADD_LUA_FCT(SpellClass4,SetHUDObject)
ADD_LUA_FCT(SpellClass4,IsHUDObject)
ADD_LUA_FCT(SpellClass4,SetCollisionActorIndex)
ADD_LUA_FCT(SpellClass4,SetVisibleCollisionData)
ADD_LUA_FCT(SpellClass4,GetVisibleCollisionData)
ADD_LUA_FCT(SpellClass4,SetCollisionDataColor)
ADD_LUA_FCT(SpellClass4,GetCollisionDataColor)
ADD_LUA_FCT(SpellClass4,SetVisibleBoundingRectangle)
ADD_LUA_FCT(SpellClass4,GetVisibleBoundingRectangle)
ADD_LUA_FCT(SpellClass4,SetBoundingRectangleColor)
ADD_LUA_FCT(SpellClass4,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(SpellClass4)
END_STRUCTURE

START_CLASS_OPERATORS(SpellClass4)
END_STRUCTURE
//END LUA SPECIFIC
SpellClass4::SpellClass4():Sprite()
{

}
SpellClass4::SpellClass4(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

SpellClass4::SpellClass4(const SpellClass4 & other):Sprite(other)
{
    OnClone(other);


}

SpellClass4 *SpellClass4::Clone()
{
    return new SpellClass4(*this);
}

void SpellClass4::Update(float dt)
{
// Generated Code //

// user code//
    if (IsInViewport(0u) == false && GetVisible() == true)
    {
        Destroy();
    }

    SetPositionX(GetPositionX() + 8);
}

void SpellClass4::Destroy()
{
    Sprite::Destroy();

}

void SpellClass4::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void SpellClass4::Load(Core::File & file)
{
    Sprite::Load(file);


}

void SpellClass4::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void SpellClass4::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void SpellClass4::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void SpellClass4::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void SpellClass4::OnStart()
{

}

void SpellClass4::OnEnd()
{

}

void SpellClass4::OnClone(const SpellClass4 & other)
{

}

SpellClass4::~SpellClass4()
{

}



