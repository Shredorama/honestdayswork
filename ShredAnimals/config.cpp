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
	class ShredAnimals
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_AI",
			"DZ_AI_Bliss",
			"DZ_animals",
			"DZ_animals_bliss",
			"DZ_data_bliss",
			"DZ_data",
			"DZ_surfaces",
			"DZ_surfaces_bliss",
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
	class TigerDeath_SoundShader
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
	/*class TigerAttack_SoundShader
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
	};*/
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
	};
	class TigerPelt: Pelt_Base
	{
		scope = 2;
		displayName = "Tiger Pelt";
		descriptionShort = "Tiger Pelt";
		model = "\dz\gear\consumables\pelt_wolf.p3d";
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
		displayName = "Tiger";
		descriptionShort = "Tiger";
		DamageSphereAmmos[] = {"MeleeTiger"};
		aiAgentTemplate = "Predators_Tiger";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1200;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
				class Blood
				{
					hitpoints = 10000;
				};
				class Shock
				{
					hitpoints = 1200;
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
	/*class Animal_Shred_Tiger: AnimalBase
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
	};*/
};


