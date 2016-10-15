#ifndef _TRAN_DAN_MAKU_ENEMYCLASS_H_ 
#define _TRAN_DAN_MAKU_ENEMYCLASS_H_



class EnemyClass:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(EnemyClass)

public:
	EnemyClass();
	EnemyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	EnemyClass(const EnemyClass & other);
	  ~EnemyClass() ;

	ProjectFun::Path<ProjectFun::PolylinePathPtr>Path1;
	ProjectFun::Path<ProjectFun::PolylinePathPtr>Path2;
	ProjectFun::Path<ProjectFun::PolylinePathPtr>Path3;
	ProjectFun::Path<ProjectFun::PolylinePathPtr>Path4;
	EnemyClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 virtual void Timer() ;
	 virtual void Cloning() ;
	 void OnClone(const EnemyClass & other) ;
	 void Bullet(float directionX, float directionY, float speed, int am, float angle) ;
	 void PowerUp() ;
	 void Destruction() ;

	int time;
	int p;
	int lifetime;
	int health;
	int i;
	int lifetime2;
	int bullettimer;
	int lifetime3;
	float angle;


protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(EnemyClass);
};



#endif
