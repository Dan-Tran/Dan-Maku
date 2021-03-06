#ifndef _TRAN_DAN_MAKU_PLAYERCLASS_H_
#define _TRAN_DAN_MAKU_PLAYERCLASS_H_



class PlayerClass:public ProjectFun::Sprite
{
protected:
    DECLARE_LUA_VARS(PlayerClass)

public:
    PlayerClass();
    PlayerClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    PlayerClass(const PlayerClass & other);
    ~PlayerClass() ;

    PlayerClass * Clone();

    void Destroy() ;
    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void NetworkSave(ProjectFun::NetworkFile &file)  const;
    void NetworkLoad(ProjectFun::NetworkFile &file) ;
    void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
    void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
    void OnStart() ;
    void OnEnd() ;
    void OnClone(const PlayerClass & other) ;
    void Movement() ;
    void Firing() ;
    void Collision() ;
    void SpellCard() ;

    int speed;
    int timer;
    int invincible;
    int bullet;


protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(PlayerClass);
};



#endif
