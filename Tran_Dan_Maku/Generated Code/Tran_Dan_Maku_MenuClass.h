#ifndef _TRAN_DAN_MAKU_MENUCLASS_H_ 
#define _TRAN_DAN_MAKU_MENUCLASS_H_



class MenuClass:public ProjectFun::Level
{
protected:
	DECLARE_LUA_VARS(MenuClass)

public:
	MenuClass(void);
	  ~MenuClass() ;

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





DECLARE_OBJECT(MenuClass);
};



#endif
