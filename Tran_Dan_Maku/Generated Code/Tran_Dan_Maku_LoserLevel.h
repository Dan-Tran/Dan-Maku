#ifndef _TRAN_DAN_MAKU_LOSERLEVEL_H_
#define _TRAN_DAN_MAKU_LOSERLEVEL_H_



class LoserLevel:public ProjectFun::Level
{
protected:
    DECLARE_LUA_VARS(LoserLevel)

public:
    LoserLevel(void);
    ~LoserLevel() ;

    void Save(Core::File & file)  const;
    void Load(Core::File & file) ;
    void OnStart() ;
    void OnEnd() ;
    void Bullet(float directionX, float directionY, float speed, int am, float angle) ;

    int bl;
    float angle;


protected:
    void Update(float dt) ;



private:





    DECLARE_OBJECT(LoserLevel);
};



#endif
