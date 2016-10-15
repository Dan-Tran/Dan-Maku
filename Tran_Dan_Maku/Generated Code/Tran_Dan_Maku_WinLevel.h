#ifndef _TRAN_DAN_MAKU_WINLEVEL_H_ 
#define _TRAN_DAN_MAKU_WINLEVEL_H_



class WinLevel:public ProjectFun::Level
{
protected:
	DECLARE_LUA_VARS(WinLevel)

public:
	WinLevel(void);
	  ~WinLevel() ;

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





DECLARE_OBJECT(WinLevel);
};



#endif
