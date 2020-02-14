enum
{
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};
class CfgMods
{
	class ShredAnimals
	{
		dir="ShredAnimals";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="ShredAnimals";
		credits="";
		author="Shredorama";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ShredAnimals\scripts\4_world"
				};
			};
		};
	};
};

class CfgPatches
{
<<<<<<< HEAD
	
	class DZ_Animals_Shred_Tiger
	{
		units[]=
		{
			"Animal_Tiger","Animal_Tigris"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_AI",
			"DZ_AI_Bliss",
			"DZ_Animals",
			"DZ_Animals_Bliss",
			"DZ_Data_Bliss",
			"DZ_Data",
			"DZ_Surfaces",
			"DZ_Surfaces_Bliss",
			"DZ_Weapons_Melee"
		};
	};
=======
	class DZ_Animals_GS_Tiger
	{
		units[]=
		{
			"Animal_GS_Tiger"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ",
			"DZ_AI",
			"DZ_AI_Bliss",
			"DZ_animals",
			"DZ_animals_bliss",
			"DZ_data_bliss",
			"DZ_data",
			"DZ_surfaces",
			"DZ_surfaces_bliss",
			'DZ_gear_consumables',
			"DZ_weapons_melee"
		};
	};
	class DZ_Animals_Shred_Tiger
	{
		units[]=
		{
			"Animal_Shred_Tiger"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ",
			"DZ_AI",
			"DZ_AI_Bliss",
			"DZ_animals",
			"DZ_animals_bliss",
			"DZ_data_bliss",
			"DZ_data",
			"DZ_surfaces",
			"DZ_surfaces_bliss",
			'DZ_gear_consumables',
			"DZ_weapons_melee"
		};
	};

};
class CfgModels
{
	class Default
	{
		sections[] = {};
		sectionsInherit="";
		skeletonName = "";
	};
	class tigerx2:Default
	{
		skeletonName="CanisLupusAISkeleton";
	};
	
	class TestPelt:Default
	{
		
	};
	class TigerPelt:Default
	{
		
	};
>>>>>>> upstream/master
};
class AIParams
{
	maxNoiseRange=400;
	rainToNoiseMultiplier=10;
	seaToNoiseMultiplier=15;
	noiseDampeningMultiplier=0.69999999;
	noiseCollisionDampeningMultiplier=0.40000001;
	groupLODDistance=1000;
	class AgentTeams
	{
		TeamList[]=
		{
			"Player",
			"BigGame",
			"Zombies",
			"Predator",
			"GSTiger",
			"AmbientLife"
		};
		class Player
		{
			friends[]=
			{
				"Player"
			};
		};
		class Predator
		{
			friends[]=
			{
				"Predator",
				"Zombies",
				"AmbientLife"
			};
		};
		class BigGame
		{
			friends[]=
			{
				"BigGame",
				"AmbientLife"
			};
		};
		class Zombies
		{
			friends[]=
			{
				"Zombies",
				"Predator",
				"AmbientLife"
			};
		};
		class AmbientLife
		{
			friends[]=
			{
				"AmbientLife"
			};
		};
		class GSTiger
		{
			friends[]=
			{
				"GSTiger"
			};
		};
	};
};
class PathGraphFilters
{
	class TigerOnHunt
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
				"jumpover",
				"swim",
				"swimsea",
				"climb",
				"crawl",
				"crouch"
			};
			exclude[]=
			{
				"disabled"
			};
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=1;
			jump3=1;
			jump4=0;
			water=1;
		};
	};
	class TigerOnOuterCircle
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"jumpover",
				"swim",
				"swimsea",
				"climb",
				"crawl",
				"crouch"
			};
			exclude[]=
			{
				"disabled"
			};
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=1;
			jump3=1;
			jump4=0;
			water=1;
		};
	};
};
class GroupBehaviourTemplates
{
		class GSTigerGroupBeh
	{
		type="Predators";
		alertDistributionSpeed=200;
		catchUpTestDelay=1;
		catchUpStartRadius=10;
		catchUpTargetRadius=4;
		groupRadius=15;
		spawnMinDistanceBetweenAgents=1;
		agentPathLength=100;
		atNeedMinDuration=60;
		atNeedMaxDuration=120;
		singleAgentSafeKeeperDelayMin=100;
		singleAgentSafeKeeperDelayMax=100;
		preyAttractionRange=350;
		innerOuterCircleRatio=0.60000002;
		endAttractionRange=60;
		attractionCooldown=60;
		endAttractionTime=300;
		targetEscapingSpeed=400;
		killAddFear=0;
		eatingTime=600;
		huntingCooldown=60;
		maxHuntingTime=60;
		safeKeeperIntervalMin=20;
		safeKeeperIntervalMax=40;
		siegeAttackCountdownMin=1;
		siegeAttackCountdownMax=12;
		huntAttackCountdownMin=1;
		huntAttackCountdownMax=10;
		changeTargetCooldown=5;
		changeTargetAlertRatio=1.3;
		changeTargetEffectRadius=6;
		subgroupSpacingMax=500;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=8;
				endTimeMax=9;
				zoneType="Graze";
			};
			class Activity2
			{
				endTimeMin=10;
				endTimeMax=11;
				zoneType="Graze";
			};
			class Activity3
			{
				endTimeMin=13;
				endTimeMax=14;
				zoneType="Graze";
			};
<<<<<<< Updated upstream
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=0.5;
			jump3=0;
			jump4=0;
			water=1;
			building=5;
		};
	};
	class WolfOnHunt
	{
		class Flags
		{
			include[]=
=======
			class Activity4
>>>>>>> Stashed changes
			{
				endTimeMin=17;
				endTimeMax=18;
				zoneType="Graze";
			};
			class Activity5
			{
				endTimeMin=20;
				endTimeMax=21;
				zoneType="Graze";
			};
		};
	};
};
class CfgAIBehaviours
{
	class Predators_Tiger
	{
		HeadLookBoneName="pin_lookat";
		teamName="GSTiger";
		defaultGroupTemplateName="GSTigerGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
<<<<<<< Updated upstream
			jump0=0;
			jump1=0;
			jump2=1;
			jump3=1;
			jump4=0;
			water=1;
		};
	};
	class TigerOnHunt
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
				"jumpover",
				"swim",
				"swimsea",
				"climb",
				"crawl",
				"crouch"
			};
			exclude[]=
			{
				"disabled"
			};
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=1;
			jump3=1;
			jump4=0;
			water=1;
		};
	};
	class TigerOnOuterCircle
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"jumpover"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"swimsea",
				"climb",
				"crawl",
				"crouch"
			};
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=1;
			jump3=1;
			jump4=0;
			water=1;
		};
	};
	class NoJumping
	{
		class Flags
		{
			include[]=
=======
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
>>>>>>> Stashed changes
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerPant0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerPant1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerPant2_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerPant3_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerPant4_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerPant5_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"TigerPant6_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"TigerPant7_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"TigerGrowl0_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"TigerGrowl1_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"TigerGrowl2_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="TigerOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="TigerOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="TigerOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerBark3_0_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerBark2_0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerBark2_1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerBark2_2_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"TigerBark2_3_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"TigerBark2_4_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="TigerOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="TigerOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
<<<<<<< Updated upstream
			class Activity4
			{
				endTimeMin=22.5;
				endTimeMax=23.5;
				zoneType="HuntingGround";
				stayInZone="false";
			};
		};
	};
	class DZDeerGroupBeh
	{
		type="WildHerbivores";
		alertDistributionSpeed=20;
		catchUpTestDelay=4;
		catchUpStartRadius=30;
		catchUpTargetRadius=7;
		groupRadius=10;
		spawnMinDistanceBetweenAgents=3;
		agentPathLength=60;
		atNeedMinDuration=60;
		atNeedMaxDuration=60;
		singleAgentSafeKeeperDelayMin=10;
		singleAgentSafeKeeperDelayMax=100;
		safeKeeperIntervalMin=10;
		safeKeeperIntervalMax=30;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=8;
				endTimeMax=9;
				zoneType="Graze";
			};
			class Activity2
			{
				endTimeMin=10;
				endTimeMax=11;
				zoneType="Rest";
			};
			class Activity3
			{
				endTimeMin=13;
				endTimeMax=14;
				zoneType="Graze";
			};
			class Activity4
			{
				endTimeMin=17;
				endTimeMax=18;
				zoneType="Graze";
			};
			class Activity5
			{
				endTimeMin=20;
				endTimeMax=21;
				zoneType="Water";
			};
		};
	};
	class DZdomesticGroupBeh
	{
		type="DomesticHerbivores";
		alertDistributionSpeed=0;
		groupMaxAlertedSpreadRadius=30;
		catchUpStartRadius=50;
		catchUpTargetRadius=15;
		groupRadius=10;
		spawnMinDistanceBetweenAgents=3;
		agentPathLength=60;
		atNeedMinDuration=60;
		atNeedMaxDuration=60;
		singleAgentSafeKeeperDelayMin=20;
		singleAgentSafeKeeperDelayMax=20;
		pauseLifeCycleAfterEscapeDuration=60;
		safeKeeperIntervalMin=10;
		safeKeeperIntervalMax=30;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=8;
				endTimeMax=9;
				zoneType="Rest";
			};
			class Activity2
			{
				endTimeMin=11;
				endTimeMax=12;
				zoneType="Water";
			};
			class Activity3
			{
				endTimeMin=13;
				endTimeMax=14;
				zoneType="Graze";
			};
			class Activity4
			{
				endTimeMin=18;
				endTimeMax=19;
				zoneType="Graze";
			};
			class Activity5
			{
				endTimeMin=20;
				endTimeMax=21;
				zoneType="Graze";
			};
		};
	};
	class DZSheepGroupBeh
	{
		type="DomesticHerbivores";
		alertDistributionSpeed=0;
		groupMaxAlertedSpreadRadius=10;
		catchUpTestDelay=1;
		catchUpStartRadius=15;
		catchUpTargetRadius=5;
		groupRadius=10;
		spawnMinDistanceBetweenAgents=3;
		agentPathLength=30;
		atNeedMinDuration=60;
		atNeedMaxDuration=60;
		singleAgentSafeKeeperDelayMin=20;
		singleAgentSafeKeeperDelayMax=20;
		pauseLifeCycleAfterEscapeDuration=60;
		safeKeeperIntervalMin=10;
		safeKeeperIntervalMax=20;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=8;
				endTimeMax=9;
				zoneType="Rest";
			};
			class Activity2
			{
				endTimeMin=10;
				endTimeMax=11;
				zoneType="Graze";
			};
			class Activity3
			{
				endTimeMin=13;
				endTimeMax=14;
				zoneType="Graze";
			};
			class Activity4
			{
				endTimeMin=18;
				endTimeMax=19;
				zoneType="Rest";
			};
			class Activity5
			{
				endTimeMin=20;
				endTimeMax=21;
				zoneType="Graze";
			};
		};
	};
	class BlissBearGroupBeh
	{
		type="Bear";
		agentPathLength=20;
		simpleLodGroupSpeed=1;
		singleAgentSafeKeeperDelayMin=30;
		singleAgentSafeKeeperDelayMax=50;
		safeKeeperIntervalMin=30;
		safeKeeperIntervalMax=50;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=8;
				endTimeMax=9;
				zoneType="Graze";
			};
			class Activity2
			{
				endTimeMin=10;
				endTimeMax=11;
				zoneType="Graze";
			};
			class Activity3
			{
				endTimeMin=13;
				endTimeMax=14;
				zoneType="Graze";
			};
			class Activity4
			{
				endTimeMin=17;
				endTimeMax=18;
				zoneType="Graze";
			};
			class Activity5
			{
				endTimeMin=20;
				endTimeMax=21;
				zoneType="Graze";
			};
		};
	};
	class ShredGroupBeh
	{
		type="Predators";
		agentPathLength=20;
		simpleLodGroupSpeed=1;
		singleAgentSafeKeeperDelayMin=30;
		singleAgentSafeKeeperDelayMax=50;
		safeKeeperIntervalMin=30;
		safeKeeperIntervalMax=50;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=8;
				endTimeMax=9;
				zoneType="Graze";
			};
			class Activity2
			{
				endTimeMin=10;
				endTimeMax=11;
				zoneType="Graze";
			};
			class Activity3
			{
				endTimeMin=13;
				endTimeMax=14;
				zoneType="Graze";
			};
			class Activity4
			{
				endTimeMin=17;
				endTimeMax=18;
				zoneType="Graze";
			};
			class Activity5
			{
				endTimeMin=20;
				endTimeMax=21;
				zoneType="Graze";
			};
		};
	};
};
class CfgAIBehaviours
{
class Predators_Wolf
	{
		HeadLookBoneName="pin_lookat";
		teamName="Predator";
		defaultGroupTemplateName="DZWolfGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
<<<<<<< HEAD
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
=======
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
=======
			class SlotCalmTravelling
>>>>>>> Stashed changes
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="TigerOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerHowls1_SoundSet",
								"TigerHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerHowls2_SoundSet",
								"TigerHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerHowls3_SoundSet",
								"TigerHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"TigerHowls4_SoundSet",
								"TigerHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"TigerHowls5_SoundSet",
								"TigerHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"TigerHowls6_SoundSet",
								"TigerHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"TigerHowls5_SoundSet",
								"TigerHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"TigerHowls6_SoundSet",
								"TigerHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.89999998;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerHowl1_SoundSet",
								"TigerHowl1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerHowl2_SoundSet",
								"TigerHowl2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerHowl3_SoundSet",
								"TigerHowl3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"TigerHowl4_SoundSet",
								"TigerHowl4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"TigerHowl5_SoundSet",
								"TigerHowl5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"TigerHowl6_SoundSet",
								"TigerHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"TigerHowl5_SoundSet",
								"TigerHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"TigerHowl6_SoundSet",
								"TigerHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.5;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="TigerOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="TigerOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
>>>>>>> upstream/master
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
<<<<<<< HEAD
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
=======
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
>>>>>>> upstream/master
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
<<<<<<< HEAD
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
=======
						slowRadius=0;
						stopRadius=0.5;
>>>>>>> upstream/master
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
<<<<<<< HEAD
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant2_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant3_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant4_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant5_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfPant6_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfPant7_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfGrowl0_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfGrowl1_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfGrowl2_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
=======
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"TigerGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerGroans3_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
>>>>>>> upstream/master
					{
						class Sound1
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfBark3_0_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark2_0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfBark2_1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfBark2_2_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfBark2_3_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfBark2_4_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
=======
								"TigerGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"TigerGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"TigerGroans3_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
				Predators=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
};
class CfgDamages
{
	class TigerBiteDamage
	{
		bone="tongue2";
		ammo="MeleeTiger";
		radius=0.40000001;
		duration=0.2;
	};
	class TigerLowBiteDamage
	{
		bone="tongue2";
		ammo="MeleeTiger";
		radius=0.40000001;
		duration=0.2;
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class MeleeTiger: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=0.85000002;
			class Health
			{
				damage=45;
			};
			class Blood
			{
				damage=175;
			};
			class Shock
			{
				damage=35;
			};
			additionAnimalMeleeMultiplier=8;
		};
		soundGroundSoft1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_01",
			0.5,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_02",
			0.5,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_03",
			0.5,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_04",
			0.5,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_05",
			0.5,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_06",
			0.5,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_07",
			0.5,
			1,
			60
		};
<<<<<<< Updated upstream
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=6;
>>>>>>> upstream/master
			class SlotCalmResting
			{
				class BehaviourCalm
				{
<<<<<<< HEAD
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
=======
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=80;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=80;
					restingDurationMin=40;
					restingDurationMax=60;
					travelingDurationMin=20;
					travelingDurationMax=20;
					safetyDurationMin=14;
					safetyDurationMax=24;
>>>>>>> upstream/master
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
<<<<<<< HEAD
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
=======
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.5;
						RepeatTimeMin=10;
						RepeatTimeMax=50;
						RepeatEnabled="true";
					};
					travelingMode="false";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=40;
					restingDurationMin=20;
					restingDurationMax=20;
					travelingDurationMin=20;
					travelingDurationMax=20;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
>>>>>>> upstream/master
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
<<<<<<< HEAD
=======
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.5;
						RepeatTimeMin=10;
						RepeatTimeMax=50;
						RepeatEnabled="true";
					};
>>>>>>> upstream/master
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
<<<<<<< HEAD
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
=======
					grazeOnSpotDurationMin=15;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=20;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=40;
					travelingDurationMax=60;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.5;
						RepeatTimeMin=10;
						RepeatTimeMax=50;
						RepeatEnabled="true";
					};
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=10;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=20;
					drinkingDurationMin=15;
					drinkingDurationMax=20;
					grazeWalkingSpeed=0.17900001;
					travelingWalkingSpeed=1.196;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
>>>>>>> upstream/master
					};
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
<<<<<<< HEAD
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
=======
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
>>>>>>> upstream/master
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
<<<<<<< HEAD
						class Sound1
						{
							sounds[]=
							{
								"WolfHowls1_SoundSet",
								"WolfHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowls2_SoundSet",
								"WolfHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowls3_SoundSet",
								"WolfHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowls4_SoundSet",
								"WolfHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.89999998;
					};
					class SoundsDuring
=======
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.80000001;
					};
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.30000001;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=7;
					walkToDurationMax=14;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					class SoundsEntering
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.80000001;
					};
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=150;
						probability=0.30000001;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					walkAwayWeight=10;
					walkToWeight=10;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=10;
					walkAwayDurationMax=20;
					walkToDurationMin=7;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
