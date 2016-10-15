#ifndef _MyGame_MYLEVELFACTORY_H_ 
#define _MyGame_MYLEVELFACTORY_H_ 

class MyLevelFactory: public ProjectFun::LevelFactory 
{
	public:
	MyLevelFactory();
	size_t GetLevelsCount();
	ProjectFun::Level * CreateLevel(size_t index);
	bool GetLevelIndexFromName(const Core::String & levelName, size_t & levelIndex);
	void Reset();
	protected:
	private:
	LuaScript * script;
};
#endif
