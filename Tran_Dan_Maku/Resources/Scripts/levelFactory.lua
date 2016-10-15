
--CollisionActors
collisionActor0 = 0;
collisionActor1 = 0;
collisionActor2 = 0;
collisionActor3 = 0;
collisionActor4 = 0;
collisionActor5 = 0;
collisionActor6 = 0;
collisionActor7 = 0;
collisionActor8 = 0;
collisionActor9 = 0;
collisionActor10 = 0;
collisionActor11 = 0;
collisionActor12 = 0;
collisionActor13 = 0;
collisionActor14 = 0;
collisionActor15 = 0;
collisionActor16 = 0;


--Cameras
camera0_2_Camera = 0;

camera0_18_Camera = 0;

camera0_30_Camera = 0;

camera0_34_Camera = 0;

camera0_39_Camera = 0;


--Texts
text1_15_Text = 0;
text2_16_Text = 0;
text3_17_Text = 0;
text0_10_Text = 0;
text4_22_Text = 0;
text5_23_Text = 0;
text0_47_Text = 0;
text2_45_Text = 0;
text0_31_Text = 0;
text1_44_Text = 0;
text0_70_Text = 0;
text0_42_Text = 0;

--Sounds
BossMusic_32_Sound = 0;
F_51_Sound = 0;
FS_52_Sound = 0;
Level_59_Sound = 0;
sound0_66_Sound = 0;
sound0_65_Sound = 0;
sound0_57_Sound = 0;
sound0_58_Sound = 0;

--TileMaps

--Sprites
sprite0_21_Sprite = 0;
BG1_54_Sprite = 0;
BG2_55_Sprite = 0;
Player1_3_Sprite = 0;
bullet1_6_Sprite = 0;
playerBullet_4_Sprite = 0;
Enemy_8_Sprite = 0;
Enemy_5_Sprite = 0;
boss_28_Sprite = 0;
spell3_13_Sprite = 0;
spell4_14_Sprite = 0;
spell1_9_Sprite = 0;
spell2_12_Sprite = 0;
Cutscene_49_Sprite = 0;
Power_7_Sprite = 0;
sprite0_53_Sprite = 0;
sprite0_46_Sprite = 0;
bullet1_69_Sprite = 0;
sprite0_43_Sprite = 0;
bullet1_67_Sprite = 0;
BG_35_Sprite = 0;
bullet1_61_Sprite = 0;
Exit_38_Sprite = 0;
Start_36_Sprite = 0;
Instructions_37_Sprite = 0;
sprite0_41_Sprite = 0;
bullet1_68_Sprite = 0;

--ParticleSystems
particleSystem0_24_ParticleSystem = 0;
particleSystem1_25_ParticleSystem = 0;
particleSystem2_27_ParticleSystem = 0;

--ViewPorts
Viewport0_Viewport = 0;

--Layers
layer0_Layer = 0;
layer1_Layer = 0;
layer2_Layer = 0;

--Levels
level0_Level = 0;
level1_Level = 0;
level2_Level = 0;
level3_Level = 0;
level4_Level = 0;

function AddCollisionActors0()

	collisionActor0 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor0:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor0);
end

function AddCollisionActors1()

	collisionActor1 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(600,-200,200,-600)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor1:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 1 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(600,-200,200,-600)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor1:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor1);
end

function AddCollisionActors2()

	collisionActor2 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,19),3,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,19),3,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,19),3,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,19),3,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor2:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 1 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 5 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 6 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 7 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(-48.0,48.0),Point2D(48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,-48.0),Point2D(-48.0,48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,48.0),Point2D(48.0,-48.0),0,true);
	collisionFrame:AddCollisionData(Point2D(48.0,-48.0),Point2D(-48.0,-48.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor2:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor2);
end

function AddCollisionActors3()

	collisionActor3 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionFrame:AddCollisionData(Point2D(0,0),8,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor3:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 1 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionFrame:AddCollisionData(Point2D(0,0),8,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor3:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 2 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionFrame:AddCollisionData(Point2D(0,0),8,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor3:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor3);
end

function AddCollisionActors4()

	collisionActor4 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionFrame:AddCollisionData(Point2D(0,0),8,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor4:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor4);
end

function AddCollisionActors5()

	collisionActor5 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(17,-48,48,-17)); 
	collisionFrame:AddCollisionData(Point2D(-23.0,12.0),Point2D(-14.0,-3.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-14.0,-3.0),Point2D(-2.0,-8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-2.0,-8.0),Point2D(0.0,6.0),0,true);
	collisionFrame:AddCollisionData(Point2D(0.0,6.0),Point2D(2.0,-8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(2.0,-9.0),Point2D(15.0,0.0),0,true);
	collisionFrame:AddCollisionData(Point2D(15.0,0.0),Point2D(22.0,12.0),0,true);
	collisionFrame:AddCollisionData(Point2D(22.0,12.0),Point2D(47.0,17.0),0,true);
	collisionFrame:AddCollisionData(Point2D(47.0,16.0),Point2D(23.0,7.0),0,true);
	collisionFrame:AddCollisionData(Point2D(22.0,7.0),Point2D(45.0,8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(45.0,8.0),Point2D(22.0,-1.0),0,true);
	collisionFrame:AddCollisionData(Point2D(22.0,-1.0),Point2D(41.0,2.0),0,true);
	collisionFrame:AddCollisionData(Point2D(41.0,2.0),Point2D(18.0,-7.0),0,true);
	collisionFrame:AddCollisionData(Point2D(18.0,-7.0),Point2D(36.0,-5.0),0,true);
	collisionFrame:AddCollisionData(Point2D(36.0,-5.0),Point2D(12.0,-12.0),0,true);
	collisionFrame:AddCollisionData(Point2D(12.0,-12.0),Point2D(5.0,-16.0),0,true);
	collisionFrame:AddCollisionData(Point2D(5.0,-16.0),Point2D(-8.0,-15.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-8.0,-15.0),Point2D(-16.0,-11.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-16.0,-11.0),Point2D(-31.0,-8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-30.0,-8.0),Point2D(-16.0,-9.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-16.0,-9.0),Point2D(-39.0,-1.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-39.0,-1.0),Point2D(-20.0,-3.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-20.0,-3.0),Point2D(-44.0,6.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-43.0,6.0),Point2D(-22.0,3.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-22.0,3.0),Point2D(-48.0,14.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-48.0,14.0),Point2D(-23.0,12.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor5:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 1 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,0),48,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor5:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor5);
end

function AddCollisionActors6()

	collisionActor6 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,0),48,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,0),48,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,0),48,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(48,-48,48,-48)); 
	collisionFrame:AddCollisionData(Point2D(0,0),48,0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor6:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor6);
end

function AddCollisionActors7()

	collisionActor7 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(192,-16,16,-192)); 
	collisionFrame:AddCollisionData(Point2D(-16.0,192.0),Point2D(16.0,192.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-16.0,-192.0),Point2D(-16.0,192.0),0,true);
	collisionFrame:AddCollisionData(Point2D(16.0,192.0),Point2D(16.0,-192.0),0,true);
	collisionFrame:AddCollisionData(Point2D(16.0,-192.0),Point2D(-16.0,-192.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor7:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor7);
end

function AddCollisionActors8()

	collisionActor8 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(16,-192,192,-16)); 
	collisionFrame:AddCollisionData(Point2D(-192.0,16.0),Point2D(192.0,16.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-192.0,-16.0),Point2D(-192.0,16.0),0,true);
	collisionFrame:AddCollisionData(Point2D(192.0,16.0),Point2D(192.0,-16.0),0,true);
	collisionFrame:AddCollisionData(Point2D(192.0,-16.0),Point2D(-192.0,-16.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor8:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor8);
end

function AddCollisionActors9()

	collisionActor9 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor9:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor9);
end

function AddCollisionActors10()

	collisionActor10 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionFrame:AddCollisionData(Point2D(-8.0,8.0),Point2D(8.0,8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(-8.0,-8.0),Point2D(-8.0,8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(8.0,8.0),Point2D(8.0,-8.0),0,true);
	collisionFrame:AddCollisionData(Point2D(8.0,-8.0),Point2D(-8.0,-8.0),0,true);
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor10:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor10);
end

function AddCollisionActors11()

	collisionActor11 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 5 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 6 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 7 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 8 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 9 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 10 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 11 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 12 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 13 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 14 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 15 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 16 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 17 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 18 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor11:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 1 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 5 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 6 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 7 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 8 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 9 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 10 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 11 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 12 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 13 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 14 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 15 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 16 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 17 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 18 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor11:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 2 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 5 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 6 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 7 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 8 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 9 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 10 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 11 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 12 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 13 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 14 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 15 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 16 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 17 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 18 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor11:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 3 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 5 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 6 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 7 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 8 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 9 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 10 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 11 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 12 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 13 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 14 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 15 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 16 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 17 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 18 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor11:AddCollisionAnimation(collisionAnimation);

	---- Adding New Animation 4 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 2 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 3 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 4 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 5 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 6 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 7 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 8 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 9 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 10 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 11 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 12 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 13 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 14 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 15 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 16 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 17 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 18 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(75,-100,100,-75)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor11:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor11);
end

function AddCollisionActors12()

	collisionActor12 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor12:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor12);
end

function AddCollisionActors13()

	collisionActor13 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(300,-400,400,-300)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor13:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor13);
end

function AddCollisionActors14()

	collisionActor14 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor14:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor14);
end

function AddCollisionActors15()

	collisionActor15 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor15:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor15);
end

function AddCollisionActors16()

	collisionActor16 = CollisionActor();


	---- Adding New Animation 0 ----
	collisionAnimation =  CollisionAnimation();


	-------- New Frame 0 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	-------- New Frame 1 --------
	collisionFrame = CollisionFrame();

	collisionFrame:SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation:AddCollisionFrame(collisionFrame);


	collisionActor16:AddCollisionAnimation(collisionAnimation);

	-- Adding CollisionActor to Game --
	Game.Get():AddCollisionAssets(collisionActor16);
end

function AddCollisionActors()
	AddCollisionActors0()
	AddCollisionActors1()
	AddCollisionActors2()
	AddCollisionActors3()
	AddCollisionActors4()
	AddCollisionActors5()
	AddCollisionActors6()
	AddCollisionActors7()
	AddCollisionActors8()
	AddCollisionActors9()
	AddCollisionActors10()
	AddCollisionActors11()
	AddCollisionActors12()
	AddCollisionActors13()
	AddCollisionActors14()
	AddCollisionActors15()
	AddCollisionActors16()
end

-------------------------LEVEL0--------------------------

--Physics Joints
function MountObjectsLevel0()
end

--static collision
function Level0_Layer0_StaticCollision()
	layer0_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level0_layer0.txt" )
end

function Level0_Layer1_StaticCollision()
	layer1_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level0_layer1.txt" )
end

function Level0_Layer2_StaticCollision()
	layer2_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level0_layer2.txt" )
end



