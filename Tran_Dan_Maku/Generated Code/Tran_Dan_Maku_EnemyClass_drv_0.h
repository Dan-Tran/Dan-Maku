#ifndef _TRAN_DAN_MAKU_ENEMYCLASS_DRV_0_H_
#define _TRAN_DAN_MAKU_ENEMYCLASS_DRV_0_H_



class EnemyClass_drv_0:public EnemyClass
{
protected:
    DECLARE_LUA_VARS(EnemyClass_drv_0)

public:
    EnemyClass_drv_0();
    EnemyClass_drv_0(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    EnemyClass_drv_0(const EnemyClass_drv_0 & other);
    ~EnemyClass_drv_0() ;

    ProjectFun::Path<ProjectFun::PolylinePathPtr>DrvPath1;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P1;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P2;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P4;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P6;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P8;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P10;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P12;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P14;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P16;
    ProjectFun::Path<ProjectFun::PolylinePathPtr>P18;
    EnemyClass_drv_0 * Clone();

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
    void OnClone(const EnemyClass_drv_0 & other) ;



protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(EnemyClass_drv_0);
};



#endif
