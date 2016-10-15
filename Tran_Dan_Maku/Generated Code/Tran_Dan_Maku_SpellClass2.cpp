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

IMPLEMENT_OBJECT(SpellClass2);

	IMPLEMENT_LIGHT_LUA_VARS(SpellClass2)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(SpellClass2)
	//GameObject Functions
	ADD_LUA_FCT(SpellClass2,Mount)
	ADD_LUA_FCT(SpellClass2,GetMount)
	ADD_LUA_FCT(SpellClass2,UnMount)
	ADD_LUA_FCT(SpellClass2,GetMountsCount)
	ADD_LUA_FCT(SpellClass2,IsMounted)
	ADD_LUA_FCT(SpellClass2,GetMountSupport)
	ADD_LUA_FCT(SpellClass2,GetLayer)
	ADD_LUA_FCT(SpellClass2,SetName)
	ADD_LUA_FCT(SpellClass2,GetName)
	ADD_LUA_FCT(SpellClass2,GetID)
	ADD_LUA_FCT(SpellClass2,SetLifeTime)
	ADD_LUA_FCT(SpellClass2,GetLifeTime)
	ADD_LUA_FCT(SpellClass2,GetAge)
	ADD_LUA_FCT(SpellClass2,SetVisible)
	ADD_LUA_FCT(SpellClass2,GetVisible)
	ADD_LUA_FCT(SpellClass2,IsDestroyed)
	ADD_LUA_FCT(SpellClass2,SetPosition)
	ADD_LUA_FCT(SpellClass2,SetPositionX)
	ADD_LUA_FCT(SpellClass2,SetPositionY)
	ADD_LUA_FCT(SpellClass2,GetPosition)
	ADD_LUA_FCT(SpellClass2,GetPositionX)
	ADD_LUA_FCT(SpellClass2,GetPositionY)
	ADD_LUA_FCT(SpellClass2,SetOldPosition)
	ADD_LUA_FCT(SpellClass2,SetZOrder)
	ADD_LUA_FCT(SpellClass2,GetZOrder)
	ADD_LUA_FCT(SpellClass2,SetRotationAngle)
	ADD_LUA_FCT(SpellClass2,SetOldRotationAngle)
	ADD_LUA_FCT(SpellClass2,GetRotationAngle)
	ADD_LUA_FCT(SpellClass2,SetDirection)
	ADD_LUA_FCT(SpellClass2,SetDirectionX)
	ADD_LUA_FCT(SpellClass2,SetDirectionY)
	ADD_LUA_FCT(SpellClass2,GetDirection)
	ADD_LUA_FCT(SpellClass2,GetDirectionX)
	ADD_LUA_FCT(SpellClass2,GetDirectionY)
	ADD_LUA_FCT(SpellClass2,SetScale)
	ADD_LUA_FCT(SpellClass2,SetScaleX)
	ADD_LUA_FCT(SpellClass2,SetScaleY)
	ADD_LUA_FCT(SpellClass2,GetScale)
	ADD_LUA_FCT(SpellClass2,GetScaleX)
	ADD_LUA_FCT(SpellClass2,GetScaleY)
	ADD_LUA_FCT(SpellClass2,SetCenter)
	ADD_LUA_FCT(SpellClass2,SetCenterX)
	ADD_LUA_FCT(SpellClass2,SetCenterY)
	ADD_LUA_FCT(SpellClass2,GetCenter)
	ADD_LUA_FCT(SpellClass2,GetCenterX)
	ADD_LUA_FCT(SpellClass2,GetCenterY)
	ADD_LUA_FCT(SpellClass2,SetModulationColor)
	ADD_LUA_FCT(SpellClass2,SetModulationR)
	ADD_LUA_FCT(SpellClass2,SetModulationG)
	ADD_LUA_FCT(SpellClass2,SetModulationB)
	ADD_LUA_FCT(SpellClass2,GetModulationColor)
	ADD_LUA_FCT(SpellClass2,GetModulationR)
	ADD_LUA_FCT(SpellClass2,GetModulationG)
	ADD_LUA_FCT(SpellClass2,GetModulationB)
	ADD_LUA_FCT(SpellClass2,SetOpacity)
	ADD_LUA_FCT(SpellClass2,GetOpacity)
	ADD_LUA_FCT(SpellClass2,AddCollision)
	ADD_LUA_FCT(SpellClass2,RemoveCollision)
	ADD_LUA_FCT(SpellClass2,ObjectInCollision)
	ADD_LUA_FCT(SpellClass2,GetCollisionId)
	ADD_LUA_FCT(SpellClass2,GetCollisionObject)
	ADD_LUA_FCT(SpellClass2,GetTileMapCollisionObject)
	ADD_LUA_FCT(SpellClass2,AddPhysicalProperties)
	ADD_LUA_FCT(SpellClass2,RemovePhysicalProperties)
	ADD_LUA_FCT(SpellClass2,SetMassProperties)
	ADD_LUA_FCT(SpellClass2,GetMassProperties)
	ADD_LUA_FCT(SpellClass2,GetCenterOfMass)
	ADD_LUA_FCT(SpellClass2,SetVelocity)
	ADD_LUA_FCT(SpellClass2,GetVelocity)
	ADD_LUA_FCT(SpellClass2,SetAngularVelocity)
	ADD_LUA_FCT(SpellClass2,GetAngularVelocity)
	ADD_LUA_FCT(SpellClass2,SetSpeed)
	ADD_LUA_FCT(SpellClass2,GetSpeed)
	ADD_LUA_FCT(SpellClass2,SetVelocityDirection)
	ADD_LUA_FCT(SpellClass2,GetVelocityDirection)
	ADD_LUA_FCT(SpellClass2,AddForce)
	ADD_LUA_FCT(SpellClass2,RemoveForce)
	ADD_LUA_FCT(SpellClass2,RemoveAllForces)
	ADD_LUA_FCT(SpellClass2,GetPhysicsId)
	ADD_LUA_FCT(SpellClass2,GetNetworkKeyboard)
	ADD_LUA_FCT(SpellClass2,GetNetworkMouse)
	ADD_LUA_FCT(SpellClass2,GetNetworkOwner)
	ADD_LUA_FCT(SpellClass2,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(SpellClass2,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(SpellClass2,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(SpellClass2,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(SpellClass2,GetCollidedSprite)
	ADD_LUA_FCT(SpellClass2,GetCollidedTileMap)
	ADD_LUA_FCT(SpellClass2,IsCollidedWithSprite)
	ADD_LUA_FCT(SpellClass2,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(SpellClass2,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(SpellClass2,IsCollidedWithLineSegment)
	ADD_LUA_FCT(SpellClass2,IsCollidedWithCircle)
	ADD_LUA_FCT(SpellClass2,IsCollidedWithTileMap)
	ADD_LUA_FCT(SpellClass2,IsMyLineSegmentCollided)
	ADD_LUA_FCT(SpellClass2,IsMyCircleCollided)
	ADD_LUA_FCT(SpellClass2,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(SpellClass2,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(SpellClass2,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(SpellClass2,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(SpellClass2,GetCollidedCircleData)
	ADD_LUA_FCT(SpellClass2,GetCollidedLineSegmentData)
	ADD_LUA_FCT(SpellClass2,GetCollidedTileMapData)
	ADD_LUA_FCT(SpellClass2,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(SpellClass2,SetFlipHorizontal)
	ADD_LUA_FCT(SpellClass2,GetFlipHorizontal)
	ADD_LUA_FCT(SpellClass2,SetFlipVertical)
	ADD_LUA_FCT(SpellClass2,GetFlipVertical)
	ADD_LUA_FCT(SpellClass2,GetCurrentFrameDelay)
	ADD_LUA_FCT(SpellClass2,GetFrameDelay)
	ADD_LUA_FCT(SpellClass2,GetFramesCount)
	ADD_LUA_FCT(SpellClass2,GetFrameWidth)
	ADD_LUA_FCT(SpellClass2,GetFrameHeight)
	ADD_LUA_FCT(SpellClass2,SetCurrentFrameIndex)
	ADD_LUA_FCT(SpellClass2,GetCurrentFrameIndex)
    ADD_LUA_FCT(SpellClass2,IsEndOfAnimation)
	ADD_LUA_FCT(SpellClass2,SetLoop)
	ADD_LUA_FCT(SpellClass2,GetLoop)
	ADD_LUA_FCT(SpellClass2,GoToFirstFrame)
	ADD_LUA_FCT(SpellClass2,GoToLastFrame)
	ADD_LUA_FCT(SpellClass2,SetAnimationSpeed)
	ADD_LUA_FCT(SpellClass2,GetAnimationSpeed)
	ADD_LUA_FCT(SpellClass2,Play)
	ADD_LUA_FCT(SpellClass2,Stop)
	ADD_LUA_FCT(SpellClass2,IsPlaying)
	ADD_LUA_FCT(SpellClass2,Pause)
	ADD_LUA_FCT(SpellClass2,IsPaused)
	ADD_LUA_FCT(SpellClass2,GetAnimationsCount)
	ADD_LUA_FCT(SpellClass2,SetCurrentAnimationIndex)
	ADD_LUA_FCT(SpellClass2,GetCurrentAnimationIndex)
	ADD_LUA_FCT(SpellClass2,SetCurrentAnimationName)
	ADD_LUA_FCT(SpellClass2,GetCurrentAnimationName)
	ADD_LUA_FCT(SpellClass2,IsInViewport)
	ADD_LUA_FCT(SpellClass2,SetHUDObject)
	ADD_LUA_FCT(SpellClass2,IsHUDObject)
	ADD_LUA_FCT(SpellClass2,SetCollisionActorIndex)
	ADD_LUA_FCT(SpellClass2,SetVisibleCollisionData)
	ADD_LUA_FCT(SpellClass2,GetVisibleCollisionData)
	ADD_LUA_FCT(SpellClass2,SetCollisionDataColor)
	ADD_LUA_FCT(SpellClass2,GetCollisionDataColor)
	ADD_LUA_FCT(SpellClass2,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(SpellClass2,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(SpellClass2,SetBoundingRectangleColor)
	ADD_LUA_FCT(SpellClass2,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(SpellClass2)
END_STRUCTURE

START_CLASS_OPERATORS(SpellClass2)
END_STRUCTURE
//END LUA SPECIFIC
SpellClass2::SpellClass2():Sprite()
{ 

}
SpellClass2::SpellClass2(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

SpellClass2::SpellClass2(const SpellClass2 & other):Sprite(other)
{
	OnClone(other);


}

SpellClass2 *SpellClass2::Clone()
{
	return new SpellClass2(*this);
}

void SpellClass2::Update(float dt) 
{
// Generated Code //

// user code//
if (IsInViewport(0u) == false && GetVisible() == true)
{
	Destroy();
}

SetPositionY(GetPositionY() - 8);
}

void SpellClass2::Destroy() 
{
	Sprite::Destroy();

}

void SpellClass2::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void SpellClass2::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void SpellClass2::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void SpellClass2::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void SpellClass2::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void SpellClass2::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void SpellClass2::OnStart() 
{

}

void SpellClass2::OnEnd() 
{

}

void SpellClass2::OnClone(const SpellClass2 & other) 
{

}

 SpellClass2::~SpellClass2() 
{

}



