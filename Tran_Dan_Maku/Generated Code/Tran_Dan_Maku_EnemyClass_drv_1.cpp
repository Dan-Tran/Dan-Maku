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

IMPLEMENT_OBJECT(EnemyClass_drv_1);

	IMPLEMENT_LIGHT_LUA_VARS_INHERITED(EnemyClass_drv_1, EnemyClass)





	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_DrvPath2");
	DrvPath2.SetCurve(plp0);
	DrvPath2.SetPosition(0.0f);
	DrvPath2.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	DrvPath2.SetSpeed(100.0f);
	DrvPath2.SetLoop(false);

	PolylinePathPtr plp1 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P3");
	P3.SetCurve(plp1);
	P3.SetPosition(0.0f);
	P3.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P3.SetSpeed(100.0f);
	P3.SetLoop(false);

	PolylinePathPtr plp2 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P5");
	P5.SetCurve(plp2);
	P5.SetPosition(0.0f);
	P5.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P5.SetSpeed(200.0f);
	P5.SetLoop(false);

	PolylinePathPtr plp3 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P7");
	P7.SetCurve(plp3);
	P7.SetPosition(0.0f);
	P7.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P7.SetSpeed(100.0f);
	P7.SetLoop(false);

	PolylinePathPtr plp4 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P9");
	P9.SetCurve(plp4);
	P9.SetPosition(0.0f);
	P9.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P9.SetSpeed(150.0f);
	P9.SetLoop(false);

	PolylinePathPtr plp5 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P11");
	P11.SetCurve(plp5);
	P11.SetPosition(0.0f);
	P11.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P11.SetSpeed(150.0f);
	P11.SetLoop(false);

	PolylinePathPtr plp6 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P13");
	P13.SetCurve(plp6);
	P13.SetPosition(0.0f);
	P13.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P13.SetSpeed(100.0f);
	P13.SetLoop(false);

	PolylinePathPtr plp7 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P15");
	P15.SetCurve(plp7);
	P15.SetPosition(0.0f);
	P15.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P15.SetSpeed(100.0f);
	P15.SetLoop(false);

	PolylinePathPtr plp8 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P17");
	P17.SetCurve(plp8);
	P17.SetPosition(0.0f);
	P17.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P17.SetSpeed(100.0f);
	P17.SetLoop(false);



