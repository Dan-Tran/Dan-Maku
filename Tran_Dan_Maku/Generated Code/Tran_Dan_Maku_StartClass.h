#ifndef _TRAN_DAN_MAKU_STARTCLASS_H_
#define _TRAN_DAN_MAKU_STARTCLASS_H_



class StartClass:public ProjectFun::Sprite
{
protected:
    DECLARE_LUA_VARS(StartClass)

public:
    StartClass();
    StartClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    StartClass(const StartClass & other);
    ~StartClass() ;

    StartClass * Clone();

    void Destroy() ;
    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void NetworkSave(ProjectFun::NetworkFile &file)  const;
    void NetworkLoad(ProjectFun::NetworkFile &file) ;
    void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
    void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
    void OnStart() ;
    void OnEnd() ;
    void OnClone(const StartClass & other) ;



protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(StartClass);
};



#endif