>>>>>>> upstream/master
					{
						class Sound1
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfHowl1_SoundSet",
								"WolfHowl1_tailDistant_SoundSet"
=======
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
>>>>>>> upstream/master
							};
						};
						class Sound2
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfHowl2_SoundSet",
								"WolfHowl2_tailDistant_SoundSet"
=======
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
>>>>>>> upstream/master
							};
						};
						class Sound3
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfHowl3_SoundSet",
								"WolfHowl3_tailDistant_SoundSet"
=======
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
>>>>>>> upstream/master
							};
						};
						class Sound4
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfHowl4_SoundSet",
								"WolfHowl4_tailDistant_SoundSet"
=======
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
>>>>>>> upstream/master
							};
						};
						class Sound5
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfHowl5_SoundSet",
								"WolfHowl5_tailDistant_SoundSet"
=======
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
>>>>>>> upstream/master
							};
						};
						class Sound6
						{
							sounds[]=
							{
<<<<<<< HEAD
								"WolfHowl6_SoundSet",
								"WolfHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.5;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
=======
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=200;
						probability=0.30000001;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=11.76;
						optimalSpeed=9.6000004;
						minSpeed=0.89999998;
						maxSpeedRange=50;
						optimalSpeedRange=25;
						acceleration=7;
						maxAngleSpeed=70;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="RoeDeerOnRun";
						startAnimationMaxSpeed=0.91000003;
>>>>>>> upstream/master
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
<<<<<<< HEAD
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
=======
						maxSpeed=1.35;
						optimalSpeed=1.35;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=0.91000003;
>>>>>>> upstream/master
					};
					class CatchUpMovement
					{
<<<<<<< HEAD
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
=======
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=0.91000003;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=7;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=10;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=20;
			rangeMax=70;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=50;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_CapraHircus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZSheepGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=10;
			instantAlertRangeMax=40;
			instantAlertStrength=9;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
>>>>>>> upstream/master
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
<<<<<<< HEAD
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroans3_SoundSet"
							};
						};
						probability=1;
=======
					grazeWalkingWeight=10;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
