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

IMPLEMENT_LUA_VARS(MyGame)
//never called
END_IMPLEMENT_LUA_FCT
//
START_MEMBER_FUNCTIONS(MyGame) //all inherited from game class:
ADD_LUA_FUNCTION(MyGame,SetTitle,LuaSetTitle)
ADD_LUA_FUNCTION(MyGame,GetTitle,LuaGetTitle)
ADD_LUA_FUNCTION(MyGame,SetIcon,LuaSetIcon)
ADD_LUA_FUNCTION(MyGame,GetIcon,LuaGetIcon)
ADD_LUA_FUNCTION(MyGame,GetDirectory,LuaGetDirectory)
ADD_LUA_FUNCTION(MyGame,GetExecutableName,LuaGetExecutableName)
ADD_LUA_FUNCTION(MyGame,GetExecutableNameNoExtension,LuaGetExecutableNameNoExtension)
ADD_LUA_FUNCTION(MyGame,GetCurrentLevel,LuaGetCurrentLevel)
ADD_LUA_FUNCTION(MyGame,GetCurrentLevelIndex,LuaGetCurrentLevelIndex)
ADD_LUA_FUNCTION(MyGame,GetLevelsCount,LuaGetLevelsCount)
ADD_LUA_FUNCTION(MyGame,GoToLevel,LuaGoToLevel)
ADD_LUA_FUNCTION(MyGame,GoToNextLevel,LuaGoToNextLevel)
ADD_LUA_FUNCTION(MyGame,GoToPreviousLevel,LuaGoToPreviousLevel)
ADD_LUA_FUNCTION(MyGame,GoToLastLevel,LuaGoToLastLevel)
ADD_LUA_FUNCTION(MyGame,GoToFirstLevel,LuaGoToFirstLevel)
ADD_LUA_FUNCTION(MyGame,GoToStartingLevel,LuaGoToStartingLevel)
ADD_LUA_FUNCTION(MyGame,RestartLevel,LuaRestartLevel)
ADD_LUA_FUNCTION(MyGame,Save,LuaSave)
ADD_LUA_FUNCTION(MyGame,Load,LuaLoad)
ADD_LUA_FUNCTION(MyGame,GetCollisionEngine,LuaGetCollisionEngine)
ADD_LUA_FUNCTION(MyGame,GetPhysicsEngine,LuaGetPhysicsEngine)
ADD_LUA_FUNCTION(MyGame,GetSoundEngine,LuaGetSoundEngine)
ADD_LUA_FUNCTION(MyGame,GetNetworkEngine,LuaGetNetworkEngine)
ADD_LUA_FUNCTION(MyGame,GetSceneGraph,LuaGetSceneGraph)
ADD_LUA_FUNCTION(MyGame,SetMasterVolume,LuaSetMasterVolume)
ADD_LUA_FUNCTION(MyGame,GetMasterVolume,LuaGetMasterVolume)
ADD_LUA_FUNCTION(MyGame,GetResolutionWidth,LuaGetResolutionWidth)
ADD_LUA_FUNCTION(MyGame,GetResolutionHeight,LuaGetResolutionHeight)
ADD_LUA_FUNCTION(MyGame,AddCollisionAssets,LuaAddCollisionAssets)
ADD_LUA_FUNCTION(MyGame,GetCollisionAssets,LuaGetCollisionAssets)
ADD_LUA_FUNCTION(MyGame,NetworkStart,LuaNetworkStart)
ADD_LUA_FUNCTION(MyGame,NetworkShutdown,LuaNetworkShutdown)
ADD_LUA_FUNCTION(MyGame,HostNetworkGame,LuaHostNetworkGame)
ADD_LUA_FUNCTION(MyGame,JoinNetworkGame,LuaJoinNetworkGame)
ADD_LUA_FUNCTION(MyGame,IsNetworkGame,LuaIsNetworkGame)
ADD_LUA_FUNCTION(MyGame,IsServer,LuaIsServer)
ADD_LUA_FUNCTION(MyGame,GetOnlineSessionsCount,LuaGetOnlineSessionsCount)
ADD_LUA_FUNCTION(MyGame,GetOnlineSession,LuaGetOnlineSession)
ADD_LUA_FUNCTION(MyGame,ReplayRecordingStart,LuaReplayRecordingStart)
ADD_LUA_FUNCTION(MyGame,ReplayRecordingStop,LuaReplayRecordingStop)
ADD_LUA_FUNCTION(MyGame,ReplayStart,LuaReplayStart)
ADD_LUA_FUNCTION(MyGame,ReplayStop,LuaReplayStop)
ADD_LUA_FUNCTION(MyGame,SetDesiredFrameRate,LuaSetDesiredFrameRate)
ADD_LUA_FUNCTION(MyGame,LockFrameRate,LuaLockFrameRate)
ADD_LUA_FUNCTION(MyGame,IsFrameRateLocked,LuaIsFrameRateLocked)
ADD_LUA_FUNCTION(MyGame,GetDesiredFrameRate,LuaGetDesiredFrameRate)
ADD_LUA_FUNCTION(MyGame,GetCurrentFrameRate,LuaGetCurrentFrameRate)
ADD_LUA_FUNCTION(MyGame,GetKeyboard,LuaGetKeyboard)
ADD_LUA_FUNCTION(MyGame,GetMouse,LuaGetMouse)
ADD_LUA_FUNCTION(MyGame,SetVSync,LuaSetVSync)
ADD_LUA_FUNCTION(MyGame,IsVSync,LuaIsVSync)
ADD_LUA_FUNCTION(MyGame,ToggleFullScreen,LuaToggleFullScreen)
ADD_LUA_FUNCTION(MyGame,IsFullScreen,LuaIsFullScreen)
ADD_LUA_FUNCTION(MyGame,AutoToggleFullScreen,LuaAutoToggleFullScreen)
ADD_LUA_FUNCTION(MyGame,Exit,LuaExit)
ADD_LUA_FUNCTION(MyGame,GetReplayFiles,LuaGetReplayFiles)
ADD_LUA_FUNCTION(MyGame,GetSavedGames,LuaGetSavedGames)
ADD_LUA_FCT(MyGame,SetOneWayCollision)
ADD_LUA_FCT(MyGame,AddManagedObject)
END_STRUCTURE

