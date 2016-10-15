#ifndef _TRAN_DAN_MAKU_BOSSCLASS_H_ 
#define _TRAN_DAN_MAKU_BOSSCLASS_H_



class BossClass:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(BossClass)

public:
	BossClass();
	BossClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	BossClass(const BossClass & other);
	  ~BossClass() ;

	BossClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const BossClass & other) ;
	 void BulletPhase1() ;
	 void BulletSpell1() ;
	 void BulletPhase2() ;
	 void BulletSpell2() ;
	 void BulletPhase3() ;
	 void BulletSpell3() ;
	 void Explosion() ;
	 void Destruction() ;
	 void Bullet(float directionX, float directionY, float speed, int am, float angle) ;
	 void Collision() ;
	 void PowerUp() ;
	 void BulletPhase4() ;
	 void BulletSpell4() ;
	 void BulletSpell5() ;
	 void SpellCall(int x) ;
	 void BulletPhase5() ;

	int health;
	int stage;
	int bl;
	int bl2;
	float angle;
	int timer2;
	int bl3;
	int spellcard;


protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(BossClass);
};



#endif