>>>>>>> upstream/master
					};
					class CatchUpMovement
					{
<<<<<<< HEAD
						class Sound1
						{
							sounds[]=
							{
								"WolfGroan1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroan2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroan3_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
=======
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
>>>>>>> upstream/master
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
<<<<<<< HEAD
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
class Predators_Shred
	{
		HeadLookBoneName="pin_lookat";
		teamName="Shred";
		defaultGroupTemplateName="ShredGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
=======
>>>>>>> upstream/master
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
<<<<<<< HEAD
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
=======
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotDrinking
>>>>>>> upstream/master
			{
				class BehaviourSiege
				{
<<<<<<< HEAD
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant2_SoundSet"
							};
						};
						probability=1;
=======
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=20;
					restingDurationMax=30;
					travelingDurationMin=0;
					travelingDurationMax=20;
					drinkingDurationMin=40;
					drinkingDurationMax=60;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
>>>>>>> upstream/master
					};
					class SoundsDuring
					{
<<<<<<< HEAD
						class Sound1
						{
							sounds[]=
							{
								"WolfPant3_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant4_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant5_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfPant6_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfPant7_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfGrowl0_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfGrowl1_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfGrowl2_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
=======
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotCalmTravelling
>>>>>>> upstream/master
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
<<<<<<< HEAD
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
=======
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=50;
					restingDurationMin=20;
					restingDurationMax=25;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=15;
					safetyDurationMax=35;
>>>>>>> upstream/master
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
<<<<<<< HEAD
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
=======
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
>>>>>>> upstream/master
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
<<<<<<< HEAD
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark3_0_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark2_0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfBark2_1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfBark2_2_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfBark2_3_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfBark2_4_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
=======
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsEntering
					{
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotSpec
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=0.5;
					walkAwayInitialAngle=1;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=6;
						optimalSpeed=2.8;
						minSpeed=2.1199999;
						maxSpeedRange=30;
						optimalSpeedRange=20;
						acceleration=4;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=2.1300001;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_OvisAriesSlotAlert
						{
							class AlertImpulseActionSendAlert_OvisAriesSlotAlert
							{
								value=50;
								range=10;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotAlert
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=10.44;
						optimalSpeed=6;
						minSpeed=0.41;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=60;
						slowRadius=6;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.41999999;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.2;
						optimalSpeed=0.41;
						minSpeed=0.41;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.41999999;
>>>>>>> upstream/master
					};
					class MovementAttack
					{
<<<<<<< HEAD
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
=======
						maxSpeed=0;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=60;
				noiseToAlertMultiplier=0.30000001;
				noiseShotToAlertMultiplier=1.2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=8;
					dropDelay=1;
					maxAlertValue=5;
				};
				class NonSpecificThreat
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=7;
					dropDelay=2;
					maxAlertValue=110;
				};
				class Alerted
				{
					dropSpeed=6;
					dropDelay=0.1;
					maxAlertValue=120;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=10;
			rangeMax=30;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=6;
			visionRangeMax=10;
			visionFov=1.6;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=8;
			visionPeripheralFov=6.2800002;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
	class Herbivores_SusDomesticus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZSheepGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=5;
			instantAlertRangeMax=15;
			instantAlertStrength=7;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
>>>>>>> upstream/master
			class SlotCalmResting
			{
				class BehaviourCalm
				{
<<<<<<< HEAD
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
=======
					travelingMode="false";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=15;
					grazeWalkingDurationMin=3;
					grazeWalkingDurationMax=8;
					restingDurationMin=15;
					restingDurationMax=20;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.25;
					travelingWalkingSpeed=0.95999998;
					safetyIntervalMin=13;
					safetyIntervalMax=27;
					safetyDurationMin=8;
					safetyDurationMax=12;
>>>>>>> upstream/master
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
<<<<<<< HEAD
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
=======
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
>>>>>>> upstream/master
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
<<<<<<< HEAD
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
=======
					travelingMode="false";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.25;
					travelingWalkingSpeed=0.95999998;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
>>>>>>> upstream/master
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
<<<<<<< HEAD
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
=======
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=100;
					restingDurationMax=100;
					travelingDurationMin=100;
					travelingDurationMax=100;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
>>>>>>> upstream/master
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
<<<<<<< HEAD
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowls1_SoundSet",
								"WolfHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowls2_SoundSet",
								"WolfHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowls3_SoundSet",
								"WolfHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowls4_SoundSet",
								"WolfHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.89999998;
=======
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=10;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=20;
					drinkingDurationMin=15;
					drinkingDurationMax=20;
					grazeWalkingSpeed=0.17900001;
					travelingWalkingSpeed=1.196;
					safetyIntervalMin=15;
					safetyIntervalMax=20;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
>>>>>>> upstream/master
					};
					class SoundsDuring
					{
<<<<<<< HEAD
						class Sound1
						{
							sounds[]=
							{
								"WolfHowl1_SoundSet",
								"WolfHowl1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowl2_SoundSet",
								"WolfHowl2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowl3_SoundSet",
								"WolfHowl3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowl4_SoundSet",
								"WolfHowl4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.5;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
=======
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=3;
					walkToDurationMax=5;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=10;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.69999999;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
>>>>>>> upstream/master
					};
				};
			};
			class SlotFireplace
			{
<<<<<<< HEAD
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
=======
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=0.1;
					walkToInitialAngle=0.1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=2;
					walkToDurationMax=6;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.69999999;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
>>>>>>> upstream/master
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
<<<<<<< HEAD
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroans2_SoundSet"
=======
						class OneTimeEventSendAlert_BosTaurusSlotAlert
						{
							class AlertImpulseActionSendAlert_BosTaurusSlotAlert
							{
								value=50;
								range=15;
>>>>>>> upstream/master
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroans3_SoundSet"
							};
						};
						probability=1;
					};
<<<<<<< HEAD
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroan1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroan2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroan3_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
=======
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=7.1999998;
						optimalSpeed=5;
						minSpeed=0.69999999;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.80000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=7.1999998;
						optimalSpeed=5;
						minSpeed=0.69999999;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.80000001;
>>>>>>> upstream/master
					};
					class RunMovement
					{
<<<<<<< HEAD
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
=======
						maxSpeed=7.1999998;
						optimalSpeed=5;
						minSpeed=0.69999999;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.80000001;
>>>>>>> upstream/master
					};
				};
			};
			class AlertSystem
			{
<<<<<<< HEAD
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
=======
				visionToAlertMultiplier=25;
				noiseToAlertMultiplier=0.69999999;
				noiseShotToAlertMultiplier=2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=10;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=5;
					maxAlertValue=70;
>>>>>>> upstream/master
				};
				class Alerted
				{
<<<<<<< HEAD
					dropSpeed=11;
					dropDelay=0;
=======
					dropSpeed=5;
					dropDelay=3;
>>>>>>> upstream/master
					maxAlertValue=100;
				};
				class AlertedExtra
				{
<<<<<<< HEAD
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
=======
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=115;
>>>>>>> upstream/master
				};
			};
		};
		class NoiseSystemParams
		{
<<<<<<< HEAD
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
=======
			rangeMin=10;
			rangeMax=25;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
>>>>>>> upstream/master
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
<<<<<<< HEAD
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
=======
			visionManSizeProne=0.44999999;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=15;
			visionRangeMax=20;
			visionFov=1.2;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=10;
			visionPeripheralFov=6.2800002;
>>>>>>> upstream/master
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
<<<<<<< HEAD
};
class CfgSoundShaders
{
	class TigerAttack_SoundShader
	{
		samples[]=
=======
	class Herbivores_SusScrofa
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
>>>>>>> upstream/master
		{
			
			{
				"ShredAnimals\tiger\tigris\tiger_growl",
				1
			}
		};
<<<<<<< HEAD
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerMumble_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\tiger\tigris\tigerpurr",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerRoar_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\tiger\tigris\tigerroar",
				1
			}
=======
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=20;
					restingDurationMax=30;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=5;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=20;
					restingDurationMax=30;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=15;
					grazeOnSpotDurationMax=25;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=20;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=50;
					drinkingDurationMax=70;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=17;
						optimalSpeed=12;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.35;
						optimalSpeed=1.35;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=7;
				noiseToAlertMultiplier=1;
				noiseShotToAlertMultiplier=2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=15;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=5;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=8;
					maxAlertValue=100;
				};
				class Alerted
				{
					dropSpeed=3;
					dropDelay=10;
					maxAlertValue=105;
				};
			};
>>>>>>> upstream/master
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
};
class CfgSoundSets
{
	class baseTiger_SoundSet
	{
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial="true";
		doppler="false";
		loop="false";
	};
	class TigerAttack_SoundSet: baseTiger_SoundSet
	{
		soundShaders[]=
		{
<<<<<<< HEAD
			"TigerAttack_SoundShader"
=======
			rangeMin=10;
			rangeMax=60;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
>>>>>>> upstream/master
		};
	};
		class TigerRoar_SoundSet: baseTiger_SoundSet
	{
		soundShaders[]=
		{
<<<<<<< HEAD
			"TigerRoar_SoundShader"
		};
	};
	class TigerMumble_SoundSet: baseTiger_SoundSet
=======
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=60;
			visionFov=1.2;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=25;
			visionPeripheralFov=3.1500001;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_CervusElaphusFem
>>>>>>> upstream/master
	{
		soundShaders[]=
		{
<<<<<<< HEAD
			"TigerMumble_SoundShader"
=======
			radius=0.2;
			height=1.4;
>>>>>>> upstream/master
		};
	};
};
class CfgDamages
{
	class DeerBiteDamage
	{
	};
	class WolfBiteDamage
	{
		bone="tongue3";
		ammo="MeleeWolf";
		radius=0.40000001;
		duration=0.2;
	};
	class WolfLowBiteDamage
	{
		bone="chest";
		ammo="MeleeWolf";
		radius=0.69999999;
		duration=0.5;
	};
	class BearBiteDamage
	{
		bone="tongue4";
		ammo="MeleeBear";
		radius=0.69999999;
		duration=0.2;
	};
	class BearLeftPawDamage
	{
		bone="lflegdigit11";
		ammo="MeleeBear";
		radius=0.69999999;
		duration=0.2;
	};
	class BearRightPawDamage
	{
		bone="rflegdigit11";
		ammo="MeleeBear";
		radius=0.69999999;
		duration=0.2;
	};
	class BearBiteDamageIntimidate
	{
		bone="tongue4";
		ammo="MeleeBearShock";
		radius=0.69999999;
		duration=0.2;
	};
	class BearLeftPawDamageIntimidate
	{
		bone="lflegdigit11";
		ammo="MeleeBearShock";
		radius=0.69999999;
		duration=0.2;
	};
	class BearRightPawDamageIntimidate
	{
		bone="rflegdigit11";
		ammo="MeleeBearShock";
		radius=0.69999999;
		duration=0.2;
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class MeleeBear: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=0.85000002;
			class Health
			{
<<<<<<< HEAD
				damage=25;
=======
				class BehaviourCalm
				{
					grazeOnSpotWeight=5;
					grazeWalkingWeight=5;
					restWeight=5;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=60;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=60;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyIntervalMin=15;
					safetyIntervalMax=15;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyIntervalMin=15;
					safetyIntervalMax=15;
					safetyDurationMin=20;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=20;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=50;
					safetyIntervalMin=15;
					safetyIntervalMax=20;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyIntervalMin=15;
					safetyIntervalMax=20;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
>>>>>>> upstream/master
			};
			class Blood
			{
<<<<<<< HEAD
				damage=110;
=======
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=15;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
>>>>>>> upstream/master
			};
			class Shock
			{
<<<<<<< HEAD
				damage=35;
=======
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=15;
						optimalSpeed=8;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=70;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.196;
						optimalSpeed=1.196;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=7;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=8;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
>>>>>>> upstream/master
			};
			additionAnimalMeleeMultiplier=5;
		};
		soundGroundSoft1[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_01",
			0.5,
			1,
			60
=======
			rangeMin=20;
			rangeMax=80;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
>>>>>>> upstream/master
		};
		soundGroundSoft2[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_02",
			0.5,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_03",
			0.5,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_04",
			0.5,
			1,
			60
=======
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=80;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_OvisAries
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZSheepGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=40;
			instantAlertStrength=9;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=10;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.090000004;
						minSpeed=0.090000004;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.090000004;
						minSpeed=0.090000004;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=10;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=20;
					drinkingDurationMin=15;
					drinkingDurationMax=20;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class GrazeMovement
					{
						maxSpeed=0.090000004;
						minSpeed=0.090000004;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=50;
					restingDurationMin=20;
					restingDurationMax=25;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.090999998;
						minSpeed=0.090999998;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class SlotEvents
				{
					class EventsDuring
					{
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.55000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsEntering
					{
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotSpec
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=0.5;
					walkAwayInitialAngle=1;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.55000001;
						maxSpeedRange=30;
						optimalSpeedRange=20;
						acceleration=4;
						maxAngleSpeed=10;
						slowRadius=8;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_OvisAriesSlotAlert
						{
							class AlertImpulseActionSendAlert_OvisAriesSlotAlert
							{
								value=50;
								range=10;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotAlert
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=8.6300001;
						optimalSpeed=6;
						minSpeed=0.30000001;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=60;
						slowRadius=6;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.30000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=0.89999998;
						optimalSpeed=0.40000001;
						minSpeed=0.30000001;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.30000001;
					};
					class RunMovementInjured2
					{
						maxSpeed=0;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=60;
				noiseToAlertMultiplier=0.30000001;
				noiseShotToAlertMultiplier=1.2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=8;
					dropDelay=1;
					maxAlertValue=5;
				};
				class NonSpecificThreat
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=7;
					dropDelay=2;
					maxAlertValue=110;
				};
				class Alerted
				{
					dropSpeed=6;
					dropDelay=0.1;
					maxAlertValue=120;
				};
			};
>>>>>>> upstream/master
		};
		soundGroundSoft5[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_05",
			0.5,
			1,
			60
=======
			rangeMin=10;
			rangeMax=30;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
>>>>>>> upstream/master
		};
		soundGroundSoft6[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_06",
			0.5,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_07",
			0.5,
			1,
			60
		};
		soundGroundSoft8[]=
		{
=======
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=3;
			visionRangeMax=9;
			visionFov=1.6;
			visionPeripheralRangeMin=4;
			visionPeripheralRangeMax=6;
			visionPeripheralFov=6.2800002;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
	class Predators_Wolf
	{
		HeadLookBoneName="pin_lookat";
		teamName="Predator";
		defaultGroupTemplateName="DZWolfGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant2_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant3_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant4_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant5_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfPant6_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfPant7_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfGrowl0_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfGrowl1_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfGrowl2_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark3_0_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark2_0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfBark2_1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfBark2_2_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfBark2_3_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfBark2_4_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowls1_SoundSet",
								"WolfHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowls2_SoundSet",
								"WolfHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowls3_SoundSet",
								"WolfHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowls4_SoundSet",
								"WolfHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.89999998;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowl1_SoundSet",
								"WolfHowl1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowl2_SoundSet",
								"WolfHowl2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowl3_SoundSet",
								"WolfHowl3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowl4_SoundSet",
								"WolfHowl4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.5;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroans3_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroan1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroan2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroan3_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_CervusElaphus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.25;
			height=1.8;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=5;
					grazeWalkingWeight=5;
					restWeight=5;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=60;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=60;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=30;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=0.40000001;
					safetyLookAngleChangeInterval=5;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						mmaxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						mmaxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=15;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.359;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=15;
						optimalSpeed=8;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=70;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.35;
						optimalSpeed=1.35;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=7;
				noiseToAlertMultiplier=1;
				noiseShotToAlertMultiplier=2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=10;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=20;
			rangeMax=80;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=80;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Infected
	{
		name="zombie";
		HeadLookBoneName="lookat";
		teamName="Zombies";
		class BehaviourHLZombie
		{
			class MovementWalk
			{
				maxSpeed=1.5;
				minSpeed=0;
				acceleration=5;
				maxAngleSpeed=180;
				slowRadius=0;
				stopRadius=0.5;
				pathFilter="ZombieCalm";
			};
			class MovementRun
			{
				maxSpeed=3;
				minSpeed=0;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				pathFilter="ZombieAlerted";
			};
			class MovementSprint
			{
				maxSpeed=9;
				minSpeed=0;
				acceleration=27;
				maxAngleSpeed=180;
				maxSpeedRange=9;
				slowRadius=3.2;
				goalRadius=1.5;
				goalSpeed=7.1999998;
				stopRadius=1.7;
				waypointRadius=1.5;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="false";
				smoothAcceleration="true";
				pathFilter="ZombieAlerted";
			};
			class SlotCalm
			{
				class BehaviourZombieCalm
				{
					StandingDurationMin=4;
					StandingDurationMax=8;
					WalkingDurationMin=4;
					WalkingDurationMax=12;
					MinLookTime=1;
					MaxLookTime=2;
					IsAttractMode="false";
					class SoundsDuring
					{
						class Sound1
						{
							moveWithEntity="true";
						};
						probability=0.80000001;
						RepeatTimeMin=9;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourZombieAlerted
				{
					maxTimeInDisturbedState=5;
					alertToAttract=0.75;
					fightStateEnterDistance=2;
					fightStateExitDistance=3;
					fightStateEnterOrientAngleDiff=160;
					fightStateExitOrientAngleDiff=160;
					disturbedTargetHistoryLength=20;
					disturbedVisionUtilityWeight=1;
					disturbedNoiseUtilityWeight=1;
					disturbedDamageUtilityWeight=0;
					attractedTargetHistoryLength=20;
					attractedVisionUtilityWeight=1;
					attractedNoiseUtilityWeight=1;
					attractedDamageUtilityWeight=1;
					chaseTargetHistoryLength=20;
					chaseVisionUtilityWeight=1;
					chaseNoiseUtilityWeight=1;
					chaseDamageUtilityWeight=1;
					class SoundsEntering
					{
						class Sound1
						{
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
						};
						probability=1;
						RepeatTimeMin=3.9000001;
						RepeatTimeMax=4.0999999;
						RepeatEnabled="true";
					};
					noiseMakeAlertPeriod=3;
					class NoiseMakeAlert
					{
						strength=60;
						type="sound";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=0.80000001;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.7;
				class Calm
				{
					DropSpeed=3;
					DropDelay=2;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=1;
					DropDelay=10;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase
		{
			visionProximityRange=2.5;
			visionProximityStrengthMult=3;
			visionCloseRange=8;
			visionCloseHeight=1.8;
			visionCloseStrengthMult=3;
			visionRangeMin=20;
			visionRangeMax=40;
			visionFov=1;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=20;
			visionPeripheralFov=2.3;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1;
			visionNightMinMult=1;
			visionNightMaxMult=0.40000001;
			visionRainMinMult=1;
			visionRainMaxMult=0.5;
			visionFogMinMult=1;
			visionFogMaxMult=0.5;
		};
		class NoiseSystemParams
		{
			rangeMin=3;
			rangeMax=35;
			rangeShotMin=25;
			rangeShotMax=200;
			radiusMin=5;
			radiusMax=20;
			radiusShotMin=10;
			radiusShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
	};
	class InfectedFemale: Infected
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotCalm: SlotCalm
			{
				class BehaviourZombieCalm: BehaviourZombieCalm
				{
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
							moveWithEntity="true";
						};
					};
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class SoundsEntering: SoundsEntering
					{
						class Sound1: Sound1
						{
						};
					};
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
						};
					};
				};
			};
		};
	};
	class InfectedMale: Infected
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotCalm: SlotCalm
			{
				class BehaviourZombieCalm: BehaviourZombieCalm
				{
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
							moveWithEntity="true";
						};
					};
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class SoundsEntering: SoundsEntering
					{
						class Sound1: Sound1
						{
						};
					};
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
						};
					};
				};
			};
		};
	};
	class Predators_Shred
	{
		HeadLookBoneName="pin_lookat";
		teamName="Shred";
		defaultGroupTemplateName="ShredGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant2_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant3_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfPant4_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfPant5_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfPant6_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfPant7_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfGrowl0_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfGrowl1_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfGrowl2_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark3_0_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark2_0_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfBark2_1_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfBark2_2_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfBark2_3_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfBark2_4_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowls1_SoundSet",
								"WolfHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowls2_SoundSet",
								"WolfHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowls3_SoundSet",
								"WolfHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowls4_SoundSet",
								"WolfHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.89999998;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowl1_SoundSet",
								"WolfHowl1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowl2_SoundSet",
								"WolfHowl2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowl3_SoundSet",
								"WolfHowl3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowl4_SoundSet",
								"WolfHowl4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.5;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroans3_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroan1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroan2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroan3_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
};

class CfgDamages
{
	class DeerBiteDamage
	{
	};
	class WolfBiteDamage
	{
		bone="tongue3";
		ammo="MeleeWolf";
		radius=0.40000001;
		duration=0.2;
	};
	class WolfLowBiteDamage
	{
		bone="chest";
		ammo="MeleeWolf";
		radius=0.69999999;
		duration=0.5;
	};
	class BearBiteDamage
	{
		bone="tongue4";
		ammo="MeleeBear";
		radius=0.69999999;
		duration=0.2;
	};
	class BearLeftPawDamage
	{
		bone="lflegdigit11";
		ammo="MeleeBear";
		radius=0.69999999;
		duration=0.2;
	};
	class BearRightPawDamage
	{
		bone="rflegdigit11";
		ammo="MeleeBear";
		radius=0.69999999;
		duration=0.2;
	};
	class BearBiteDamageIntimidate
	{
		bone="tongue4";
		ammo="MeleeBearShock";
		radius=0.69999999;
		duration=0.2;
	};
	class BearLeftPawDamageIntimidate
	{
		bone="lflegdigit11";
		ammo="MeleeBearShock";
		radius=0.69999999;
		duration=0.2;
	};
	class BearRightPawDamageIntimidate
	{
		bone="rflegdigit11";
		ammo="MeleeBearShock";
		radius=0.69999999;
		duration=0.2;
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class MeleeBear: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=0.85000002;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=110;
			};
			class Shock
			{
				damage=35;
			};
			additionAnimalMeleeMultiplier=5;
		};
		soundGroundSoft1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_01",
			0.5,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_02",
			0.5,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_03",
			0.5,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_04",
			0.5,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_05",
			0.5,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_06",
			0.5,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_07",
			0.5,
			1,
			60
		};
		soundGroundSoft8[]=
		{
>>>>>>> upstream/master
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_08",
			0.5,
			1,
			60
		};
		soundGroundHard1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_01",
			0.5,
			1,
			80
		};
		soundGroundHard2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_02",
			0.5,
			1,
			80
		};
		soundGroundHard3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_03",
			0.5,
			1,
			80
		};
		soundGroundHard4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_04",
			0.5,
			1,
			80
		};
		soundGroundHard5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_05",
			0.5,
			1,
			80
		};
		soundGroundHard6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_06",
			0.5,
			1,
			80
		};
		soundGroundHard7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_07",
			0.5,
			1,
			80
		};
		soundGroundHard8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_08",
			0.5,
			1,
			80
		};
		soundMetal1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
			0.5,
			1,
			80
		};
		soundMetal2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
			0.5,
			1,
			80
		};
		soundMetal3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
			0.5,
			1,
			80
		};
		soundMetal4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
			0.5,
			1,
			80
		};
		soundMetal5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
			0.5,
			1,
			80
		};
		soundMetal6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
			0.5,
			1,
			80
		};
		soundMetal7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
			0.5,
			1,
			80
		};
		soundMetal8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
			0.5,
			1,
			80
		};
		soundHitGlass1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_01",
			0.5,
			1,
			100
		};
		soundHitGlass2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_02",
			0.5,
			1,
			100
		};
		soundHitGlass3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_03",
			0.5,
			1,
			100
		};
		soundHitGlass4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_04",
			0.5,
			1,
			100
		};
		soundHitGlass5[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_05",
			0.5,
			1,
			100
		};
		soundHitGlass6[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_06",
			0.5,
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_01",
			0.5,
			1,
			60
		};
		soundGlassArmored2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_02",
			0.5,
			1,
			60
		};
		soundGlassArmored3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_03",
			0.5,
			1,
			60
		};
		soundGlassArmored4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_04",
			0.5,
			1,
			60
		};
		soundGlassArmored5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_05",
			0.5,
			1,
			60
		};
		soundGlassArmored6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_06",
			0.5,
			1,
			60
		};
		soundVehiclePlate1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
			0.5,
			1,
			80
		};
		soundVehiclePlate2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
			0.5,
			1,
			80
		};
		soundVehiclePlate3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
			0.5,
			1,
			80
		};
		soundVehiclePlate4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
			0.5,
			1,
			80
		};
		soundVehiclePlate5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
			0.5,
			1,
			80
		};
		soundVehiclePlate6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
			0.5,
			1,
			80
		};
		soundVehiclePlate7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
			0.5,
			1,
			80
		};
		soundVehiclePlate8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
			0.5,
			1,
			80
		};
		soundWood1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_01",
			0.5,
			1,
			80
		};
		soundWood2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_02",
			0.5,
			1,
			80
		};
		soundWood3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_03",
			0.5,
			1,
			80
		};
		soundWood4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_04",
			0.5,
			1,
			80
		};
		soundWood5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_05",
			0.5,
			1,
			80
		};
		soundWood6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_06",
			0.5,
			1,
			80
		};
		soundWood7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_07",
			0.5,
			1,
			80
		};
		soundWood8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_08",
			0.5,
			1,
			80
		};
		soundHitBody1[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_1",
			0.56234133,
			1,
			60
		};
		soundHitBody2[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_2",
			0.56234133,
			1,
			60
		};
		soundHitBody3[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_3",
			0.56234133,
			1,
			60
		};
		soundHitBody4[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_4",
			0.56234133,
			1,
			60
		};
		soundHitBody5[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_5",
			0.56234133,
			1,
			60
		};
		soundHitBody6[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_6",
			0.56234133,
			1,
			60
		};
		soundHitBuilding1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
			0.5,
			1,
			60
		};
		soundHitBuilding2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
			0.5,
			1,
			60
		};
		soundHitBuilding3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
			0.5,
			1,
			60
		};
		soundHitBuilding4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
			0.5,
			1,
			60
		};
		soundHitBuilding5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
			0.5,
			1,
			60
		};
		soundHitBuilding6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
			0.5,
			1,
			60
		};
		soundHitBuilding7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
			0.5,
			1,
			60
		};
		soundHitBuilding8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
			0.5,
			1,
			60
		};
		soundHitFoliage1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_01",
			0.5,
			1,
			20
		};
		soundHitFoliage2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_02",
			0.5,
			1,
			20
		};
		soundHitFoliage3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_03",
			0.5,
			1,
			20
		};
		soundHitFoliage4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_04",
			0.5,
			1,
			20
		};
		soundPlastic1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_01",
			0.34999999,
			1,
			70
		};
		soundPlastic2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_02",
			0.34999999,
			1,
			70
		};
		soundPlastic3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_03",
			0.34999999,
			1,
			70
		};
		soundPlastic4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_04",
			0.34999999,
			1,
			70
		};
		soundConcrete1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
			0.5,
			1,
			70
		};
		soundConcrete2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
			0.5,
			1,
			70
		};
		soundConcrete3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
			0.5,
			1,
			70
		};
		soundConcrete4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
			0.5,
			1,
			70
		};
		soundConcrete5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
			0.5,
			1,
			70
		};
		soundConcrete6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
			0.5,
			1,
			70
		};
		soundConcrete7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
			0.5,
			1,
			70
		};
		soundConcrete8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
			0.5,
			1,
			70
		};
		soundRubber1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_01",
			0.5,
			1,
			50
		};
		soundRubber2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_02",
			0.5,
			1,
			50
		};
		soundRubber3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_03",
			0.5,
			1,
			50
		};
		soundRubber4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_04",
			0.5,
			1,
			50
		};
		soundWater1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_01",
			0.5,
			1,
			40
		};
		soundWater2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_02",
			0.5,
			1,
			40
		};
		soundWater3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_03",
			0.5,
			1,
			40
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.16599999,
			"soundHitBody2",
			0.16599999,
			"soundHitBody3",
			0.16599999,
			"soundHitBody4",
			0.16599999,
			"soundHitBody5",
			0.16599999,
			"soundHitBody6",
			0.17
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.25,
			"soundHitFoliage2",
			0.25,
			"soundHitFoliage3",
			0.25,
			"soundHitFoliage4",
			0.25
		};
		hitWood[]=
		{
			"soundWood1",
			0.125,
			"soundWood2",
			0.125,
			"soundWood3",
			0.125,
			"soundWood4",
			0.125,
			"soundWood5",
			0.125,
			"soundWood6",
			0.125,
			"soundWood7",
			0.125,
			"soundWood8",
			0.125
		};
		hitGlass[]=
		{
			"soundHitGlass1",
			0.16599999,
			"soundHitGlass2",
			0.16599999,
			"soundHitGlass3",
			0.167,
			"soundHitGlass4",
			0.167,
			"soundHitGlass5",
			0.167,
			"soundHitGlass6",
			0.167
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.16599999,
			"soundGlassArmored2",
			0.16599999,
			"soundGlassArmored3",
			0.167,
			"soundGlassArmored4",
			0.167,
			"soundGlassArmored5",
			0.167,
			"soundGlassArmored6",
			0.167
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitRubber[]=
		{
			"soundRubber1",
			0.25,
			"soundRubber2",
			0.25,
			"soundRubber3",
			0.25,
			"soundRubber4",
			0.25
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.25,
			"soundPlastic2",
			0.25,
			"soundPlastic3",
			0.25,
			"soundPlastic4",
			0.25
		};
		hitDefault[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.333,
			"soundWater2",
			0.333,
			"soundWater3",
			0.333
		};
	};
	class MeleeBear_Heavy: MeleeBear
	{
		hitAnimation=1;
		soundGroundSoft1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_01",
			1,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_02",
			1,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_03",
			1,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_04",
			1,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_05",
			1,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_06",
			1,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_07",
			1,
			1,
			60
		};
		soundGroundSoft8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_08",
			1,
			1,
			60
		};
		soundGroundHard1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_01",
			1,
			1,
			80
		};
		soundGroundHard2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_02",
			1,
			1,
			80
		};
		soundGroundHard3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_03",
			1,
			1,
			80
		};
		soundGroundHard4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_04",
			1,
			1,
			80
		};
		soundGroundHard5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_05",
			1,
			1,
			80
		};
		soundGroundHard6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_06",
			1,
			1,
			80
		};
		soundGroundHard7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_07",
			1,
			1,
			80
		};
		soundGroundHard8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_08",
			1,
			1,
			80
		};
		soundMetal1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
			1,
			1,
			80
		};
		soundMetal2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
			1,
			1,
			80
		};
		soundMetal3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
			1,
			1,
			80
		};
		soundMetal4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
			1,
			1,
			80
		};
		soundMetal5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
			1,
			1,
			80
		};
		soundMetal6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
			1,
			1,
			80
		};
		soundMetal7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
			1,
			1,
			80
		};
		soundMetal8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
			1,
			1,
			80
		};
		soundHitGlass1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_01",
			1,
			1,
			100
		};
		soundHitGlass2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_02",
			1,
			1,
			100
		};
		soundHitGlass3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_03",
			1,
			1,
			100
		};
		soundHitGlass4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_04",
			1,
			1,
			100
		};
		soundHitGlass5[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_05",
			1,
			1,
			100
		};
		soundHitGlass6[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_06",
			1,
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_01",
			1,
			1,
			60
		};
		soundGlassArmored2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_02",
			1,
			1,
			60
		};
		soundGlassArmored3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_03",
			1,
			1,
			60
		};
		soundGlassArmored4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_04",
			1,
			1,
			60
		};
		soundGlassArmored5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_05",
			1,
			1,
			60
		};
		soundGlassArmored6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_06",
			1,
			1,
			60
		};
		soundVehiclePlate1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
			1,
			1,
			80
		};
		soundVehiclePlate2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
			1,
			1,
			80
		};
		soundVehiclePlate3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
			1,
			1,
			80
		};
		soundVehiclePlate4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
			1,
			1,
			80
		};
		soundVehiclePlate5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
			1,
			1,
			80
		};
		soundVehiclePlate6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
			1,
			1,
			80
		};
		soundVehiclePlate7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
			1,
			1,
			80
		};
		soundVehiclePlate8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
			1,
			1,
			80
		};
		soundWood1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_01",
			1,
			1,
			80
		};
		soundWood2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_02",
			1,
			1,
			80
		};
		soundWood3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_03",
			1,
			1,
			80
		};
		soundWood4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_04",
			1,
			1,
			80
		};
		soundWood5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_05",
			1,
			1,
			80
		};
		soundWood6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_06",
			1,
			1,
			80
		};
		soundWood7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_07",
			1,
			1,
			80
		};
		soundWood8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_08",
			1,
			1,
			80
		};
		soundHitBody1[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_1",
			0.56234133,
			1,
			60
		};
		soundHitBody2[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_2",
			0.56234133,
			1,
			60
		};
		soundHitBody3[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_3",
			0.56234133,
			1,
			60
		};
		soundHitBody4[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_4",
			0.56234133,
			1,
			60
		};
		soundHitBody5[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_5",
			0.56234133,
			1,
			60
		};
		soundHitBody6[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_6",
			0.56234133,
			1,
			60
		};
		soundHitBuilding1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
			1,
			1,
			60
		};
		soundHitBuilding2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
			1,
			1,
			60
		};
		soundHitBuilding3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
			1,
			1,
			60
		};
		soundHitBuilding4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
			1,
			1,
			60
		};
		soundHitBuilding5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
			1,
			1,
			60
		};
		soundHitBuilding6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
			1,
			1,
			60
		};
		soundHitBuilding7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
			1,
			1,
			60
		};
		soundHitBuilding8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
			1,
			1,
			60
		};
		soundHitFoliage1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_01",
			1,
			1,
			20
		};
		soundHitFoliage2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_02",
			1,
			1,
			20
		};
		soundHitFoliage3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_03",
			1,
			1,
			20
		};
		soundHitFoliage4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_04",
			1,
			1,
			20
		};
		soundPlastic1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_01",
			0.70794576,
			1,
			70
		};
		soundPlastic2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_02",
			0.70794576,
			1,
			70
		};
		soundPlastic3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_03",
			0.70794576,
			1,
			70
		};
		soundPlastic4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_04",
			0.70794576,
			1,
			70
		};
		soundConcrete1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
			1,
			1,
			70
		};
		soundConcrete2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
			1,
			1,
			70
		};
		soundConcrete3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
			1,
			1,
			70
		};
		soundConcrete4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
			1,
			1,
			70
		};
		soundConcrete5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
			1,
			1,
			70
		};
		soundConcrete6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
			1,
			1,
			70
		};
		soundConcrete7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
			1,
			1,
			70
		};
		soundConcrete8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
			1,
			1,
			70
		};
		soundRubber1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_01",
			1,
			1,
			50
		};
		soundRubber2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_02",
			1,
			1,
			50
		};
		soundRubber3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_03",
			1,
			1,
			50
		};
		soundRubber4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_04",
			1,
			1,
			50
		};
		soundWater1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_01",
			1,
			1,
			40
		};
		soundWater2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_02",
			1,
			1,
			40
		};
		soundWater3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_03",
			1,
			1,
			40
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.16599999,
			"soundHitBody2",
			0.16599999,
			"soundHitBody3",
			0.16599999,
			"soundHitBody4",
			0.16599999,
			"soundHitBody5",
			0.16599999,
			"soundHitBody6",
			0.17
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.25,
			"soundHitFoliage2",
			0.25,
			"soundHitFoliage3",
			0.25,
			"soundHitFoliage4",
			0.25
		};
		hitWood[]=
		{
			"soundWood1",
			0.125,
			"soundWood2",
			0.125,
			"soundWood3",
			0.125,
			"soundWood4",
			0.125,
			"soundWood5",
			0.125,
			"soundWood6",
			0.125,
			"soundWood7",
			0.125,
			"soundWood8",
			0.125
		};
		hitGlass[]=
		{
			"soundHitGlass1",
			0.16599999,
			"soundHitGlass2",
			0.16599999,
			"soundHitGlass3",
			0.167,
			"soundHitGlass4",
			0.167,
			"soundHitGlass5",
			0.167,
			"soundHitGlass6",
			0.167
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.16599999,
			"soundGlassArmored2",
			0.16599999,
			"soundGlassArmored3",
			0.167,
			"soundGlassArmored4",
			0.167,
			"soundGlassArmored5",
			0.167,
			"soundGlassArmored6",
			0.167
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitRubber[]=
		{
			"soundRubber1",
			0.25,
			"soundRubber2",
			0.25,
			"soundRubber3",
			0.25,
			"soundRubber4",
			0.25
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.25,
			"soundPlastic2",
			0.25,
			"soundPlastic3",
			0.25,
			"soundPlastic4",
			0.25
		};
		hitDefault[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.333,
			"soundWater2",
			0.333,
			"soundWater3",
			0.333
		};
	};
	class MeleeBearShock: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=0.85000002;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=350;
			};
			class Shock
			{
				damage=110;
			};
			additionAnimalMeleeMultiplier=5;
		};
		soundGroundSoft1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_01",
			0.5,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_02",
			0.5,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_03",
			0.5,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_04",
			0.5,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_05",
			0.5,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_06",
			0.5,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_07",
			0.5,
			1,
			60
		};
		soundGroundSoft8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_08",
			0.5,
			1,
			60
		};
		soundGroundHard1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_01",
			0.5,
			1,
			80
		};
		soundGroundHard2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_02",
			0.5,
			1,
			80
		};
		soundGroundHard3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_03",
			0.5,
			1,
			80
		};
		soundGroundHard4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_04",
			0.5,
			1,
			80
		};
		soundGroundHard5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_05",
			0.5,
			1,
			80
		};
		soundGroundHard6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_06",
			0.5,
			1,
			80
		};
		soundGroundHard7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_07",
			0.5,
			1,
			80
		};
		soundGroundHard8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_08",
			0.5,
			1,
			80
		};
		soundMetal1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
			0.5,
			1,
			80
		};
		soundMetal2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
			0.5,
			1,
			80
		};
		soundMetal3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
			0.5,
			1,
			80
		};
		soundMetal4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
			0.5,
			1,
			80
		};
		soundMetal5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
			0.5,
			1,
			80
		};
		soundMetal6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
			0.5,
			1,
			80
		};
		soundMetal7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
			0.5,
			1,
			80
		};
		soundMetal8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
			0.5,
			1,
			80
		};
		soundHitGlass1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_01",
			0.5,
			1,
			100
		};
		soundHitGlass2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_02",
			0.5,
			1,
			100
		};
		soundHitGlass3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_03",
			0.5,
			1,
			100
		};
		soundHitGlass4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_04",
			0.5,
			1,
			100
		};
		soundHitGlass5[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_05",
			0.5,
			1,
			100
		};
		soundHitGlass6[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_06",
			0.5,
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_01",
			0.5,
			1,
			60
		};
		soundGlassArmored2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_02",
			0.5,
			1,
			60
		};
		soundGlassArmored3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_03",
			0.5,
			1,
			60
		};
		soundGlassArmored4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_04",
			0.5,
			1,
			60
		};
		soundGlassArmored5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_05",
			0.5,
			1,
			60
		};
		soundGlassArmored6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_06",
			0.5,
			1,
			60
		};
		soundVehiclePlate1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
			0.5,
			1,
			80
		};
		soundVehiclePlate2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
			0.5,
			1,
			80
		};
		soundVehiclePlate3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
			0.5,
			1,
			80
		};
		soundVehiclePlate4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
			0.5,
			1,
			80
		};
		soundVehiclePlate5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
			0.5,
			1,
			80
		};
		soundVehiclePlate6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
			0.5,
			1,
			80
		};
		soundVehiclePlate7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
			0.5,
			1,
			80
		};
		soundVehiclePlate8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
			0.5,
			1,
			80
		};
		soundWood1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_01",
			0.5,
			1,
			80
		};
		soundWood2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_02",
			0.5,
			1,
			80
		};
		soundWood3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_03",
			0.5,
			1,
			80
		};
		soundWood4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_04",
			0.5,
			1,
			80
		};
		soundWood5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_05",
			0.5,
			1,
			80
		};
		soundWood6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_06",
			0.5,
			1,
			80
		};
		soundWood7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_07",
			0.5,
			1,
			80
		};
		soundWood8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_08",
			0.5,
			1,
			80
		};
		soundHitBody1[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_1",
			0.56234133,
			1,
			60
		};
		soundHitBody2[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_2",
			0.56234133,
			1,
			60
		};
		soundHitBody3[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_3",
			0.56234133,
			1,
			60
		};
		soundHitBody4[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_4",
			0.56234133,
			1,
			60
		};
		soundHitBody5[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_5",
			0.56234133,
			1,
			60
		};
		soundHitBody6[]=
		{
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_6",
			0.56234133,
			1,
			60
		};
		soundHitBuilding1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
			0.5,
			1,
			60
		};
		soundHitBuilding2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
			0.5,
			1,
			60
		};
		soundHitBuilding3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
			0.5,
			1,
			60
		};
		soundHitBuilding4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
			0.5,
			1,
			60
		};
		soundHitBuilding5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
			0.5,
			1,
			60
		};
		soundHitBuilding6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
			0.5,
			1,
			60
		};
		soundHitBuilding7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
			0.5,
			1,
			60
		};
		soundHitBuilding8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
			0.5,
			1,
			60
		};
		soundHitFoliage1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_01",
			0.5,
			1,
			20
		};
		soundHitFoliage2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_02",
			0.5,
			1,
			20
		};
		soundHitFoliage3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_03",
			0.5,
			1,
			20
		};
		soundHitFoliage4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_04",
			0.5,
			1,
			20
		};
		soundPlastic1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_01",
			0.34999999,
			1,
			70
		};
		soundPlastic2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_02",
			0.34999999,
			1,
			70
		};
		soundPlastic3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_03",
			0.34999999,
			1,
			70
		};
		soundPlastic4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_04",
			0.34999999,
			1,
			70
		};
		soundConcrete1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
			0.5,
			1,
			70
		};
		soundConcrete2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
			0.5,
			1,
			70
		};
		soundConcrete3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
			0.5,
			1,
			70
		};
		soundConcrete4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
			0.5,
			1,
			70
		};
		soundConcrete5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
			0.5,
			1,
			70
		};
		soundConcrete6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
			0.5,
			1,
			70
		};
		soundConcrete7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
			0.5,
			1,
			70
		};
		soundConcrete8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
			0.5,
			1,
			70
		};
		soundRubber1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_01",
			0.5,
			1,
			50
		};
		soundRubber2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_02",
			0.5,
			1,
			50
		};
		soundRubber3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_03",
			0.5,
			1,
			50
		};
		soundRubber4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_04",
			0.5,
			1,
			50
		};
		soundWater1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_01",
			0.5,
			1,
			40
		};
		soundWater2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_02",
			0.5,
			1,
			40
		};
		soundWater3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_03",
			0.5,
			1,
			40
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.16599999,
			"soundHitBody2",
			0.16599999,
			"soundHitBody3",
			0.16599999,
			"soundHitBody4",
			0.16599999,
			"soundHitBody5",
			0.16599999,
			"soundHitBody6",
			0.17
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.25,
			"soundHitFoliage2",
			0.25,
			"soundHitFoliage3",
			0.25,
			"soundHitFoliage4",
			0.25
		};
		hitWood[]=
		{
			"soundWood1",
			0.125,
			"soundWood2",
			0.125,
			"soundWood3",
			0.125,
			"soundWood4",
			0.125,
			"soundWood5",
			0.125,
			"soundWood6",
			0.125,
			"soundWood7",
			0.125,
			"soundWood8",
			0.125
		};
		hitGlass[]=
		{
			"soundHitGlass1",
			0.16599999,
			"soundHitGlass2",
			0.16599999,
			"soundHitGlass3",
			0.167,
			"soundHitGlass4",
			0.167,
			"soundHitGlass5",
			0.167,
			"soundHitGlass6",
			0.167
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.16599999,
			"soundGlassArmored2",
			0.16599999,
			"soundGlassArmored3",
			0.167,
			"soundGlassArmored4",
			0.167,
			"soundGlassArmored5",
			0.167,
			"soundGlassArmored6",
			0.167
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitRubber[]=
		{
			"soundRubber1",
			0.25,
			"soundRubber2",
			0.25,
			"soundRubber3",
			0.25,
			"soundRubber4",
			0.25
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.25,
			"soundPlastic2",
			0.25,
			"soundPlastic3",
			0.25,
			"soundPlastic4",
			0.25
		};
		hitDefault[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.333,
			"soundWater2",
			0.333,
			"soundWater3",
			0.333
		};
	};
	class MeleeBearShock_Heavy: MeleeBearShock
	{
		hitAnimation=1;
		soundGroundSoft1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_01",
			1,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_02",
			1,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_03",
			1,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_04",
			1,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_05",
			1,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_06",
			1,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_07",
			1,
			1,
			60
		};
