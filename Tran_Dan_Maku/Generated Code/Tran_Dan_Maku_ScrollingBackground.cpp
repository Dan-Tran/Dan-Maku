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

IMPLEMENT_OBJECT(ScrollingBackground);

	IMPLEMENT_LIGHT_LUA_VARS(ScrollingBackground)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(ScrollingBackground)
	//GameObject Functions
	ADD_LUA_FCT(ScrollingBackground,Mount)
	ADD_LUA_FCT(ScrollingBackground,GetMount)
	ADD_LUA_FCT(ScrollingBackground,UnMount)
	ADD_LUA_FCT(ScrollingBackground,GetMountsCount)
	ADD_LUA_FCT(ScrollingBackground,IsMounted)
	ADD_LUA_FCT(ScrollingBackground,GetMountSupport)
	ADD_LUA_FCT(ScrollingBackground,GetLayer)
	ADD_LUA_FCT(ScrollingBackground,SetName)
	ADD_LUA_FCT(ScrollingBackground,GetName)
	ADD_LUA_FCT(ScrollingBackground,GetID)
	ADD_LUA_FCT(ScrollingBackground,SetLifeTime)
	ADD_LUA_FCT(ScrollingBackground,GetLifeTime)
	ADD_LUA_FCT(ScrollingBackground,GetAge)
	ADD_LUA_FCT(ScrollingBackground,SetVisible)
	ADD_LUA_FCT(ScrollingBackground,GetVisible)
	ADD_LUA_FCT(ScrollingBackground,IsDestroyed)
	ADD_LUA_FCT(ScrollingBackground,SetPosition)
	ADD_LUA_FCT(ScrollingBackground,SetPositionX)
	ADD_LUA_FCT(ScrollingBackground,SetPositionY)
	ADD_LUA_FCT(ScrollingBackground,GetPosition)
	ADD_LUA_FCT(ScrollingBackground,GetPositionX)
	ADD_LUA_FCT(ScrollingBackground,GetPositionY)
	ADD_LUA_FCT(ScrollingBackground,SetOldPosition)
	ADD_LUA_FCT(ScrollingBackground,SetZOrder)
	ADD_LUA_FCT(ScrollingBackground,GetZOrder)
	ADD_LUA_FCT(ScrollingBackground,SetRotationAngle)
	ADD_LUA_FCT(ScrollingBackground,SetOldRotationAngle)
	ADD_LUA_FCT(ScrollingBackground,GetRotationAngle)
	ADD_LUA_FCT(ScrollingBackground,SetDirection)
	ADD_LUA_FCT(ScrollingBackground,SetDirectionX)
	ADD_LUA_FCT(ScrollingBackground,SetDirectionY)
	ADD_LUA_FCT(ScrollingBackground,GetDirection)
	ADD_LUA_FCT(ScrollingBackground,GetDirectionX)
	ADD_LUA_FCT(ScrollingBackground,GetDirectionY)
	ADD_LUA_FCT(ScrollingBackground,SetScale)
	ADD_LUA_FCT(ScrollingBackground,SetScaleX)
	ADD_LUA_FCT(ScrollingBackground,SetScaleY)
	ADD_LUA_FCT(ScrollingBackground,GetScale)
	ADD_LUA_FCT(ScrollingBackground,GetScaleX)
	ADD_LUA_FCT(ScrollingBackground,GetScaleY)
	ADD_LUA_FCT(ScrollingBackground,SetCenter)
	ADD_LUA_FCT(ScrollingBackground,SetCenterX)
	ADD_LUA_FCT(ScrollingBackground,SetCenterY)
	ADD_LUA_FCT(ScrollingBackground,GetCenter)
	ADD_LUA_FCT(ScrollingBackground,GetCenterX)
	ADD_LUA_FCT(ScrollingBackground,GetCenterY)
	ADD_LUA_FCT(ScrollingBackground,SetModulationColor)
	ADD_LUA_FCT(ScrollingBackground,SetModulationR)
	ADD_LUA_FCT(ScrollingBackground,SetModulationG)
	ADD_LUA_FCT(ScrollingBackground,SetModulationB)
	ADD_LUA_FCT(ScrollingBackground,GetModulationColor)
	ADD_LUA_FCT(ScrollingBackground,GetModulationR)
	ADD_LUA_FCT(ScrollingBackground,GetModulationG)
	ADD_LUA_FCT(ScrollingBackground,GetModulationB)
	ADD_LUA_FCT(ScrollingBackground,SetOpacity)
	ADD_LUA_FCT(ScrollingBackground,GetOpacity)
	ADD_LUA_FCT(ScrollingBackground,AddCollision)
	ADD_LUA_FCT(ScrollingBackground,RemoveCollision)
	ADD_LUA_FCT(ScrollingBackground,ObjectInCollision)
	ADD_LUA_FCT(ScrollingBackground,GetCollisionId)
	ADD_LUA_FCT(ScrollingBackground,GetCollisionObject)
	ADD_LUA_FCT(ScrollingBackground,GetTileMapCollisionObject)
	ADD_LUA_FCT(ScrollingBackground,AddPhysicalProperties)
	ADD_LUA_FCT(ScrollingBackground,RemovePhysicalProperties)
	ADD_LUA_FCT(ScrollingBackground,SetMassProperties)
	ADD_LUA_FCT(ScrollingBackground,GetMassProperties)
	ADD_LUA_FCT(ScrollingBackground,GetCenterOfMass)
	ADD_LUA_FCT(ScrollingBackground,SetVelocity)
	ADD_LUA_FCT(ScrollingBackground,GetVelocity)
	ADD_LUA_FCT(ScrollingBackground,SetAngularVelocity)
	ADD_LUA_FCT(ScrollingBackground,GetAngularVelocity)
	ADD_LUA_FCT(ScrollingBackground,SetSpeed)
	ADD_LUA_FCT(ScrollingBackground,GetSpeed)
	ADD_LUA_FCT(ScrollingBackground,SetVelocityDirection)
	ADD_LUA_FCT(ScrollingBackground,GetVelocityDirection)
	ADD_LUA_FCT(ScrollingBackground,AddForce)
	ADD_LUA_FCT(ScrollingBackground,RemoveForce)
	ADD_LUA_FCT(ScrollingBackground,RemoveAllForces)
	ADD_LUA_FCT(ScrollingBackground,GetPhysicsId)
	ADD_LUA_FCT(ScrollingBackground,GetNetworkKeyboard)
	ADD_LUA_FCT(ScrollingBackground,GetNetworkMouse)
	ADD_LUA_FCT(ScrollingBackground,GetNetworkOwner)
	ADD_LUA_FCT(ScrollingBackground,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(ScrollingBackground,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(ScrollingBackground,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(ScrollingBackground,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(ScrollingBackground,GetCollidedSprite)
	ADD_LUA_FCT(ScrollingBackground,GetCollidedTileMap)
	ADD_LUA_FCT(ScrollingBackground,IsCollidedWithSprite)
	ADD_LUA_FCT(ScrollingBackground,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(ScrollingBackground,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(ScrollingBackground,IsCollidedWithLineSegment)
	ADD_LUA_FCT(ScrollingBackground,IsCollidedWithCircle)
	ADD_LUA_FCT(ScrollingBackground,IsCollidedWithTileMap)
	ADD_LUA_FCT(ScrollingBackground,IsMyLineSegmentCollided)
	ADD_LUA_FCT(ScrollingBackground,IsMyCircleCollided)
	ADD_LUA_FCT(ScrollingBackground,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(ScrollingBackground,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(ScrollingBackground,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(ScrollingBackground,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(ScrollingBackground,GetCollidedCircleData)
	ADD_LUA_FCT(ScrollingBackground,GetCollidedLineSegmentData)
	ADD_LUA_FCT(ScrollingBackground,GetCollidedTileMapData)
	ADD_LUA_FCT(ScrollingBackground,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(ScrollingBackground,SetFlipHorizontal)
	ADD_LUA_FCT(ScrollingBackground,GetFlipHorizontal)
	ADD_LUA_FCT(ScrollingBackground,SetFlipVertical)
	ADD_LUA_FCT(ScrollingBackground,GetFlipVertical)
	ADD_LUA_FCT(ScrollingBackground,GetCurrentFrameDelay)
	ADD_LUA_FCT(ScrollingBackground,GetFrameDelay)
	ADD_LUA_FCT(ScrollingBackground,GetFramesCount)
	ADD_LUA_FCT(ScrollingBackground,GetFrameWidth)
	ADD_LUA_FCT(ScrollingBackground,GetFrameHeight)
	ADD_LUA_FCT(ScrollingBackground,SetCurrentFrameIndex)
	ADD_LUA_FCT(ScrollingBackground,GetCurrentFrameIndex)
    ADD_LUA_FCT(ScrollingBackground,IsEndOfAnimation)
	ADD_LUA_FCT(ScrollingBackground,SetLoop)
	ADD_LUA_FCT(ScrollingBackground,GetLoop)
	ADD_LUA_FCT(ScrollingBackground,GoToFirstFrame)
	ADD_LUA_FCT(ScrollingBackground,GoToLastFrame)
	ADD_LUA_FCT(ScrollingBackground,SetAnimationSpeed)
	ADD_LUA_FCT(ScrollingBackground,GetAnimationSpeed)
	ADD_LUA_FCT(ScrollingBackground,Play)
	ADD_LUA_FCT(ScrollingBackground,Stop)
	ADD_LUA_FCT(ScrollingBackground,IsPlaying)
	ADD_LUA_FCT(ScrollingBackground,Pause)
	ADD_LUA_FCT(ScrollingBackground,IsPaused)
	ADD_LUA_FCT(ScrollingBackground,GetAnimationsCount)
	ADD_LUA_FCT(ScrollingBackground,SetCurrentAnimationIndex)
	ADD_LUA_FCT(ScrollingBackground,GetCurrentAnimationIndex)
	ADD_LUA_FCT(ScrollingBackground,SetCurrentAnimationName)
	ADD_LUA_FCT(ScrollingBackground,GetCurrentAnimationName)
	ADD_LUA_FCT(ScrollingBackground,IsInViewport)
	ADD_LUA_FCT(ScrollingBackground,SetHUDObject)
	ADD_LUA_FCT(ScrollingBackground,IsHUDObject)
	ADD_LUA_FCT(ScrollingBackground,SetCollisionActorIndex)
	ADD_LUA_FCT(ScrollingBackground,SetVisibleCollisionData)
	ADD_LUA_FCT(ScrollingBackground,GetVisibleCollisionData)
	ADD_LUA_FCT(ScrollingBackground,SetCollisionDataColor)
	ADD_LUA_FCT(ScrollingBackground,GetCollisionDataColor)
	ADD_LUA_FCT(ScrollingBackground,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(ScrollingBackground,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(ScrollingBackground,SetBoundingRectangleColor)
	ADD_LUA_FCT(ScrollingBackground,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(ScrollingBackground)
END_STRUCTURE

START_CLASS_OPERATORS(ScrollingBackground)
END_STRUCTURE
//END LUA SPECIFIC
ScrollingBackground::ScrollingBackground():Sprite()
{ 

}
ScrollingBackground::ScrollingBackground(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ScrollingBackground::ScrollingBackground(const ScrollingBackground & other):Sprite(other)
{
	OnClone(other);


}

ScrollingBackground *ScrollingBackground::Clone()
{
	return new ScrollingBackground(*this);
}

void ScrollingBackground::Update(float dt) 
{
// Generated Code //

// user code//
SetPositionY(GetPositionY() - 0.25f);

if (GetPositionY() <= -1158)
{
	SetPositionY(2418);
}

Level1* l = (Level1*)GetMyGame()->GetCurrentLevel();

if (l->pathIdentifier1 >= 20)
{
	SetCurrentAnimationIndex(1);
}
else
{
	SetCurrentAnimationIndex(0);
}
}

void ScrollingBackground::Destroy() 
{
	Sprite::Destroy();

}

void ScrollingBackground::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void ScrollingBackground::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void ScrollingBackground::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void ScrollingBackground::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void ScrollingBackground::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void ScrollingBackground::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void ScrollingBackground::OnStart() 
{

}

void ScrollingBackground::OnEnd() 
{

}

void ScrollingBackground::OnClone(const ScrollingBackground & other) 
{

}

 ScrollingBackground::~ScrollingBackground() 
{

}



