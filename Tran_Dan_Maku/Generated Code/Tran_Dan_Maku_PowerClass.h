#ifndef _TRAN_DAN_MAKU_POWERCLASS_H_
#define _TRAN_DAN_MAKU_POWERCLASS_H_



class PowerClass:public ProjectFun::Sprite
{
protected:
    DECLARE_LUA_VARS(PowerClass)

public:
    PowerClass();
    PowerClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    PowerClass(const PowerClass & other);
    ~PowerClass() ;

    PowerClass * Clone();

    void Destroy() ;
    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void NetworkSave(ProjectFun::NetworkFile &file)  const;
    void NetworkLoad(ProjectFun::NetworkFile &file) ;
    void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
    void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
    void OnStart() ;
    void OnEnd() ;
    void OnClone(const PowerClass & other) ;



protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(PowerClass);
};



#endif
