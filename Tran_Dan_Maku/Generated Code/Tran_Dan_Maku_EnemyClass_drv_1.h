#ifndef _TRAN_DAN_MAKU_ENEMYCLASS_DRV_1_H_
#define _TRAN_DAN_MAKU_ENEMYCLASS_DRV_1_H_



class EnemyClass_drv_1:public EnemyClass
{
protected:
    DECLARE_LUA_VARS(EnemyClass_drv_1)

public:
    EnemyClass_drv_1();
    EnemyClass_drv_1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    EnemyClass_drv_1(const EnemyClass_drv_1 & other);
    ~EnemyClass_drv_1() ;

    ProjectFun::Path<ProjectFun::PolylinePathPtr>DrvPath2;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P3;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P5;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P7;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P9;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P11;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P13;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P15;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P17;
    EnemyClass_drv_1 * Clone();

    void Timer() ;
    void Destroy() ;
    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void NetworkSave(ProjectFun::NetworkFile &file)  const;
    void NetworkLoad(ProjectFun::NetworkFile &file) ;
    void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
    void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
    void OnStart() ;
    void OnEnd() ;
    void Cloning() ;
    void OnClone(const EnemyClass_drv_1 & other) ;



protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(EnemyClass_drv_1);
};



#endif
