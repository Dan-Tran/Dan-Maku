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

IMPLEMENT_OBJECT(EnemyClass);

	IMPLEMENT_LIGHT_LUA_VARS(EnemyClass)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);






	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_NotPath1");
	NotPath1.SetCurve(plp0);
	NotPath1.SetPosition(0.0f);
	NotPath1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	NotPath1.SetSpeed(100.0f);
	NotPath1.SetLoop(true);



END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(EnemyClass)
	//GameObject Functions
	ADD_LUA_FCT(EnemyClass,Mount)
	ADD_LUA_FCT(EnemyClass,GetMount)
	ADD_LUA_FCT(EnemyClass,UnMount)
	ADD_LUA_FCT(EnemyClass,GetMountsCount)
	ADD_LUA_FCT(EnemyClass,IsMounted)
	ADD_LUA_FCT(EnemyClass,GetMountSupport)
	ADD_LUA_FCT(EnemyClass,GetLayer)
	ADD_LUA_FCT(EnemyClass,SetName)
	ADD_LUA_FCT(EnemyClass,GetName)
	ADD_LUA_FCT(EnemyClass,GetID)
	ADD_LUA_FCT(EnemyClass,SetLifeTime)
	ADD_LUA_FCT(EnemyClass,GetLifeTime)
	ADD_LUA_FCT(EnemyClass,GetAge)
	ADD_LUA_FCT(EnemyClass,SetVisible)
	ADD_LUA_FCT(EnemyClass,GetVisible)
	ADD_LUA_FCT(EnemyClass,IsDestroyed)
	ADD_LUA_FCT(EnemyClass,SetPosition)
	ADD_LUA_FCT(EnemyClass,SetPositionX)
	ADD_LUA_FCT(EnemyClass,SetPositionY)
	ADD_LUA_FCT(EnemyClass,GetPosition)
	ADD_LUA_FCT(EnemyClass,GetPositionX)
	ADD_LUA_FCT(EnemyClass,GetPositionY)
	ADD_LUA_FCT(EnemyClass,SetOldPosition)
	ADD_LUA_FCT(EnemyClass,SetZOrder)
	ADD_LUA_FCT(EnemyClass,GetZOrder)
	ADD_LUA_FCT(EnemyClass,SetRotationAngle)
	ADD_LUA_FCT(EnemyClass,SetOldRotationAngle)
	ADD_LUA_FCT(EnemyClass,GetRotationAngle)
	ADD_LUA_FCT(EnemyClass,SetDirection)
	ADD_LUA_FCT(EnemyClass,SetDirectionX)
	ADD_LUA_FCT(EnemyClass,SetDirectionY)
	ADD_LUA_FCT(EnemyClass,GetDirection)
	ADD_LUA_FCT(EnemyClass,GetDirectionX)
	ADD_LUA_FCT(EnemyClass,GetDirectionY)
	ADD_LUA_FCT(EnemyClass,SetScale)
	ADD_LUA_FCT(EnemyClass,SetScaleX)
	ADD_LUA_FCT(EnemyClass,SetScaleY)
	ADD_LUA_FCT(EnemyClass,GetScale)
	ADD_LUA_FCT(EnemyClass,GetScaleX)
	ADD_LUA_FCT(EnemyClass,GetScaleY)
	ADD_LUA_FCT(EnemyClass,SetCenter)
	ADD_LUA_FCT(EnemyClass,SetCenterX)
	ADD_LUA_FCT(EnemyClass,SetCenterY)
	ADD_LUA_FCT(EnemyClass,GetCenter)
	ADD_LUA_FCT(EnemyClass,GetCenterX)
	ADD_LUA_FCT(EnemyClass,GetCenterY)
	ADD_LUA_FCT(EnemyClass,SetModulationColor)
	ADD_LUA_FCT(EnemyClass,SetModulationR)
	ADD_LUA_FCT(EnemyClass,SetModulationG)
	ADD_LUA_FCT(EnemyClass,SetModulationB)
	ADD_LUA_FCT(EnemyClass,GetModulationColor)
	ADD_LUA_FCT(EnemyClass,GetModulationR)
	ADD_LUA_FCT(EnemyClass,GetModulationG)
	ADD_LUA_FCT(EnemyClass,GetModulationB)
	ADD_LUA_FCT(EnemyClass,SetOpacity)
	ADD_LUA_FCT(EnemyClass,GetOpacity)
	ADD_LUA_FCT(EnemyClass,AddCollision)
	ADD_LUA_FCT(EnemyClass,RemoveCollision)
	ADD_LUA_FCT(EnemyClass,ObjectInCollision)
	ADD_LUA_FCT(EnemyClass,GetCollisionId)
	ADD_LUA_FCT(EnemyClass,GetCollisionObject)
	ADD_LUA_FCT(EnemyClass,GetTileMapCollisionObject)
	ADD_LUA_FCT(EnemyClass,AddPhysicalProperties)
	ADD_LUA_FCT(EnemyClass,RemovePhysicalProperties)
	ADD_LUA_FCT(EnemyClass,SetMassProperties)
	ADD_LUA_FCT(EnemyClass,GetMassProperties)
	ADD_LUA_FCT(EnemyClass,GetCenterOfMass)
	ADD_LUA_FCT(EnemyClass,SetVelocity)
	ADD_LUA_FCT(EnemyClass,GetVelocity)
	ADD_LUA_FCT(EnemyClass,SetAngularVelocity)
	ADD_LUA_FCT(EnemyClass,GetAngularVelocity)
	ADD_LUA_FCT(EnemyClass,SetSpeed)
	ADD_LUA_FCT(EnemyClass,GetSpeed)
	ADD_LUA_FCT(EnemyClass,SetVelocityDirection)
	ADD_LUA_FCT(EnemyClass,GetVelocityDirection)
	ADD_LUA_FCT(EnemyClass,AddForce)
	ADD_LUA_FCT(EnemyClass,RemoveForce)
	ADD_LUA_FCT(EnemyClass,RemoveAllForces)
	ADD_LUA_FCT(EnemyClass,GetPhysicsId)
	ADD_LUA_FCT(EnemyClass,GetNetworkKeyboard)
	ADD_LUA_FCT(EnemyClass,GetNetworkMouse)
	ADD_LUA_FCT(EnemyClass,GetNetworkOwner)
	ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(EnemyClass,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(EnemyClass,GetCollidedSprite)
	ADD_LUA_FCT(EnemyClass,GetCollidedTileMap)
	ADD_LUA_FCT(EnemyClass,IsCollidedWithSprite)
	ADD_LUA_FCT(EnemyClass,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(EnemyClass,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(EnemyClass,IsCollidedWithLineSegment)
	ADD_LUA_FCT(EnemyClass,IsCollidedWithCircle)
	ADD_LUA_FCT(EnemyClass,IsCollidedWithTileMap)
	ADD_LUA_FCT(EnemyClass,IsMyLineSegmentCollided)
	ADD_LUA_FCT(EnemyClass,IsMyCircleCollided)
	ADD_LUA_FCT(EnemyClass,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyClass,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyClass,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyClass,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyClass,GetCollidedCircleData)
	ADD_LUA_FCT(EnemyClass,GetCollidedLineSegmentData)
	ADD_LUA_FCT(EnemyClass,GetCollidedTileMapData)
	ADD_LUA_FCT(EnemyClass,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(EnemyClass,SetFlipHorizontal)
	ADD_LUA_FCT(EnemyClass,GetFlipHorizontal)
	ADD_LUA_FCT(EnemyClass,SetFlipVertical)
	ADD_LUA_FCT(EnemyClass,GetFlipVertical)
	ADD_LUA_FCT(EnemyClass,GetCurrentFrameDelay)
	ADD_LUA_FCT(EnemyClass,GetFrameDelay)
	ADD_LUA_FCT(EnemyClass,GetFramesCount)
	ADD_LUA_FCT(EnemyClass,GetFrameWidth)
	ADD_LUA_FCT(EnemyClass,GetFrameHeight)
	ADD_LUA_FCT(EnemyClass,SetCurrentFrameIndex)
	ADD_LUA_FCT(EnemyClass,GetCurrentFrameIndex)
    ADD_LUA_FCT(EnemyClass,IsEndOfAnimation)
	ADD_LUA_FCT(EnemyClass,SetLoop)
	ADD_LUA_FCT(EnemyClass,GetLoop)
	ADD_LUA_FCT(EnemyClass,GoToFirstFrame)
	ADD_LUA_FCT(EnemyClass,GoToLastFrame)
	ADD_LUA_FCT(EnemyClass,SetAnimationSpeed)
	ADD_LUA_FCT(EnemyClass,GetAnimationSpeed)
	ADD_LUA_FCT(EnemyClass,Play)
	ADD_LUA_FCT(EnemyClass,Stop)
	ADD_LUA_FCT(EnemyClass,IsPlaying)
	ADD_LUA_FCT(EnemyClass,Pause)
	ADD_LUA_FCT(EnemyClass,IsPaused)
	ADD_LUA_FCT(EnemyClass,GetAnimationsCount)
	ADD_LUA_FCT(EnemyClass,SetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyClass,GetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyClass,SetCurrentAnimationName)
	ADD_LUA_FCT(EnemyClass,GetCurrentAnimationName)
	ADD_LUA_FCT(EnemyClass,IsInViewport)
	ADD_LUA_FCT(EnemyClass,SetHUDObject)
	ADD_LUA_FCT(EnemyClass,IsHUDObject)
	ADD_LUA_FCT(EnemyClass,SetCollisionActorIndex)
	ADD_LUA_FCT(EnemyClass,SetVisibleCollisionData)
	ADD_LUA_FCT(EnemyClass,GetVisibleCollisionData)
	ADD_LUA_FCT(EnemyClass,SetCollisionDataColor)
	ADD_LUA_FCT(EnemyClass,GetCollisionDataColor)
	ADD_LUA_FCT(EnemyClass,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyClass,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyClass,SetBoundingRectangleColor)
	ADD_LUA_FCT(EnemyClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(EnemyClass)
END_STRUCTURE

START_CLASS_OPERATORS(EnemyClass)
END_STRUCTURE
//END LUA SPECIFIC
EnemyClass::EnemyClass():Sprite()
{ 

}
EnemyClass::EnemyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{




	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_NotPath1");
	NotPath1.SetCurve(plp0);
	NotPath1.SetPosition(0.0f);
	NotPath1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	NotPath1.SetSpeed(100.0f);
	NotPath1.SetLoop(true);


}

EnemyClass::EnemyClass(const EnemyClass & other):Sprite(other)
{
	OnClone(other);

	NotPath1 = other.NotPath1;

}

EnemyClass *EnemyClass::Clone()
{
	return new EnemyClass(*this);
}

void EnemyClass::Update(float dt) 
{
// Generated Code //

// user code//
if (GetCollisionInfo().IsCollidedWithSprite("PBullet", false))
{
	Destroy();
}

//EnemyMovement();

Vector2D dir;
Point2D pos;
NotPath1.GetPositionAndDirection(dt, pos, dir);
SetPosition(pos);

}

void EnemyClass::Destroy() 
{
	Sprite::Destroy();

}

void EnemyClass::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save Pathes //
	file << NotPath1;



}

void EnemyClass::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load Pathes //
	file >> NotPath1;



}

void EnemyClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void EnemyClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void EnemyClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void EnemyClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void EnemyClass::OnStart() 
{

}

void EnemyClass::OnEnd() 
{

}

void EnemyClass::OnClone(const EnemyClass & other) 
{

}

void EnemyClass::EnemyMovement() 
{
// Generated Code //

// user code//
//Level1* level = (Level1*)GetMyGame()->GetCurrentLevel();

//time = level->timer;

//if (time == 60)
//{
	//Path(1);
//}
}

void EnemyClass::Path(int t) 
{
// Generated Code //

// user code//
//Vector2D dir;
//Point2D pos;

//bool activate = false;

//if (t = 1)
//{
	//Path1.GetPositionAndDirection(dt, pos, dir);
	//activate = true;
//}



//if (activate)
//{
	//SetPosition(pos);
	//activate = false;
//}
}

 EnemyClass::~EnemyClass() 
{

}