//register member variables
START_MEMBER_VARIABLES(MyGame)
END_STRUCTURE

START_CLASS_OPERATORS(MyGame)
END_STRUCTURE

int GameGet(lua_State *L)
{
    GetMyGame()->Lua_Add_Reference(L);
    return 1;
}
//Time Function
int TimeGetTime(lua_State *L)
{
    lua_pushnumber(L,SystemTime::GetTime());
    return 1;
}
//Random Wrap
int RandomSetSeed(lua_State *L)
{
    if(lua_gettop(L) < 1) return 0;
    Random::SetSeed(luaL_checknumber(L,1));
    return 0;
}
//HUD
int HudGetHud(lua_State *L)
{
    GUI::HUD * hud = GUI::GetHUD();
    if(!hud) return 0;
    hud->Lua_Add_Reference(L);
    return 1;
}
void CreateLuaApplication(void)
{
    //load default classes:
    String directory  = PAL::Program::GetDirectory();
    directory += "\\Resources\\Scripts\\Library\\";
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Vector2D.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Point2D.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Color.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Input.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Physics.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Sound.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("ParticleSystem.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Path.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("TileMap.lua")).ToCString());
    lua_checkstack(LuaScriptEngine::GetGlobalState(),100);//
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Collision2D.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Math.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Matrix3x3.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Matrix4x4.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("Network.lua")).ToCString());
    luaL_dofile(LuaScriptEngine::GetGlobalState(),(directory+String("GUI.lua")).ToCString());
    /////////////////////////////////////Core:
    LuaFactory<Core::Object>::Register(LuaScriptEngine::GetGlobalState());
    /////////////////////////////////////Math
    LuaFactory<Math::Circle2D>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Math::Line2D>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Math::LineSegment2D>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Math::Ray2D>::Register(LuaScriptEngine::GetGlobalState());
    /////////////////////////////////////Collision
    //collision properties:
    LuaFactory<FunRect>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<CollisionFrame>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<CollisionAnimation>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<CollisionActor>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<DynamicObject>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Collision2D::TileMap>::Register(LuaScriptEngine::GetGlobalState());
    //utilities:
    LuaFactory<Collision2D::DynamicCollisionCircle>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Collision2D::DynamicCollisionLineSegment>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Collision2D::DynamicCollisionHotSpot>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Collision2D::StaticCollisionCircle>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Collision2D::StaticCollisionLineSegment>::Register(LuaScriptEngine::GetGlobalState());
    //collision engine
    LuaFactory<Collision2D::CollisionEngine>::Register(LuaScriptEngine::GetGlobalState());
    /////////////////////////////////////Physics
    //forces:
    LuaFactory<MassProperties>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GravityForce>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<ConstantForce>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<DragForce>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JointNail>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JointHinge>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JointSpring>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JointSlider>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JointFixed>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JointAngularMotor>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Contact>::Register(LuaScriptEngine::GetGlobalState());
    //physics engine
    LuaFactory<Physics2D::PhysicsEngine>::Register(LuaScriptEngine::GetGlobalState());
    /////////////////////////////////////Keyboard/Mouse
    LuaFactory<KeyboardImp>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<MouseImp>::Register(LuaScriptEngine::GetGlobalState());
    /////////////////////////////////////ProjectFUN
    //Default Classes:
    LuaFactory<TileBankEntry>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<TileBank>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<FunBroadcast>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<FunPlayer>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<FunGroup>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<FunNet>::Register(LuaScriptEngine::GetGlobalState()); //this is the network engine!
    LuaFactory<Layer>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Viewport>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<SpriteAnimation>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<ParticleEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<PointEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<LineEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<CircleEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<DiskEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<RectangleEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<FilledRectangleEmitter>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<JukeBox>::Register(LuaScriptEngine::GetGlobalState());
    //Advanced scripted classes:
    LuaFactory<Camera>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GameObject>::Register(LuaScriptEngine::GetGlobalState());//not really needed
    LuaFactory<Text>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Sprite>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<ProjectFun::TileMap>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Sound>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<ProjectFun::ParticleSystem>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Level>::Register(LuaScriptEngine::GetGlobalState());
    //GUI
    LuaFactory<GUI::HUD>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::Control>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::ListItem>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::Button>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::ListBox>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::ComboBox>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::TextBox>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::Label>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::PictureBox>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::ScrollBar>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::ProgressBar>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::CheckBox>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::RadioButton>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::TextEdit>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<GUI::GroupBox>::Register(LuaScriptEngine::GetGlobalState());

    //GUI library:
    static const luaL_reg guiFunctions[] =
    {
        {"GetSkinsPath",GUI::LuaGetSkinsPath},
        {"GetOverlaysPath",GUI::LuaGetOverlaysPath},
        {"GetFontsPath",GUI::LuaGetFontsPath},
        {"GetCursorsPath",GUI::LuaGetCursorsPath},
        {"GetFormsPath",GUI::LuaGetFormsPath},
        {"GetFontPathFromName",GUI::LuaGetFontPathFromName},
        {"GetSkinPathFromName",GUI::LuaGetSkinPathFromName},
        {"GetImagePathFromName",GUI::LuaGetImagePathFromName},
        {"GetCursorPathFromName",GUI::LuaGetCursorPathFromName},
        {"GetOverlayPathFromName",GUI::LuaGetOverlayPathFromName},
        {0,0}
    };
    luaL_openlib(LuaScriptEngine::GetGlobalState(), "GUI", guiFunctions, 0);
    //user classes
    LuaFactory<PlayerClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<PlayerBullet>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<EnemyClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<EnemyBullet>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<PowerClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<EnemyClass_drv_0>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<EnemyClass_drv_1>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<SpellClass1>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<SpellClass2>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<SpellClass3>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<SpellClass4>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<BossClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<StartClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<ExitClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Instruction1>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Cutscene>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<SpellCall1>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<ScrollingBackground>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<Level1>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<LoserLevel>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<MenuClass>::Register(LuaScriptEngine::GetGlobalState());
    LuaFactory<WinLevel>::Register(LuaScriptEngine::GetGlobalState());

    lua_checkstack(LuaScriptEngine::GetGlobalState(),100);//make sure stack is large enough
    //GAME
    LuaFactory<MyGame>::Register(LuaScriptEngine::GetGlobalState());
    static const luaL_reg gameFunctions[] =
    {
        {"Get",GameGet},
        {0,0}
    };
    luaL_openlib(LuaScriptEngine::GetGlobalState(), "Game", gameFunctions, 0);
    //time:
    static const luaL_reg timeFunctions[] =
    {
        {"GetTime",TimeGetTime},
        {0,0}
    };
    luaL_openlib(LuaScriptEngine::GetGlobalState(), "Time",timeFunctions,0);
    //HUD
    static const luaL_reg HudFunctions[] =
    {
        {"Get",HudGetHud},
        {0,0}
    };
    luaL_openlib(LuaScriptEngine::GetGlobalState(), "HUD",HudFunctions,0);

    //random
    static const luaL_reg randomFunctions[] =
    {
        {"SetSeed",RandomSetSeed},
        {0,0}
    };
    luaL_openlib(LuaScriptEngine::GetGlobalState(), "Random",randomFunctions,0);
}
MyGame::MyGame(ProjectFun::LevelFactory * levelFactory, const Engine::RenderingSettings & rs, size_t startingLevel):Game(levelFactory, rs, startingLevel)
{
    SetDesiredFrameRate(60);
    LockFrameRate(true);
    SetMasterVolume(1.0f);
    /*Set Physics World Scale*/
    GetPhysicsEngine()->SetScale(15.0f);
    GetPhysicsEngine()->SetAccuracy(150.0f);
    SetTitle("Tran_Dan_Maku");
    SetIcon(Game::GetInstance()->GetDirectory() + "\\Resources\\GameIcon\\GameIcon.ico");





}

