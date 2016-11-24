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

IMPLEMENT_OBJECT(Cutscene);

IMPLEMENT_LIGHT_LUA_VARS(Cutscene)
int args = lua_gettop(L);
if(args<1) return;
std::vector<SpriteAnimationPtr> animations;
for(int i =1; i <= args; ++i)
    animations.push_back(GetObjectOfType<SpriteAnimation>(L,i));
Sprite::Construct(animations);








END_IMPLEMENT_LUA_FCT

//register functions
START_LIGHT_MEMBER_FUNCTIONS(Cutscene)
//GameObject Functions
ADD_LUA_FCT(Cutscene,Mount)
ADD_LUA_FCT(Cutscene,GetMount)
ADD_LUA_FCT(Cutscene,UnMount)
ADD_LUA_FCT(Cutscene,GetMountsCount)
ADD_LUA_FCT(Cutscene,IsMounted)
ADD_LUA_FCT(Cutscene,GetMountSupport)
ADD_LUA_FCT(Cutscene,GetLayer)
ADD_LUA_FCT(Cutscene,SetName)
ADD_LUA_FCT(Cutscene,GetName)
ADD_LUA_FCT(Cutscene,GetID)
ADD_LUA_FCT(Cutscene,SetLifeTime)
ADD_LUA_FCT(Cutscene,GetLifeTime)
ADD_LUA_FCT(Cutscene,GetAge)
ADD_LUA_FCT(Cutscene,SetVisible)
ADD_LUA_FCT(Cutscene,GetVisible)
ADD_LUA_FCT(Cutscene,IsDestroyed)
ADD_LUA_FCT(Cutscene,SetPosition)
ADD_LUA_FCT(Cutscene,SetPositionX)
ADD_LUA_FCT(Cutscene,SetPositionY)
ADD_LUA_FCT(Cutscene,GetPosition)
ADD_LUA_FCT(Cutscene,GetPositionX)
ADD_LUA_FCT(Cutscene,GetPositionY)
ADD_LUA_FCT(Cutscene,SetOldPosition)
ADD_LUA_FCT(Cutscene,SetZOrder)
ADD_LUA_FCT(Cutscene,GetZOrder)
ADD_LUA_FCT(Cutscene,SetRotationAngle)
ADD_LUA_FCT(Cutscene,SetOldRotationAngle)
ADD_LUA_FCT(Cutscene,GetRotationAngle)
ADD_LUA_FCT(Cutscene,SetDirection)
ADD_LUA_FCT(Cutscene,SetDirectionX)
ADD_LUA_FCT(Cutscene,SetDirectionY)
ADD_LUA_FCT(Cutscene,GetDirection)
ADD_LUA_FCT(Cutscene,GetDirectionX)
ADD_LUA_FCT(Cutscene,GetDirectionY)
ADD_LUA_FCT(Cutscene,SetScale)
ADD_LUA_FCT(Cutscene,SetScaleX)
ADD_LUA_FCT(Cutscene,SetScaleY)
ADD_LUA_FCT(Cutscene,GetScale)
ADD_LUA_FCT(Cutscene,GetScaleX)
ADD_LUA_FCT(Cutscene,GetScaleY)
ADD_LUA_FCT(Cutscene,SetCenter)
ADD_LUA_FCT(Cutscene,SetCenterX)
ADD_LUA_FCT(Cutscene,SetCenterY)
ADD_LUA_FCT(Cutscene,GetCenter)
ADD_LUA_FCT(Cutscene,GetCenterX)
ADD_LUA_FCT(Cutscene,GetCenterY)
ADD_LUA_FCT(Cutscene,SetModulationColor)
ADD_LUA_FCT(Cutscene,SetModulationR)
ADD_LUA_FCT(Cutscene,SetModulationG)
ADD_LUA_FCT(Cutscene,SetModulationB)
ADD_LUA_FCT(Cutscene,GetModulationColor)
ADD_LUA_FCT(Cutscene,GetModulationR)
ADD_LUA_FCT(Cutscene,GetModulationG)
ADD_LUA_FCT(Cutscene,GetModulationB)
ADD_LUA_FCT(Cutscene,SetOpacity)
ADD_LUA_FCT(Cutscene,GetOpacity)
ADD_LUA_FCT(Cutscene,AddCollision)
ADD_LUA_FCT(Cutscene,RemoveCollision)
ADD_LUA_FCT(Cutscene,ObjectInCollision)
ADD_LUA_FCT(Cutscene,GetCollisionId)
ADD_LUA_FCT(Cutscene,GetCollisionObject)
ADD_LUA_FCT(Cutscene,GetTileMapCollisionObject)
ADD_LUA_FCT(Cutscene,AddPhysicalProperties)
ADD_LUA_FCT(Cutscene,RemovePhysicalProperties)
ADD_LUA_FCT(Cutscene,SetMassProperties)
ADD_LUA_FCT(Cutscene,GetMassProperties)
ADD_LUA_FCT(Cutscene,GetCenterOfMass)
ADD_LUA_FCT(Cutscene,SetVelocity)
ADD_LUA_FCT(Cutscene,GetVelocity)
ADD_LUA_FCT(Cutscene,SetAngularVelocity)
ADD_LUA_FCT(Cutscene,GetAngularVelocity)
ADD_LUA_FCT(Cutscene,SetSpeed)
ADD_LUA_FCT(Cutscene,GetSpeed)
ADD_LUA_FCT(Cutscene,SetVelocityDirection)
ADD_LUA_FCT(Cutscene,GetVelocityDirection)
ADD_LUA_FCT(Cutscene,AddForce)
ADD_LUA_FCT(Cutscene,RemoveForce)
ADD_LUA_FCT(Cutscene,RemoveAllForces)
ADD_LUA_FCT(Cutscene,GetPhysicsId)
ADD_LUA_FCT(Cutscene,GetNetworkKeyboard)
ADD_LUA_FCT(Cutscene,GetNetworkMouse)
ADD_LUA_FCT(Cutscene,GetNetworkOwner)
ADD_LUA_FCT(Cutscene,GetNumberOfCollidedSprites)
ADD_LUA_FCT(Cutscene,GetNumberOfCollidedCircles)
ADD_LUA_FCT(Cutscene,GetNumberOfCollidedLineSegments)
ADD_LUA_FCT(Cutscene,GetNumberOfCollidedTileMaps)
ADD_LUA_FCT(Cutscene,GetCollidedSprite)
ADD_LUA_FCT(Cutscene,GetCollidedTileMap)
ADD_LUA_FCT(Cutscene,IsCollidedWithSprite)
ADD_LUA_FCT(Cutscene,IsCollidedWithSpriteLineSegment)
ADD_LUA_FCT(Cutscene,IsCollidedWithSpriteCircle)
ADD_LUA_FCT(Cutscene,IsCollidedWithLineSegment)
ADD_LUA_FCT(Cutscene,IsCollidedWithCircle)
ADD_LUA_FCT(Cutscene,IsCollidedWithTileMap)
ADD_LUA_FCT(Cutscene,IsMyLineSegmentCollided)
ADD_LUA_FCT(Cutscene,IsMyCircleCollided)
ADD_LUA_FCT(Cutscene,GetTileMapNewEntries_UsingBoundingRectangle)
ADD_LUA_FCT(Cutscene,GetTileMapStaticEntries_UsingBoundingRectangle)
ADD_LUA_FCT(Cutscene,GetTileMapNewEntries_UsingHotSpot)
ADD_LUA_FCT(Cutscene,GetTileMapStaticEntries_UsingHotSpot)
ADD_LUA_FCT(Cutscene,GetCollidedCircleData)
ADD_LUA_FCT(Cutscene,GetCollidedLineSegmentData)
ADD_LUA_FCT(Cutscene,GetCollidedTileMapData)
ADD_LUA_FCT(Cutscene,GetCollidedSpriteData)
//Sprite Functions
ADD_LUA_FCT(Cutscene,SetFlipHorizontal)
ADD_LUA_FCT(Cutscene,GetFlipHorizontal)
ADD_LUA_FCT(Cutscene,SetFlipVertical)
ADD_LUA_FCT(Cutscene,GetFlipVertical)
ADD_LUA_FCT(Cutscene,GetCurrentFrameDelay)
ADD_LUA_FCT(Cutscene,GetFrameDelay)
ADD_LUA_FCT(Cutscene,GetFramesCount)
ADD_LUA_FCT(Cutscene,GetFrameWidth)
ADD_LUA_FCT(Cutscene,GetFrameHeight)
ADD_LUA_FCT(Cutscene,SetCurrentFrameIndex)
ADD_LUA_FCT(Cutscene,GetCurrentFrameIndex)
ADD_LUA_FCT(Cutscene,IsEndOfAnimation)
ADD_LUA_FCT(Cutscene,SetLoop)
ADD_LUA_FCT(Cutscene,GetLoop)
ADD_LUA_FCT(Cutscene,GoToFirstFrame)
ADD_LUA_FCT(Cutscene,GoToLastFrame)
ADD_LUA_FCT(Cutscene,SetAnimationSpeed)
ADD_LUA_FCT(Cutscene,GetAnimationSpeed)
ADD_LUA_FCT(Cutscene,Play)
ADD_LUA_FCT(Cutscene,Stop)
ADD_LUA_FCT(Cutscene,IsPlaying)
ADD_LUA_FCT(Cutscene,Pause)
ADD_LUA_FCT(Cutscene,IsPaused)
ADD_LUA_FCT(Cutscene,GetAnimationsCount)
ADD_LUA_FCT(Cutscene,SetCurrentAnimationIndex)
ADD_LUA_FCT(Cutscene,GetCurrentAnimationIndex)
ADD_LUA_FCT(Cutscene,SetCurrentAnimationName)
ADD_LUA_FCT(Cutscene,GetCurrentAnimationName)
ADD_LUA_FCT(Cutscene,IsInViewport)
ADD_LUA_FCT(Cutscene,SetHUDObject)
ADD_LUA_FCT(Cutscene,IsHUDObject)
ADD_LUA_FCT(Cutscene,SetCollisionActorIndex)
ADD_LUA_FCT(Cutscene,SetVisibleCollisionData)
ADD_LUA_FCT(Cutscene,GetVisibleCollisionData)
ADD_LUA_FCT(Cutscene,SetCollisionDataColor)
ADD_LUA_FCT(Cutscene,GetCollisionDataColor)
ADD_LUA_FCT(Cutscene,SetVisibleBoundingRectangle)
ADD_LUA_FCT(Cutscene,GetVisibleBoundingRectangle)
ADD_LUA_FCT(Cutscene,SetBoundingRectangleColor)
ADD_LUA_FCT(Cutscene,GetBoundingRectangleColor)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(Cutscene)
END_STRUCTURE