function Set_Level0_Layer0_Objects()

	--TileMaps Setters

	--Texts Setters
	text1_15_Text= Text("Power: 0",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text1_15_Text:SetName("text1");
	text1_15_Text:SetPosition(Point2D(222.0,-49.0));
	text1_15_Text:SetLifeTime(0.0);
	text1_15_Text:SetVisible(true);
	text1_15_Text:SetRotationAngle(0.0);
	text1_15_Text:SetScale(1.0,1.0);
	text1_15_Text:SetCenter(Point2D(0.0,0.0));
	text1_15_Text:SetOpacity(1.0);
	text1_15_Text:SetZOrder(1.0);
	text1_15_Text:SetHUDObject(true);layer0_Layer:AddGameObject(text1_15_Text)

	text2_16_Text= Text("Lives: 3",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text2_16_Text:SetName("text2");
	text2_16_Text:SetPosition(Point2D(236.0,-95.0));
	text2_16_Text:SetLifeTime(0.0);
	text2_16_Text:SetVisible(true);
	text2_16_Text:SetRotationAngle(0.0);
	text2_16_Text:SetScale(1.0,1.0);
	text2_16_Text:SetCenter(Point2D(0.0,0.0));
	text2_16_Text:SetOpacity(1.0);
	text2_16_Text:SetZOrder(1.0);
	text2_16_Text:SetHUDObject(true);layer0_Layer:AddGameObject(text2_16_Text)

	text3_17_Text= Text("Spells: 3",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text3_17_Text:SetName("text3");
	text3_17_Text:SetPosition(Point2D(222.0,-139.0));
	text3_17_Text:SetLifeTime(0.0);
	text3_17_Text:SetVisible(true);
	text3_17_Text:SetRotationAngle(0.0);
	text3_17_Text:SetScale(1.0,1.0);
	text3_17_Text:SetCenter(Point2D(0.0,0.0));
	text3_17_Text:SetOpacity(1.0);
	text3_17_Text:SetZOrder(1.0);
	text3_17_Text:SetHUDObject(true);layer0_Layer:AddGameObject(text3_17_Text)

	text0_10_Text= Text("0",Game.Get():GetDirectory().."\\Resources\\Fonts\\DefaultFont\\DefaultFont");
	text0_10_Text:SetName("text0");
	text0_10_Text:SetPosition(Point2D(0.0,0.0));
	text0_10_Text:SetLifeTime(0.0);
	text0_10_Text:SetVisible(false);
	text0_10_Text:SetRotationAngle(0.0);
	text0_10_Text:SetScale(1.0,1.0);
	text0_10_Text:SetCenter(Point2D(0.0,0.0));
	text0_10_Text:SetOpacity(1.0);
	text0_10_Text:SetZOrder(1.0);
	text0_10_Text:SetHUDObject(true);layer0_Layer:AddGameObject(text0_10_Text)

	text4_22_Text= Text("Score:",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font1\\Font1");
	text4_22_Text:SetName("text4");
	text4_22_Text:SetPosition(Point2D(223.0,83.0));
	text4_22_Text:SetLifeTime(0.0);
	text4_22_Text:SetVisible(true);
	text4_22_Text:SetRotationAngle(0.0);
	text4_22_Text:SetScale(1.0,1.0);
	text4_22_Text:SetCenter(Point2D(0.0,0.0));
	text4_22_Text:SetOpacity(1.0);
	text4_22_Text:SetZOrder(1.0);
	text4_22_Text:SetHUDObject(true);layer0_Layer:AddGameObject(text4_22_Text)

	text5_23_Text= Text("0000000",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text5_23_Text:SetName("text5");
	text5_23_Text:SetPosition(Point2D(237.0,41.0));
	text5_23_Text:SetLifeTime(0.0);
	text5_23_Text:SetVisible(true);
	text5_23_Text:SetRotationAngle(0.0);
	text5_23_Text:SetScale(1.0,1.0);
	text5_23_Text:SetCenter(Point2D(0.0,0.0));
	text5_23_Text:SetOpacity(1.0);
	text5_23_Text:SetZOrder(1.0);
	text5_23_Text:SetHUDObject(true);layer0_Layer:AddGameObject(text5_23_Text)



	--Sounds Setters

	--Sprites Setters
	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\HUD.png",1,1,1.0);
	anim0:SetName("HUD");
	sprite0_21_Sprite = Sprite(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor0);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		sprite0_21_Sprite:AddCollision(dynamicCollisionData, layer0_Layer:GetCollisionId());
	end

	sprite0_21_Sprite:SetName("sprite0");
	sprite0_21_Sprite:SetCollisionActorIndex(0);
	sprite0_21_Sprite:SetOpacity(1.0);
	sprite0_21_Sprite:Play(true);
	sprite0_21_Sprite:SetPosition(Point2D(0.0,0.0));
	sprite0_21_Sprite:SetCurrentAnimationIndex(0);
	sprite0_21_Sprite:SetCurrentFrameIndex(0);
	sprite0_21_Sprite:SetLoop(true);
	sprite0_21_Sprite:SetAnimationSpeed(1.0);
	sprite0_21_Sprite:SetFlipHorizontal(false);
	sprite0_21_Sprite:SetFlipVertical(false);
	sprite0_21_Sprite:SetLifeTime(0.0);
	sprite0_21_Sprite:SetVisible(true);
	sprite0_21_Sprite:SetRotationAngle(0.0);
	sprite0_21_Sprite:SetScale(1.0, 1.0);
	sprite0_21_Sprite:SetCenter(Point2D(0.0,0.0));
	sprite0_21_Sprite:SetZOrder(0.0);
	sprite0_21_Sprite:SetHUDObject(true);
	layer0_Layer:AddGameObject(sprite0_21_Sprite)



	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level0_Layer0_StaticCollision()
end




function Set_Level0_Layer1_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters
	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Georgian_Chant1.wav";
	BossMusic_32_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,true,0.0);
	BossMusic_32_Sound:SetName("BossMusic");
	BossMusic_32_Sound:SetPosition(Point2D(271.0,-27.0));
	BossMusic_32_Sound:SetVolume(1.0);
	BossMusic_32_Sound:SetPitch(1.0);
	BossMusic_32_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(BossMusic_32_Sound)

	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Explosion9.wav";
	F_51_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,false,0.0);
	F_51_Sound:SetName("F");
	F_51_Sound:SetPosition(Point2D(0.0,0.0));
	F_51_Sound:SetVolume(0.1);
	F_51_Sound:SetPitch(1.0);
	F_51_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(F_51_Sound)

	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\FireSound.wav";
	FS_52_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,false,0.0);
	FS_52_Sound:SetName("FS");
	FS_52_Sound:SetPosition(Point2D(0.0,0.0));
	FS_52_Sound:SetVolume(0.2);
	FS_52_Sound:SetPitch(1.0);
	FS_52_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(FS_52_Sound)

	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Level.wav";
	Level_59_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,true,0.0);
	Level_59_Sound:SetName("Level");
	Level_59_Sound:SetPosition(Point2D(0.0,0.0));
	Level_59_Sound:Play(false);
	Level_59_Sound:SetVolume(0.4);
	Level_59_Sound:SetPitch(1.0);
	Level_59_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(Level_59_Sound)



	--Sprites Setters
	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Background.png",1,1,1.0);
	anim0:SetName("Background");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Background1.png",1,1,1.0);
	anim1:SetName("Background1");
	BG1_54_Sprite = ScrollingBackground(anim0, anim1);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor1);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		BG1_54_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	BG1_54_Sprite:SetName("BG1");
	BG1_54_Sprite:SetCollisionActorIndex(1);
	BG1_54_Sprite:SetOpacity(1.0);
	BG1_54_Sprite:Play(true);
	BG1_54_Sprite:SetPosition(Point2D(-85.0,2418.0));
	BG1_54_Sprite:SetCurrentAnimationIndex(0);
	BG1_54_Sprite:SetCurrentFrameIndex(0);
	BG1_54_Sprite:SetLoop(true);
	BG1_54_Sprite:SetAnimationSpeed(1.0);
	BG1_54_Sprite:SetFlipHorizontal(false);
	BG1_54_Sprite:SetFlipVertical(false);
	BG1_54_Sprite:SetLifeTime(0.0);
	BG1_54_Sprite:SetVisible(true);
	BG1_54_Sprite:SetRotationAngle(0.0);
	BG1_54_Sprite:SetScale(1.4, 1.5);
	BG1_54_Sprite:SetCenter(Point2D(0.0,0.0));
	BG1_54_Sprite:SetZOrder(0.0);
	
	layer1_Layer:AddGameObject(BG1_54_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Background.png",1,1,1.0);
	anim0:SetName("Background");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Background1.png",1,1,1.0);
	anim1:SetName("Background1");
	BG2_55_Sprite = ScrollingBackground(anim0, anim1);

	BG2_55_Sprite:SetName("BG2");
	BG2_55_Sprite:SetCollisionActorIndex(1);
	BG2_55_Sprite:SetOpacity(1.0);
	BG2_55_Sprite:Play(true);
	BG2_55_Sprite:SetPosition(Point2D(-85.0,624.0));
	BG2_55_Sprite:SetCurrentAnimationIndex(0);
	BG2_55_Sprite:SetCurrentFrameIndex(0);
	BG2_55_Sprite:SetLoop(true);
	BG2_55_Sprite:SetAnimationSpeed(1.0);
	BG2_55_Sprite:SetFlipHorizontal(false);
	BG2_55_Sprite:SetFlipVertical(false);
	BG2_55_Sprite:SetLifeTime(0.0);
	BG2_55_Sprite:SetVisible(true);
	BG2_55_Sprite:SetRotationAngle(0.0);
	BG2_55_Sprite:SetScale(1.4, 1.5);
	BG2_55_Sprite:SetCenter(Point2D(0.0,0.0));
	BG2_55_Sprite:SetZOrder(0.0);
	
	layer1_Layer:AddGameObject(BG2_55_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Player.png",2,2,0.1, 0.1, 0.1, 0.1);
	anim0:SetName("Player");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\PlayerFlash.png",3,3,0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
	anim1:SetName("PlayerFlash");
	Player1_3_Sprite = PlayerClass(anim0, anim1);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor2);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(1,true);
		dynamicCollisionData:SetCanCollid(2,true);
		dynamicCollisionData:SetCanCollid(3,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		Player1_3_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Player1_3_Sprite:SetName("Player1");
	Player1_3_Sprite:SetCollisionActorIndex(2);
	Player1_3_Sprite:SetOpacity(1.0);
	Player1_3_Sprite:Play(true);
	Player1_3_Sprite:SetPosition(Point2D(-76.0,-100.0));
	Player1_3_Sprite:SetCurrentAnimationIndex(0);
	Player1_3_Sprite:SetCurrentFrameIndex(0);
	Player1_3_Sprite:SetLoop(true);
	Player1_3_Sprite:SetAnimationSpeed(1.0);
	Player1_3_Sprite:SetFlipHorizontal(false);
	Player1_3_Sprite:SetFlipVertical(false);
	Player1_3_Sprite:SetLifeTime(0.0);
	Player1_3_Sprite:SetVisible(true);
	Player1_3_Sprite:SetRotationAngle(0.0);
	Player1_3_Sprite:SetScale(1.0, 1.0);
	Player1_3_Sprite:SetCenter(Point2D(0.0,0.0));
	Player1_3_Sprite:SetZOrder(1.0);
	
	layer1_Layer:AddGameObject(Player1_3_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Animation0.png",1,1,1.0);
	anim0:SetName("Animation0");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBam.png",1,1,1.0);
	anim1:SetName("EBam");
		anim2 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EMBL.png",1,1,1.0);
	anim2:SetName("EMBL");
	bullet1_6_Sprite = EnemyBullet(anim0, anim1, anim2);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor3);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(1);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		bullet1_6_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	bullet1_6_Sprite:SetName("bullet1");
	bullet1_6_Sprite:SetCollisionActorIndex(3);
	bullet1_6_Sprite:SetOpacity(1.0);
	bullet1_6_Sprite:Play(true);
	bullet1_6_Sprite:SetPosition(Point2D(236.0,27.0));
	bullet1_6_Sprite:SetCurrentAnimationIndex(0);
	bullet1_6_Sprite:SetCurrentFrameIndex(0);
	bullet1_6_Sprite:SetLoop(true);
	bullet1_6_Sprite:SetAnimationSpeed(1.0);
	bullet1_6_Sprite:SetFlipHorizontal(false);
	bullet1_6_Sprite:SetFlipVertical(false);
	bullet1_6_Sprite:SetLifeTime(0.0);
	bullet1_6_Sprite:SetVisible(false);
	bullet1_6_Sprite:SetRotationAngle(0.0);
	bullet1_6_Sprite:SetScale(1.0, 1.0);
	bullet1_6_Sprite:SetCenter(Point2D(0.0,0.0));
	bullet1_6_Sprite:SetZOrder(2.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		bullet1_6_Sprite:SetCenter(Point2D(0.0,0.0));
		bullet1_6_Sprite:AddPhysicalProperties(MassProperties(0.01,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		bullet1_6_Sprite:SetVelocity(Vector2D(0.0,0.0));
		bullet1_6_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(bullet1_6_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\PlayerBullet.png",1,1,1.0);
	anim0:SetName("PlayerBullet");
	playerBullet_4_Sprite = PlayerBullet(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor4);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(2,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		playerBullet_4_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	playerBullet_4_Sprite:SetName("playerBullet");
	playerBullet_4_Sprite:SetCollisionActorIndex(4);
	playerBullet_4_Sprite:SetOpacity(1.0);
	playerBullet_4_Sprite:Play(true);
	playerBullet_4_Sprite:SetPosition(Point2D(240.0,76.0));
	playerBullet_4_Sprite:SetCurrentAnimationIndex(0);
	playerBullet_4_Sprite:SetCurrentFrameIndex(0);
	playerBullet_4_Sprite:SetLoop(true);
	playerBullet_4_Sprite:SetAnimationSpeed(1.0);
	playerBullet_4_Sprite:SetFlipHorizontal(false);
	playerBullet_4_Sprite:SetFlipVertical(false);
	playerBullet_4_Sprite:SetLifeTime(0.0);
	playerBullet_4_Sprite:SetVisible(false);
	playerBullet_4_Sprite:SetRotationAngle(0.0);
	playerBullet_4_Sprite:SetScale(1.0, 1.0);
	playerBullet_4_Sprite:SetCenter(Point2D(0.0,0.0));
	playerBullet_4_Sprite:SetZOrder(2.0);
	
	layer1_Layer:AddGameObject(playerBullet_4_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EnAM1.png",1,1,1.0);
	anim0:SetName("EnAM1");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBLK1.png",1,1,1.0);
	anim1:SetName("EBLK1");
	Enemy_8_Sprite = EnemyClass_drv_1(anim0, anim1);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor5);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(2);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(true);
		Enemy_8_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Enemy_8_Sprite:SetName("Enemy");
	Enemy_8_Sprite:SetCollisionActorIndex(5);
	Enemy_8_Sprite:SetOpacity(1.0);
	Enemy_8_Sprite:Play(true);
	Enemy_8_Sprite:SetPosition(Point2D(232.0,136.0));
	Enemy_8_Sprite:SetCurrentAnimationIndex(0);
	Enemy_8_Sprite:SetCurrentFrameIndex(0);
	Enemy_8_Sprite:SetLoop(true);
	Enemy_8_Sprite:SetAnimationSpeed(1.0);
	Enemy_8_Sprite:SetFlipHorizontal(false);
	Enemy_8_Sprite:SetFlipVertical(false);
	Enemy_8_Sprite:SetLifeTime(0.0);
	Enemy_8_Sprite:SetVisible(false);
	Enemy_8_Sprite:SetRotationAngle(0.0);
	Enemy_8_Sprite:SetScale(1.0, 1.0);
	Enemy_8_Sprite:SetCenter(Point2D(0.0,0.0));
	Enemy_8_Sprite:SetZOrder(2.1);
	
	layer1_Layer:AddGameObject(Enemy_8_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EnAM1.png",1,1,1.0);
	anim0:SetName("EnAM1");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBLK1.png",1,1,1.0);
	anim1:SetName("EBLK1");
	Enemy_5_Sprite = EnemyClass_drv_0(anim0, anim1);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor5);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(2);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(true);
		Enemy_5_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Enemy_5_Sprite:SetName("Enemy");
	Enemy_5_Sprite:SetCollisionActorIndex(5);
	Enemy_5_Sprite:SetOpacity(1.0);
	Enemy_5_Sprite:Play(true);
	Enemy_5_Sprite:SetPosition(Point2D(232.0,234.0));
	Enemy_5_Sprite:SetCurrentAnimationIndex(0);
	Enemy_5_Sprite:SetCurrentFrameIndex(0);
	Enemy_5_Sprite:SetLoop(true);
	Enemy_5_Sprite:SetAnimationSpeed(1.0);
	Enemy_5_Sprite:SetFlipHorizontal(false);
	Enemy_5_Sprite:SetFlipVertical(false);
	Enemy_5_Sprite:SetLifeTime(0.0);
	Enemy_5_Sprite:SetVisible(false);
	Enemy_5_Sprite:SetRotationAngle(0.0);
	Enemy_5_Sprite:SetScale(1.0, 1.0);
	Enemy_5_Sprite:SetCenter(Point2D(0.0,0.0));
	Enemy_5_Sprite:SetZOrder(2.1);
	
	layer1_Layer:AddGameObject(Enemy_5_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Boss.png",2,2,0.25, 0.25, 0.25, 0.25);
	anim0:SetName("Boss");
	boss_28_Sprite = BossClass(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor6);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(2);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(true);
		boss_28_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	boss_28_Sprite:SetName("boss");
	boss_28_Sprite:SetCollisionActorIndex(6);
	boss_28_Sprite:SetOpacity(1.0);
	boss_28_Sprite:Play(true);
	boss_28_Sprite:SetPosition(Point2D(231.0,-129.0));
	boss_28_Sprite:SetCurrentAnimationIndex(0);
	boss_28_Sprite:SetCurrentFrameIndex(0);
	boss_28_Sprite:SetLoop(true);
	boss_28_Sprite:SetAnimationSpeed(1.0);
	boss_28_Sprite:SetFlipHorizontal(false);
	boss_28_Sprite:SetFlipVertical(false);
	boss_28_Sprite:SetLifeTime(0.0);
	boss_28_Sprite:SetVisible(false);
	boss_28_Sprite:SetRotationAngle(0.0);
	boss_28_Sprite:SetScale(1.0, 1.0);
	boss_28_Sprite:SetCenter(Point2D(0.0,0.0));
	boss_28_Sprite:SetZOrder(2.1);
	
	layer1_Layer:AddGameObject(boss_28_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\SpellD2.png",1,1,1.0);
	anim0:SetName("SpellD2");
	spell3_13_Sprite = SpellClass3(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor7);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetCanCollid(1,true);
		dynamicCollisionData:SetCanCollid(2,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		spell3_13_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	spell3_13_Sprite:SetName("spell3");
	spell3_13_Sprite:SetCollisionActorIndex(7);
	spell3_13_Sprite:SetOpacity(1.0);
	spell3_13_Sprite:Play(true);
	spell3_13_Sprite:SetPosition(Point2D(-365.0,101.0));
	spell3_13_Sprite:SetCurrentAnimationIndex(0);
	spell3_13_Sprite:SetCurrentFrameIndex(0);
	spell3_13_Sprite:SetLoop(true);
	spell3_13_Sprite:SetAnimationSpeed(1.0);
	spell3_13_Sprite:SetFlipHorizontal(false);
	spell3_13_Sprite:SetFlipVertical(false);
	spell3_13_Sprite:SetLifeTime(0.0);
	spell3_13_Sprite:SetVisible(false);
	spell3_13_Sprite:SetRotationAngle(0.0);
	spell3_13_Sprite:SetScale(1.0, 1.0);
	spell3_13_Sprite:SetCenter(Point2D(0.0,0.0));
	spell3_13_Sprite:SetZOrder(3.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		spell3_13_Sprite:SetCenter(Point2D(0.0,0.0));
		spell3_13_Sprite:AddPhysicalProperties(MassProperties(0.0,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		spell3_13_Sprite:SetVelocity(Vector2D(0.0,0.0));
		spell3_13_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(spell3_13_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\SpellD2.png",1,1,1.0);
	anim0:SetName("SpellD2");
	spell4_14_Sprite = SpellClass4(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor7);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetCanCollid(1,true);
		dynamicCollisionData:SetCanCollid(2,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		spell4_14_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	spell4_14_Sprite:SetName("spell4");
	spell4_14_Sprite:SetCollisionActorIndex(7);
	spell4_14_Sprite:SetOpacity(1.0);
	spell4_14_Sprite:Play(true);
	spell4_14_Sprite:SetPosition(Point2D(-365.0,-95.0));
	spell4_14_Sprite:SetCurrentAnimationIndex(0);
	spell4_14_Sprite:SetCurrentFrameIndex(0);
	spell4_14_Sprite:SetLoop(true);
	spell4_14_Sprite:SetAnimationSpeed(1.0);
	spell4_14_Sprite:SetFlipHorizontal(false);
	spell4_14_Sprite:SetFlipVertical(false);
	spell4_14_Sprite:SetLifeTime(0.0);
	spell4_14_Sprite:SetVisible(false);
	spell4_14_Sprite:SetRotationAngle(0.0);
	spell4_14_Sprite:SetScale(1.0, 1.0);
	spell4_14_Sprite:SetCenter(Point2D(0.0,0.0));
	spell4_14_Sprite:SetZOrder(3.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		spell4_14_Sprite:SetCenter(Point2D(0.0,0.0));
		spell4_14_Sprite:AddPhysicalProperties(MassProperties(0.0,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		spell4_14_Sprite:SetVelocity(Vector2D(0.0,0.0));
		spell4_14_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(spell4_14_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\SpellD.png",1,1,1.0);
	anim0:SetName("SpellD");
	spell1_9_Sprite = SpellClass1(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor8);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetCanCollid(1,true);
		dynamicCollisionData:SetCanCollid(2,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		spell1_9_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	spell1_9_Sprite:SetName("spell1");
	spell1_9_Sprite:SetCollisionActorIndex(8);
	spell1_9_Sprite:SetOpacity(1.0);
	spell1_9_Sprite:Play(true);
	spell1_9_Sprite:SetPosition(Point2D(-33.0,-280.0));
	spell1_9_Sprite:SetCurrentAnimationIndex(0);
	spell1_9_Sprite:SetCurrentFrameIndex(0);
	spell1_9_Sprite:SetLoop(true);
	spell1_9_Sprite:SetAnimationSpeed(1.0);
	spell1_9_Sprite:SetFlipHorizontal(false);
	spell1_9_Sprite:SetFlipVertical(false);
	spell1_9_Sprite:SetLifeTime(0.0);
	spell1_9_Sprite:SetVisible(false);
	spell1_9_Sprite:SetRotationAngle(0.0);
	spell1_9_Sprite:SetScale(1.0, 1.0);
	spell1_9_Sprite:SetCenter(Point2D(0.0,0.0));
	spell1_9_Sprite:SetZOrder(3.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		spell1_9_Sprite:SetCenter(Point2D(0.0,0.0));
		spell1_9_Sprite:AddPhysicalProperties(MassProperties(0.0,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		spell1_9_Sprite:SetVelocity(Vector2D(0.0,0.0));
		spell1_9_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(spell1_9_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\SpellD.png",1,1,1.0);
	anim0:SetName("SpellD");
	spell2_12_Sprite = SpellClass2(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor8);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetCanCollid(1,true);
		dynamicCollisionData:SetCanCollid(2,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		spell2_12_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	spell2_12_Sprite:SetName("spell2");
	spell2_12_Sprite:SetCollisionActorIndex(8);
	spell2_12_Sprite:SetOpacity(1.0);
	spell2_12_Sprite:Play(true);
	spell2_12_Sprite:SetPosition(Point2D(-66.0,280.0));
	spell2_12_Sprite:SetCurrentAnimationIndex(0);
	spell2_12_Sprite:SetCurrentFrameIndex(0);
	spell2_12_Sprite:SetLoop(true);
	spell2_12_Sprite:SetAnimationSpeed(1.0);
	spell2_12_Sprite:SetFlipHorizontal(false);
	spell2_12_Sprite:SetFlipVertical(false);
	spell2_12_Sprite:SetLifeTime(0.0);
	spell2_12_Sprite:SetVisible(false);
	spell2_12_Sprite:SetRotationAngle(0.0);
	spell2_12_Sprite:SetScale(1.0, 1.0);
	spell2_12_Sprite:SetCenter(Point2D(0.0,0.0));
	spell2_12_Sprite:SetZOrder(3.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		spell2_12_Sprite:SetCenter(Point2D(0.0,0.0));
		spell2_12_Sprite:AddPhysicalProperties(MassProperties(0.0,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		spell2_12_Sprite:SetVelocity(Vector2D(0.0,0.0));
		spell2_12_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(spell2_12_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Cutscene.png",2,3,3.0, 3.0, 3.0, 3.0, 3.0);
	anim0:SetName("Cutscene");
	Cutscene_49_Sprite = Cutscene(anim0);

	Cutscene_49_Sprite:SetName("Cutscene");
	Cutscene_49_Sprite:SetCollisionActorIndex(9);
	Cutscene_49_Sprite:SetOpacity(1.0);
	Cutscene_49_Sprite:Play(false);
	Cutscene_49_Sprite:SetPosition(Point2D(-89.0,-108.0));
	Cutscene_49_Sprite:SetCurrentAnimationIndex(0);
	Cutscene_49_Sprite:SetCurrentFrameIndex(0);
	Cutscene_49_Sprite:SetLoop(false);
	Cutscene_49_Sprite:SetAnimationSpeed(1.0);
	Cutscene_49_Sprite:SetFlipHorizontal(false);
	Cutscene_49_Sprite:SetFlipVertical(false);
	Cutscene_49_Sprite:SetLifeTime(0.0);
	Cutscene_49_Sprite:SetVisible(false);
	Cutscene_49_Sprite:SetRotationAngle(0.0);
	Cutscene_49_Sprite:SetScale(0.6, 0.5);
	Cutscene_49_Sprite:SetCenter(Point2D(0.0,0.0));
	Cutscene_49_Sprite:SetZOrder(4.0);
	
	layer1_Layer:AddGameObject(Cutscene_49_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Power.png",1,1,1.0);
	anim0:SetName("Power");
	Power_7_Sprite = PowerClass(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor10);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(3);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		Power_7_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Power_7_Sprite:SetName("Power");
	Power_7_Sprite:SetCollisionActorIndex(10);
	Power_7_Sprite:SetOpacity(1.0);
	Power_7_Sprite:Play(true);
	Power_7_Sprite:SetPosition(Point2D(210.0,74.0));
	Power_7_Sprite:SetCurrentAnimationIndex(0);
	Power_7_Sprite:SetCurrentFrameIndex(0);
	Power_7_Sprite:SetLoop(true);
	Power_7_Sprite:SetAnimationSpeed(1.0);
	Power_7_Sprite:SetFlipHorizontal(false);
	Power_7_Sprite:SetFlipVertical(false);
	Power_7_Sprite:SetLifeTime(0.0);
	Power_7_Sprite:SetVisible(false);
	Power_7_Sprite:SetRotationAngle(0.0);
	Power_7_Sprite:SetScale(1.0, 1.0);
	Power_7_Sprite:SetCenter(Point2D(0.0,0.0));
	Power_7_Sprite:SetZOrder(4.0);
	
	layer1_Layer:AddGameObject(Power_7_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Special.png",5,4,0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 3.0, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
	anim0:SetName("Special");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Hallowed.png",5,4,0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 3.0, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
	anim1:SetName("Hallowed");
		anim2 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Celestial.png",5,4,0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 3.0, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
	anim2:SetName("Celestial");
		anim3 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Sacred.png",5,4,0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 3.0, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
	anim3:SetName("Sacred");
		anim4 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Divine.png",5,4,0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 3.0, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
	anim4:SetName("Divine");
	sprite0_53_Sprite = SpellCall1(anim0, anim1, anim2, anim3, anim4);

	sprite0_53_Sprite:SetName("sprite0");
	sprite0_53_Sprite:SetCollisionActorIndex(11);
	sprite0_53_Sprite:SetOpacity(1.0);
	sprite0_53_Sprite:Play(false);
	sprite0_53_Sprite:SetPosition(Point2D(297.0,-17.0));
	sprite0_53_Sprite:SetCurrentAnimationIndex(0);
	sprite0_53_Sprite:SetCurrentFrameIndex(0);
	sprite0_53_Sprite:SetLoop(false);
	sprite0_53_Sprite:SetAnimationSpeed(1.0);
	sprite0_53_Sprite:SetFlipHorizontal(false);
	sprite0_53_Sprite:SetFlipVertical(false);
	sprite0_53_Sprite:SetLifeTime(0.0);
	sprite0_53_Sprite:SetVisible(false);
	sprite0_53_Sprite:SetRotationAngle(0.0);
	sprite0_53_Sprite:SetScale(1.0, 1.0);
	sprite0_53_Sprite:SetCenter(Point2D(0.0,0.0));
	sprite0_53_Sprite:SetZOrder(5.0);
	
	layer1_Layer:AddGameObject(sprite0_53_Sprite)



	--ParticleSystems Setters
	pe = PointEmitter(Point2D(0.0, 0.0), 0.0, 360.0);
	particleSystem0_24_ParticleSystem = ParticleSystem(Game.Get():GetDirectory().."\\Resources\\ParticleSystems\\Particle_Texture.png", 16, 256, Vector2D(0.0, 0.0));
	particleSystem0_24_ParticleSystem:SetEmitter(pe);

	particleSystem0_24_ParticleSystem:SetName("particleSystem0");
	particleSystem0_24_ParticleSystem:SetLifeTime(0.0);
	particleSystem0_24_ParticleSystem:SetZOrder(0.0);
	particleSystem0_24_ParticleSystem:SetPosition(0.0, 0.0);
	particleSystem0_24_ParticleSystem:SetRotationAngle(0.0);
	particleSystem0_24_ParticleSystem:SetScale(1.0, 1.0);
	particleSystem0_24_ParticleSystem:SetCenter(Point2D(0.0,0.0));
	particleSystem0_24_ParticleSystem:SetVisible(true);
	particleSystem0_24_ParticleSystem:SetRecycleParticles(true);
	particleSystem0_24_ParticleSystem:SetEmissionRate(500.0, 500.0);
	particleSystem0_24_ParticleSystem:SetSrcBlendFactor(BlendFactor.BlendFactorSrcAlpha);
	particleSystem0_24_ParticleSystem:SetDstBlendFactor(BlendFactor.BlendFactorInvSrcAlpha);
	particleSystem0_24_ParticleSystem:SetParticleStartingColor(Color(1.0, 0.4, 0.2, 1.0), Color(1.0, 0.4, 0.2, 1.0));
	particleSystem0_24_ParticleSystem:SetParticleEndingColor(Color(1.0, 1.0, 1.0, 0.0), Color(1.0, 1.0, 1.0, 0.0));
	particleSystem0_24_ParticleSystem:SetParticleLifeTime(0.0, 0.0);
	particleSystem0_24_ParticleSystem:SetParticleSpeed(50.0, 50.0);
	particleSystem0_24_ParticleSystem:SetParticleDirection(ParticleDirection.VelocityDirection);
	particleSystem0_24_ParticleSystem:SetParticleStartingScale(Vector2D(1.0, 1.0), Vector2D(1.0, 1.0));
	particleSystem0_24_ParticleSystem:SetParticleEndingScale(Vector2D(1.0, 1.0), Vector2D(1.0, 1.0));
	particleSystem0_24_ParticleSystem:SetUseLocalCoordinates(true);
	particleSystem0_24_ParticleSystem:WarmUp(0.0);
	layer1_Layer:AddGameObject(particleSystem0_24_ParticleSystem)

	pe = PointEmitter(Point2D(0.0, 0.0), 0.0, 360.0);
	particleSystem1_25_ParticleSystem = ParticleSystem(Game.Get():GetDirectory().."\\Resources\\ParticleSystems\\Particle_Texture.png", 2000, 256, Vector2D(0.0, 0.0));
	particleSystem1_25_ParticleSystem:SetEmitter(pe);

	particleSystem1_25_ParticleSystem:SetName("particleSystem1");
	particleSystem1_25_ParticleSystem:SetLifeTime(0.0);
	particleSystem1_25_ParticleSystem:SetZOrder(0.0);
	particleSystem1_25_ParticleSystem:SetPosition(0.0, 0.0);
	particleSystem1_25_ParticleSystem:SetRotationAngle(0.0);
	particleSystem1_25_ParticleSystem:SetScale(1.0, 1.0);
	particleSystem1_25_ParticleSystem:SetCenter(Point2D(0.0,0.0));
	particleSystem1_25_ParticleSystem:SetVisible(true);
	particleSystem1_25_ParticleSystem:SetRecycleParticles(true);
	particleSystem1_25_ParticleSystem:SetEmissionRate(5000.0, 5000.0);
	particleSystem1_25_ParticleSystem:SetSrcBlendFactor(BlendFactor.BlendFactorSrcAlpha);
	particleSystem1_25_ParticleSystem:SetDstBlendFactor(BlendFactor.BlendFactorOne);
	particleSystem1_25_ParticleSystem:SetParticleStartingColor(Color(0.4, 1.0, 1.0, 1.0), Color(0.4, 1.0, 1.0, 1.0));
	particleSystem1_25_ParticleSystem:SetParticleEndingColor(Color(1.0, 1.0, 1.0, 0.0), Color(1.0, 1.0, 1.0, 0.0));
	particleSystem1_25_ParticleSystem:SetParticleLifeTime(0.0, 0.0);
	particleSystem1_25_ParticleSystem:SetParticleSpeed(300.0, 200.0);
	particleSystem1_25_ParticleSystem:SetParticleDirection(ParticleDirection.VelocityDirection);
	particleSystem1_25_ParticleSystem:SetParticleStartingScale(Vector2D(0.5, 0.25), Vector2D(0.25, 0.5));
	particleSystem1_25_ParticleSystem:SetParticleEndingScale(Vector2D(1.5, 0.75), Vector2D(0.75, 1.5));
	particleSystem1_25_ParticleSystem:SetUseLocalCoordinates(true);
	particleSystem1_25_ParticleSystem:WarmUp(0.0);
	layer1_Layer:AddGameObject(particleSystem1_25_ParticleSystem)

	pe = PointEmitter(Point2D(0.0, 0.0), 0.0, 360.0);
	particleSystem2_27_ParticleSystem = ParticleSystem(Game.Get():GetDirectory().."\\Resources\\ParticleSystems\\Particle_Texture.png", 2000, 256, Vector2D(0.0, 0.0));
	particleSystem2_27_ParticleSystem:SetEmitter(pe);

	particleSystem2_27_ParticleSystem:SetName("particleSystem2");
	particleSystem2_27_ParticleSystem:SetLifeTime(0.0);
	particleSystem2_27_ParticleSystem:SetZOrder(0.0);
	particleSystem2_27_ParticleSystem:SetPosition(0.0, 0.0);
	particleSystem2_27_ParticleSystem:SetRotationAngle(0.0);
	particleSystem2_27_ParticleSystem:SetScale(1.0, 1.0);
	particleSystem2_27_ParticleSystem:SetCenter(Point2D(0.0,0.0));
	particleSystem2_27_ParticleSystem:SetVisible(true);
	particleSystem2_27_ParticleSystem:SetRecycleParticles(true);
	particleSystem2_27_ParticleSystem:SetEmissionRate(5000.0, 5000.0);
	particleSystem2_27_ParticleSystem:SetSrcBlendFactor(BlendFactor.BlendFactorSrcAlpha);
	particleSystem2_27_ParticleSystem:SetDstBlendFactor(BlendFactor.BlendFactorOne);
	particleSystem2_27_ParticleSystem:SetParticleStartingColor(Color(0.0, 1.0, 0.2, 1.0), Color(0.0, 1.0, 0.0, 1.0));
	particleSystem2_27_ParticleSystem:SetParticleEndingColor(Color(1.0, 1.0, 1.0, 0.0), Color(1.0, 1.0, 1.0, 0.0));
	particleSystem2_27_ParticleSystem:SetParticleLifeTime(0.0, 0.0);
	particleSystem2_27_ParticleSystem:SetParticleSpeed(300.0, 200.0);
	particleSystem2_27_ParticleSystem:SetParticleDirection(ParticleDirection.VelocityDirection);
	particleSystem2_27_ParticleSystem:SetParticleStartingScale(Vector2D(0.5, 0.25), Vector2D(0.25, 0.5));
	particleSystem2_27_ParticleSystem:SetParticleEndingScale(Vector2D(1.5, 0.75), Vector2D(0.75, 1.5));
	particleSystem2_27_ParticleSystem:SetUseLocalCoordinates(true);
	particleSystem2_27_ParticleSystem:WarmUp(0.0);
	layer1_Layer:AddGameObject(particleSystem2_27_ParticleSystem)



	--Joints Setters

	--setStaticCollision
	Level0_Layer1_StaticCollision()
end




function Set_Level0_Layer2_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level0_Layer2_StaticCollision()
end

function CreateLevel0()
	level0_Level = Level1();
	level0_Level:SetName("level0");
	level0_Level:SetClearBackBuffer(false);

	layer0_Layer = Layer(0.0);
	layer0_Layer:SetName("level0_HUD");

	layer0_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);
	layer1_Layer = Layer(0.0);
	layer1_Layer:SetName("layer1");
	layer1_Layer:SetScale(1.0,1.0);
	layer1_Layer:SetRotation(0.0);
	layer1_Layer:SetCollisionProperties(Point2D(-677,-2058),1316,5376);

	layer2_Layer = Layer(724.264);
	layer2_Layer:SetName("layer2");
	layer2_Layer:SetScale(1.0,1.0);
	layer2_Layer:SetRotation(0.0);
	layer2_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);


	camera0_2_Camera = Camera(45.0);
	camera0_2_Camera:SetName("camera0");
	camera0_2_Camera:SetPosition(Point2D(0.0,0.0));
	layer2_Layer:AddGameObject(camera0_2_Camera);


	Viewport0_Viewport = Viewport(0, 0, 800, 600);
	Viewport0_Viewport:SetClearColor(Color(0.2509804 ,0.2509804 ,0.2509804));
	Viewport0_Viewport:SetCamera(camera0_2_Camera);

	level0_Level:AddLayer(layer0_Layer);
	level0_Level:AddLayer(layer1_Layer);
	level0_Level:AddLayer(layer2_Layer);

	level0_Level:AddViewport(Viewport0_Viewport);

	Set_Level0_Layer0_Objects();
	Set_Level0_Layer1_Objects();
	Set_Level0_Layer2_Objects();

	MountObjectsLevel0();
	CreateLevelForms(0);
	return level0_Level;
end

-------------------------LEVEL1--------------------------

--Physics Joints
function MountObjectsLevel1()
end

--static collision
function Level1_Layer0_StaticCollision()
	layer0_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level1_layer0.txt" )
end

function Level1_Layer1_StaticCollision()
	layer1_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level1_layer1.txt" )
end

function Level1_Layer2_StaticCollision()
	layer2_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level1_layer2.txt" )
end



function Set_Level1_Layer0_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level1_Layer0_StaticCollision()
end



function Set_Level1_Layer1_Objects()

	--TileMaps Setters

	--Texts Setters
	text0_47_Text= Text("                       You Lost!!!\nThe world now belongs to Dan Tran\n            You have failed us all\n\n\n\n\n\n\n\nPress Enter to return to Main Menu",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text0_47_Text:SetName("text0");
	text0_47_Text:SetPosition(Point2D(-212.0,148.0));
	text0_47_Text:SetLifeTime(0.0);
	text0_47_Text:SetVisible(true);
	text0_47_Text:SetRotationAngle(0.0);
	text0_47_Text:SetScale(1.0,1.0);
	text0_47_Text:SetCenter(Point2D(0.0,0.0));
	text0_47_Text:SetOpacity(1.0);
	text0_47_Text:SetZOrder(2.0);
	layer1_Layer:AddGameObject(text0_47_Text)



	--Sounds Setters
	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Menu_2.wav";
	sound0_66_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,true,0.0);
	sound0_66_Sound:SetName("sound0");
	sound0_66_Sound:SetPosition(Point2D(0.0,0.0));
	sound0_66_Sound:Play(false);
	sound0_66_Sound:SetVolume(1.0);
	sound0_66_Sound:SetPitch(1.0);
	sound0_66_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(sound0_66_Sound)



	--Sprites Setters
	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\InBG.png",1,1,1.0);
	anim0:SetName("InBG");
	sprite0_46_Sprite = Sprite(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor12);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		sprite0_46_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	sprite0_46_Sprite:SetName("sprite0");
	sprite0_46_Sprite:SetCollisionActorIndex(12);
	sprite0_46_Sprite:SetOpacity(1.0);
	sprite0_46_Sprite:Play(true);
	sprite0_46_Sprite:SetPosition(Point2D(0.0,0.0));
	sprite0_46_Sprite:SetCurrentAnimationIndex(0);
	sprite0_46_Sprite:SetCurrentFrameIndex(0);
	sprite0_46_Sprite:SetLoop(true);
	sprite0_46_Sprite:SetAnimationSpeed(1.0);
	sprite0_46_Sprite:SetFlipHorizontal(false);
	sprite0_46_Sprite:SetFlipVertical(false);
	sprite0_46_Sprite:SetLifeTime(0.0);
	sprite0_46_Sprite:SetVisible(true);
	sprite0_46_Sprite:SetRotationAngle(0.0);
	sprite0_46_Sprite:SetScale(1.0, 1.0);
	sprite0_46_Sprite:SetCenter(Point2D(0.0,0.0));
	sprite0_46_Sprite:SetZOrder(0.0);
	
	layer1_Layer:AddGameObject(sprite0_46_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Animation0.png",1,1,1.0);
	anim0:SetName("Animation0");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBam.png",1,1,1.0);
	anim1:SetName("EBam");
		anim2 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EMBL.png",1,1,1.0);
	anim2:SetName("EMBL");
	bullet1_69_Sprite = EnemyBullet(anim0, anim1, anim2);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor3);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(1);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		bullet1_69_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	bullet1_69_Sprite:SetName("bullet1");
	bullet1_69_Sprite:SetCollisionActorIndex(3);
	bullet1_69_Sprite:SetOpacity(1.0);
	bullet1_69_Sprite:Play(true);
	bullet1_69_Sprite:SetPosition(Point2D(-433.0,-227.0));
	bullet1_69_Sprite:SetCurrentAnimationIndex(0);
	bullet1_69_Sprite:SetCurrentFrameIndex(0);
	bullet1_69_Sprite:SetLoop(true);
	bullet1_69_Sprite:SetAnimationSpeed(1.0);
	bullet1_69_Sprite:SetFlipHorizontal(false);
	bullet1_69_Sprite:SetFlipVertical(false);
	bullet1_69_Sprite:SetLifeTime(0.0);
	bullet1_69_Sprite:SetVisible(false);
	bullet1_69_Sprite:SetRotationAngle(0.0);
	bullet1_69_Sprite:SetScale(1.0, 1.0);
	bullet1_69_Sprite:SetCenter(Point2D(0.0,0.0));
	bullet1_69_Sprite:SetZOrder(1.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		bullet1_69_Sprite:SetCenter(Point2D(0.0,0.0));
		bullet1_69_Sprite:AddPhysicalProperties(MassProperties(0.01,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		bullet1_69_Sprite:SetVelocity(Vector2D(0.0,0.0));
		bullet1_69_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(bullet1_69_Sprite)



	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level1_Layer1_StaticCollision()
end




function Set_Level1_Layer2_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level1_Layer2_StaticCollision()
end

function CreateLevel1()
	level1_Level = LoserLevel();
	level1_Level:SetName("Lose");
	level1_Level:SetClearBackBuffer(false);

	layer0_Layer = Layer(0.0);
	layer0_Layer:SetName("Lose_HUD");

	layer0_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);
	layer1_Layer = Layer(0.0);
	layer1_Layer:SetName("layer1");
	layer1_Layer:SetScale(1.0,1.0);
	layer1_Layer:SetRotation(0.0);
	layer1_Layer:SetCollisionProperties(Point2D(-441,-300),841,600);

	layer2_Layer = Layer(724.264);
	layer2_Layer:SetName("layer2");
	layer2_Layer:SetScale(1.0,1.0);
	layer2_Layer:SetRotation(0.0);
	layer2_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);


	camera0_18_Camera = Camera(45.0);
	camera0_18_Camera:SetName("camera0");
	camera0_18_Camera:SetPosition(Point2D(0.0,0.0));
	layer2_Layer:AddGameObject(camera0_18_Camera);


	Viewport0_Viewport = Viewport(0, 0, 800, 600);
	Viewport0_Viewport:SetClearColor(Color(0.2509804 ,0.2509804 ,0.2509804));
	Viewport0_Viewport:SetCamera(camera0_18_Camera);

	level1_Level:AddLayer(layer0_Layer);
	level1_Level:AddLayer(layer1_Layer);
	level1_Level:AddLayer(layer2_Layer);

	level1_Level:AddViewport(Viewport0_Viewport);

	Set_Level1_Layer0_Objects();
	Set_Level1_Layer1_Objects();
	Set_Level1_Layer2_Objects();

	MountObjectsLevel1();
	CreateLevelForms(1);
	return level1_Level;
end

-------------------------LEVEL2--------------------------

--Physics Joints
function MountObjectsLevel2()
end

--static collision
function Level2_Layer0_StaticCollision()
	layer0_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level2_layer0.txt" )
end

function Level2_Layer1_StaticCollision()
	layer1_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level2_layer1.txt" )
end

function Level2_Layer2_StaticCollision()
	layer2_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level2_layer2.txt" )
end



function Set_Level2_Layer0_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level2_Layer0_StaticCollision()
end



function Set_Level2_Layer1_Objects()

	--TileMaps Setters

	--Texts Setters
	text2_45_Text= Text("Press Enter to return to Main Menu",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text2_45_Text:SetName("text2");
	text2_45_Text:SetPosition(Point2D(-220.0,-277.0));
	text2_45_Text:SetLifeTime(0.0);
	text2_45_Text:SetVisible(true);
	text2_45_Text:SetRotationAngle(0.0);
	text2_45_Text:SetScale(1.0,1.0);
	text2_45_Text:SetCenter(Point2D(0.0,0.0));
	text2_45_Text:SetOpacity(1.0);
	text2_45_Text:SetZOrder(2.0);
	layer1_Layer:AddGameObject(text2_45_Text)

	text0_31_Text= Text(" Congratulations! You defeated Dan Tran\nand saved the world. History will remeber\n                           you forever!",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text0_31_Text:SetName("text0");
	text0_31_Text:SetPosition(Point2D(-257.0,190.0));
	text0_31_Text:SetLifeTime(0.0);
	text0_31_Text:SetVisible(true);
	text0_31_Text:SetRotationAngle(0.0);
	text0_31_Text:SetScale(1.0,1.0);
	text0_31_Text:SetCenter(Point2D(0.0,0.0));
	text0_31_Text:SetOpacity(1.0);
	text0_31_Text:SetZOrder(2.0);
	layer1_Layer:AddGameObject(text0_31_Text)

	text1_44_Text= Text("You finished with a score of 000000 points!",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text1_44_Text:SetName("text1");
	text1_44_Text:SetPosition(Point2D(-272.0,-145.0));
	text1_44_Text:SetLifeTime(0.0);
	text1_44_Text:SetVisible(true);
	text1_44_Text:SetRotationAngle(0.0);
	text1_44_Text:SetScale(1.0,1.0);
	text1_44_Text:SetCenter(Point2D(0.0,0.0));
	text1_44_Text:SetOpacity(1.0);
	text1_44_Text:SetZOrder(2.0);
	layer1_Layer:AddGameObject(text1_44_Text)



	--Sounds Setters
	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Menu_1.wav";
	sound0_65_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,true,0.0);
	sound0_65_Sound:SetName("sound0");
	sound0_65_Sound:SetPosition(Point2D(0.0,0.0));
	sound0_65_Sound:Play(false);
	sound0_65_Sound:SetVolume(1.0);
	sound0_65_Sound:SetPitch(1.0);
	sound0_65_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(sound0_65_Sound)



	--Sprites Setters
	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\InBG.png",1,1,1.0);
	anim0:SetName("InBG");
	sprite0_43_Sprite = Sprite(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor12);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		sprite0_43_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	sprite0_43_Sprite:SetName("sprite0");
	sprite0_43_Sprite:SetCollisionActorIndex(12);
	sprite0_43_Sprite:SetOpacity(1.0);
	sprite0_43_Sprite:Play(true);
	sprite0_43_Sprite:SetPosition(Point2D(0.0,0.0));
	sprite0_43_Sprite:SetCurrentAnimationIndex(0);
	sprite0_43_Sprite:SetCurrentFrameIndex(0);
	sprite0_43_Sprite:SetLoop(true);
	sprite0_43_Sprite:SetAnimationSpeed(1.0);
	sprite0_43_Sprite:SetFlipHorizontal(false);
	sprite0_43_Sprite:SetFlipVertical(false);
	sprite0_43_Sprite:SetLifeTime(0.0);
	sprite0_43_Sprite:SetVisible(true);
	sprite0_43_Sprite:SetRotationAngle(0.0);
	sprite0_43_Sprite:SetScale(1.0, 1.0);
	sprite0_43_Sprite:SetCenter(Point2D(0.0,0.0));
	sprite0_43_Sprite:SetZOrder(0.0);
	
	layer1_Layer:AddGameObject(sprite0_43_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Animation0.png",1,1,1.0);
	anim0:SetName("Animation0");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBam.png",1,1,1.0);
	anim1:SetName("EBam");
		anim2 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EMBL.png",1,1,1.0);
	anim2:SetName("EMBL");
	bullet1_67_Sprite = EnemyBullet(anim0, anim1, anim2);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor3);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(1);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		bullet1_67_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	bullet1_67_Sprite:SetName("bullet1");
	bullet1_67_Sprite:SetCollisionActorIndex(3);
	bullet1_67_Sprite:SetOpacity(1.0);
	bullet1_67_Sprite:Play(true);
	bullet1_67_Sprite:SetPosition(Point2D(-425.0,-160.0));
	bullet1_67_Sprite:SetCurrentAnimationIndex(0);
	bullet1_67_Sprite:SetCurrentFrameIndex(0);
	bullet1_67_Sprite:SetLoop(true);
	bullet1_67_Sprite:SetAnimationSpeed(1.0);
	bullet1_67_Sprite:SetFlipHorizontal(false);
	bullet1_67_Sprite:SetFlipVertical(false);
	bullet1_67_Sprite:SetLifeTime(0.0);
	bullet1_67_Sprite:SetVisible(false);
	bullet1_67_Sprite:SetRotationAngle(0.0);
	bullet1_67_Sprite:SetScale(1.0, 1.0);
	bullet1_67_Sprite:SetCenter(Point2D(0.0,0.0));
	bullet1_67_Sprite:SetZOrder(1.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		bullet1_67_Sprite:SetCenter(Point2D(0.0,0.0));
		bullet1_67_Sprite:AddPhysicalProperties(MassProperties(0.01,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		bullet1_67_Sprite:SetVelocity(Vector2D(0.0,0.0));
		bullet1_67_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(bullet1_67_Sprite)



	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level2_Layer1_StaticCollision()
end




function Set_Level2_Layer2_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level2_Layer2_StaticCollision()
end

function CreateLevel2()
	level2_Level = WinLevel();
	level2_Level:SetName("Win");
	level2_Level:SetClearBackBuffer(false);

	layer0_Layer = Layer(0.0);
	layer0_Layer:SetName("Win_HUD");

	layer0_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);
	layer1_Layer = Layer(0.0);
	layer1_Layer:SetName("layer1");
	layer1_Layer:SetScale(1.0,1.0);
	layer1_Layer:SetRotation(0.0);
	layer1_Layer:SetCollisionProperties(Point2D(-438,-300),838,600);

	layer2_Layer = Layer(724.264);
	layer2_Layer:SetName("layer2");
	layer2_Layer:SetScale(1.0,1.0);
	layer2_Layer:SetRotation(0.0);
	layer2_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);


	camera0_30_Camera = Camera(45.0);
	camera0_30_Camera:SetName("camera0");
	camera0_30_Camera:SetPosition(Point2D(0.0,0.0));
	layer2_Layer:AddGameObject(camera0_30_Camera);


	Viewport0_Viewport = Viewport(0, 0, 800, 600);
	Viewport0_Viewport:SetClearColor(Color(0.2509804 ,0.2509804 ,0.2509804));
	Viewport0_Viewport:SetCamera(camera0_30_Camera);

	level2_Level:AddLayer(layer0_Layer);
	level2_Level:AddLayer(layer1_Layer);
	level2_Level:AddLayer(layer2_Layer);

	level2_Level:AddViewport(Viewport0_Viewport);

	Set_Level2_Layer0_Objects();
	Set_Level2_Layer1_Objects();
	Set_Level2_Layer2_Objects();

	MountObjectsLevel2();
	CreateLevelForms(2);
	return level2_Level;
end

-------------------------LEVEL3--------------------------

--Physics Joints
function MountObjectsLevel3()
end

--static collision
function Level3_Layer0_StaticCollision()
	layer0_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level3_layer0.txt" )
end

function Level3_Layer1_StaticCollision()
	layer1_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level3_layer1.txt" )
end

function Level3_Layer2_StaticCollision()
	layer2_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level3_layer2.txt" )
end



function Set_Level3_Layer0_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level3_Layer0_StaticCollision()
end



function Set_Level3_Layer1_Objects()

	--TileMaps Setters

	--Texts Setters
	text0_70_Text= Text("By: Dan Tran\n",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text0_70_Text:SetName("text0");
	text0_70_Text:SetPosition(Point2D(110.0,-284.0));
	text0_70_Text:SetLifeTime(0.0);
	text0_70_Text:SetVisible(true);
	text0_70_Text:SetRotationAngle(0.0);
	text0_70_Text:SetScale(1.0,1.0);
	text0_70_Text:SetCenter(Point2D(0.0,0.0));
	text0_70_Text:SetOpacity(1.0);
	text0_70_Text:SetZOrder(2.0);
	layer1_Layer:AddGameObject(text0_70_Text)



	--Sounds Setters
	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Menu.wav";
	sound0_57_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,true,0.0);
	sound0_57_Sound:SetName("sound0");
	sound0_57_Sound:SetPosition(Point2D(0.0,0.0));
	sound0_57_Sound:Play(false);
	sound0_57_Sound:SetVolume(1.0);
	sound0_57_Sound:SetPitch(1.0);
	sound0_57_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(sound0_57_Sound)



	--Sprites Setters
	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\BG.png",1,1,1.0);
	anim0:SetName("BG");
	BG_35_Sprite = Sprite(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor13);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		BG_35_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	BG_35_Sprite:SetName("BG");
	BG_35_Sprite:SetCollisionActorIndex(13);
	BG_35_Sprite:SetOpacity(1.0);
	BG_35_Sprite:Play(true);
	BG_35_Sprite:SetPosition(Point2D(0.0,5.0));
	BG_35_Sprite:SetCurrentAnimationIndex(0);
	BG_35_Sprite:SetCurrentFrameIndex(0);
	BG_35_Sprite:SetLoop(true);
	BG_35_Sprite:SetAnimationSpeed(1.0);
	BG_35_Sprite:SetFlipHorizontal(false);
	BG_35_Sprite:SetFlipVertical(false);
	BG_35_Sprite:SetLifeTime(0.0);
	BG_35_Sprite:SetVisible(true);
	BG_35_Sprite:SetRotationAngle(0.0);
	BG_35_Sprite:SetScale(1.0, 1.0);
	BG_35_Sprite:SetCenter(Point2D(0.0,0.0));
	BG_35_Sprite:SetZOrder(0.0);
	
	layer1_Layer:AddGameObject(BG_35_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Animation0.png",1,1,1.0);
	anim0:SetName("Animation0");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBam.png",1,1,1.0);
	anim1:SetName("EBam");
		anim2 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EMBL.png",1,1,1.0);
	anim2:SetName("EMBL");
	bullet1_61_Sprite = EnemyBullet(anim0, anim1, anim2);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor3);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(1);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		bullet1_61_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	bullet1_61_Sprite:SetName("bullet1");
	bullet1_61_Sprite:SetCollisionActorIndex(3);
	bullet1_61_Sprite:SetOpacity(1.0);
	bullet1_61_Sprite:Play(true);
	bullet1_61_Sprite:SetPosition(Point2D(-505.0,-104.0));
	bullet1_61_Sprite:SetCurrentAnimationIndex(0);
	bullet1_61_Sprite:SetCurrentFrameIndex(0);
	bullet1_61_Sprite:SetLoop(true);
	bullet1_61_Sprite:SetAnimationSpeed(1.0);
	bullet1_61_Sprite:SetFlipHorizontal(false);
	bullet1_61_Sprite:SetFlipVertical(false);
	bullet1_61_Sprite:SetLifeTime(0.0);
	bullet1_61_Sprite:SetVisible(false);
	bullet1_61_Sprite:SetRotationAngle(0.0);
	bullet1_61_Sprite:SetScale(1.0, 1.0);
	bullet1_61_Sprite:SetCenter(Point2D(0.0,0.0));
	bullet1_61_Sprite:SetZOrder(1.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		bullet1_61_Sprite:SetCenter(Point2D(0.0,0.0));
		bullet1_61_Sprite:AddPhysicalProperties(MassProperties(0.01,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		bullet1_61_Sprite:SetVelocity(Vector2D(0.0,0.0));
		bullet1_61_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(bullet1_61_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Exit.png",2,1,1.0, 1.0);
	anim0:SetName("Exit");
	Exit_38_Sprite = ExitClass(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor14);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(true);
		Exit_38_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Exit_38_Sprite:SetName("Exit");
	Exit_38_Sprite:SetCollisionActorIndex(14);
	Exit_38_Sprite:SetOpacity(1.0);
	Exit_38_Sprite:Play(false);
	Exit_38_Sprite:SetPosition(Point2D(3.0,-233.0));
	Exit_38_Sprite:SetCurrentAnimationIndex(0);
	Exit_38_Sprite:SetCurrentFrameIndex(0);
	Exit_38_Sprite:SetLoop(false);
	Exit_38_Sprite:SetAnimationSpeed(1.0);
	Exit_38_Sprite:SetFlipHorizontal(false);
	Exit_38_Sprite:SetFlipVertical(false);
	Exit_38_Sprite:SetLifeTime(0.0);
	Exit_38_Sprite:SetVisible(true);
	Exit_38_Sprite:SetRotationAngle(0.0);
	Exit_38_Sprite:SetScale(1.0, 1.0);
	Exit_38_Sprite:SetCenter(Point2D(0.0,0.0));
	Exit_38_Sprite:SetZOrder(2.0);
	
	layer1_Layer:AddGameObject(Exit_38_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Start.png",2,1,1.0, 1.0);
	anim0:SetName("Start");
	Start_36_Sprite = StartClass(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor15);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(true);
		Start_36_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Start_36_Sprite:SetName("Start");
	Start_36_Sprite:SetCollisionActorIndex(15);
	Start_36_Sprite:SetOpacity(1.0);
	Start_36_Sprite:Play(false);
	Start_36_Sprite:SetPosition(Point2D(3.0,-73.0));
	Start_36_Sprite:SetCurrentAnimationIndex(0);
	Start_36_Sprite:SetCurrentFrameIndex(0);
	Start_36_Sprite:SetLoop(false);
	Start_36_Sprite:SetAnimationSpeed(1.0);
	Start_36_Sprite:SetFlipHorizontal(false);
	Start_36_Sprite:SetFlipVertical(false);
	Start_36_Sprite:SetLifeTime(0.0);
	Start_36_Sprite:SetVisible(true);
	Start_36_Sprite:SetRotationAngle(0.0);
	Start_36_Sprite:SetScale(1.0, 1.0);
	Start_36_Sprite:SetCenter(Point2D(0.0,0.0));
	Start_36_Sprite:SetZOrder(2.0);
	
	layer1_Layer:AddGameObject(Start_36_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Instructions.png",2,1,1.0, 1.0);
	anim0:SetName("Instructions");
	Instructions_37_Sprite = Instruction1(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor16);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(true);
		Instructions_37_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	Instructions_37_Sprite:SetName("Instructions");
	Instructions_37_Sprite:SetCollisionActorIndex(16);
	Instructions_37_Sprite:SetOpacity(1.0);
	Instructions_37_Sprite:Play(false);
	Instructions_37_Sprite:SetPosition(Point2D(3.0,-153.0));
	Instructions_37_Sprite:SetCurrentAnimationIndex(0);
	Instructions_37_Sprite:SetCurrentFrameIndex(0);
	Instructions_37_Sprite:SetLoop(false);
	Instructions_37_Sprite:SetAnimationSpeed(1.0);
	Instructions_37_Sprite:SetFlipHorizontal(false);
	Instructions_37_Sprite:SetFlipVertical(false);
	Instructions_37_Sprite:SetLifeTime(0.0);
	Instructions_37_Sprite:SetVisible(true);
	Instructions_37_Sprite:SetRotationAngle(0.0);
	Instructions_37_Sprite:SetScale(1.0, 1.0);
	Instructions_37_Sprite:SetCenter(Point2D(0.0,0.0));
	Instructions_37_Sprite:SetZOrder(2.0);
	
	layer1_Layer:AddGameObject(Instructions_37_Sprite)



	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level3_Layer1_StaticCollision()
end




function Set_Level3_Layer2_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level3_Layer2_StaticCollision()
end

function CreateLevel3()
	level3_Level = MenuClass();
	level3_Level:SetName("Menu");
	level3_Level:SetClearBackBuffer(false);

	layer0_Layer = Layer(0.0);
	layer0_Layer:SetName("Menu_HUD");

	layer0_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);
	layer1_Layer = Layer(0.0);
	layer1_Layer:SetName("layer1");
	layer1_Layer:SetScale(1.0,1.0);
	layer1_Layer:SetRotation(0.0);
	layer1_Layer:SetCollisionProperties(Point2D(-513,-320),913,625);

	layer2_Layer = Layer(724.264);
	layer2_Layer:SetName("layer2");
	layer2_Layer:SetScale(1.0,1.0);
	layer2_Layer:SetRotation(0.0);
	layer2_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);


	camera0_34_Camera = Camera(45.0);
	camera0_34_Camera:SetName("camera0");
	camera0_34_Camera:SetPosition(Point2D(0.0,0.0));
	layer2_Layer:AddGameObject(camera0_34_Camera);


	Viewport0_Viewport = Viewport(0, 0, 800, 600);
	Viewport0_Viewport:SetClearColor(Color(0.2509804 ,0.2509804 ,0.2509804));
	Viewport0_Viewport:SetCamera(camera0_34_Camera);

	level3_Level:AddLayer(layer0_Layer);
	level3_Level:AddLayer(layer1_Layer);
	level3_Level:AddLayer(layer2_Layer);

	level3_Level:AddViewport(Viewport0_Viewport);

	Set_Level3_Layer0_Objects();
	Set_Level3_Layer1_Objects();
	Set_Level3_Layer2_Objects();

	MountObjectsLevel3();
	CreateLevelForms(3);
	return level3_Level;
end

-------------------------LEVEL4--------------------------

--Physics Joints
function MountObjectsLevel4()
end

--static collision
function Level4_Layer0_StaticCollision()
	layer0_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level4_layer0.txt" )
end

function Level4_Layer1_StaticCollision()
	layer1_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level4_layer1.txt" )
end

function Level4_Layer2_StaticCollision()
	layer2_Layer:ReadInformation_StaticCollision(Game.Get():GetDirectory().."\\Resources\\Layers Collisions\\level4_layer2.txt" )
end



function Set_Level4_Layer0_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level4_Layer0_StaticCollision()
end



function Set_Level4_Layer1_Objects()

	--TileMaps Setters

	--Texts Setters
	text0_42_Text= Text("The Vera, a mysterious artifact, has been stolen by a\nperson named Dan Tran, who plans to use the Vera's \nmysterious power to take over the world and become \nomnipotent. It is up to you, a member of The Retrieval\nof Artifacts and Treasures Squad (i.e. The RATS) to stop\nhim before it is too late.\n\nControls:\nArrow Keys - Movement\n           Z Key - Fire Bullets\n           X Key - Cast Spell                                Press Enter to\n    Left Shift - Slow Player Down                       return to \n                                                                               Main Menu",Game.Get():GetDirectory().."\\Resources\\Fonts\\Font0\\Font0");
	text0_42_Text:SetName("text0");
	text0_42_Text:SetPosition(Point2D(-358.0,182.0));
	text0_42_Text:SetLifeTime(0.0);
	text0_42_Text:SetVisible(true);
	text0_42_Text:SetRotationAngle(0.0);
	text0_42_Text:SetScale(1.0,1.0);
	text0_42_Text:SetCenter(Point2D(0.0,0.0));
	text0_42_Text:SetOpacity(1.0);
	text0_42_Text:SetZOrder(2.0);
	layer1_Layer:AddGameObject(text0_42_Text)



	--Sounds Setters
	sound_File = Game.Get():GetDirectory().."\\Resources\\Sounds\\Menu_0.wav";
	sound0_58_Sound = Sound(sound_File,SoundSpatialization.SoundSpatializationNone,10.0,true,0.0);
	sound0_58_Sound:SetName("sound0");
	sound0_58_Sound:SetPosition(Point2D(0.0,0.0));
	sound0_58_Sound:Play(false);
	sound0_58_Sound:SetVolume(1.0);
	sound0_58_Sound:SetPitch(1.0);
	sound0_58_Sound:SetLifeTime(0.0);
	layer1_Layer:AddGameObject(sound0_58_Sound)



	--Sprites Setters
	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\InBG.png",1,1,1.0);
	anim0:SetName("InBG");
	sprite0_41_Sprite = Sprite(anim0);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor12);
		dynamicCollisionData:SetCollisionType(false);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(0);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		sprite0_41_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	sprite0_41_Sprite:SetName("sprite0");
	sprite0_41_Sprite:SetCollisionActorIndex(12);
	sprite0_41_Sprite:SetOpacity(1.0);
	sprite0_41_Sprite:Play(true);
	sprite0_41_Sprite:SetPosition(Point2D(0.0,0.0));
	sprite0_41_Sprite:SetCurrentAnimationIndex(0);
	sprite0_41_Sprite:SetCurrentFrameIndex(0);
	sprite0_41_Sprite:SetLoop(true);
	sprite0_41_Sprite:SetAnimationSpeed(1.0);
	sprite0_41_Sprite:SetFlipHorizontal(false);
	sprite0_41_Sprite:SetFlipVertical(false);
	sprite0_41_Sprite:SetLifeTime(0.0);
	sprite0_41_Sprite:SetVisible(true);
	sprite0_41_Sprite:SetRotationAngle(0.0);
	sprite0_41_Sprite:SetScale(1.0, 1.0);
	sprite0_41_Sprite:SetCenter(Point2D(0.0,0.0));
	sprite0_41_Sprite:SetZOrder(0.0);
	
	layer1_Layer:AddGameObject(sprite0_41_Sprite)

	anim0 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\Animation0.png",1,1,1.0);
	anim0:SetName("Animation0");
		anim1 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EBam.png",1,1,1.0);
	anim1:SetName("EBam");
		anim2 = SpriteAnimation(Game.Get():GetDirectory().."\\Resources\\Animations\\EMBL.png",1,1,1.0);
	anim2:SetName("EMBL");
	bullet1_68_Sprite = EnemyBullet(anim0, anim1, anim2);

	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		dynamicCollisionData =  DynamicObject();
		dynamicCollisionData:AddCollisionData(collisionActor3);
		dynamicCollisionData:SetCollisionType(true);
		dynamicCollisionData:SetCollisionThickness(4.0);
		dynamicCollisionData:SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData:SetZCollision(1);
		dynamicCollisionData:SetCanCollid(0,true);
		dynamicCollisionData:SetUpdateOnIdle(false);
		bullet1_68_Sprite:AddCollision(dynamicCollisionData, layer1_Layer:GetCollisionId());
	end

	bullet1_68_Sprite:SetName("bullet1");
	bullet1_68_Sprite:SetCollisionActorIndex(3);
	bullet1_68_Sprite:SetOpacity(1.0);
	bullet1_68_Sprite:Play(true);
	bullet1_68_Sprite:SetPosition(Point2D(-451.0,-250.0));
	bullet1_68_Sprite:SetCurrentAnimationIndex(0);
	bullet1_68_Sprite:SetCurrentFrameIndex(0);
	bullet1_68_Sprite:SetLoop(true);
	bullet1_68_Sprite:SetAnimationSpeed(1.0);
	bullet1_68_Sprite:SetFlipHorizontal(false);
	bullet1_68_Sprite:SetFlipVertical(false);
	bullet1_68_Sprite:SetLifeTime(0.0);
	bullet1_68_Sprite:SetVisible(false);
	bullet1_68_Sprite:SetRotationAngle(0.0);
	bullet1_68_Sprite:SetScale(1.0, 1.0);
	bullet1_68_Sprite:SetCenter(Point2D(0.0,0.0));
	bullet1_68_Sprite:SetZOrder(1.0);
	
	if(not Game.Get():IsNetworkGame() or Game.Get():IsServer())
	then
		bullet1_68_Sprite:SetCenter(Point2D(0.0,0.0));
		bullet1_68_Sprite:AddPhysicalProperties(MassProperties(0.01,0.0,Point2D(0.0,0.0)),Physics.ODESolverMethodEuler);
		bullet1_68_Sprite:SetVelocity(Vector2D(0.0,0.0));
		bullet1_68_Sprite:SetAngularVelocity(0.0);
	end

	layer1_Layer:AddGameObject(bullet1_68_Sprite)



	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level4_Layer1_StaticCollision()
end




function Set_Level4_Layer2_Objects()

	--TileMaps Setters

	--Texts Setters

	--Sounds Setters

	--Sprites Setters

	--ParticleSystems Setters

	--Joints Setters

	--setStaticCollision
	Level4_Layer2_StaticCollision()
end

function CreateLevel4()
	level4_Level = LoserLevel();
	level4_Level:SetName("Instructions");
	level4_Level:SetClearBackBuffer(false);

	layer0_Layer = Layer(0.0);
	layer0_Layer:SetName("Instructions_HUD");

	layer0_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);
	layer1_Layer = Layer(0.0);
	layer1_Layer:SetName("layer1");
	layer1_Layer:SetScale(1.0,1.0);
	layer1_Layer:SetRotation(0.0);
	layer1_Layer:SetCollisionProperties(Point2D(-459,-300),859,600);

	layer2_Layer = Layer(724.264);
	layer2_Layer:SetName("layer2");
	layer2_Layer:SetScale(1.0,1.0);
	layer2_Layer:SetRotation(0.0);
	layer2_Layer:SetCollisionProperties(Point2D(-400,-300),800,600);


	camera0_39_Camera = Camera(45.0);
	camera0_39_Camera:SetName("camera0");
	camera0_39_Camera:SetPosition(Point2D(0.0,0.0));
	layer2_Layer:AddGameObject(camera0_39_Camera);


	Viewport0_Viewport = Viewport(0, 0, 800, 600);
	Viewport0_Viewport:SetClearColor(Color(0.2509804 ,0.2509804 ,0.2509804));
	Viewport0_Viewport:SetCamera(camera0_39_Camera);

	level4_Level:AddLayer(layer0_Layer);
	level4_Level:AddLayer(layer1_Layer);
	level4_Level:AddLayer(layer2_Layer);

	level4_Level:AddViewport(Viewport0_Viewport);

	Set_Level4_Layer0_Objects();
	Set_Level4_Layer1_Objects();
	Set_Level4_Layer2_Objects();

	MountObjectsLevel4();
	CreateLevelForms(4);
	return level4_Level;
end


function GetLevelsCount()
	 return 5;
end

function CreateLevelForms(index)

	if (index ==0)
	then

	elseif (index ==1)
	then

	elseif (index ==2)
	then

	elseif (index ==3)
	then

	elseif (index ==4)
	then

		end

end

function CreateLevel(index)
	--Assets
	AddCollisionActors();

	if (index ==0)
	then
		return CreateLevel0();
	elseif (index ==1)
	then
		return CreateLevel1();
	elseif (index ==2)
	then
		return CreateLevel2();
	elseif (index ==3)
	then
		return CreateLevel3();
	elseif (index ==4)
	then
		return CreateLevel4();
		end

	return 0;
end

function GetLevelIndexFromName(levelName)
	if(levelName == "level0")
	then
		return 0;
	elseif(levelName == "Lose")
	then
		return 1;
	elseif(levelName == "Win")
	then
		return 2;
	elseif(levelName == "Menu")
	then
		return 3;
	elseif(levelName == "Instructions")
	then
		return 4;
	else	end
	return -1;
end

function Reset()

	--Cameras
	camera0_2_Camera = 0;
	camera0_18_Camera = 0;
	camera0_30_Camera = 0;
	camera0_34_Camera = 0;
	camera0_39_Camera = 0;

	--Texts
	text1_15_Text = 0;
	text2_16_Text = 0;
	text3_17_Text = 0;
	text0_10_Text = 0;
	text4_22_Text = 0;
	text5_23_Text = 0;
	text0_47_Text = 0;
	text2_45_Text = 0;
	text0_31_Text = 0;
	text1_44_Text = 0;
	text0_70_Text = 0;
	text0_42_Text = 0;

	--Sounds
	BossMusic_32_Sound = 0;
	F_51_Sound = 0;
	FS_52_Sound = 0;
	Level_59_Sound = 0;
	sound0_66_Sound = 0;
	sound0_65_Sound = 0;
	sound0_57_Sound = 0;
	sound0_58_Sound = 0;

	--TileMaps

	--Sprites
	sprite0_21_Sprite = 0;
	BG1_54_Sprite = 0;
	BG2_55_Sprite = 0;
	Player1_3_Sprite = 0;
	bullet1_6_Sprite = 0;
	playerBullet_4_Sprite = 0;
	Enemy_8_Sprite = 0;
	Enemy_5_Sprite = 0;
	boss_28_Sprite = 0;
	spell3_13_Sprite = 0;
	spell4_14_Sprite = 0;
	spell1_9_Sprite = 0;
	spell2_12_Sprite = 0;
	Cutscene_49_Sprite = 0;
	Power_7_Sprite = 0;
	sprite0_53_Sprite = 0;
	sprite0_46_Sprite = 0;
	bullet1_69_Sprite = 0;
	sprite0_43_Sprite = 0;
	bullet1_67_Sprite = 0;
	BG_35_Sprite = 0;
	bullet1_61_Sprite = 0;
	Exit_38_Sprite = 0;
	Start_36_Sprite = 0;
	Instructions_37_Sprite = 0;
	sprite0_41_Sprite = 0;
	bullet1_68_Sprite = 0;

	--ParticleSystems
	particleSystem0_24_ParticleSystem = 0;
	particleSystem1_25_ParticleSystem = 0;
	particleSystem2_27_ParticleSystem = 0;

	--ViewPorts
	Viewport0_Viewport = 0;

	--Layers
	layer0_Layer = 0;
	layer1_Layer = 0;
	layer2_Layer = 0;

	--Levels
	level0_Level = 0;
	level1_Level = 0;
	level2_Level = 0;
	level3_Level = 0;
	level4_Level = 0;

end
function MountObjectsLevel0()
	
end
function MountObjectsLevel1()
	
end
function MountObjectsLevel2()
	
end
function MountObjectsLevel3()
	
end
function MountObjectsLevel4()
	
end
