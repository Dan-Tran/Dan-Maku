#ifndef _TRAN_DAN_MAKU_SPELLCLASS4_H_ 
#define _TRAN_DAN_MAKU_SPELLCLASS4_H_



class SpellClass4:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(SpellClass4)

public:
	SpellClass4();
	SpellClass4(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	SpellClass4(const SpellClass4 & other);
	  ~SpellClass4() ;

	SpellClass4 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const SpellClass4 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(SpellClass4);
};



#endif
