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

IMPLEMENT_OBJECT(EnemyBullet);

	IMPLEMENT_LIGHT_LUA_VARS(EnemyBullet)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(EnemyBullet)
	//GameObject Functions
	ADD_LUA_FCT(EnemyBullet,Mount)
	ADD_LUA_FCT(EnemyBullet,GetMount)
	ADD_LUA_FCT(EnemyBullet,UnMount)
	ADD_LUA_FCT(EnemyBullet,GetMountsCount)
	ADD_LUA_FCT(EnemyBullet,IsMounted)
	ADD_LUA_FCT(EnemyBullet,GetMountSupport)
	ADD_LUA_FCT(EnemyBullet,GetLayer)
	ADD_LUA_FCT(EnemyBullet,SetName)
	ADD_LUA_FCT(EnemyBullet,GetName)
	ADD_LUA_FCT(EnemyBullet,GetID)
	ADD_LUA_FCT(EnemyBullet,SetLifeTime)
	ADD_LUA_FCT(EnemyBullet,GetLifeTime)
	ADD_LUA_FCT(EnemyBullet,GetAge)
	ADD_LUA_FCT(EnemyBullet,SetVisible)
	ADD_LUA_FCT(EnemyBullet,GetVisible)
	ADD_LUA_FCT(EnemyBullet,IsDestroyed)
	ADD_LUA_FCT(EnemyBullet,SetPosition)
	ADD_LUA_FCT(EnemyBullet,SetPositionX)
	ADD_LUA_FCT(EnemyBullet,SetPositionY)
	ADD_LUA_FCT(EnemyBullet,GetPosition)
	ADD_LUA_FCT(EnemyBullet,GetPositionX)
	ADD_LUA_FCT(EnemyBullet,GetPositionY)
	ADD_LUA_FCT(EnemyBullet,SetOldPosition)
	ADD_LUA_FCT(EnemyBullet,SetZOrder)
	ADD_LUA_FCT(EnemyBullet,GetZOrder)
	ADD_LUA_FCT(EnemyBullet,SetRotationAngle)
	ADD_LUA_FCT(EnemyBullet,SetOldRotationAngle)
	ADD_LUA_FCT(EnemyBullet,GetRotationAngle)
	ADD_LUA_FCT(EnemyBullet,SetDirection)
	ADD_LUA_FCT(EnemyBullet,SetDirectionX)
	ADD_LUA_FCT(EnemyBullet,SetDirectionY)
	ADD_LUA_FCT(EnemyBullet,GetDirection)
	ADD_LUA_FCT(EnemyBullet,GetDirectionX)
	ADD_LUA_FCT(EnemyBullet,GetDirectionY)
	ADD_LUA_FCT(EnemyBullet,SetScale)
	ADD_LUA_FCT(EnemyBullet,SetScaleX)
	ADD_LUA_FCT(EnemyBullet,SetScaleY)
	ADD_LUA_FCT(EnemyBullet,GetScale)
	ADD_LUA_FCT(EnemyBullet,GetScaleX)
	ADD_LUA_FCT(EnemyBullet,GetScaleY)
	ADD_LUA_FCT(EnemyBullet,SetCenter)
	ADD_LUA_FCT(EnemyBullet,SetCenterX)
	ADD_LUA_FCT(EnemyBullet,SetCenterY)
	ADD_LUA_FCT(EnemyBullet,GetCenter)
	ADD_LUA_FCT(EnemyBullet,GetCenterX)
	ADD_LUA_FCT(EnemyBullet,GetCenterY)
	ADD_LUA_FCT(EnemyBullet,SetModulationColor)
	ADD_LUA_FCT(EnemyBullet,SetModulationR)
	ADD_LUA_FCT(EnemyBullet,SetModulationG)
	ADD_LUA_FCT(EnemyBullet,SetModulationB)
	ADD_LUA_FCT(EnemyBullet,GetModulationColor)
	ADD_LUA_FCT(EnemyBullet,GetModulationR)
	ADD_LUA_FCT(EnemyBullet,GetModulationG)
	ADD_LUA_FCT(EnemyBullet,GetModulationB)
	ADD_LUA_FCT(EnemyBullet,SetOpacity)
	ADD_LUA_FCT(EnemyBullet,GetOpacity)
	ADD_LUA_FCT(EnemyBullet,AddCollision)
	ADD_LUA_FCT(EnemyBullet,RemoveCollision)
	ADD_LUA_FCT(EnemyBullet,ObjectInCollision)
	ADD_LUA_FCT(EnemyBullet,GetCollisionId)
	ADD_LUA_FCT(EnemyBullet,GetCollisionObject)
	ADD_LUA_FCT(EnemyBullet,GetTileMapCollisionObject)
	ADD_LUA_FCT(EnemyBullet,AddPhysicalProperties)
	ADD_LUA_FCT(EnemyBullet,RemovePhysicalProperties)
	ADD_LUA_FCT(EnemyBullet,SetMassProperties)
	ADD_LUA_FCT(EnemyBullet,GetMassProperties)
	ADD_LUA_FCT(EnemyBullet,GetCenterOfMass)
	ADD_LUA_FCT(EnemyBullet,SetVelocity)
	ADD_LUA_FCT(EnemyBullet,GetVelocity)
	ADD_LUA_FCT(EnemyBullet,SetAngularVelocity)
	ADD_LUA_FCT(EnemyBullet,GetAngularVelocity)
	ADD_LUA_FCT(EnemyBullet,SetSpeed)
	ADD_LUA_FCT(EnemyBullet,GetSpeed)
	ADD_LUA_FCT(EnemyBullet,SetVelocityDirection)
	ADD_LUA_FCT(EnemyBullet,GetVelocityDirection)
	ADD_LUA_FCT(EnemyBullet,AddForce)
	ADD_LUA_FCT(EnemyBullet,RemoveForce)
	ADD_LUA_FCT(EnemyBullet,RemoveAllForces)
	ADD_LUA_FCT(EnemyBullet,GetPhysicsId)
	ADD_LUA_FCT(EnemyBullet,GetNetworkKeyboard)
	ADD_LUA_FCT(EnemyBullet,GetNetworkMouse)
	ADD_LUA_FCT(EnemyBullet,GetNetworkOwner)
	ADD_LUA_FCT(EnemyBullet,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(EnemyBullet,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(EnemyBullet,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(EnemyBullet,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(EnemyBullet,GetCollidedSprite)
	ADD_LUA_FCT(EnemyBullet,GetCollidedTileMap)
	ADD_LUA_FCT(EnemyBullet,IsCollidedWithSprite)
	ADD_LUA_FCT(EnemyBullet,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(EnemyBullet,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(EnemyBullet,IsCollidedWithLineSegment)
	ADD_LUA_FCT(EnemyBullet,IsCollidedWithCircle)
	ADD_LUA_FCT(EnemyBullet,IsCollidedWithTileMap)
	ADD_LUA_FCT(EnemyBullet,IsMyLineSegmentCollided)
	ADD_LUA_FCT(EnemyBullet,IsMyCircleCollided)
	ADD_LUA_FCT(EnemyBullet,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyBullet,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyBullet,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyBullet,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyBullet,GetCollidedCircleData)
	ADD_LUA_FCT(EnemyBullet,GetCollidedLineSegmentData)
	ADD_LUA_FCT(EnemyBullet,GetCollidedTileMapData)
	ADD_LUA_FCT(EnemyBullet,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(EnemyBullet,SetFlipHorizontal)
	ADD_LUA_FCT(EnemyBullet,GetFlipHorizontal)
	ADD_LUA_FCT(EnemyBullet,SetFlipVertical)
	ADD_LUA_FCT(EnemyBullet,GetFlipVertical)
	ADD_LUA_FCT(EnemyBullet,GetCurrentFrameDelay)
	ADD_LUA_FCT(EnemyBullet,GetFrameDelay)
	ADD_LUA_FCT(EnemyBullet,GetFramesCount)
	ADD_LUA_FCT(EnemyBullet,GetFrameWidth)
	ADD_LUA_FCT(EnemyBullet,GetFrameHeight)
	ADD_LUA_FCT(EnemyBullet,SetCurrentFrameIndex)
	ADD_LUA_FCT(EnemyBullet,GetCurrentFrameIndex)
    ADD_LUA_FCT(EnemyBullet,IsEndOfAnimation)
	ADD_LUA_FCT(EnemyBullet,SetLoop)
	ADD_LUA_FCT(EnemyBullet,GetLoop)
	ADD_LUA_FCT(EnemyBullet,GoToFirstFrame)
	ADD_LUA_FCT(EnemyBullet,GoToLastFrame)
	ADD_LUA_FCT(EnemyBullet,SetAnimationSpeed)
	ADD_LUA_FCT(EnemyBullet,GetAnimationSpeed)
	ADD_LUA_FCT(EnemyBullet,Play)
	ADD_LUA_FCT(EnemyBullet,Stop)
	ADD_LUA_FCT(EnemyBullet,IsPlaying)
	ADD_LUA_FCT(EnemyBullet,Pause)
	ADD_LUA_FCT(EnemyBullet,IsPaused)
	ADD_LUA_FCT(EnemyBullet,GetAnimationsCount)
	ADD_LUA_FCT(EnemyBullet,SetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyBullet,GetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyBullet,SetCurrentAnimationName)
	ADD_LUA_FCT(EnemyBullet,GetCurrentAnimationName)
	ADD_LUA_FCT(EnemyBullet,IsInViewport)
	ADD_LUA_FCT(EnemyBullet,SetHUDObject)
	ADD_LUA_FCT(EnemyBullet,IsHUDObject)
	ADD_LUA_FCT(EnemyBullet,SetCollisionActorIndex)
	ADD_LUA_FCT(EnemyBullet,SetVisibleCollisionData)
	ADD_LUA_FCT(EnemyBullet,GetVisibleCollisionData)
	ADD_LUA_FCT(EnemyBullet,SetCollisionDataColor)
	ADD_LUA_FCT(EnemyBullet,GetCollisionDataColor)
	ADD_LUA_FCT(EnemyBullet,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyBullet,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyBullet,SetBoundingRectangleColor)
	ADD_LUA_FCT(EnemyBullet,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(EnemyBullet)
END_STRUCTURE

START_CLASS_OPERATORS(EnemyBullet)
END_STRUCTURE
//END LUA SPECIFIC
EnemyBullet::EnemyBullet():Sprite()
{ 

}
EnemyBullet::EnemyBullet(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

EnemyBullet::EnemyBullet(const EnemyBullet & other):Sprite(other)
{
	OnClone(other);


}

EnemyBullet *EnemyBullet::Clone()
{
	return new EnemyBullet(*this);
}

void EnemyBullet::Update(float dt) 
{
// Generated Code //

// user code//
if (GetCollisionInfo().IsCollidedWithSprite("Player1", true) || (IsInViewport(0U) == false && GetVisible() == true) || GetCollisionInfo().IsCollidedWithSprite("Spell", true))
{
	Destroy();
}

if ((GetPositionX() < -400 || GetPositionX() > 400 || GetPositionY() < -300 || GetPositionY() > 300 || IsInViewport(0u) == false) && GetVisible() == true)
{
	Destroy();
}
}

void EnemyBullet::Destroy() 
{
	Sprite::Destroy();

}

void EnemyBullet::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void EnemyBullet::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void EnemyBullet::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void EnemyBullet::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void EnemyBullet::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void EnemyBullet::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void EnemyBullet::OnStart() 
{

}

void EnemyBullet::OnEnd() 
{

}

void EnemyBullet::OnClone(const EnemyBullet & other) 
{

}

 EnemyBullet::~EnemyBullet() 
{

}



