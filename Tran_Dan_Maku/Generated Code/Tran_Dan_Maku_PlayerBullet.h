#ifndef _TRAN_DAN_MAKU_PLAYERBULLET_H_
#define _TRAN_DAN_MAKU_PLAYERBULLET_H_



class PlayerBullet:public ProjectFun::Sprite
{
protected:
    DECLARE_LUA_VARS(PlayerBullet)

public:
    PlayerBullet();
    PlayerBullet(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    PlayerBullet(const PlayerBullet & other);
    ~PlayerBullet() ;

    PlayerBullet * Clone();

    void Destroy() ;
    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void NetworkSave(ProjectFun::NetworkFile &file)  const;
    void NetworkLoad(ProjectFun::NetworkFile &file) ;
    void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
    void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
    void OnStart() ;
    void OnEnd() ;
    void OnClone(const PlayerBullet & other) ;



protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(PlayerBullet);
};



#endif
