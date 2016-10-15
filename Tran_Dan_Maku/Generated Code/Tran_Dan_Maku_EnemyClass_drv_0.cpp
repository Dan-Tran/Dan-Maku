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

IMPLEMENT_OBJECT(EnemyClass_drv_0);

	IMPLEMENT_LIGHT_LUA_VARS_INHERITED(EnemyClass_drv_0, EnemyClass)





	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_DrvPath1");
	DrvPath1.SetCurve(plp0);
	DrvPath1.SetPosition(0.0f);
	DrvPath1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	DrvPath1.SetSpeed(100.0f);
	DrvPath1.SetLoop(false);

	PolylinePathPtr plp1 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P1");
	P1.SetCurve(plp1);
	P1.SetPosition(0.0f);
	P1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P1.SetSpeed(100.0f);
	P1.SetLoop(false);

	PolylinePathPtr plp2 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P2");
	P2.SetCurve(plp2);
	P2.SetPosition(0.0f);
	P2.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P2.SetSpeed(100.0f);
	P2.SetLoop(false);

	PolylinePathPtr plp3 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P4");
	P4.SetCurve(plp3);
	P4.SetPosition(0.0f);
	P4.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P4.SetSpeed(200.0f);
	P4.SetLoop(false);

	PolylinePathPtr plp4 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P6");
	P6.SetCurve(plp4);
	P6.SetPosition(0.0f);
	P6.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P6.SetSpeed(100.0f);
	P6.SetLoop(false);

	PolylinePathPtr plp5 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P8");
	P8.SetCurve(plp5);
	P8.SetPosition(0.0f);
	P8.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P8.SetSpeed(150.0f);
	P8.SetLoop(false);

	PolylinePathPtr plp6 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P10");
	P10.SetCurve(plp6);
	P10.SetPosition(0.0f);
	P10.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P10.SetSpeed(150.0f);
	P10.SetLoop(false);

	PolylinePathPtr plp7 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P12");
	P12.SetCurve(plp7);
	P12.SetPosition(0.0f);
	P12.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P12.SetSpeed(100.0f);
	P12.SetLoop(false);

	PolylinePathPtr plp8 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P14");
	P14.SetCurve(plp8);
	P14.SetPosition(0.0f);
	P14.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P14.SetSpeed(100.0f);
	P14.SetLoop(false);

	PolylinePathPtr plp9 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P16");
	P16.SetCurve(plp9);
	P16.SetPosition(0.0f);
	P16.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P16.SetSpeed(100.0f);
	P16.SetLoop(false);

	PolylinePathPtr plp10 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P18");
	P18.SetCurve(plp10);
	P18.SetPosition(0.0f);
	P18.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P18.SetSpeed(100.0f);
	P18.SetLoop(false);



