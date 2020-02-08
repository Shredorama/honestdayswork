//(8 Enums)
enum {
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
};
class cfgSkeletons
{
    class MuleXAISkeleton
    {
        skeletonInherit = "";
        isDiscrete = 0;
        SkeletonBones[]=
        {
            "pelvis"    ,"",
            "spine1"    ,"pelvis",
            "spine2"    ,"spine1",
            "chest"    ,"spine2",
            "lflegcollarbone"    ,"chest",
            "lfleg1"    ,"lflegcollarbone",
            "lfleg2"    ,"lfleg1",
            "lfleg3"    ,"lfleg2",
            "lflegankle"    ,"lfleg3",
            "rflegcollarbone"    ,"chest",
            "rfleg1"    ,"rflegcollarbone",
            "rfleg2"    ,"rfleg1",
            "rfleg3"    ,"rfleg2",
            "rflegankle"    ,"rfleg3",
            "neck1"    ,"chest",
            "neck2"    ,"neck1",
            "head"    ,"neck2",
            "jaw"    ,"head",
            "tongue1"    ,"jaw",
            "tongue2"    ,"tongue1",
            "tongue3"    ,"tongue2",
            "beard1"    ,"jaw",
            "beard2"    ,"beard1",
            "beard3"    ,"beard2",
            "beard_goat_m_1"    ,"jaw",
            "beard_goat_m_2"    ,"beard_goat_m_1",
            "beard_goat_m_3"    ,"beard_goat_m_2",
            "lear"    ,"head",
            "rear"    ,"head",
            "leye"    ,"head",
            "reye"    ,"head",
            "pin_lookat"    ,"head",
            "chestbone"    ,"chest",
            "lbleg1"    ,"pelvis",
            "lbleg2"    ,"lbleg1",
            "lbleg3"    ,"lbleg2",
            "lblegankle"    ,"lbleg3",
            "rbleg1"    ,"pelvis",
            "rbleg2"    ,"rbleg1",
            "rbleg3"    ,"rbleg2",
            "rblegankle"    ,"rbleg3",
            "tail1"    ,"pelvis",
            "tail2"    ,"tail1",
            "tail3"    ,"tail2",
            "udder1"    ,"pelvis",
            "rudder2"    ,"udder1",
            "ludder2"    ,"udder1",
            "crotch"    ,"pelvis"
        };
    };
};
class AIParamsDebug
{
	showViewCones="true";
	showLifeCycle="true";
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
			"Shred",
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
				"AmbientLife",
			};
		};
		class Shred
		{
			friends[]=
			{
				"Shred",
				"BigGame",
				"Zombies",
				"Predator",
				"AmbientLife"
			};
		};
	};
};
class PathGraphFilters
{
	class ZombieCalm
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"swimsea",
				"jump",
				"climb",
				"crawl",
				"crouch"
			};
		};
		class Costs
		{
			building=5;
		};
	};
	class ZombieAlerted
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
				"jump",
				"climb"
			};
			exclude[]=
			{
				"disabled",
				"crawl",
				"crouch"
			};
		};
		class Costs
		{
			jump0=3;
			jump1=0;
			jump2=0;
			jump3=0;
			jump4=0;
			water=5;
		};
	};
	class ZombieCrawl
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"swimsea",
				"jump",
				"climb",
				"crouch"
			};
		};
	};
	class ChickenOnRun
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
				"jump"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"swimsea",
				"climb"
			};
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=0;
			jump3=0;
			jump4=0.1;
			water=5;
		};
	};
	class DeerOnRun
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
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
			building=5;
		};
	};
	class RoeDeerOnRun
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
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
			jump3=0;
			jump4=0;
			water=1;
			building=5;
		};
	};
	class CowOnRun
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
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
			{
				"walk",
				"door",
				"inside",
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
	class WolfOnOuterCircle
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
			{
				"walk"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"swimsea",
				"climb",
				"crawl",
				"crouch",
				"jumpover"
			};
		};
		class Costs
		{
			jump0=0;
			jump1=0;
			jump2=1;
			jump3=0;
			jump4=0;
			water=1;
		};
	};
};
class GroupBehaviourTemplates
{
	class DZAmbientLifeGroupBeh
	{
		type="AmbientLifeGroup";
		groupRadius=10;
		groupMinCount=2;
		groupMaxCount=10;
		spawnMinDistanceBetweenAgents=3;
	};
	class DZWolfGroupBeh
	{
		type="Predators";
		alertDistributionSpeed=20;
		catchUpTestDelay=4;
		catchUpStartRadius=80;
		catchUpTargetRadius=7;
		groupRadius=10;
		spawnMinDistanceBetweenAgents=1;
		agentPathLength=100;
		atNeedMinDuration=60;
		atNeedMaxDuration=120;
		singleAgentSafeKeeperDelayMin=100;
		singleAgentSafeKeeperDelayMax=100;
		preyAttractionRange=350;
		innerOuterCircleRatio=0.60000002;
		endAttractionRange=10;
		attractionCooldown=60;
		endAttractionTime=300;
		targetEscapingSpeed=1.5;
		killAddFear=34;
		eatingTime=600;
		huntingCooldown=120;
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
				endTimeMin=8.5;
				endTimeMax=8.5;
				zoneType="Rest";
			};
			class Activity2
			{
				endTimeMin=16;
				endTimeMax=16;
				zoneType="HuntingGround";
				stayInZone="false";
			};
			class Activity3
			{
				endTimeMin=18.5;
				endTimeMax=19.5;
				zoneType="Rest";
			};
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
class CfgSoundShaders
{
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
	class Pelt_Base;
	class TigerPelt: Pelt_Base
	{
		scope = 2;
		displayName = "Tiger Pelt";
		descriptionShort = "Tiger Pelt";
		model = "\dz\gear\consumables\Pelt_Wolf.p3d";
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