<<<<<<< HEAD
		soundGroundSoft8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_08",
			1,
=======
=======
>>>>>>> Stashed changes
		soundGroundSoft8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_dirt_hit_08",
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundGroundHard1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_07",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundGroundHard8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_default_hit_08",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundMetal8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundHitGlass1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			100
		};
		soundHitGlass2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			100
		};
		soundHitGlass3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			100
		};
		soundHitGlass4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			100
		};
		soundHitGlass5[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			100
		};
		soundHitGlass6[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_glass_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundGlassArmored2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundGlassArmored3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundGlassArmored4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundGlassArmored5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundGlassArmored6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_armor_glass_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundVehiclePlate1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_07",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundVehiclePlate8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_metal_hit_08",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_07",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundWood8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_wood_hit_08",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			80
		};
		soundHitBody1[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_1",
=======
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_1",
>>>>>>> upstream/master
			0.56234133,
			1,
			60
		};
		soundHitBody2[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_2",
=======
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_2",
>>>>>>> upstream/master
			0.56234133,
			1,
			60
		};
		soundHitBody3[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_3",
=======
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_3",
>>>>>>> upstream/master
			0.56234133,
			1,
			60
		};
		soundHitBody4[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_4",
=======
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_4",
>>>>>>> upstream/master
			0.56234133,
			1,
			60
		};
		soundHitBody5[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_5",
=======
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_5",
>>>>>>> upstream/master
			0.56234133,
			1,
			60
		};
		soundHitBody6[]=
		{
<<<<<<< HEAD
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_6",
=======
			"dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_6",
>>>>>>> upstream/master
			0.56234133,
			1,
			60
		};
		soundHitBuilding1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitBuilding8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			60
		};
		soundHitFoliage1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			20
		};
		soundHitFoliage2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			20
		};
		soundHitFoliage3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			20
		};
		soundHitFoliage4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_leaves_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			20
		};
		soundPlastic1[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_01",
<<<<<<< HEAD
			0.70794576,
=======
			0.34999999,
>>>>>>> upstream/master
			1,
			70
		};
		soundPlastic2[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_02",
<<<<<<< HEAD
			0.70794576,
=======
			0.34999999,
>>>>>>> upstream/master
			1,
			70
		};
		soundPlastic3[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_03",
<<<<<<< HEAD
			0.70794576,
=======
			0.34999999,
>>>>>>> upstream/master
			1,
			70
		};
		soundPlastic4[]=
		{
			"dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_04",
<<<<<<< HEAD
			0.70794576,
=======
			0.34999999,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete4[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete5[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_05",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete6[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_06",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete7[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_07",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundConcrete8[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_concrete_hit_08",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			70
		};
		soundRubber1[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			50
		};
		soundRubber2[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			50
		};
		soundRubber3[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			50
		};
		soundRubber4[]=
		{
			"dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_rubber_hit_04",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			50
		};
		soundWater1[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_01",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			40
		};
		soundWater2[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_02",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			40
		};
		soundWater3[]=
		{
			"dz\sounds\weapons\meleehits\short_blade_weapon_hits\short_blade_weapon_water_hit_03",
<<<<<<< HEAD
			1,
=======
			0.5,
>>>>>>> upstream/master
			1,
			40
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.16599999,
			"soundHitBody2",
			0.16599999,
			"soundHitBody3",
			0.16599999,
			"soundHitBody4",
			0.16599999,
			"soundHitBody5",
			0.16599999,
			"soundHitBody6",
			0.17
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.25,
			"soundHitFoliage2",
			0.25,
			"soundHitFoliage3",
			0.25,
			"soundHitFoliage4",
			0.25
		};
		hitWood[]=
		{
			"soundWood1",
			0.125,
			"soundWood2",
			0.125,
			"soundWood3",
			0.125,
			"soundWood4",
			0.125,
			"soundWood5",
			0.125,
			"soundWood6",
			0.125,
			"soundWood7",
			0.125,
			"soundWood8",
			0.125
		};
		hitGlass[]=
		{
			"soundHitGlass1",
			0.16599999,
			"soundHitGlass2",
			0.16599999,
			"soundHitGlass3",
			0.167,
			"soundHitGlass4",
			0.167,
			"soundHitGlass5",
			0.167,
			"soundHitGlass6",
			0.167
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.16599999,
			"soundGlassArmored2",
			0.16599999,
			"soundGlassArmored3",
			0.167,
			"soundGlassArmored4",
			0.167,
			"soundGlassArmored5",
			0.167,
			"soundGlassArmored6",
			0.167
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
<<<<<<< HEAD
		hitRubber[]=
		{
			"soundRubber1",
			0.25,
			"soundRubber2",
			0.25,
			"soundRubber3",
			0.25,
			"soundRubber4",
			0.25
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.25,
			"soundPlastic2",
			0.25,
			"soundPlastic3",
			0.25,
			"soundPlastic4",
			0.25
		};
		hitDefault[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.333,
			"soundWater2",
			0.333,
			"soundWater3",
			0.333
		};
	};
		
};

class TrackingParams
{
	maxTracksCount=100;
	playerRangeMin=12;
	playerRangeMax=40;
	agentUpdateDistance=16;
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class Barrel_ColorBase;
	class Armband_ColorBase;
	class Clothing_Base;
	class ItemOptics;
	class AviatorGlasses;
	class CamoNet;
	class Fence;
	class WoodenCrate;
	class AnimalBase;
	//class Animal_UrsusArctos;
	//class Animal_CanisLupus;
	//class Animal_CapraHircus;
	class DZ_LightAI;
	class Clothing: Clothing_Base
	{
	};
	class BearSteakMeat;
=======
		hitRubber[]=
		{
			"soundRubber1",
			0.25,
			"soundRubber2",
			0.25,
			"soundRubber3",
			0.25,
			"soundRubber4",
			0.25
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.25,
			"soundPlastic2",
			0.25,
			"soundPlastic3",
			0.25,
			"soundPlastic4",
			0.25
		};
		hitDefault[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.333,
			"soundWater2",
			0.333,
			"soundWater3",
			0.333
		};
	};
};
class CfgSoundShaders
{
	class TigerBark_SoundShader
	{
		samples[]=
		{
			
			{
				"\ShredAnimals\sounds\animals\tiger\bark\bark_1.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerBark2_SoundShader
	{
		samples[]=
		{
			
			{
				"\ShredAnimals\sounds\animals\tiger\bark2\bark2_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerBark3_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\bark3\bark3_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerBreath_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\breath\breath_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class Tigerdeath_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\death\death_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerGroans_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\groans\groans_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerGrowl_A_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\growl\growl_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerGrowl_B_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\growl\growl_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerHowl_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\howl\howl_1.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerHowls_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\howls\howls_1.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerPant_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\pant\pant_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerPant_Short_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\pant_short\pant_short_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerSnarl_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\snarl\snarl_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerSnarl_Short_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\snarl_short\snarl_short_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerWhimper_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\whimper\whimper_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerYelp_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\sounds\animals\tiger\Yelp\yelp_0.ogg",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerAttack_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\tiger\tigris\tiger_growl",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerMumble_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\tiger\tigris\tigerpurr",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class TigerRoar_SoundShader
	{
		samples[]=
		{
			
			{
				"ShredAnimals\tiger\tigris\tigerroar",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
};
class CfgSoundSets
{
	class TigerBase_SoundSet
    {
        sound3DProcessingType="animal3DProcessingType";
        volumeCurve="animalAttenuationCurve";
        spatial="true";
        doppler="false";
        loop="false";
    };
	class TigerBark_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerBark_SoundShader"
        };
    };
	class TigerBark2_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerBark2_SoundShader"
        };
    };
	class TigerBark3_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerBark3_SoundShader"
        };
    };
	class TigerBreath_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerBreath_SoundShader"
        };
    };
	class TigerDeath_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerDeath_SoundShader"
        };
    };
	class TigerGroans_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerGroans_SoundShader"
        };
    };
	class TigerGrowl_B_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerGrowl_SoundShader"
        };
    };
	class TigerGrowl_A_SoundSet: TigerBase_SoundSet
	{
		soundShaders[]=
        {
            "TigerGrowl_SoundShader"
        };
    };
	class TigerHowl_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerHowl_SoundShader"
        };
    };
	class TigerHowls_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerHowls_SoundShader"
        };
    };
	class TigerPant_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerPant_SoundShader"
        };
    };
	class TigerPant_Short_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerPant_Short_SoundShader"
        };
    };
	class TigerSnarl_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerSnarl_SoundShader"
        };
    };
	class TigerSnarl_Short_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerSnarl_Short_SoundShader"
        };
    };
	class TigerWhimper_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerWhimper_SoundShader"
        };
    };
	class TigerYelp_SoundSet: TigerBase_SoundSet
	{
        soundShaders[]=
        {
            "TigerYelp_SoundShader"
        };
    };
	class baseTiger_SoundSet
	{
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial="true";
		doppler="false";
		loop="false";
	};
	class TigerAttack_SoundSet: baseTiger_SoundSet
	{
		soundShaders[]=
		{
			"TigerAttack_SoundShader"
		};
	};
	class TigerRoar_SoundSet: baseTiger_SoundSet
	{
		soundShaders[]=
		{
			"TigerRoar_SoundShader"
		};
	};
	class TigerMumble_SoundSet: baseTiger_SoundSet
	{
		soundShaders[]=
		{
			"TigerMumble_SoundShader"
		};
	};
};
class CfgNoises
{
	class TigerRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
};
class CfgVehicles
{
	class Static;
	class CamoNet;
	class Fence;
	class WoodenCrate;
	class HouseNoDestruct;
	class Inventory_Base;
	class Container_Base;
	class Gear_Base;
	class WorldContainer_Base;
	class Barrel_ColorBase;
	class Armband_ColorBase;
	class Clothing_Base;
	class BearSteakMeat;
	class DZ_LightAI;
	class AnimalBase;
	class Animal_UrsusArctos;
	class Animal_CanisLupus;
	class Pelt_Base;
>>>>>>> upstream/master
	class TigerSteakMeat: BearSteakMeat
	{
		scope=2;
		displayName="Tiger Steak";
		descriptionShort="Tiger Steak";
		model="\dz\gear\food\meat_steak.p3d";
		rotationFlags=17;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		varQuantityInit=180;
		varQuantityMin=0;
		varQuantityMax=180;
		itemSize[]={2,3};
		absorbency=0.30000001;
		inventorySlot="Ingredient";
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
<<<<<<< HEAD

	};
	class Pelt_Base;
=======
	};
