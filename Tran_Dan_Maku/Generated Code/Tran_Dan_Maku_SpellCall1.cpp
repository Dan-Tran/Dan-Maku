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

IMPLEMENT_OBJECT(SpellCall1);

	IMPLEMENT_LIGHT_LUA_VARS(SpellCall1)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(SpellCall1)
	//GameObject Functions
	ADD_LUA_FCT(SpellCall1,Mount)
	ADD_LUA_FCT(SpellCall1,GetMount)
	ADD_LUA_FCT(SpellCall1,UnMount)
	ADD_LUA_FCT(SpellCall1,GetMountsCount)
	ADD_LUA_FCT(SpellCall1,IsMounted)
	ADD_LUA_FCT(SpellCall1,GetMountSupport)
	ADD_LUA_FCT(SpellCall1,GetLayer)
	ADD_LUA_FCT(SpellCall1,SetName)
	ADD_LUA_FCT(SpellCall1,GetName)
	ADD_LUA_FCT(SpellCall1,GetID)
	ADD_LUA_FCT(SpellCall1,SetLifeTime)
	ADD_LUA_FCT(SpellCall1,GetLifeTime)
	ADD_LUA_FCT(SpellCall1,GetAge)
	ADD_LUA_FCT(SpellCall1,SetVisible)
	ADD_LUA_FCT(SpellCall1,GetVisible)
	ADD_LUA_FCT(SpellCall1,IsDestroyed)
	ADD_LUA_FCT(SpellCall1,SetPosition)
	ADD_LUA_FCT(SpellCall1,SetPositionX)
	ADD_LUA_FCT(SpellCall1,SetPositionY)
	ADD_LUA_FCT(SpellCall1,GetPosition)
	ADD_LUA_FCT(SpellCall1,GetPositionX)
	ADD_LUA_FCT(SpellCall1,GetPositionY)
	ADD_LUA_FCT(SpellCall1,SetOldPosition)
	ADD_LUA_FCT(SpellCall1,SetZOrder)
	ADD_LUA_FCT(SpellCall1,GetZOrder)
	ADD_LUA_FCT(SpellCall1,SetRotationAngle)
	ADD_LUA_FCT(SpellCall1,SetOldRotationAngle)
	ADD_LUA_FCT(SpellCall1,GetRotationAngle)
	ADD_LUA_FCT(SpellCall1,SetDirection)
	ADD_LUA_FCT(SpellCall1,SetDirectionX)
	ADD_LUA_FCT(SpellCall1,SetDirectionY)
	ADD_LUA_FCT(SpellCall1,GetDirection)
	ADD_LUA_FCT(SpellCall1,GetDirectionX)
	ADD_LUA_FCT(SpellCall1,GetDirectionY)
	ADD_LUA_FCT(SpellCall1,SetScale)
	ADD_LUA_FCT(SpellCall1,SetScaleX)
	ADD_LUA_FCT(SpellCall1,SetScaleY)
	ADD_LUA_FCT(SpellCall1,GetScale)
	ADD_LUA_FCT(SpellCall1,GetScaleX)
	ADD_LUA_FCT(SpellCall1,GetScaleY)
	ADD_LUA_FCT(SpellCall1,SetCenter)
	ADD_LUA_FCT(SpellCall1,SetCenterX)
	ADD_LUA_FCT(SpellCall1,SetCenterY)
	ADD_LUA_FCT(SpellCall1,GetCenter)
	ADD_LUA_FCT(SpellCall1,GetCenterX)
	ADD_LUA_FCT(SpellCall1,GetCenterY)
	ADD_LUA_FCT(SpellCall1,SetModulationColor)
	ADD_LUA_FCT(SpellCall1,SetModulationR)
	ADD_LUA_FCT(SpellCall1,SetModulationG)
	ADD_LUA_FCT(SpellCall1,SetModulationB)
	ADD_LUA_FCT(SpellCall1,GetModulationColor)
	ADD_LUA_FCT(SpellCall1,GetModulationR)
	ADD_LUA_FCT(SpellCall1,GetModulationG)
	ADD_LUA_FCT(SpellCall1,GetModulationB)
	ADD_LUA_FCT(SpellCall1,SetOpacity)
	ADD_LUA_FCT(SpellCall1,GetOpacity)
	ADD_LUA_FCT(SpellCall1,AddCollision)
	ADD_LUA_FCT(SpellCall1,RemoveCollision)
	ADD_LUA_FCT(SpellCall1,ObjectInCollision)
	ADD_LUA_FCT(SpellCall1,GetCollisionId)
	ADD_LUA_FCT(SpellCall1,GetCollisionObject)
	ADD_LUA_FCT(SpellCall1,GetTileMapCollisionObject)
	ADD_LUA_FCT(SpellCall1,AddPhysicalProperties)
	ADD_LUA_FCT(SpellCall1,RemovePhysicalProperties)
	ADD_LUA_FCT(SpellCall1,SetMassProperties)
	ADD_LUA_FCT(SpellCall1,GetMassProperties)
	ADD_LUA_FCT(SpellCall1,GetCenterOfMass)
	ADD_LUA_FCT(SpellCall1,SetVelocity)
	ADD_LUA_FCT(SpellCall1,GetVelocity)
	ADD_LUA_FCT(SpellCall1,SetAngularVelocity)
	ADD_LUA_FCT(SpellCall1,GetAngularVelocity)
	ADD_LUA_FCT(SpellCall1,SetSpeed)
	ADD_LUA_FCT(SpellCall1,GetSpeed)
	ADD_LUA_FCT(SpellCall1,SetVelocityDirection)
	ADD_LUA_FCT(SpellCall1,GetVelocityDirection)
	ADD_LUA_FCT(SpellCall1,AddForce)
	ADD_LUA_FCT(SpellCall1,RemoveForce)
	ADD_LUA_FCT(SpellCall1,RemoveAllForces)
	ADD_LUA_FCT(SpellCall1,GetPhysicsId)
	ADD_LUA_FCT(SpellCall1,GetNetworkKeyboard)
	ADD_LUA_FCT(SpellCall1,GetNetworkMouse)
	ADD_LUA_FCT(SpellCall1,GetNetworkOwner)
	ADD_LUA_FCT(SpellCall1,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(SpellCall1,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(SpellCall1,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(SpellCall1,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(SpellCall1,GetCollidedSprite)
	ADD_LUA_FCT(SpellCall1,GetCollidedTileMap)
	ADD_LUA_FCT(SpellCall1,IsCollidedWithSprite)
	ADD_LUA_FCT(SpellCall1,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(SpellCall1,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(SpellCall1,IsCollidedWithLineSegment)
	ADD_LUA_FCT(SpellCall1,IsCollidedWithCircle)
	ADD_LUA_FCT(SpellCall1,IsCollidedWithTileMap)
	ADD_LUA_FCT(SpellCall1,IsMyLineSegmentCollided)
	ADD_LUA_FCT(SpellCall1,IsMyCircleCollided)
	ADD_LUA_FCT(SpellCall1,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(SpellCall1,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(SpellCall1,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(SpellCall1,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(SpellCall1,GetCollidedCircleData)
	ADD_LUA_FCT(SpellCall1,GetCollidedLineSegmentData)
	ADD_LUA_FCT(SpellCall1,GetCollidedTileMapData)
	ADD_LUA_FCT(SpellCall1,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(SpellCall1,SetFlipHorizontal)
	ADD_LUA_FCT(SpellCall1,GetFlipHorizontal)
	ADD_LUA_FCT(SpellCall1,SetFlipVertical)
	ADD_LUA_FCT(SpellCall1,GetFlipVertical)
	ADD_LUA_FCT(SpellCall1,GetCurrentFrameDelay)
	ADD_LUA_FCT(SpellCall1,GetFrameDelay)
	ADD_LUA_FCT(SpellCall1,GetFramesCount)
	ADD_LUA_FCT(SpellCall1,GetFrameWidth)
	ADD_LUA_FCT(SpellCall1,GetFrameHeight)
	ADD_LUA_FCT(SpellCall1,SetCurrentFrameIndex)
	ADD_LUA_FCT(SpellCall1,GetCurrentFrameIndex)
    ADD_LUA_FCT(SpellCall1,IsEndOfAnimation)
	ADD_LUA_FCT(SpellCall1,SetLoop)
	ADD_LUA_FCT(SpellCall1,GetLoop)
	ADD_LUA_FCT(SpellCall1,GoToFirstFrame)
	ADD_LUA_FCT(SpellCall1,GoToLastFrame)
	ADD_LUA_FCT(SpellCall1,SetAnimationSpeed)
	ADD_LUA_FCT(SpellCall1,GetAnimationSpeed)
	ADD_LUA_FCT(SpellCall1,Play)
	ADD_LUA_FCT(SpellCall1,Stop)
	ADD_LUA_FCT(SpellCall1,IsPlaying)
	ADD_LUA_FCT(SpellCall1,Pause)
	ADD_LUA_FCT(SpellCall1,IsPaused)
	ADD_LUA_FCT(SpellCall1,GetAnimationsCount)
	ADD_LUA_FCT(SpellCall1,SetCurrentAnimationIndex)
	ADD_LUA_FCT(SpellCall1,GetCurrentAnimationIndex)
	ADD_LUA_FCT(SpellCall1,SetCurrentAnimationName)
	ADD_LUA_FCT(SpellCall1,GetCurrentAnimationName)
	ADD_LUA_FCT(SpellCall1,IsInViewport)
	ADD_LUA_FCT(SpellCall1,SetHUDObject)
	ADD_LUA_FCT(SpellCall1,IsHUDObject)
	ADD_LUA_FCT(SpellCall1,SetCollisionActorIndex)
	ADD_LUA_FCT(SpellCall1,SetVisibleCollisionData)
	ADD_LUA_FCT(SpellCall1,GetVisibleCollisionData)
	ADD_LUA_FCT(SpellCall1,SetCollisionDataColor)
	ADD_LUA_FCT(SpellCall1,GetCollisionDataColor)
	ADD_LUA_FCT(SpellCall1,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(SpellCall1,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(SpellCall1,SetBoundingRectangleColor)
	ADD_LUA_FCT(SpellCall1,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(SpellCall1)
END_STRUCTURE

START_CLASS_OPERATORS(SpellCall1)
END_STRUCTURE
//END LUA SPECIFIC
SpellCall1::SpellCall1():Sprite()
{ 

}
SpellCall1::SpellCall1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

SpellCall1::SpellCall1(const SpellCall1 & other):Sprite(other)
{
	OnClone(other);


}

SpellCall1 *SpellCall1::Clone()
{
	return new SpellCall1(*this);
}

void SpellCall1::Update(float dt) 
{
// Generated Code //

// user code//
if (IsEndOfAnimation() == true && GetVisible() == true)
{
	Stop();
	SetVisible(false);
	Destroy();
}
}

void SpellCall1::Destroy() 
{
	Sprite::Destroy();

}

void SpellCall1::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void SpellCall1::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void SpellCall1::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void SpellCall1::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void SpellCall1::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void SpellCall1::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void SpellCall1::OnStart() 
{

}

void SpellCall1::OnEnd() 
{

}

void SpellCall1::OnClone(const SpellCall1 & other) 
{

}

 SpellCall1::~SpellCall1() 
{

}



