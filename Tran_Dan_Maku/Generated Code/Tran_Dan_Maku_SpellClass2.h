#ifndef _TRAN_DAN_MAKU_SPELLCLASS2_H_ 
#define _TRAN_DAN_MAKU_SPELLCLASS2_H_



class SpellClass2:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(SpellClass2)

public:
	SpellClass2();
	SpellClass2(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	SpellClass2(const SpellClass2 & other);
	  ~SpellClass2() ;

	SpellClass2 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const SpellClass2 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(SpellClass2);
};



#endif
