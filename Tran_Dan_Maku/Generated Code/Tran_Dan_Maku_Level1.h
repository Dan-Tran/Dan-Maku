#ifndef _TRAN_DAN_MAKU_LEVEL1_H_ 
#define _TRAN_DAN_MAKU_LEVEL1_H_



class Level1:public ProjectFun::Level
{
protected:
	DECLARE_LUA_VARS(Level1)

public:
	Level1(void);
	  ~Level1() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void TextUpdates() ;

	int timer;
	int pathIdentifier1;
	int Explosion;


protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Level1);
};



#endif
