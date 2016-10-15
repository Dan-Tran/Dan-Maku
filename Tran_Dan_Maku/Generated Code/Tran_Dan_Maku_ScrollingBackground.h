#ifndef _TRAN_DAN_MAKU_SCROLLINGBACKGROUND_H_ 
#define _TRAN_DAN_MAKU_SCROLLINGBACKGROUND_H_



class ScrollingBackground:public ProjectFun::Sprite
{
protected:
	DECLARE_LUA_VARS(ScrollingBackground)

public:
	ScrollingBackground();
	ScrollingBackground(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ScrollingBackground(const ScrollingBackground & other);
	  ~ScrollingBackground() ;

	ScrollingBackground * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ScrollingBackground & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ScrollingBackground);
};



#endif