void MyGame::Update(float dt)
{

}

void MyGame::PostCollisionUpdate(float dt)
{

}

bool MyGame::GetImpactProperties(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
    if(GetCurrentLevelIndex() == 0)
        return GetImpactProperties_Level0(object1,object2,bounciness,friction);
    if(GetCurrentLevelIndex() == 1)
        return GetImpactProperties_Level1(object1,object2,bounciness,friction);
    if(GetCurrentLevelIndex() == 2)
        return GetImpactProperties_Level2(object1,object2,bounciness,friction);
    if(GetCurrentLevelIndex() == 3)
        return GetImpactProperties_Level3(object1,object2,bounciness,friction);
    if(GetCurrentLevelIndex() == 4)
        return GetImpactProperties_Level4(object1,object2,bounciness,friction);

    return true;

}

void MyGame::Save(Core::File & file)  const
{
    Game::Save(file);



}

void MyGame::Load(Core::File & file)
{
    LuaScriptEngine::Shutdown();
    LuaScriptEngine::Create();
    CreateLuaApplication();

    Game::Load(file);


}

void MyGame::JoinedNetworkGame()
{

}

void MyGame::HostedNetworkGame()
{

}

void MyGame::SessionEnded()
{

}

void MyGame::PlayerJoined(ProjectFun::FunPlayer* Player)
{

}

