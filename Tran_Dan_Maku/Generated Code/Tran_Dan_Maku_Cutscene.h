#ifndef _TRAN_DAN_MAKU_CUTSCENE_H_ 
#define _TRAN_DAN_MAKU_CUTSCENE_H_



class Cutscene:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(Cutscene)

public:
	Cutscene();
	Cutscene(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	Cutscene(const Cutscene & other);
	  ~Cutscene() ;

	Cutscene * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const Cutscene & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Cutscene);
};



#endif
