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

IMPLEMENT_OBJECT(SpellClass1);

	IMPLEMENT_LIGHT_LUA_VARS(SpellClass1)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(SpellClass1)
	//GameObject Functions
	ADD_LUA_FCT(SpellClass1,Mount)
	ADD_LUA_FCT(SpellClass1,GetMount)
	ADD_LUA_FCT(SpellClass1,UnMount)
	ADD_LUA_FCT(SpellClass1,GetMountsCount)
	ADD_LUA_FCT(SpellClass1,IsMounted)
	ADD_LUA_FCT(SpellClass1,GetMountSupport)
	ADD_LUA_FCT(SpellClass1,GetLayer)
	ADD_LUA_FCT(SpellClass1,SetName)
	ADD_LUA_FCT(SpellClass1,GetName)
	ADD_LUA_FCT(SpellClass1,GetID)
	ADD_LUA_FCT(SpellClass1,SetLifeTime)
	ADD_LUA_FCT(SpellClass1,GetLifeTime)
	ADD_LUA_FCT(SpellClass1,GetAge)
	ADD_LUA_FCT(SpellClass1,SetVisible)
	ADD_LUA_FCT(SpellClass1,GetVisible)
	ADD_LUA_FCT(SpellClass1,IsDestroyed)
	ADD_LUA_FCT(SpellClass1,SetPosition)
	ADD_LUA_FCT(SpellClass1,SetPositionX)
	ADD_LUA_FCT(SpellClass1,SetPositionY)
	ADD_LUA_FCT(SpellClass1,GetPosition)
	ADD_LUA_FCT(SpellClass1,GetPositionX)
	ADD_LUA_FCT(SpellClass1,GetPositionY)
	ADD_LUA_FCT(SpellClass1,SetOldPosition)
	ADD_LUA_FCT(SpellClass1,SetZOrder)
	ADD_LUA_FCT(SpellClass1,GetZOrder)
	ADD_LUA_FCT(SpellClass1,SetRotationAngle)
	ADD_LUA_FCT(SpellClass1,SetOldRotationAngle)
	ADD_LUA_FCT(SpellClass1,GetRotationAngle)
	ADD_LUA_FCT(SpellClass1,SetDirection)
	ADD_LUA_FCT(SpellClass1,SetDirectionX)
	ADD_LUA_FCT(SpellClass1,SetDirectionY)
	ADD_LUA_FCT(SpellClass1,GetDirection)
	ADD_LUA_FCT(SpellClass1,GetDirectionX)
	ADD_LUA_FCT(SpellClass1,GetDirectionY)
	ADD_LUA_FCT(SpellClass1,SetScale)
	ADD_LUA_FCT(SpellClass1,SetScaleX)
	ADD_LUA_FCT(SpellClass1,SetScaleY)
	ADD_LUA_FCT(SpellClass1,GetScale)
	ADD_LUA_FCT(SpellClass1,GetScaleX)
	ADD_LUA_FCT(SpellClass1,GetScaleY)
	ADD_LUA_FCT(SpellClass1,SetCenter)
	ADD_LUA_FCT(SpellClass1,SetCenterX)
	ADD_LUA_FCT(SpellClass1,SetCenterY)
	ADD_LUA_FCT(SpellClass1,GetCenter)
	ADD_LUA_FCT(SpellClass1,GetCenterX)
	ADD_LUA_FCT(SpellClass1,GetCenterY)
	ADD_LUA_FCT(SpellClass1,SetModulationColor)
	ADD_LUA_FCT(SpellClass1,SetModulationR)
	ADD_LUA_FCT(SpellClass1,SetModulationG)
	ADD_LUA_FCT(SpellClass1,SetModulationB)
	ADD_LUA_FCT(SpellClass1,GetModulationColor)
	ADD_LUA_FCT(SpellClass1,GetModulationR)
	ADD_LUA_FCT(SpellClass1,GetModulationG)
	ADD_LUA_FCT(SpellClass1,GetModulationB)
	ADD_LUA_FCT(SpellClass1,SetOpacity)
	ADD_LUA_FCT(SpellClass1,GetOpacity)
	ADD_LUA_FCT(SpellClass1,AddCollision)
	ADD_LUA_FCT(SpellClass1,RemoveCollision)
	ADD_LUA_FCT(SpellClass1,ObjectInCollision)
	ADD_LUA_FCT(SpellClass1,GetCollisionId)
	ADD_LUA_FCT(SpellClass1,GetCollisionObject)
	ADD_LUA_FCT(SpellClass1,GetTileMapCollisionObject)
	ADD_LUA_FCT(SpellClass1,AddPhysicalProperties)
	ADD_LUA_FCT(SpellClass1,RemovePhysicalProperties)
	ADD_LUA_FCT(SpellClass1,SetMassProperties)
	ADD_LUA_FCT(SpellClass1,GetMassProperties)
	ADD_LUA_FCT(SpellClass1,GetCenterOfMass)
	ADD_LUA_FCT(SpellClass1,SetVelocity)
	ADD_LUA_FCT(SpellClass1,GetVelocity)
	ADD_LUA_FCT(SpellClass1,SetAngularVelocity)
	ADD_LUA_FCT(SpellClass1,GetAngularVelocity)
	ADD_LUA_FCT(SpellClass1,SetSpeed)
	ADD_LUA_FCT(SpellClass1,GetSpeed)
	ADD_LUA_FCT(SpellClass1,SetVelocityDirection)
	ADD_LUA_FCT(SpellClass1,GetVelocityDirection)
	ADD_LUA_FCT(SpellClass1,AddForce)
	ADD_LUA_FCT(SpellClass1,RemoveForce)
	ADD_LUA_FCT(SpellClass1,RemoveAllForces)
	ADD_LUA_FCT(SpellClass1,GetPhysicsId)
	ADD_LUA_FCT(SpellClass1,GetNetworkKeyboard)
	ADD_LUA_FCT(SpellClass1,GetNetworkMouse)
	ADD_LUA_FCT(SpellClass1,GetNetworkOwner)
	ADD_LUA_FCT(SpellClass1,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(SpellClass1,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(SpellClass1,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(SpellClass1,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(SpellClass1,GetCollidedSprite)
	ADD_LUA_FCT(SpellClass1,GetCollidedTileMap)
	ADD_LUA_FCT(SpellClass1,IsCollidedWithSprite)
	ADD_LUA_FCT(SpellClass1,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(SpellClass1,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(SpellClass1,IsCollidedWithLineSegment)
	ADD_LUA_FCT(SpellClass1,IsCollidedWithCircle)
	ADD_LUA_FCT(SpellClass1,IsCollidedWithTileMap)
	ADD_LUA_FCT(SpellClass1,IsMyLineSegmentCollided)
	ADD_LUA_FCT(SpellClass1,IsMyCircleCollided)
	ADD_LUA_FCT(SpellClass1,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(SpellClass1,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(SpellClass1,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(SpellClass1,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(SpellClass1,GetCollidedCircleData)
	ADD_LUA_FCT(SpellClass1,GetCollidedLineSegmentData)
	ADD_LUA_FCT(SpellClass1,GetCollidedTileMapData)
	ADD_LUA_FCT(SpellClass1,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(SpellClass1,SetFlipHorizontal)
	ADD_LUA_FCT(SpellClass1,GetFlipHorizontal)
	ADD_LUA_FCT(SpellClass1,SetFlipVertical)
	ADD_LUA_FCT(SpellClass1,GetFlipVertical)
	ADD_LUA_FCT(SpellClass1,GetCurrentFrameDelay)
	ADD_LUA_FCT(SpellClass1,GetFrameDelay)
	ADD_LUA_FCT(SpellClass1,GetFramesCount)
	ADD_LUA_FCT(SpellClass1,GetFrameWidth)
	ADD_LUA_FCT(SpellClass1,GetFrameHeight)
	ADD_LUA_FCT(SpellClass1,SetCurrentFrameIndex)
	ADD_LUA_FCT(SpellClass1,GetCurrentFrameIndex)
    ADD_LUA_FCT(SpellClass1,IsEndOfAnimation)
	ADD_LUA_FCT(SpellClass1,SetLoop)
	ADD_LUA_FCT(SpellClass1,GetLoop)
	ADD_LUA_FCT(SpellClass1,GoToFirstFrame)
	ADD_LUA_FCT(SpellClass1,GoToLastFrame)
	ADD_LUA_FCT(SpellClass1,SetAnimationSpeed)
	ADD_LUA_FCT(SpellClass1,GetAnimationSpeed)
	ADD_LUA_FCT(SpellClass1,Play)
	ADD_LUA_FCT(SpellClass1,Stop)
	ADD_LUA_FCT(SpellClass1,IsPlaying)
	ADD_LUA_FCT(SpellClass1,Pause)
	ADD_LUA_FCT(SpellClass1,IsPaused)
	ADD_LUA_FCT(SpellClass1,GetAnimationsCount)
	ADD_LUA_FCT(SpellClass1,SetCurrentAnimationIndex)
	ADD_LUA_FCT(SpellClass1,GetCurrentAnimationIndex)
	ADD_LUA_FCT(SpellClass1,SetCurrentAnimationName)
	ADD_LUA_FCT(SpellClass1,GetCurrentAnimationName)
	ADD_LUA_FCT(SpellClass1,IsInViewport)
	ADD_LUA_FCT(SpellClass1,SetHUDObject)
	ADD_LUA_FCT(SpellClass1,IsHUDObject)
	ADD_LUA_FCT(SpellClass1,SetCollisionActorIndex)
	ADD_LUA_FCT(SpellClass1,SetVisibleCollisionData)
	ADD_LUA_FCT(SpellClass1,GetVisibleCollisionData)
	ADD_LUA_FCT(SpellClass1,SetCollisionDataColor)
	ADD_LUA_FCT(SpellClass1,GetCollisionDataColor)
	ADD_LUA_FCT(SpellClass1,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(SpellClass1,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(SpellClass1,SetBoundingRectangleColor)
	ADD_LUA_FCT(SpellClass1,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(SpellClass1)
END_STRUCTURE

START_CLASS_OPERATORS(SpellClass1)
END_STRUCTURE
//END LUA SPECIFIC
SpellClass1::SpellClass1():Sprite()
{ 

}
SpellClass1::SpellClass1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

SpellClass1::SpellClass1(const SpellClass1 & other):Sprite(other)
{
	OnClone(other);


}

SpellClass1 *SpellClass1::Clone()
{
	return new SpellClass1(*this);
}

void SpellClass1::Update(float dt) 
{
// Generated Code //

// user code//
if (IsInViewport(0u) == false && GetVisible() == true)
{
	Destroy();
}

SetPositionY(GetPositionY() + 8);
}

void SpellClass1::Destroy() 
{
	Sprite::Destroy();

}

void SpellClass1::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void SpellClass1::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void SpellClass1::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void SpellClass1::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void SpellClass1::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void SpellClass1::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void SpellClass1::OnStart() 
{

}

void SpellClass1::OnEnd() 
{

}

void SpellClass1::OnClone(const SpellClass1 & other) 
{

}

 SpellClass1::~SpellClass1() 
{

}



