#ifndef _TRAN_DAN_MAKU_SPELLCLASS3_H_ 
#define _TRAN_DAN_MAKU_SPELLCLASS3_H_



class SpellClass3:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(SpellClass3)

public:
	SpellClass3();
	SpellClass3(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	SpellClass3(const SpellClass3 & other);
	  ~SpellClass3() ;

	SpellClass3 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const SpellClass3 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(SpellClass3);
};



#endif
