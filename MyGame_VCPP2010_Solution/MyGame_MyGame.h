#ifndef _MYGAME_MYGAME_H_ 
#define _MYGAME_MYGAME_H_



class MyGame:public ProjectFun::Game
{
protected:
	DECLARE_LUA_VARS(MyGame)

public:
	MyGame(ProjectFun::LevelFactory * levelFactory, const Engine::RenderingSettings & rs, size_t startingLevel);
	  ~MyGame() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void JoinedNetworkGame() ;
	 void HostedNetworkGame() ;
	 void SessionEnded() ;
	 void PlayerJoined(ProjectFun::FunPlayer* Player) ;
	 void PlayerRemoved(ProjectFun::FunPlayer* Player) ;
	 void ReceivedTextMessage(ProjectFun::FunPlayer * Sender, const Core::String & TextReceived) ;
	 void ReceivedDataMessage(ProjectFun::FunPlayer * Sender, unsigned int ID, unsigned int DataSize, void * Data) ;
	 bool ConnectionRequest(ProjectFun::FunPlayer * client) ;
	 void ConnectionResponse(ProjectFun::Fun_Connection_Response serverResponse) ;
	 void OnStart() ;
	 void OnEnd() ;

	void Save(const Core::String & fileName);
void Load(const Core::String & fileName);
	int power;


protected:
	 void Update(float dt) ;
	 void PostCollisionUpdate(float dt) ;
	 bool GetImpactProperties(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction) ;



private:




	bool GetImpactProperties_USER_CODE(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);
	bool GetImpactProperties_Level0(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);

};
MyGame * GetMyGame();


#endif