START_CLASS_OPERATORS(Cutscene)
END_STRUCTURE
//END LUA SPECIFIC
Cutscene::Cutscene():Sprite()
{

}
Cutscene::Cutscene(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

Cutscene::Cutscene(const Cutscene & other):Sprite(other)
{
    OnClone(other);


}

Cutscene *Cutscene::Clone()
{
    return new Cutscene(*this);
}

void Cutscene::Update(float dt)
{
// Generated Code //

// user code//
    Level1* l = (Level1*)GetMyGame()->GetCurrentLevel();

    if (l->pathIdentifier1 == 19)
    {
        SetVisible(true);
        Play();
    }
    else
    {
        SetVisible(false);
        Stop();
    }

}

void Cutscene::Destroy()
{
    Sprite::Destroy();

}

void Cutscene::Save(Core::File & file)  const
{
    Sprite::Save(file);



}

void Cutscene::Load(Core::File & file)
{
    Sprite::Load(file);


}

void Cutscene::NetworkSave(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSave(file);


}

void Cutscene::NetworkLoad(ProjectFun::NetworkFile &file)
{
    Sprite::NetworkLoad(file);

}

void Cutscene::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
    Sprite::NetworkSyncSend(file);

}

void Cutscene::NetworkSyncReceive(ProjectFun::NetworkFile & file)
{
    Sprite::NetworkSyncReceive(file);

}

void Cutscene::OnStart()
{

}

void Cutscene::OnEnd()
{

}

void Cutscene::OnClone(const Cutscene & other)
{

}

Cutscene::~Cutscene()
{

}



