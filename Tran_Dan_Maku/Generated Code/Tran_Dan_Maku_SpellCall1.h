#ifndef _TRAN_DAN_MAKU_SPELLCALL1_H_ 
#define _TRAN_DAN_MAKU_SPELLCALL1_H_



class SpellCall1:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(SpellCall1)

public:
	SpellCall1();
	SpellCall1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	SpellCall1(const SpellCall1 & other);
	  ~SpellCall1() ;

	SpellCall1 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const SpellCall1 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(SpellCall1);
};



#endif
