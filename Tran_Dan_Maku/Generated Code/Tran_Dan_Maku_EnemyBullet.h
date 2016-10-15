#ifndef _TRAN_DAN_MAKU_ENEMYBULLET_H_ 
#define _TRAN_DAN_MAKU_ENEMYBULLET_H_



class EnemyBullet:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(EnemyBullet)

public:
	EnemyBullet();
	EnemyBullet(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	EnemyBullet(const EnemyBullet & other);
	  ~EnemyBullet() ;

	EnemyBullet * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const EnemyBullet & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(EnemyBullet);
};



#endif
