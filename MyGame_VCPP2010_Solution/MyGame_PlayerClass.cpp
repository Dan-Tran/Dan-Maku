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

IMPLEMENT_OBJECT(PlayerClass);

	IMPLEMENT_LIGHT_LUA_VARS(PlayerClass)
	int args = lua_gettop(L);
	if(args<1) return;
	std::vector<SpriteAnimationPtr> animations;
	for(int i =1; i <= args; ++i)
		animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
	Sprite::Construct(animations);




timer = timeGetTime();



END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(PlayerClass)
	//GameObject Functions
	ADD_LUA_FCT(PlayerClass,Mount)
	ADD_LUA_FCT(PlayerClass,GetMount)
	ADD_LUA_FCT(PlayerClass,UnMount)
	ADD_LUA_FCT(PlayerClass,GetMountsCount)
	ADD_LUA_FCT(PlayerClass,IsMounted)
	ADD_LUA_FCT(PlayerClass,GetMountSupport)
	ADD_LUA_FCT(PlayerClass,GetLayer)
	ADD_LUA_FCT(PlayerClass,SetName)
	ADD_LUA_FCT(PlayerClass,GetName)
	ADD_LUA_FCT(PlayerClass,GetID)
	ADD_LUA_FCT(PlayerClass,SetLifeTime)
	ADD_LUA_FCT(PlayerClass,GetLifeTime)
	ADD_LUA_FCT(PlayerClass,GetAge)
	ADD_LUA_FCT(PlayerClass,SetVisible)
	ADD_LUA_FCT(PlayerClass,GetVisible)
	ADD_LUA_FCT(PlayerClass,IsDestroyed)
	ADD_LUA_FCT(PlayerClass,SetPosition)
	ADD_LUA_FCT(PlayerClass,SetPositionX)
	ADD_LUA_FCT(PlayerClass,SetPositionY)
	ADD_LUA_FCT(PlayerClass,GetPosition)
	ADD_LUA_FCT(PlayerClass,GetPositionX)
	ADD_LUA_FCT(PlayerClass,GetPositionY)
	ADD_LUA_FCT(PlayerClass,SetOldPosition)
	ADD_LUA_FCT(PlayerClass,SetZOrder)
	ADD_LUA_FCT(PlayerClass,GetZOrder)
	ADD_LUA_FCT(PlayerClass,SetRotationAngle)
	ADD_LUA_FCT(PlayerClass,SetOldRotationAngle)
	ADD_LUA_FCT(PlayerClass,GetRotationAngle)
	ADD_LUA_FCT(PlayerClass,SetDirection)
	ADD_LUA_FCT(PlayerClass,SetDirectionX)
	ADD_LUA_FCT(PlayerClass,SetDirectionY)
	ADD_LUA_FCT(PlayerClass,GetDirection)
	ADD_LUA_FCT(PlayerClass,GetDirectionX)
	ADD_LUA_FCT(PlayerClass,GetDirectionY)
	ADD_LUA_FCT(PlayerClass,SetScale)
	ADD_LUA_FCT(PlayerClass,SetScaleX)
	ADD_LUA_FCT(PlayerClass,SetScaleY)
	ADD_LUA_FCT(PlayerClass,GetScale)
	ADD_LUA_FCT(PlayerClass,GetScaleX)
	ADD_LUA_FCT(PlayerClass,GetScaleY)
	ADD_LUA_FCT(PlayerClass,SetCenter)
	ADD_LUA_FCT(PlayerClass,SetCenterX)
	ADD_LUA_FCT(PlayerClass,SetCenterY)
	ADD_LUA_FCT(PlayerClass,GetCenter)
	ADD_LUA_FCT(PlayerClass,GetCenterX)
	ADD_LUA_FCT(PlayerClass,GetCenterY)
	ADD_LUA_FCT(PlayerClass,SetModulationColor)
	ADD_LUA_FCT(PlayerClass,SetModulationR)
	ADD_LUA_FCT(PlayerClass,SetModulationG)
	ADD_LUA_FCT(PlayerClass,SetModulationB)
	ADD_LUA_FCT(PlayerClass,GetModulationColor)
	ADD_LUA_FCT(PlayerClass,GetModulationR)
	ADD_LUA_FCT(PlayerClass,GetModulationG)
	ADD_LUA_FCT(PlayerClass,GetModulationB)
	ADD_LUA_FCT(PlayerClass,SetOpacity)
	ADD_LUA_FCT(PlayerClass,GetOpacity)
	ADD_LUA_FCT(PlayerClass,AddCollision)
	ADD_LUA_FCT(PlayerClass,RemoveCollision)
	ADD_LUA_FCT(PlayerClass,ObjectInCollision)
	ADD_LUA_FCT(PlayerClass,GetCollisionId)
	ADD_LUA_FCT(PlayerClass,GetCollisionObject)
	ADD_LUA_FCT(PlayerClass,GetTileMapCollisionObject)
	ADD_LUA_FCT(PlayerClass,AddPhysicalProperties)
	ADD_LUA_FCT(PlayerClass,RemovePhysicalProperties)
	ADD_LUA_FCT(PlayerClass,SetMassProperties)
	ADD_LUA_FCT(PlayerClass,GetMassProperties)
	ADD_LUA_FCT(PlayerClass,GetCenterOfMass)
	ADD_LUA_FCT(PlayerClass,SetVelocity)
	ADD_LUA_FCT(PlayerClass,GetVelocity)
	ADD_LUA_FCT(PlayerClass,SetAngularVelocity)
	ADD_LUA_FCT(PlayerClass,GetAngularVelocity)
	ADD_LUA_FCT(PlayerClass,SetSpeed)
	ADD_LUA_FCT(PlayerClass,GetSpeed)
	ADD_LUA_FCT(PlayerClass,SetVelocityDirection)
	ADD_LUA_FCT(PlayerClass,GetVelocityDirection)
	ADD_LUA_FCT(PlayerClass,AddForce)
	ADD_LUA_FCT(PlayerClass,RemoveForce)
	ADD_LUA_FCT(PlayerClass,RemoveAllForces)
	ADD_LUA_FCT(PlayerClass,GetPhysicsId)
	ADD_LUA_FCT(PlayerClass,GetNetworkKeyboard)
	ADD_LUA_FCT(PlayerClass,GetNetworkMouse)
	ADD_LUA_FCT(PlayerClass,GetNetworkOwner)
	ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedSprites)
	ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedCircles)
	ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedLineSegments)
	ADD_LUA_FCT(PlayerClass,GetNumberOfCollidedTileMaps)
	ADD_LUA_FCT(PlayerClass,GetCollidedSprite)
	ADD_LUA_FCT(PlayerClass,GetCollidedTileMap)
	ADD_LUA_FCT(PlayerClass,IsCollidedWithSprite)
	ADD_LUA_FCT(PlayerClass,IsCollidedWithSpriteLineSegment)
	ADD_LUA_FCT(PlayerClass,IsCollidedWithSpriteCircle)
	ADD_LUA_FCT(PlayerClass,IsCollidedWithLineSegment)
	ADD_LUA_FCT(PlayerClass,IsCollidedWithCircle)
	ADD_LUA_FCT(PlayerClass,IsCollidedWithTileMap)
	ADD_LUA_FCT(PlayerClass,IsMyLineSegmentCollided)
	ADD_LUA_FCT(PlayerClass,IsMyCircleCollided)
	ADD_LUA_FCT(PlayerClass,GetTileMapNewEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(PlayerClass,GetTileMapStaticEntries_UsingBoundingRectangle)
	ADD_LUA_FCT(PlayerClass,GetTileMapNewEntries_UsingHotSpot)
	ADD_LUA_FCT(PlayerClass,GetTileMapStaticEntries_UsingHotSpot)
	ADD_LUA_FCT(PlayerClass,GetCollidedCircleData)
	ADD_LUA_FCT(PlayerClass,GetCollidedLineSegmentData)
	ADD_LUA_FCT(PlayerClass,GetCollidedTileMapData)
	ADD_LUA_FCT(PlayerClass,GetCollidedSpriteData)
	//Sprite Functions
	ADD_LUA_FCT(PlayerClass,SetFlipHorizontal)
	ADD_LUA_FCT(PlayerClass,GetFlipHorizontal)
	ADD_LUA_FCT(PlayerClass,SetFlipVertical)
	ADD_LUA_FCT(PlayerClass,GetFlipVertical)
	ADD_LUA_FCT(PlayerClass,GetCurrentFrameDelay)
	ADD_LUA_FCT(PlayerClass,GetFrameDelay)
	ADD_LUA_FCT(PlayerClass,GetFramesCount)
	ADD_LUA_FCT(PlayerClass,GetFrameWidth)
	ADD_LUA_FCT(PlayerClass,GetFrameHeight)
	ADD_LUA_FCT(PlayerClass,SetCurrentFrameIndex)
	ADD_LUA_FCT(PlayerClass,GetCurrentFrameIndex)
    ADD_LUA_FCT(PlayerClass,IsEndOfAnimation)
	ADD_LUA_FCT(PlayerClass,SetLoop)
	ADD_LUA_FCT(PlayerClass,GetLoop)
	ADD_LUA_FCT(PlayerClass,GoToFirstFrame)
	ADD_LUA_FCT(PlayerClass,GoToLastFrame)
	ADD_LUA_FCT(PlayerClass,SetAnimationSpeed)
	ADD_LUA_FCT(PlayerClass,GetAnimationSpeed)
	ADD_LUA_FCT(PlayerClass,Play)
	ADD_LUA_FCT(PlayerClass,Stop)
	ADD_LUA_FCT(PlayerClass,IsPlaying)
	ADD_LUA_FCT(PlayerClass,Pause)
	ADD_LUA_FCT(PlayerClass,IsPaused)
	ADD_LUA_FCT(PlayerClass,GetAnimationsCount)
	ADD_LUA_FCT(PlayerClass,SetCurrentAnimationIndex)
	ADD_LUA_FCT(PlayerClass,GetCurrentAnimationIndex)
	ADD_LUA_FCT(PlayerClass,SetCurrentAnimationName)
	ADD_LUA_FCT(PlayerClass,GetCurrentAnimationName)
	ADD_LUA_FCT(PlayerClass,IsInViewport)
	ADD_LUA_FCT(PlayerClass,SetHUDObject)
	ADD_LUA_FCT(PlayerClass,IsHUDObject)
	ADD_LUA_FCT(PlayerClass,SetCollisionActorIndex)
	ADD_LUA_FCT(PlayerClass,SetVisibleCollisionData)
	ADD_LUA_FCT(PlayerClass,GetVisibleCollisionData)
	ADD_LUA_FCT(PlayerClass,SetCollisionDataColor)
	ADD_LUA_FCT(PlayerClass,GetCollisionDataColor)
	ADD_LUA_FCT(PlayerClass,SetVisibleBoundingRectangle)
	ADD_LUA_FCT(PlayerClass,GetVisibleBoundingRectangle)
	ADD_LUA_FCT(PlayerClass,SetBoundingRectangleColor)
	ADD_LUA_FCT(PlayerClass,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(PlayerClass)
END_STRUCTURE

START_CLASS_OPERATORS(PlayerClass)
END_STRUCTURE
//END LUA SPECIFIC
PlayerClass::PlayerClass():Sprite()
{ 

}
PlayerClass::PlayerClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{


timer = timeGetTime();


}

PlayerClass::PlayerClass(const PlayerClass & other):Sprite(other)
{
	OnClone(other);


}

PlayerClass *PlayerClass::Clone()
{
	return new PlayerClass(*this);
}

void PlayerClass::Update(float dt) 
{
// Generated Code //

// user code//
Movement();

Firing();

Collision();
}

void PlayerClass::Destroy() 
{
	Sprite::Destroy();

}

void PlayerClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void PlayerClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void PlayerClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void PlayerClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void PlayerClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void PlayerClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void PlayerClass::OnStart() 
{
// Generated Code //

// user code//
speed = 5;
}

void PlayerClass::OnEnd() 
{

}

void PlayerClass::OnClone(const PlayerClass & other) 
{

}

void PlayerClass::Movement() 
{
// Generated Code //

// user code//

if (GetKeyboard()->IsPressed(Keyboard::LShift))
{
	speed = 2;
}
else
{
	speed = 5;
}

if (GetKeyboard()->IsPressed(Keyboard::Left) && GetPositionX() > -352)
{
	SetPositionX(GetPositionX() - speed);
}

if (GetKeyboard()->IsPressed(Keyboard::Right) && GetPositionX() < 352)
{
	SetPositionX(GetPositionX() + speed);
}

if (GetKeyboard()->IsPressed(Keyboard::Down) && GetPositionY() > -252)
{
	SetPositionY(GetPositionY() - speed);
}

if (GetKeyboard()->IsPressed(Keyboard::Up) && GetPositionY() < 352)
{
	SetPositionY(GetPositionY() + speed);
}
}

void PlayerClass::Firing() 
{
// Generated Code //

// user code//
if (GetKeyboard()->IsPressed(Keyboard::Z))
{
	if (timeGetTime() - timer > 50)
	{
		PlayerBullet* pb = GetGameObject<PlayerBullet>("playerBullet");
	
		if (pb)
		{
			PlayerBullet* pbClone = pb->Clone();
		
			if (pbClone)
			{
				pbClone->SetVisible(true);
				pbClone->SetName("PBullet");
				pbClone->SetPositionX(GetPositionX());
				pbClone->SetPositionY(GetPositionY() + 48);

				GetLayer()->AddGameObject(pbClone);

				timer = timeGetTime();
			}
		}
	}
}
}

void PlayerClass::Collision() 
{
// Generated Code //

// user code//
if (GetCollisionInfo().IsCollidedWithSprite("Enemy", true))
{
	SetPositionX(0);
	SetPositionY(0);

	MyGame* game = (MyGame*)GetMyGame();

	game->power -= 8;
	
}

}

 PlayerClass::~PlayerClass() 
{

}



