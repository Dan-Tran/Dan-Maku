#include "MYGAME_MainDeclarations.h"
#include "MYGAME_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;

IMPLEMENT_OBJECT(PlayerBullet);

	IMPLEMENT_LIGHT_LUA_VARS(PlayerBullet)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(PlayerBullet)
	//GameObject Functions
	ADD_LUA_FCT(PlayerBullet,Mount)
	ADD_LUA_FCT(PlayerBullet,GetMount)
	ADD_LUA_FCT(PlayerBullet,UnMount)
	ADD_LUA_FCT(PlayerBullet,GetMountsCount)
	ADD_LUA_FCT(PlayerBullet,IsMounted)
	ADD_LUA_FCT(PlayerBullet,GetMountSupport)
	ADD_LUA_FCT(PlayerBullet,GetLayer)
	ADD_LUA_FCT(PlayerBullet,SetName)
	ADD_LUA_FCT(PlayerBullet,GetName)
	ADD_LUA_FCT(PlayerBullet,GetID)
	ADD_LUA_FCT(PlayerBullet,SetLifeTime)
	ADD_LUA_FCT(PlayerBullet,GetLifeTime)
	ADD_LUA_FCT(PlayerBullet,GetAge)
	ADD_LUA_FCT(PlayerBullet,SetVisible)
	ADD_LUA_FCT(PlayerBullet,GetVisible)
	ADD_LUA_FCT(PlayerBullet,IsDestroyed)
	ADD_LUA_FCT(PlayerBullet,SetPosition)
	ADD_LUA_FCT(PlayerBullet,SetPositionX)
	ADD_LUA_FCT(PlayerBullet,SetPositionY)
	ADD_LUA_FCT(PlayerBullet,GetPosition)
	ADD_LUA_FCT(PlayerBullet,GetPositionX)
	ADD_LUA_FCT(PlayerBullet,GetPositionY)
	ADD_LUA_FCT(PlayerBullet,SetOldPosition)
	ADD_LUA_FCT(PlayerBullet,SetZOrder)
	ADD_LUA_FCT(PlayerBullet,GetZOrder)
	ADD_LUA_FCT(PlayerBullet,SetRotationAngle)
	ADD_LUA_FCT(PlayerBullet,SetOldRotationAngle)
	ADD_LUA_FCT(PlayerBullet,GetRotationAngle)
	ADD_LUA_FCT(PlayerBullet,SetDirection)
	ADD_LUA_FCT(PlayerBullet,SetDirectionX)
	ADD_LUA_FCT(PlayerBullet,SetDirectionY)
	ADD_LUA_FCT(PlayerBullet,GetDirection)
	ADD_LUA_FCT(PlayerBullet,GetDirectionX)
	ADD_LUA_FCT(PlayerBullet,GetDirectionY)
	ADD_LUA_FCT(PlayerBullet,SetScale)
	ADD_LUA_FCT(PlayerBullet,SetScaleX)
	ADD_LUA_FCT(PlayerBullet,SetScaleY)
	ADD_LUA_FCT(PlayerBullet,GetScale)
	ADD_LUA_FCT(PlayerBullet,GetScaleX)
	ADD_LUA_FCT(PlayerBullet,GetScaleY)
	ADD_LUA_FCT(PlayerBullet,SetCenter)
	ADD_LUA_FCT(PlayerBullet,SetCenterX)
	ADD_LUA_FCT(PlayerBullet,SetCenterY)
	ADD_LUA_FCT(PlayerBullet,GetCenter)
	ADD_LUA_FCT(PlayerBullet,GetCenterX)
	ADD_LUA_FCT(PlayerBullet,GetCenterY)
	ADD_LUA_FCT(PlayerBullet,SetModulationColor)
	ADD_LUA_FCT(PlayerBullet,SetModulationR)
	ADD_LUA_FCT(PlayerBullet,SetModulationG)
	ADD_LUA_FCT(PlayerBullet,SetModulationB)
	ADD_LUA_FCT(PlayerBullet,GetModulationColor)
	ADD_LUA_FCT(PlayerBullet,GetModulationR)
	ADD_LUA_FCT(PlayerBullet,GetModulationG)
	ADD_LUA_FCT(PlayerBullet,GetModulationB)
	ADD_LUA_FCT(PlayerBullet,SetOpacity)
	ADD_LUA_FCT(PlayerBullet,GetOpacity)
	ADD_LUA_FCT(PlayerBullet,AddCollision)
	ADD_LUA_FCT(PlayerBullet,RemoveCollision)
	ADD_LUA_FCT(PlayerBullet,ObjectInCollision)
	ADD_LUA_FCT(PlayerBullet,GetCollisionId)
	ADD_LUA_FCT(PlayerBullet,GetCollisionObject)
	ADD_LUA_FCT(PlayerBullet,GetTileMapCollisionObject)
	ADD_LUA_FCT(PlayerBullet,AddPhysicalProperties)
	ADD_LUA_FCT(PlayerBullet,RemovePhysicalProperties)
	ADD_LUA_FCT(PlayerBullet,SetMassProperties)
	ADD_LUA_FCT(PlayerBullet,GetMassProperties)
	ADD_LUA_FCT(PlayerBullet,GetCenterOfMass)
	ADD_LUA_FCT(PlayerBullet,SetVelocity)
	ADD_LUA_FCT(PlayerBullet,GetVelocity)
	ADD_LUA_FCT(PlayerBullet,SetAngularVelocity)
	ADD_LUA_FCT(PlayerBullet,GetAngularVelocity)
	ADD_LUA_FCT(PlayerBullet,SetSpeed)
	ADD_LUA_FCT(PlayerBullet,GetSpeed)
	ADD_LUA_FCT(PlayerBullet,SetVelocityDirection)
	ADD_LUA_FCT(PlayerBullet,GetVelocityDirection)
	ADD_LUA_FCT(PlayerBullet,AddForce)
	ADD_LUA_FCT(PlayerBullet,RemoveForce)
	ADD_LUA_FCT(PlayerBullet,RemoveAllForces)
	ADD_LUA_FCT(PlayerBullet,GetPhysicsId)
	ADD_LUA_FCT(PlayerBullet,GetNetworkKeyboard)
	ADD_LUA_FCT(PlayerBullet,GetNetworkMouse)
	ADD_LUA_FCT(PlayerBullet,GetNetworkOwner)
	ADD_LUA_FCT(PlayerBullet,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(PlayerBullet,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(PlayerBullet,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(PlayerBullet,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(PlayerBullet,GetCollidedSprite)
	ADD_LUA_FCT(PlayerBullet,GetCollidedTileMap)
	ADD_LUA_FCT(PlayerBullet,IsCollidedWithSprite)
	ADD_LUA_FCT(PlayerBullet,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(PlayerBullet,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(PlayerBullet,IsCollidedWithLineSegment)
	ADD_LUA_FCT(PlayerBullet,IsCollidedWithCircle)
	ADD_LUA_FCT(PlayerBullet,IsCollidedWithTileMap)
	ADD_LUA_FCT(PlayerBullet,IsMyLineSegmentCollided)
	ADD_LUA_FCT(PlayerBullet,IsMyCircleCollided)
	ADD_LUA_FCT(PlayerBullet,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(PlayerBullet,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(PlayerBullet,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(PlayerBullet,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(PlayerBullet,GetCollidedCircleData)
	ADD_LUA_FCT(PlayerBullet,GetCollidedLineSegmentData)
	ADD_LUA_FCT(PlayerBullet,GetCollidedTileMapData)
	ADD_LUA_FCT(PlayerBullet,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(PlayerBullet,SetFlipHorizontal)
	ADD_LUA_FCT(PlayerBullet,GetFlipHorizontal)
	ADD_LUA_FCT(PlayerBullet,SetFlipVertical)
	ADD_LUA_FCT(PlayerBullet,GetFlipVertical)
	ADD_LUA_FCT(PlayerBullet,GetCurrentFrameDelay)
	ADD_LUA_FCT(PlayerBullet,GetFrameDelay)
	ADD_LUA_FCT(PlayerBullet,GetFramesCount)
	ADD_LUA_FCT(PlayerBullet,GetFrameWidth)
	ADD_LUA_FCT(PlayerBullet,GetFrameHeight)
	ADD_LUA_FCT(PlayerBullet,SetCurrentFrameIndex)
	ADD_LUA_FCT(PlayerBullet,GetCurrentFrameIndex)
    ADD_LUA_FCT(PlayerBullet,IsEndOfAnimation)
	ADD_LUA_FCT(PlayerBullet,SetLoop)
	ADD_LUA_FCT(PlayerBullet,GetLoop)
	ADD_LUA_FCT(PlayerBullet,GoToFirstFrame)
	ADD_LUA_FCT(PlayerBullet,GoToLastFrame)
	ADD_LUA_FCT(PlayerBullet,SetAnimationSpeed)
	ADD_LUA_FCT(PlayerBullet,GetAnimationSpeed)
	ADD_LUA_FCT(PlayerBullet,Play)
	ADD_LUA_FCT(PlayerBullet,Stop)
	ADD_LUA_FCT(PlayerBullet,IsPlaying)
	ADD_LUA_FCT(PlayerBullet,Pause)
	ADD_LUA_FCT(PlayerBullet,IsPaused)
	ADD_LUA_FCT(PlayerBullet,GetAnimationsCount)
	ADD_LUA_FCT(PlayerBullet,SetCurrentAnimationIndex)
	ADD_LUA_FCT(PlayerBullet,GetCurrentAnimationIndex)
	ADD_LUA_FCT(PlayerBullet,SetCurrentAnimationName)
	ADD_LUA_FCT(PlayerBullet,GetCurrentAnimationName)
	ADD_LUA_FCT(PlayerBullet,IsInViewport)
	ADD_LUA_FCT(PlayerBullet,SetHUDObject)
	ADD_LUA_FCT(PlayerBullet,IsHUDObject)
	ADD_LUA_FCT(PlayerBullet,SetCollisionActorIndex)
	ADD_LUA_FCT(PlayerBullet,SetVisibleCollisionData)
	ADD_LUA_FCT(PlayerBullet,GetVisibleCollisionData)
	ADD_LUA_FCT(PlayerBullet,SetCollisionDataColor)
	ADD_LUA_FCT(PlayerBullet,GetCollisionDataColor)
	ADD_LUA_FCT(PlayerBullet,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(PlayerBullet,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(PlayerBullet,SetBoundingRectangleColor)
	ADD_LUA_FCT(PlayerBullet,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(PlayerBullet)
END_STRUCTURE

START_CLASS_OPERATORS(PlayerBullet)
END_STRUCTURE
//END LUA SPECIFIC
PlayerBullet::PlayerBullet():Sprite()
{ 

}
PlayerBullet::PlayerBullet(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

PlayerBullet::PlayerBullet(const PlayerBullet & other):Sprite(other)
{
	OnClone(other);


}

PlayerBullet *PlayerBullet::Clone()
{
	return new PlayerBullet(*this);
}

void PlayerBullet::Update(float dt) 
{
// Generated Code //

// user code//
if (!GetVisible())
{
	return;
}

SetPositionY(GetPositionY() + 45);

size_t index = 0;

if (!IsInViewport(index) || GetCollisionInfo().IsCollidedWithSprite("Enemy", false))
{
	Destroy();
}
}

void PlayerBullet::Destroy() 
{
	Sprite::Destroy();

}

void PlayerBullet::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void PlayerBullet::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void PlayerBullet::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void PlayerBullet::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void PlayerBullet::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void PlayerBullet::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void PlayerBullet::OnStart() 
{

}

void PlayerBullet::OnEnd() 
{

}

void PlayerBullet::OnClone(const PlayerBullet & other) 
{

}

 PlayerBullet::~PlayerBullet() 
{

}