>>>>>>> upstream/master
	class TigerPelt: Pelt_Base
	{
		scope = 2;
		displayName = "Tiger Pelt";
		descriptionShort = "Tiger Pelt";
<<<<<<< HEAD
		model = "\dz\gear\consumables\Pelt_Wolf.p3d";
=======
		model = "\dz\gear\consumables\pelt_wolf.p3d";
>>>>>>> upstream/master
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ShredAnimals\pelt_tiger_co.paa"};
		hiddenSelectionsMaterials[] = {"ShredAnimals\pelt_tiger.rvmat"};
		weight = 1200;
		itemSize[] = {5,3};
		peltGain = 6;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
<<<<<<< HEAD
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_wolf_destruct.rvmat"}}};
				};
			};
		};
	};
	class Animal_Shred_Tiger: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		//
		model = "\ShredAnimals\tigerX2.p3d";
		//model = "\DZ\animals\canis_lupus\canis_lupus.p3d";
		displayName = "$STR_CfgVehicles_Animal_Tiger0";
		descriptionShort = "$STR_CfgVehicles_Animal_Tigrer1";
		//hiddenSelections[] = {"Camo","CamoHair"};
		DamageSphereAmmos[] = {"MeleeWolf"};
		aiAgentTemplate = "Predators_Wolf";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15;
					canBleed = 0;
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[] = {"Zone_Spine_Front","Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.0;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "TigerSteakMeat";
				count = 10;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {3.0,3.0,3.0};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "TigerPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.7,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class BearAttack
				{
					soundSet="BearAttack_SoundSet";
					noise="WolfRoarNoise";
					id=21;
				};
				class WolfBark
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 1;
				};
				
				class WolfBreath
				{
					soundSet = "WolfBreath_SoundSet";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class WolfGroans
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class WolfGrowl_A
				{
					soundSet = "WolfGrowl_A_SoundSet";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class WolfPant
				{
					soundSet = "WolfPant_SoundSet";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class WolfPantShort
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class WolfPantLong
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class WolfSnarl
				{
					soundSet = "TigerMumble_SoundSet";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class WolfSnarlShort
				{
					soundSet = "TigerMumble_SoundSet";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class WolfWhimper
				{
					soundSet = "WolfWhimper_SoundSet";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class WolfYelp
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class WolfYawn
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class WolfDeath
				{
					soundSet = "WolfDeath_SoundSet";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class WolfHowl
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class WolfHowls
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 17;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "WolfBiteDamage";
					id = 1;
				};
				class BiteLow
				{
					damage = "WolfLowBiteDamage";
					id = 2;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.25,0.5,1.2,4.5,12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
	class Animal_Shred_Tigris: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		//
		model = "\ShredAnimals\tigerX2.p3d";
		//model = "\DZ\animals\canis_lupus\canis_lupus.p3d";
		displayName = "$STR_CfgVehicles_Animal_Tiger0";
		descriptionShort = "$STR_CfgVehicles_Animal_Tigrer1";
		//hiddenSelections[] = {"Camo","CamoHair"};
		DamageSphereAmmos[] = {"MeleeWolf"};
		aiAgentTemplate = "Predators_Shred";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 250;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15;
					canBleed = 0;
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[] = {"Zone_Spine_Front","Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.0;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "WolfSteakMeat";
				count = 10;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {3.0,3.0,3.0};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "WolfPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.7,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class WolfBark
				{
					soundSet = "WolfBark_SoundSet";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class WolfBark_1
				{
					soundSet = "WolfBark_SoundSet";
					noise = "WolfRoarNoise";
					id = 61;
				};
				class WolfBark_2
				{
					soundSet = "WolfBark_SoundSet";
					noise = "WolfRoarNoise";
					id = 71;
				};
				class WolfBark2
				{
					soundSet = "WolfBark2_SoundSet";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class WolfBark3
				{
					soundSet = "WolfBark3_SoundSet";
					noise = "WolfRoarNoise";
					id = 3;
				};
				class WolfBreath
				{
					soundSet = "WolfBreath_SoundSet";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class WolfGroans
				{
					soundSet = "WolfGroans_SoundSet";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class WolfGrowl_A
				{
					soundSet = "WolfGrowl_A_SoundSet";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class WolfGrowl_B
				{
					soundSet = "WolfGrowl_B_SoundSet";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class WolfGrowl
				{
					soundSet = "WolfGrowl_A_SoundSet";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class WolfPant
				{
					soundSet = "WolfPant_SoundSet";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class WolfPantShort
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class WolfPantLong
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class WolfSnarl
				{
					soundSet = "WolfSnarl_SoundSet";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class WolfSnarlShort
				{
					soundSet = "WolfSnarlShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class WolfWhimper
				{
					soundSet = "WolfWhimper_SoundSet";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class WolfYelp
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class WolfYawn
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class WolfDeath
				{
					soundSet = "WolfDeath_SoundSet";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class WolfHowl
				{
					soundSet = "WolfHowl_SoundSet";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class WolfHowls
				{
					soundSet = "WolfHowls_SoundSet";
					noise = "WolfRoarNoise";
					id = 17;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "WolfBiteDamage";
					id = 1;
				};
				class BiteLow
				{
					damage = "WolfLowBiteDamage";
					id = 2;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.25,0.5,1.2,4.5,12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
	class Animal_Shred_MuleX: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		//
		model = "\ShredAnimals\tigerX2.p3d";
		//model = "\DZ\animals\canis_lupus\canis_lupus.p3d";
		displayName = "$STR_CfgVehicles_Animal_MuleX0";
		descriptionShort = "$STR_CfgVehicles_Animal_MuleX1";
		//hiddenSelections[] = {"Camo","CamoHair"};
		//DamageSphereAmmos[] = {"MeleeWolf"};
		aiAgentTemplate = "Predator_UrsusArctos";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 250;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15;
					canBleed = 0;
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[] = {"Zone_Spine_Front","Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.0;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "WolfSteakMeat";
				count = 10;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {3.0,3.0,3.0};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "WolfPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.7,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
			};
			class Damages
			{
				class Bite
				{
=======
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_wolf_destruct.rvmat"}}};
				};
			};
		};
	};
	class Animal_GS_Tiger: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\ShredAnimals\tigerX2.p3d";
		displayName = "$STR_CfgVehicles_Animal_Tiger";
		descriptionShort = "$STR_CfgVehicles_Animal_Tiger";
		DamageSphereAmmos[] = {"MeleeTiger"};
		aiAgentTemplate = "Predators_Tiger";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 600;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15;
					canBleed = 0;
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[] = {"Zone_Spine_Front","Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.0;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "TigerSteakMeat";
				count = 10;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {3.0,3.0,3.0};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "TigerPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.7,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class TigerBark
				{
					soundSet = "TigerBark_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerBark_1
				{
					soundSet = "TigerBark_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerBark_2
				{
					soundSet = "TigerBark_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerBark2
				{
					soundSet = "TigerBark2_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerBark3
				{
					soundSet = "TigerBark3_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerBreath
				{
					soundSet = "TigerBreath_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerGroans
				{
					soundSet = "TigerGroans_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerGrowl_A
				{
					soundSet = "TigerGrowl_A_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerGrowl_B
				{
					soundSet = "TigerGrowl_B_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerGrowl
				{
					soundSet = "TigerGrowl_A_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerPant
				{
					soundSet = "TigerPant_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerPantShort
				{
					soundSet = "TigerPantShort_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerPantLong
				{
					soundSet = "TigerPantShort_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerSnarl
				{
					soundSet = "TigerSnarl_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerSnarlShort
				{
					soundSet = "TigerSnarlShort_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerWhimper
				{
					soundSet = "TigerWhimper_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerYelp
				{
					soundSet = "TigerYelp_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerYawn
				{
					soundSet = "TigerYelp_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerDeath
				{
					soundSet = "TigerDeath_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerHowl
				{
					soundSet = "TigerHowl_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
				class TigerHowls
				{
					soundSet = "TigerHowls_SoundSet";
					noise = "TigerRoarNoise";
					id = 1;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "TigerBiteDamage";
					id = 1;
				};
				class BiteLow
				{
					damage = "TigerLowBiteDamage";
					id = 2;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.25,0.5,1.2,4.5,12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
	class Animal_Shred_Tiger: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		//
		model = "\ShredAnimals\tigerX2.p3d";
		//model = "\DZ\animals\canis_lupus\canis_lupus.p3d";
		displayName = "$STR_CfgVehicles_Animal_Tiger0";
		descriptionShort = "$STR_CfgVehicles_Animal_Tigrer1";
		//hiddenSelections[] = {"Camo","CamoHair"};
		DamageSphereAmmos[] = {"MeleeTiger"};
		aiAgentTemplate = "Predators_Tiger";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.15;
					canBleed = 0;
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[] = {"Zone_Spine_Front","Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 180;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.0;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "TigerSteakMeat";
				count = 10;
				itemZones[] = {"Zone_Chest","Zone_Belly","Zone_Pelvis"};
				countByZone[] = {3.0,3.0,3.0};
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "TigerPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.7,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class BearAttack
				{
					soundSet="BearAttack_SoundSet";
					noise="WolfRoarNoise";
					id=21;
				};
				class WolfBark
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 1;
				};
				
				class WolfBreath
				{
					soundSet = "WolfBreath_SoundSet";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class WolfGroans
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class WolfGrowl_A
				{
					soundSet = "WolfGrowl_A_SoundSet";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class WolfPant
				{
					soundSet = "WolfPant_SoundSet";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class WolfPantShort
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class WolfPantLong
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class WolfSnarl
				{
					soundSet = "TigerMumble_SoundSet";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class WolfSnarlShort
				{
					soundSet = "TigerMumble_SoundSet";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class WolfWhimper
				{
					soundSet = "WolfWhimper_SoundSet";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class WolfYelp
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class WolfYawn
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class WolfDeath
				{
					soundSet = "WolfDeath_SoundSet";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class WolfHowl
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class WolfHowls
				{
					soundSet = "TigerAttack_SoundSet";
					noise = "WolfRoarNoise";
					id = 17;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "WolfBiteDamage";
					id = 1;
				};
				class BiteLow
				{
					damage = "WolfLowBiteDamage";
					id = 2;
>>>>>>> upstream/master
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.25,0.5,1.2,4.5,12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
<<<<<<< HEAD
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		model="\dz\Characters\Proxies\ak_47_v58_proxy.p3d";
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
		model="\dz\Characters\Proxies\Backpack_DZ.p3d";
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
		model="\dz\Characters\Proxies\Headgear_DZ.p3d";
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
		model="\dz\Characters\Proxies\Mask_DZ.p3d";
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
		model="\dz\Characters\Proxies\Vest_DZ.p3d";
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
		model="\dz\Characters\Proxies\Melee_DZ.p3d";
	};
};

=======
	};
};


>>>>>>> upstream/master