END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(EnemyClass_drv_1)
	//GameObject Functions
	ADD_LUA_FCT(EnemyClass_drv_1,Mount)
	ADD_LUA_FCT(EnemyClass_drv_1,GetMount)
	ADD_LUA_FCT(EnemyClass_drv_1,UnMount)
	ADD_LUA_FCT(EnemyClass_drv_1,GetMountsCount)
	ADD_LUA_FCT(EnemyClass_drv_1,IsMounted)
	ADD_LUA_FCT(EnemyClass_drv_1,GetMountSupport)
	ADD_LUA_FCT(EnemyClass_drv_1,GetLayer)
	ADD_LUA_FCT(EnemyClass_drv_1,SetName)
	ADD_LUA_FCT(EnemyClass_drv_1,GetName)
	ADD_LUA_FCT(EnemyClass_drv_1,GetID)
	ADD_LUA_FCT(EnemyClass_drv_1,SetLifeTime)
	ADD_LUA_FCT(EnemyClass_drv_1,GetLifeTime)
	ADD_LUA_FCT(EnemyClass_drv_1,GetAge)
	ADD_LUA_FCT(EnemyClass_drv_1,SetVisible)
	ADD_LUA_FCT(EnemyClass_drv_1,GetVisible)
	ADD_LUA_FCT(EnemyClass_drv_1,IsDestroyed)
	ADD_LUA_FCT(EnemyClass_drv_1,SetPosition)
	ADD_LUA_FCT(EnemyClass_drv_1,SetPositionX)
	ADD_LUA_FCT(EnemyClass_drv_1,SetPositionY)
	ADD_LUA_FCT(EnemyClass_drv_1,GetPosition)
	ADD_LUA_FCT(EnemyClass_drv_1,GetPositionX)
	ADD_LUA_FCT(EnemyClass_drv_1,GetPositionY)
	ADD_LUA_FCT(EnemyClass_drv_1,SetOldPosition)
	ADD_LUA_FCT(EnemyClass_drv_1,SetZOrder)
	ADD_LUA_FCT(EnemyClass_drv_1,GetZOrder)
	ADD_LUA_FCT(EnemyClass_drv_1,SetRotationAngle)
	ADD_LUA_FCT(EnemyClass_drv_1,SetOldRotationAngle)
	ADD_LUA_FCT(EnemyClass_drv_1,GetRotationAngle)
	ADD_LUA_FCT(EnemyClass_drv_1,SetDirection)
	ADD_LUA_FCT(EnemyClass_drv_1,SetDirectionX)
	ADD_LUA_FCT(EnemyClass_drv_1,SetDirectionY)
	ADD_LUA_FCT(EnemyClass_drv_1,GetDirection)
	ADD_LUA_FCT(EnemyClass_drv_1,GetDirectionX)
	ADD_LUA_FCT(EnemyClass_drv_1,GetDirectionY)
	ADD_LUA_FCT(EnemyClass_drv_1,SetScale)
	ADD_LUA_FCT(EnemyClass_drv_1,SetScaleX)
	ADD_LUA_FCT(EnemyClass_drv_1,SetScaleY)
	ADD_LUA_FCT(EnemyClass_drv_1,GetScale)
	ADD_LUA_FCT(EnemyClass_drv_1,GetScaleX)
	ADD_LUA_FCT(EnemyClass_drv_1,GetScaleY)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCenter)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCenterX)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCenterY)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCenter)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCenterX)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCenterY)
	ADD_LUA_FCT(EnemyClass_drv_1,SetModulationColor)
	ADD_LUA_FCT(EnemyClass_drv_1,SetModulationR)
	ADD_LUA_FCT(EnemyClass_drv_1,SetModulationG)
	ADD_LUA_FCT(EnemyClass_drv_1,SetModulationB)
	ADD_LUA_FCT(EnemyClass_drv_1,GetModulationColor)
	ADD_LUA_FCT(EnemyClass_drv_1,GetModulationR)
	ADD_LUA_FCT(EnemyClass_drv_1,GetModulationG)
	ADD_LUA_FCT(EnemyClass_drv_1,GetModulationB)
	ADD_LUA_FCT(EnemyClass_drv_1,SetOpacity)
	ADD_LUA_FCT(EnemyClass_drv_1,GetOpacity)
	ADD_LUA_FCT(EnemyClass_drv_1,AddCollision)
	ADD_LUA_FCT(EnemyClass_drv_1,RemoveCollision)
	ADD_LUA_FCT(EnemyClass_drv_1,ObjectInCollision)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollisionId)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollisionObject)
	ADD_LUA_FCT(EnemyClass_drv_1,GetTileMapCollisionObject)
	ADD_LUA_FCT(EnemyClass_drv_1,AddPhysicalProperties)
	ADD_LUA_FCT(EnemyClass_drv_1,RemovePhysicalProperties)
	ADD_LUA_FCT(EnemyClass_drv_1,SetMassProperties)
	ADD_LUA_FCT(EnemyClass_drv_1,GetMassProperties)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCenterOfMass)
	ADD_LUA_FCT(EnemyClass_drv_1,SetVelocity)
	ADD_LUA_FCT(EnemyClass_drv_1,GetVelocity)
	ADD_LUA_FCT(EnemyClass_drv_1,SetAngularVelocity)
	ADD_LUA_FCT(EnemyClass_drv_1,GetAngularVelocity)
	ADD_LUA_FCT(EnemyClass_drv_1,SetSpeed)
	ADD_LUA_FCT(EnemyClass_drv_1,GetSpeed)
	ADD_LUA_FCT(EnemyClass_drv_1,SetVelocityDirection)
	ADD_LUA_FCT(EnemyClass_drv_1,GetVelocityDirection)
	ADD_LUA_FCT(EnemyClass_drv_1,AddForce)
	ADD_LUA_FCT(EnemyClass_drv_1,RemoveForce)
	ADD_LUA_FCT(EnemyClass_drv_1,RemoveAllForces)
	ADD_LUA_FCT(EnemyClass_drv_1,GetPhysicsId)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNetworkKeyboard)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNetworkMouse)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNetworkOwner)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(EnemyClass_drv_1,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollidedSprite)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollidedTileMap)
	ADD_LUA_FCT(EnemyClass_drv_1,IsCollidedWithSprite)
	ADD_LUA_FCT(EnemyClass_drv_1,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(EnemyClass_drv_1,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(EnemyClass_drv_1,IsCollidedWithLineSegment)
	ADD_LUA_FCT(EnemyClass_drv_1,IsCollidedWithCircle)
	ADD_LUA_FCT(EnemyClass_drv_1,IsCollidedWithTileMap)
	ADD_LUA_FCT(EnemyClass_drv_1,IsMyLineSegmentCollided)
	ADD_LUA_FCT(EnemyClass_drv_1,IsMyCircleCollided)
	ADD_LUA_FCT(EnemyClass_drv_1,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_1,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_1,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyClass_drv_1,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollidedCircleData)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollidedLineSegmentData)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollidedTileMapData)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(EnemyClass_drv_1,SetFlipHorizontal)
	ADD_LUA_FCT(EnemyClass_drv_1,GetFlipHorizontal)
	ADD_LUA_FCT(EnemyClass_drv_1,SetFlipVertical)
	ADD_LUA_FCT(EnemyClass_drv_1,GetFlipVertical)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCurrentFrameDelay)
	ADD_LUA_FCT(EnemyClass_drv_1,GetFrameDelay)
	ADD_LUA_FCT(EnemyClass_drv_1,GetFramesCount)
	ADD_LUA_FCT(EnemyClass_drv_1,GetFrameWidth)
	ADD_LUA_FCT(EnemyClass_drv_1,GetFrameHeight)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCurrentFrameIndex)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCurrentFrameIndex)
    ADD_LUA_FCT(EnemyClass_drv_1,IsEndOfAnimation)
	ADD_LUA_FCT(EnemyClass_drv_1,SetLoop)
	ADD_LUA_FCT(EnemyClass_drv_1,GetLoop)
	ADD_LUA_FCT(EnemyClass_drv_1,GoToFirstFrame)
	ADD_LUA_FCT(EnemyClass_drv_1,GoToLastFrame)
	ADD_LUA_FCT(EnemyClass_drv_1,SetAnimationSpeed)
	ADD_LUA_FCT(EnemyClass_drv_1,GetAnimationSpeed)
	ADD_LUA_FCT(EnemyClass_drv_1,Play)
	ADD_LUA_FCT(EnemyClass_drv_1,Stop)
	ADD_LUA_FCT(EnemyClass_drv_1,IsPlaying)
	ADD_LUA_FCT(EnemyClass_drv_1,Pause)
	ADD_LUA_FCT(EnemyClass_drv_1,IsPaused)
	ADD_LUA_FCT(EnemyClass_drv_1,GetAnimationsCount)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCurrentAnimationIndex)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCurrentAnimationName)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCurrentAnimationName)
	ADD_LUA_FCT(EnemyClass_drv_1,IsInViewport)
	ADD_LUA_FCT(EnemyClass_drv_1,SetHUDObject)
	ADD_LUA_FCT(EnemyClass_drv_1,IsHUDObject)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCollisionActorIndex)
	ADD_LUA_FCT(EnemyClass_drv_1,SetVisibleCollisionData)
	ADD_LUA_FCT(EnemyClass_drv_1,GetVisibleCollisionData)
	ADD_LUA_FCT(EnemyClass_drv_1,SetCollisionDataColor)
	ADD_LUA_FCT(EnemyClass_drv_1,GetCollisionDataColor)
	ADD_LUA_FCT(EnemyClass_drv_1,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_1,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(EnemyClass_drv_1,SetBoundingRectangleColor)
	ADD_LUA_FCT(EnemyClass_drv_1,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(EnemyClass_drv_1)
END_STRUCTURE

START_CLASS_OPERATORS(EnemyClass_drv_1)
END_STRUCTURE
//END LUA SPECIFIC
EnemyClass_drv_1::EnemyClass_drv_1():EnemyClass()
{ 

}
EnemyClass_drv_1::EnemyClass_drv_1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):EnemyClass(animations)
{




	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_DrvPath2");
	DrvPath2.SetCurve(plp0);
	DrvPath2.SetPosition(0.0f);
	DrvPath2.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	DrvPath2.SetSpeed(100.0f);
	DrvPath2.SetLoop(false);

	PolylinePathPtr plp1 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P3");
	P3.SetCurve(plp1);
	P3.SetPosition(0.0f);
	P3.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P3.SetSpeed(100.0f);
	P3.SetLoop(false);

	PolylinePathPtr plp2 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P5");
	P5.SetCurve(plp2);
	P5.SetPosition(0.0f);
	P5.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P5.SetSpeed(200.0f);
	P5.SetLoop(false);

	PolylinePathPtr plp3 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P7");
	P7.SetCurve(plp3);
	P7.SetPosition(0.0f);
	P7.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P7.SetSpeed(100.0f);
	P7.SetLoop(false);

	PolylinePathPtr plp4 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P9");
	P9.SetCurve(plp4);
	P9.SetPosition(0.0f);
	P9.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P9.SetSpeed(150.0f);
	P9.SetLoop(false);

	PolylinePathPtr plp5 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P11");
	P11.SetCurve(plp5);
	P11.SetPosition(0.0f);
	P11.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P11.SetSpeed(150.0f);
	P11.SetLoop(false);

	PolylinePathPtr plp6 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P13");
	P13.SetCurve(plp6);
	P13.SetPosition(0.0f);
	P13.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P13.SetSpeed(100.0f);
	P13.SetLoop(false);

	PolylinePathPtr plp7 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P15");
	P15.SetCurve(plp7);
	P15.SetPosition(0.0f);
	P15.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P15.SetSpeed(100.0f);
	P15.SetLoop(false);

	PolylinePathPtr plp8 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\EnemyClass_drv_1_P17");
	P17.SetCurve(plp8);
	P17.SetPosition(0.0f);
	P17.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	P17.SetSpeed(100.0f);
	P17.SetLoop(false);


}

EnemyClass_drv_1::EnemyClass_drv_1(const EnemyClass_drv_1 & other):EnemyClass(other)
{
	OnClone(other);

	DrvPath2 = other.DrvPath2;
	P3 = other.P3;
	P5 = other.P5;
	P7 = other.P7;
	P9 = other.P9;
	P11 = other.P11;
	P13 = other.P13;
	P15 = other.P15;
	P17 = other.P17;

}

EnemyClass_drv_1 *EnemyClass_drv_1::Clone()
{
	return new EnemyClass_drv_1(*this);
}

void EnemyClass_drv_1::Timer() 
{
// Generated Code //

// user code//
Level1* level = (Level1*)GetMyGame()->GetCurrentLevel();

time = level->timer;

if (time == 780)
{
	i = 1;
	p = 5;
}


if (time == 840)
{
	p = 5;
	i = 1;
}

if (time == 900)
{
	i = 1;
	p = 5;
}

if (time == 1200)
{
	p = 25;
	i = 0;
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

if (time == 6180)
{
	p = 150;
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
}

void EnemyClass_drv_1::Update(float dt) 
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

if (GetVisible() && (level->pathIdentifier1 == 2))
{
	Path3.GetPositionAndDirection(dt, pos, dir);
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
	DrvPath2.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 250)
	{
		Bullet(0.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if (GetVisible() && (level->pathIdentifier1 == 6))
{
	P3.GetPositionAndDirection(dt, pos, dir);
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
	P5.GetPositionAndDirection(dt, pos, dir);
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
	P7.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);

	if (timeGetTime() - lifetime > 250)
	{
		angle +=10;
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
	P9.GetPositionAndDirection(dt, pos, dir);
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
	P11.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 250)
	{
		Bullet(0.0f, 1.0f, 10.0f, 1, 0.0f);
		Bullet(0.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if ((GetVisible()) && (level->pathIdentifier1 == 13))
{
	P13.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 250)
	{
		angle +=7;
		Bullet(0.0f, -1.0f, 5.0f, 0, angle);
		Bullet(-0.0f, -1.0f,5.0f, 0, (angle + 180.0f));
		Bullet(-0.0f, -1.0f,5.0f, 0, (angle + 90.0f));
		Bullet(-0.0f, -1.0f,5.0f, 0, (angle + 270.0f));
		lifetime = timeGetTime();
		
	}
	if (timeGetTime() - lifetime2 > 1000)
	{
		Bullet(0.0f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(0.16f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.16f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(0.34f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.34f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(0.66f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.66f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(0.84f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.84f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.16f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.16f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.34f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.34f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.0f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.0f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(0.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-0.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(1.5f, -1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.5f, -1.0f, 10.0f, 1, 0.0f);
		lifetime2 = timeGetTime();
	}
}

if (GetVisible() && level->pathIdentifier1 == 14)
{
	Destroy();
	angle = 0.0f;
}
else if (level->pathIdentifier1 == 14) angle = 0.0f;

if ((GetVisible()) && (level->pathIdentifier1 == 16))
{
	P15.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 500)
	{
		Bullet(-1.0f, 0.0f, 20.0f, 1, 0.0f);
		Bullet(-1.0f, 1.0f, 10.0f, 1, 0.0f);
		Bullet(-1.0f, -1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}

if ((GetVisible()) && (level->pathIdentifier1 == 17))
{
	P17.GetPositionAndDirection(dt, pos, dir);
	SetPosition(pos);
	SetOldPosition(pos);
	
	if (timeGetTime() - lifetime > 350)
	{
		Bullet(0.0f, 1.0f, 10.0f, 1, 0.0f);
		lifetime = timeGetTime();
		
	}
}
}

void EnemyClass_drv_1::Destroy() 
{
	EnemyClass::Destroy();

}

void EnemyClass_drv_1::Save(Core::File & file)  const
{
	EnemyClass::Save(file);


	// save Pathes //
	file << DrvPath2;
	file << P3;
	file << P5;
	file << P7;
	file << P9;
	file << P11;
	file << P13;
	file << P15;
	file << P17;



}

void EnemyClass_drv_1::Load(Core::File & file) 
{
	EnemyClass::Load(file);

	// load Pathes //
	file >> DrvPath2;
	file >> P3;
	file >> P5;
	file >> P7;
	file >> P9;
	file >> P11;
	file >> P13;
	file >> P15;
	file >> P17;



}

void EnemyClass_drv_1::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	EnemyClass::NetworkSave(file);


}

void EnemyClass_drv_1::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	EnemyClass::NetworkLoad(file);

}

void EnemyClass_drv_1::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	EnemyClass::NetworkSyncSend(file);

}

void EnemyClass_drv_1::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	EnemyClass::NetworkSyncReceive(file);

}

void EnemyClass_drv_1::OnStart() 
{

}

void EnemyClass_drv_1::OnEnd() 
{

}

void EnemyClass_drv_1::Cloning() 
{
// Generated Code //

// user code//
if (p > 0)
{
	EnemyClass_drv_1* e = GetGameObject<EnemyClass_drv_1>("Enemy");
	
	if (e)
	{
		EnemyClass_drv_1* ec = e->Clone();

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

void EnemyClass_drv_1::OnClone(const EnemyClass_drv_1 & other) 
{

}

 EnemyClass_drv_1::~EnemyClass_drv_1() 
{

}



