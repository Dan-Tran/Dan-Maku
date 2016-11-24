#ifndef _TRAN_DAN_MAKU_SPELLCLASS1_H_
#define _TRAN_DAN_MAKU_SPELLCLASS1_H_



class SpellClass1:public ProjectFun::Sprite
{
protected:
    DECLARE_LUA_VARS(SpellClass1)

public:
    SpellClass1();
    SpellClass1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
    SpellClass1(const SpellClass1 & other);
    ~SpellClass1() ;

    SpellClass1 * Clone();

    void Destroy() ;
    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void NetworkSave(ProjectFun::NetworkFile &file)  const;
    void NetworkLoad(ProjectFun::NetworkFile &file) ;
    void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
    void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
    void OnStart() ;
    void OnEnd() ;
    void OnClone(const SpellClass1 & other) ;



protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(SpellClass1);
};



#endif