END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(EnemyClass_drv_0)
	//GameObject Functions
	ADD_LUA_FCT(EnemyClass_drv_0,Mount)
	ADD_LUA_FCT(EnemyClass_drv_0,GetMount)
	ADD_LUA_FCT(EnemyClass_drv_0,UnMount)
	ADD_LUA_FCT(EnemyClass_drv_0,GetMountsCount)
	ADD_LUA_FCT(EnemyClass_drv_0,IsMounted)
	ADD_LUA_FCT(EnemyClass_drv_0,GetMountSupport)
	ADD_LUA_FCT(EnemyClass_drv_0,GetLayer)
	ADD_LUA_FCT(EnemyClass_drv_0,SetName)
	ADD_LUA_FCT(EnemyClass_drv_0,GetName)
	ADD_LUA_FCT(EnemyClass_drv_0,GetID)
	ADD_LUA_FCT(EnemyClass_drv_0,SetLifeTime)
	ADD_LUA_FCT(EnemyClass_drv_0,GetLifeTime)
	ADD_LUA_FCT(EnemyClass_drv_0,GetAge)
	ADD_LUA_FCT(EnemyClass_drv_0,SetVisible)
	ADD_LUA_FCT(EnemyClass_drv_0,GetVisible)
	ADD_LUA_FCT(EnemyClass_drv_0,IsDestroyed)
	ADD_LUA_FCT(EnemyClass_drv_0,SetPosition)
	ADD_LUA_FCT(EnemyClass_drv_0,SetPositionX)
	ADD_LUA_FCT(EnemyClass_drv_0,SetPositionY)
	ADD_LUA_FCT(EnemyClass_drv_0,GetPosition)
	ADD_LUA_FCT(EnemyClass_drv_0,GetPositionX)
	ADD_LUA_FCT(EnemyClass_drv_0,GetPositionY)
	ADD_LUA_FCT(EnemyClass_drv_0,SetOldPosition)
	ADD_LUA_FCT(EnemyClass_drv_0,SetZOrder)
	ADD_LUA_FCT(EnemyClass_drv_0,GetZOrder)
	ADD_LUA_FCT(EnemyClass_drv_0,SetRotationAngle)
	ADD_LUA_FCT(EnemyClass_drv_0,SetOldRotationAngle)
	ADD_LUA_FCT(EnemyClass_drv_0,GetRotationAngle)
	ADD_LUA_FCT(EnemyClass_drv_0,SetDirection)
	ADD_LUA_FCT(EnemyClass_drv_0,SetDirectionX)
	ADD_LUA_FCT(EnemyClass_drv_0,SetDirectionY)
	ADD_LUA_FCT(EnemyClass_drv_0,GetDirection)
	ADD_LUA_FCT(EnemyClass_drv_0,GetDirectionX)
	ADD_LUA_FCT(EnemyClass_drv_0,GetDirectionY)
	ADD_LUA_FCT(EnemyClass_drv_0,SetScale)
	ADD_LUA_FCT(EnemyClass_drv_0,SetScaleX)
	ADD_LUA_FCT(EnemyClass_drv_0,SetScaleY)
	ADD_LUA_FCT(EnemyClass_drv_0,GetScale)
	ADD_LUA_FCT(EnemyClass_drv_0,GetScaleX)
	ADD_LUA_FCT(EnemyClass_drv_0,GetScaleY)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCenter)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCenterX)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCenterY)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCenter)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCenterX)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCenterY)
	ADD_LUA_FCT(EnemyClass_drv_0,SetModulationColor)
	ADD_LUA_FCT(EnemyClass_drv_0,SetModulationR)
	ADD_LUA_FCT(EnemyClass_drv_0,SetModulationG)
	ADD_LUA_FCT(EnemyClass_drv_0,SetModulationB)
	ADD_LUA_FCT(EnemyClass_drv_0,GetModulationColor)
	ADD_LUA_FCT(EnemyClass_drv_0,GetModulationR)
	ADD_LUA_FCT(EnemyClass_drv_0,GetModulationG)
	ADD_LUA_FCT(EnemyClass_drv_0,GetModulationB)
	ADD_LUA_FCT(EnemyClass_drv_0,SetOpacity)
	ADD_LUA_FCT(EnemyClass_drv_0,GetOpacity)
	ADD_LUA_FCT(EnemyClass_drv_0,AddCollision)
	ADD_LUA_FCT(EnemyClass_drv_0,RemoveCollision)
	ADD_LUA_FCT(EnemyClass_drv_0,ObjectInCollision)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollisionId)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollisionObject)
	ADD_LUA_FCT(EnemyClass_drv_0,GetTileMapCollisionObject)
	ADD_LUA_FCT(EnemyClass_drv_0,AddPhysicalProperties)
	ADD_LUA_FCT(EnemyClass_drv_0,RemovePhysicalProperties)
	ADD_LUA_FCT(EnemyClass_drv_0,SetMassProperties)
	ADD_LUA_FCT(EnemyClass_drv_0,GetMassProperties)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCenterOfMass)
	ADD_LUA_FCT(EnemyClass_drv_0,SetVelocity)
	ADD_LUA_FCT(EnemyClass_drv_0,GetVelocity)
	ADD_LUA_FCT(EnemyClass_drv_0,SetAngularVelocity)
	ADD_LUA_FCT(EnemyClass_drv_0,GetAngularVelocity)
	ADD_LUA_FCT(EnemyClass_drv_0,SetSpeed)
	ADD_LUA_FCT(EnemyClass_drv_0,GetSpeed)
	ADD_LUA_FCT(EnemyClass_drv_0,SetVelocityDirection)
	ADD_LUA_FCT(EnemyClass_drv_0,GetVelocityDirection)
	ADD_LUA_FCT(EnemyClass_drv_0,AddForce)
	ADD_LUA_FCT(EnemyClass_drv_0,RemoveForce)
	ADD_LUA_FCT(EnemyClass_drv_0,RemoveAllForces)
	ADD_LUA_FCT(EnemyClass_drv_0,GetPhysicsId)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNetworkKeyboard)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNetworkMouse)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNetworkOwner)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(EnemyClass_drv_0,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollidedSprite)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollidedTileMap)
	ADD_LUA_FCT(EnemyClass_drv_0,IsCollidedWithSprite)
	ADD_LUA_FCT(EnemyClass_drv_0,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(EnemyClass_drv_0,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(EnemyClass_drv_0,IsCollidedWithLineSegment)
	ADD_LUA_FCT(EnemyClass_drv_0,IsCollidedWithCircle)
	ADD_LUA_FCT(EnemyClass_drv_0,IsCollidedWithTileMap)
	ADD_LUA_FCT(EnemyClass_drv_0,IsMyLineSegmentCollided)
	ADD_LUA_FCT(EnemyClass_drv_0,IsMyCircleCollided)
	ADD_LUA_FCT(EnemyClass_drv_0,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_0,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_0,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyClass_drv_0,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollidedCircleData)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollidedLineSegmentData)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollidedTileMapData)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(EnemyClass_drv_0,SetFlipHorizontal)
	ADD_LUA_FCT(EnemyClass_drv_0,GetFlipHorizontal)
	ADD_LUA_FCT(EnemyClass_drv_0,SetFlipVertical)
	ADD_LUA_FCT(EnemyClass_drv_0,GetFlipVertical)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCurrentFrameDelay)
	ADD_LUA_FCT(EnemyClass_drv_0,GetFrameDelay)
	ADD_LUA_FCT(EnemyClass_drv_0,GetFramesCount)
	ADD_LUA_FCT(EnemyClass_drv_0,GetFrameWidth)
	ADD_LUA_FCT(EnemyClass_drv_0,GetFrameHeight)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCurrentFrameIndex)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCurrentFrameIndex)
    ADD_LUA_FCT(EnemyClass_drv_0,IsEndOfAnimation)
	ADD_LUA_FCT(EnemyClass_drv_0,SetLoop)
	ADD_LUA_FCT(EnemyClass_drv_0,GetLoop)
	ADD_LUA_FCT(EnemyClass_drv_0,GoToFirstFrame)
	ADD_LUA_FCT(EnemyClass_drv_0,GoToLastFrame)
	ADD_LUA_FCT(EnemyClass_drv_0,SetAnimationSpeed)
	ADD_LUA_FCT(EnemyClass_drv_0,GetAnimationSpeed)
	ADD_LUA_FCT(EnemyClass_drv_0,Play)
	ADD_LUA_FCT(EnemyClass_drv_0,Stop)
	ADD_LUA_FCT(EnemyClass_drv_0,IsPlaying)
	ADD_LUA_FCT(EnemyClass_drv_0,Pause)
	ADD_LUA_FCT(EnemyClass_drv_0,IsPaused)
	ADD_LUA_FCT(EnemyClass_drv_0,GetAnimationsCount)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCurrentAnimationName)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCurrentAnimationName)
	ADD_LUA_FCT(EnemyClass_drv_0,IsInViewport)
	ADD_LUA_FCT(EnemyClass_drv_0,SetHUDObject)
	ADD_LUA_FCT(EnemyClass_drv_0,IsHUDObject)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCollisionActorIndex)
	ADD_LUA_FCT(EnemyClass_drv_0,SetVisibleCollisionData)
	ADD_LUA_FCT(EnemyClass_drv_0,GetVisibleCollisionData)
	ADD_LUA_FCT(EnemyClass_drv_0,SetCollisionDataColor)
	ADD_LUA_FCT(EnemyClass_drv_0,GetCollisionDataColor)
	ADD_LUA_FCT(EnemyClass_drv_0,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_0,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_0,SetBoundingRectangleColor)
	ADD_LUA_FCT(EnemyClass_drv_0,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(EnemyClass_drv_0)
END_STRUCTURE

START_CLASS_OPERATORS(EnemyClass_drv_0)
END_STRUCTURE
//END LUA SPECIFIC
EnemyClass_drv_0::EnemyClass_drv_0():EnemyClass()
{ 

}
EnemyClass_drv_0::EnemyClass_drv_0(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):EnemyClass(animations)
{




	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_DrvPath1");
	DrvPath1.SetCurve(plp0);
	DrvPath1.SetPosition(0.0f);
	DrvPath1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	DrvPath1.SetSpeed(100.0f);
	DrvPath1.SetLoop(false);

	PolylinePathPtr plp1 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P1");
	P1.SetCurve(plp1);
	P1.SetPosition(0.0f);
	P1.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P1.SetSpeed(100.0f);
	P1.SetLoop(false);

	PolylinePathPtr plp2 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P2");
	P2.SetCurve(plp2);
	P2.SetPosition(0.0f);
	P2.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P2.SetSpeed(100.0f);
	P2.SetLoop(false);

	PolylinePathPtr plp3 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P4");
	P4.SetCurve(plp3);
	P4.SetPosition(0.0f);
	P4.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P4.SetSpeed(200.0f);
	P4.SetLoop(false);

	PolylinePathPtr plp4 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P6");
	P6.SetCurve(plp4);
	P6.SetPosition(0.0f);
	P6.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P6.SetSpeed(100.0f);
	P6.SetLoop(false);

	PolylinePathPtr plp5 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P8");
	P8.SetCurve(plp5);
	P8.SetPosition(0.0f);
	P8.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P8.SetSpeed(150.0f);
	P8.SetLoop(false);

	PolylinePathPtr plp6 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P10");
	P10.SetCurve(plp6);
	P10.SetPosition(0.0f);
	P10.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P10.SetSpeed(150.0f);
	P10.SetLoop(false);

	PolylinePathPtr plp7 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P12");
	P12.SetCurve(plp7);
	P12.SetPosition(0.0f);
	P12.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P12.SetSpeed(100.0f);
	P12.SetLoop(false);

	PolylinePathPtr plp8 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P14");
	P14.SetCurve(plp8);
	P14.SetPosition(0.0f);
	P14.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P14.SetSpeed(100.0f);
	P14.SetLoop(false);

	PolylinePathPtr plp9 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P16");
	P16.SetCurve(plp9);
	P16.SetPosition(0.0f);
	P16.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P16.SetSpeed(100.0f);
	P16.SetLoop(false);

	PolylinePathPtr plp10 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_0_P18");
	P18.SetCurve(plp10);
	P18.SetPosition(0.0f);
	P18.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P18.SetSpeed(100.0f);
	P18.SetLoop(false);


}

EnemyClass_drv_0::EnemyClass_drv_0(const EnemyClass_drv_0 & other):EnemyClass(other)
{
	OnClone(other);

	DrvPath1 = other.DrvPath1;
	P1 = other.P1;
	P2 = other.P2;
	P4 = other.P4;
	P6 = other.P6;
	P8 = other.P8;
	P10 = other.P10;
	P12 = other.P12;
	P14 = other.P14;
	P16 = other.P16;
	P18 = other.P18;

}

EnemyClass_drv_0 *EnemyClass_drv_0::Clone()
{
	return new EnemyClass_drv_0(*this);
}

void EnemyClass_drv_0::Timer() 
{
// Generated Code //

// user code//
Level1* level = (Level1*)GetMyGame()->GetCurrentLevel();

time = level->timer;

if (time == 60)
{
	p = 1;
	i = 0;
}

if (time == 120)
{
	p = 1;
	i = 0;
}

if (time == 180)
{
	p = 1;
	i = 0;
}

if (time == 420)
{
	p = 1;
	i = 0;
}

if (time == 480)
{
	p = 1;
	i = 0;
}

if (time == 780)
{
	p = 5;
	i = 1;
}

if (time == 840)
{
	p = 5;
	i = 1;
}

if (time == 900)
{
	p = 5;
	i = 1;
}

if (time == 1200)
{
	p = 25;
	i = 0;
}

if (time == 1620)
{
	p = 100;
	i = 1;
}

if (time == 2460)
{
	p = 10;
	i = 0;
}


if (time == 2520)
{
	p = 10;
	i = 0;
}


if (time == 2580)
{
	p = 10;
	i = 0;
}

if (time == 2900)
{
	p = 1;
	i = 1;
}

if (time == 2960)
{
	p = 1;
	i = 1;
}

if (time == 3020)
{
	p = 1;
	i = 1;
}

if (time == 3380)
{
	p = 100;
	i = 0;
}

if (time == 5240)
{
	p = 15;
	i = 1;
}

if (time == 5660)
{
	p = 15;
	i = 1;
}

if (time == 7140)
{
	p = 50;
	i = 0;
}

if (time == 7620)
{
	p = 15;
	i = 1;
}

if (time == 8100)
{
	p = 25;
	i = 0;
}

if (time == 8580)
{
	p = 50;
	i = 0;
}
}

void EnemyClass_drv_0::Update(float dt) 
{
// Generated Code //

// user code//
Destruction();

Timer();

Cloning();

Level1* level = (Level1*)GetMyGame()->GetCurrentLevel();

Vector2D dir;
Point2D pos;

//--------------- Path Assignments --------------\\

if ((GetVisible()) && (level->pathIdentifier1 == 0))
{
	Path1.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 1000)
	{
		Bullet(0.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(-1.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 0, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if (GetVisible() && (level->pathIdentifier1 == 1))
{
	Path2.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 1000)
	{
		Bullet(0.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(-1.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 0, 0.0f);
		lifetime = timeGetTime();
	}
}

if (GetVisible() && (level->pathIdentifier1 == 2))
{
	Path4.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 1000)
	{
		Bullet(0.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(-1.0f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(0.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.5f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(1.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.5f, -1.0f, 10.0f, 0, 0.0f);
		lifetime = timeGetTime();
	}
}

if ((GetVisible()) && (level->pathIdentifier1 == 3))
{
	DrvPath1.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 250)
	{
		Bullet(0.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if (GetVisible() && (level->pathIdentifier1 == 4))
{
	P1.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime2 > 125)
	{
		angle += 10.0f;
		Bullet(-0.0f, -1.0f, 20.0f, 0, angle);
		Bullet(-0.0f, -1.0f, 20.0f, 0, (angle + 180.0f));
		lifetime2 = timeGetTime();
	}

	if (timeGetTime() - lifetime > 125)
	{
		Bullet(0.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(-1.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(0.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.5f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
	}
}

if (GetVisible() && (level->pathIdentifier1 == 5))
{
	Destroy();
	angle = 0.0f;
}
else if (level->pathIdentifier1 == 5) angle = 0.0f;

if (GetVisible() && (level->pathIdentifier1 == 6))
{
	P2.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 350)
	{
		Bullet(0.5f, -1.0f, 10.0f, 0, 0.0f);
		Bullet(-0.5f, -1.0f, 10.0f, 0, 0.0f);
		lifetime = timeGetTime();
	}
}

if (GetVisible() && (level->pathIdentifier1 == 7))
{
	P4.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 250)
	{
		angle +=10;
		Bullet(0.0f, -1.0f, 10.0f, 0, angle);
		Bullet(-0.0f, -1.0f, 10.0f, 0, (angle + 180.0f));
		lifetime = timeGetTime();
	}
}

if (level->pathIdentifier1 == 8) angle = 0.0f;

if (GetVisible() && (level->pathIdentifier1 == 9))
{
	P6.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 250)
	{
		angle -=10;
		Bullet(0.0f, -1.0f, 5.0f, 0, angle);
		Bullet(-0.0f, -1.0f,5.0f, 0, (angle + 180.0f));
		Bullet(-0.0f, -1.0f,5.0f, 0, (angle + 90.0f));
		Bullet(-0.0f, -1.0f,5.0f, 0, (angle + 270.0f));
		lifetime = timeGetTime();
	}
}

if (GetVisible() && level->pathIdentifier1 == 10)
{
	Destroy();
	angle = 0.0f;
}
else if (level->pathIdentifier1 == 10) angle = 0.0f;

if ((GetVisible()) && (level->pathIdentifier1 == 11))
{
	P8.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 250)
	{
		Bullet(1.0f, 0.0f, 10.0f, 1, 0.0f);
		Bullet(-1.0f, 0.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if ((GetVisible()) && (level->pathIdentifier1 == 12))
{
	P10.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 250)
	{
		Bullet(0.0f, 1.0f, 10.0f, 1, 0.0f);
		Bullet(0.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if (GetVisible() && (level->pathIdentifier1 == 15))
{
	P12.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 500)
	{
		Bullet(-1.0f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.0f, 1.0f, 10.0f, 0, 0.0f);
		Bullet(1.0f, 1.0f, 10.0f, 0, 0.0f);
		lifetime = timeGetTime();
	}
}

if ((GetVisible()) && (level->pathIdentifier1 == 16))
{
	P14.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 500)
	{
		Bullet(1.0f, 0.0f, 20.0f, 1, 0.0f);
		Bullet(1.0f, 1.0f, 10.0f, 1, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if ((GetVisible()) && (level->pathIdentifier1 == 17))
{
	P16.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 350)
	{
		Bullet(0.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if (GetVisible() && (level->pathIdentifier1 == 18))
{
	P18.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 50)
	{
		angle -= 3;
		Bullet(0.0f, -1.0f, 50.0f, 0, angle);
		Bullet(-0.0f, -1.0f,50.0f, 0, (angle + 180.0f));
		Bullet(-0.0f, -1.0f,50.0f, 0, (angle + 90.0f));
		Bullet(-0.0f, -1.0f,50.0f, 0, (angle + 270.0f));
		lifetime = timeGetTime();
	}
}

if (GetVisible() && level->pathIdentifier1 == 19)
{
	Destroy();
	angle = 0.0f;
}
else if (level->pathIdentifier1 == 19) angle = 0.0f;

}

void EnemyClass_drv_0::Destroy() 
{
	EnemyClass::Destroy();

}

void EnemyClass_drv_0::Save(Core::File & file)  const
{
	EnemyClass::Save(file);


	// save Pathes //
	file << DrvPath1;
	file << P1;
	file << P2;
	file << P4;
	file << P6;
	file << P8;
	file << P10;
	file << P12;
	file << P14;
	file << P16;
	file << P18;



}

void EnemyClass_drv_0::Load(Core::File & file) 
{
	EnemyClass::Load(file);

	// load Pathes //
	file >> DrvPath1;
	file >> P1;
	file >> P2;
	file >> P4;
	file >> P6;
	file >> P8;
	file >> P10;
	file >> P12;
	file >> P14;
	file >> P16;
	file >> P18;



}

void EnemyClass_drv_0::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	EnemyClass::NetworkSave(file);


}

void EnemyClass_drv_0::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	EnemyClass::NetworkLoad(file);

}

void EnemyClass_drv_0::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	EnemyClass::NetworkSyncSend(file);

}

void EnemyClass_drv_0::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	EnemyClass::NetworkSyncReceive(file);

}

void EnemyClass_drv_0::OnStart() 
{

}

void EnemyClass_drv_0::OnEnd() 
{

}

void EnemyClass_drv_0::Cloning() 
{
// Generated Code //

// user code//
if (p > 0)
{
	EnemyClass_drv_0* e = GetGameObject<EnemyClass_drv_0>("Enemy");
	
	if (e)
	{
		EnemyClass_drv_0* ec = e->Clone();

		if (ec)
		{
			ec->SetVisible(true);
			ec->SetName("EnemyClone");
			ec->health = p;
			ec->SetCurrentAnimationIndex(i);
			p = 0;
			GetLayer()->AddGameObject(ec);

		}
	}
}
}

void EnemyClass_drv_0::OnClone(const EnemyClass_drv_0 & other) 
{

}

 EnemyClass_drv_0::~EnemyClass_drv_0() 
{

}