void MyGame::PlayerRemoved(ProjectFun::FunPlayer* Player)
{

}

void MyGame::ReceivedTextMessage(ProjectFun::FunPlayer * Sender, const Core::String & TextReceived)
{

}

void MyGame::ReceivedDataMessage(ProjectFun::FunPlayer * Sender, unsigned int ID, unsigned int DataSize, void * Data)
{

}

bool MyGame::ConnectionRequest(ProjectFun::FunPlayer * client)
{
    return true;
}

void MyGame::ConnectionResponse(ProjectFun::Fun_Connection_Response serverResponse)
{

}

void MyGame::OnStart()
{
// Generated Code //

// user code//
    Random::SetSeed(timeGetTime());
    power = 0;

    GetHUD()->ShowCursor(false);

    counter1 = 0;
}

void MyGame::OnEnd()
{

}

void MyGame::Save(const Core::String & fileName)
{
    Game::Save(fileName);
}
void MyGame::Load(const Core::String & fileName)
{
    Game::Load(fileName);
}
MyGame::~MyGame()
{
    LuaScriptEngine::Shutdown();
}

bool MyGame:: GetImpactProperties_USER_CODE(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{

    return true;
}

bool MyGame:: GetImpactProperties_Level0(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
    if(object2 != NULL)//object1 vs object2
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    else//object1 vs Background
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

    return true;
}

bool MyGame:: GetImpactProperties_Level1(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
    if(object2 != NULL)//object1 vs object2
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    else//object1 vs Background
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

    return true;
}

bool MyGame:: GetImpactProperties_Level2(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
    if(object2 != NULL)//object1 vs object2
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    else//object1 vs Background
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

    return true;
}

bool MyGame:: GetImpactProperties_Level3(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
    if(object2 != NULL)//object1 vs object2
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    else//object1 vs Background
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

    return true;
}

bool MyGame:: GetImpactProperties_Level4(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
    if(object2 != NULL)//object1 vs object2
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    else//object1 vs Background
    {
        //Frictions

        //Bounciness

        //CollisionAffections

    }
    return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

    return true;
}

MyGame * GetMyGame()
{
    Game * game = Game::GetInstance();
    return (MyGame *)GetInternalPointer(game);
}
Engine::ApplicationPtr CreateApplication(const char * commandLine)
{
//Initialize the lua script engine:
    LuaScriptEngine::Create();
    CreateLuaApplication();

    Engine::RenderingSettings rs(800, 600);
    rs.Antialiasing = 0;
    rs.FullScreen = false;
    rs.VSync = true;
    return new MyGame(new MyLevelFactory(), rs,3);
}

