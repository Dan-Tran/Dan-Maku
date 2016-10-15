#ifndef _TRAN_DAN_MAKU_EXITCLASS_H_ 
#define _TRAN_DAN_MAKU_EXITCLASS_H_



class ExitClass:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(ExitClass)

public:
	ExitClass();
	ExitClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ExitClass(const ExitClass & other);
	  ~ExitClass() ;

	ExitClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ExitClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ExitClass);
};



#endif
