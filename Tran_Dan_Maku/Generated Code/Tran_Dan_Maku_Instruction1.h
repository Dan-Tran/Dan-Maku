#ifndef _TRAN_DAN_MAKU_INSTRUCTION1_H_ 
#define _TRAN_DAN_MAKU_INSTRUCTION1_H_



class Instruction1:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(Instruction1)

public:
	Instruction1();
	Instruction1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	Instruction1(const Instruction1 & other);
	  ~Instruction1() ;

	Instruction1 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const Instruction1 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Instruction1);
};



#endif
