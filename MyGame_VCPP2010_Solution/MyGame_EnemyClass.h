#ifndef _MYGAME_ENEMYCLASS_H_
#define _MYGAME_ENEMYCLASS_H_



class EnemyClass:public ProjectFun::Sprite
{
protected:
    DECLARE_LUA_VARS(EnemyClass)

public:
    EnemyClass();
    EnemyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    EnemyClass(const EnemyClass & other);
    ~EnemyClass() ;

    ProjectFun::Path<ProjectFun::PolylinePathPtr>NotPath1;
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
    void OnClone(const EnemyClass & other) ;
    void EnemyMovement() ;
    void Path(int t) ;

    int time;


protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(EnemyClass);
};



#endif
