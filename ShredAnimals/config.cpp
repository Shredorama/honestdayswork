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
	class DZ_Animals
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
	class DZ_Animals_Bliss
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Data_Bliss"
		};
	};
	class DZ_Data
	{
		units[]=
		{
			"FxWindGrass1",
			"FxWindGrass2",
			"FxWindRock1",
			"FxWindLeaf1",
			"FxWindLeaf2",
			"FxWindLeaf3",
			"FxWindPollen1",
			"FXUSWindLeaf1",
			"FXUSWindLeaf2",
			"FXUSWindLeaf3"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
	class DZ_Data_Bliss
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
	class DZ_data_trackingconfigs
	{
	};
	class DZ_Surfaces
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
	class DZ_Surfaces_Bliss
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Surfaces"
		};
	};
	class DZ_AI
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
	class DZ_AI_Bliss
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data_Bliss"
		};
	};
	class DZ_data_aiconfigs
	{
	};
	class DZ_data_aiconfigs_bliss
	{
	};
	class DZ_Sounds_Bliss
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
			"DZ_Worlds_Enoch"
		};
	};
	class DZ_Characters_Zombies
	{
		units[]=
		{
			"Hermit_NewAI"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};	
	class DZ_Animals_AnimConfig
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals"
		};
	};
	class DZ_Animals_ursus_arctos
	{
		units[]=
		{
			"Animal_UrsusArctos"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals",
			"DZ_Data_Bliss",
			"DZ_AI_Bliss",
			"DZ_Weapons_Melee"
		};
	};
	class DZ_Animals_canis_lupus
	{
		units[]=
		{
			"Animal_CanisLupus_Grey",
			"Animal_CanisLupus_White"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals"
		};
	};
	class DZ_Animals_Shred_Tiger
	{
		units[]=
		{
			"Animal_Tiger"
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
			"DZ_Sounds",
			"DZ_Sounds_Bliss",
			"DZ_Surfaces",
			"DZ_Surfaces_Bliss",
			"DZ_Weapons_Melee"
		};
	};
	class DZ_Animals_Shred_Tigris
	{
		units[]=
		{
			"Animal_Tigris"
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
			"DZ_Sounds",
			"DZ_Sounds_Bliss",
			"DZ_Surfaces",
			"DZ_Surfaces_Bliss",
			"DZ_Weapons_Melee"
		};
	};
	class DZ_Animals_Shred_MuleX
	{
		units[]=
		{
			"Animal_CapraHircus"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals"
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
	class Herbivores
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
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=40;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=10;
					safetyDurationMax=15;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
					class CatchUpMovement
					{
						maxSpeed=6;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
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
					safetyDurationMin=15;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
					class CatchUpMovement
					{
						maxSpeed=1.36;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
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
					safetyDurationMin=15;
					safetyDurationMax=25;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=0.40000001;
					safetyLookAngleChangeInterval=5;
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=1;
						maxAngleSpeed=10;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5.8000002;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
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
					safetyDurationMin=15;
					safetyDurationMax=20;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=1.359;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.359;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
					class CatchUpMovement
					{
						maxSpeed=6;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=30;
					sniffWeight=0;
					sniffDuration=0.5;
					lookDuration=6;
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					class WalkingMovement
					{
						maxSpeed=1.359;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=0.5;
					};
					lookWeight=10;
					walkWeight=0;
					walkSpeed=0.40000001;
					rotateAtStartAngleTolerance=0.5;
					maxRotateAngle=2.5;
					walkDuration=15;
					lookDuration=6;
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
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
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=7;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=1;
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
			rangeMin=50;
			rangeMax=120;
			rangeShotMin=0;
			rangeShotMax=10;
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
			visionRangeMin=20;
			visionRangeMax=100;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
			visionRainMinMult=1;
			visionRainMaxMult=0.80000001;
			visionFogMinMult=1;
			visionFogMaxMult=0.40000001;
		};
	};
	class Herbivores_BosTaurus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZdomesticGroupBeh";
		class PathAgent
		{
			radius=0.40000001;
			height=1.8;
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
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=50;
					grazeWalkingWeight=20;
					restWeight=50;
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
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
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
					safetyLookAngleMin=0.30000001;
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
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=25;
					grazeWalkingWeight=25;
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
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=10;
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
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
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
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
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
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=20;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=6;
					walkAwayDurationMax=15;
					walkToDurationMin=6;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.85000002;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.61000001;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_BosTaurusSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=6;
							class AlertImpulseActionRepeatAlert_BosTaurusSlotSpec
							{
								value=9;
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
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=15;
					walkAwayDurationMax=25;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.85000002;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.61000001;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_BosTaurusSlotAlert
						{
							class AlertImpulseActionSendAlert_BosTaurusSlotAlert
							{
								value=50;
								range=15;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_BosTaurusSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=3;
							class AlertImpulseActionRepeatAlert_BosTaurusSlotAlert
							{
								value=8;
								range=15;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=11;
						optimalSpeed=3;
						minSpeed=0.60000002;
						maxSpeedRange=30;
						optimalSpeedRange=20;
						acceleration=5;
						maxAngleSpeed=60;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.61000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=1;
						optimalSpeed=1;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=30;
				noiseToAlertMultiplier=0.40000001;
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
					dropDelay=1;
					maxAlertValue=130;
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
			visionRangeMin=8;
			visionRangeMax=20;
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
	class AmbientLife
	{
		HeadLookBoneName="pin_lookat";
		teamName="AmbientLife";
		class PathAgent
		{
			radius=0.30000001;
			height=0.5;
		};
		class BehaviourHLAmbientLife
		{
			agentPathLength=20;
			agentPathUpdateDelta=2;
			agentPathMinLength=2.5;
			class SlotCalm
			{
				class BehaviourAmbientLifeCalm
				{
					walkWeight=25;
					idle1Weight=25;
					idle2Weight=0;
					idle3Weight=25;
					walkingDurationMin=5;
					walkingDurationMax=20;
					idle1DurationMin=5;
					idle1DurationMax=20;
					idle2DurationMin=5;
					idle2DurationMax=20;
					idle3DurationMin=5;
					idle3DurationMax=20;
					class WalkingMovement
					{
						maxSpeed=0.14;
						minSpeed=0.1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=30;
					sniffWeight=0;
					sniffDuration=0.5;
					lookDuration=6;
				};
			};
			class SlotAlerted
			{
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=3;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=180;
						slowRadius=1;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="ChickenOnRun";
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"HenCluck_X_SoundSet"
							};
						};
						probability=0.89999998;
						RepeatTimeMin=1;
						RepeatTimeMax=3;
						RepeatEnabled="true";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=20;
				};
				class NonSpecificThreat
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=40;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=4;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=2;
			rangeMax=15;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemAmbientLife
		{
			visionManSizeStand=1.5;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionRangeMin=2;
			visionRangeMax=10;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
		};
	};
	class Herbivores_CapreolusCapreolus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=6;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
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
					};
				};
			};
			class SlotCalmTravelling
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
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
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
					};
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
			class SlotNonSpecificThreat
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
						startAnimationMaxSpeed=0.91000003;
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
			{
				class BehaviourCalm
				{
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
			class SlotCalmResting
			{
				class BehaviourCalm
				{
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
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
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
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
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
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
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
					};
				};
			};
			class SlotSpecificThreat
			{
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
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_BosTaurusSlotAlert
						{
							class AlertImpulseActionSendAlert_BosTaurusSlotAlert
							{
								value=50;
								range=15;
							};
						};
					};
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
					};
					class RunMovementInjured2
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
				};
			};
			class AlertSystem
			{
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
				};
				class SpecificThreat
				{
					dropSpeed=5;
					dropDelay=3;
					maxAlertValue=100;
				};
				class Alerted
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=115;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=10;
			rangeMax=25;
			rangeShotMin=5;
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
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
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
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_SusScrofa
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
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
		};
		class NoiseSystemParams
		{
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
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1.4;
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
class CfgNoises
{
	class DeerStepNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class DeerRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class WolfStepNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class WolfRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class ZombieStepNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class ZombieRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
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
	class Bullet_Base;
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
		class BulletCore;
	class Bullet_Base: BulletCore
	{
		class SoundSetsGroundHits
		{
			default[]=
			{
				"Shell_39mm_default_SoundSet"
			};
			en_grass1[]=
			{
				"Shell_39mm_grass_SoundSet"
			};
			en_grass2[]=
			{
				"Shell_39mm_grass_SoundSet"
			};
			en_flowers1[]=
			{
				"Shell_39mm_grass_SoundSet"
			};
			en_flowers2[]=
			{
				"Shell_39mm_grass_SoundSet"
			};
			en_flowers3[]=
			{
				"Shell_39mm_grass_SoundSet"
			};
			en_forestcon[]=
			{
				"Shell_39mm_leaves_SoundSet"
			};
			en_forestdec[]=
			{
				"Shell_39mm_leaves_SoundSet"
			};
			en_soil[]=
			{
				"Shell_39mm_dirt_SoundSet"
			};
			en_tarmac[]=
			{
				"Shell_39mm_default_SoundSet"
			};
			en_tarmacold[]=
			{
				"Shell_39mm_default_SoundSet"
			};
			en_stubble[]=
			{
				"Shell_39mm_grass_SoundSet"
			};
			en_stones[]=
			{
				"Shell_39mm_gravel_SoundSet"
			};
		};
	};
	class ShotgunCore;
	class Shotgun_Base: ShotgunCore
	{
		class SoundSetsGroundHits
		{
			default[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			en_grass1[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			en_grass2[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			en_flowers1[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			en_flowers2[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			en_flowers3[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			en_forestcon[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			en_forestdec[]=
			{
				"Shell_12ga_leaves_SoundSet"
			};
			en_soil[]=
			{
				"Shell_12ga_dirt_SoundSet"
			};
			en_tarmac[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			en_tarmacold[]=
			{
				"Shell_12ga_default_SoundSet"
			};
			en_stubble[]=
			{
				"Shell_12ga_grass_SoundSet"
			};
			en_stones[]=
			{
				"Shell_12ga_gravel_SoundSet"
			};
		};
	};
};
class CfgSoundShaders
{
	class RainObjectInner3Metal4_Medium_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\objects\RainObjectMetal4_Medium_1",
				1
			},
			
			{
				"DZ\sounds_bliss\environment\objects\RainObjectMetal4_Medium_2",
				1
			},
			
			{
				"DZ\sounds_bliss\environment\objects\RainObjectMetal4_Medium_3",
				1
			}
		};
		volume="(rain factor[0.05,1.3]) * raindrops";
		range=15;
	};
	class RainObjectInner5Metal4_Medium_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\objects\RainObjectMetal4_Medium_1",
				1
			},
			
			{
				"DZ\sounds_bliss\environment\objects\RainObjectMetal4_Medium_2",
				1
			},
			
			{
				"DZ\sounds_bliss\environment\objects\RainObjectMetal4_Medium_3",
				1
			}
		};
		volume="(rain factor[0.05,1.3]) * raindrops";
		range=16;
	};
	class RainObjectInner1Concrete_Medium_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\objects\Rain_Dirt_Light_01",
				1
			},
			
			{
				"DZ\sounds_bliss\environment\objects\Rain_Dirt_Light_02",
				1
			},
			
			{
				"DZ\sounds_bliss\environment\objects\Rain_Dirt_Light_03",
				1
			}
		};
		volume="(rain factor[0.05,1.3]) * raindrops";
		range=15;
	};
	class Jay1_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\jay1\Jay1_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay1\Jay1_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay1\Jay1_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay1\Jay1_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay1\Jay1_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay1\Jay1_6",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.1,0.11]) * (randomPos factor[0.2,0.19])";
		range=25;
	};
	class Jay2_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay2\Jay2_7",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.5,0.51]) * (randomPos factor[0.65,0.64])";
		range=25;
	};
	class Jay3_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\jay3\Jay3_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay3\Jay3_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay3\Jay3_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay3\Jay3_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay3\Jay3_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay3\Jay3_6",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.8,0.81]) * (randomPos factor[0.9,0.89])";
		range=25;
	};
	class Jay4_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\jay4\Jay4_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay4\Jay4_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay4\Jay4_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay4\Jay4_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\jay4\Jay4_5",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.9,0.91])";
		range=25;
	};
	class Woodpacker_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\woodpacker\Woodpacker_7",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.2,0.21]) * (randomPos factor[0.35,0.34])";
		range=25;
	};
	class Raven_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_7",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_8",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_9",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_11",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\raven\raven_12",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.3,0.31]) * (randomPos factor[0.4,0.39])";
		range=25;
	};
	class Tit_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_7",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_8",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_9",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_11",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\tit\Tit_12",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.05,0.06]) * (randomPos factor[0.1,0.09])";
		range=25;
	};
	class Chickadee_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_7",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_8",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_9",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_11",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_12",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_13",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_14",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\chickadee\Chickadee_15",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.6,0.61]) * (randomPos factor[0.7,0.69])";
		range=25;
	};
	class Kokorin_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\kokorin\Kokorin_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\kokorin\Kokorin_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\kokorin\Kokorin_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\kokorin\Kokorin_4",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.8,0.81]) * (randomPos factor[1,0.9])";
		range=25;
	};
	class Warbler1_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler1\Warbler1_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler1\Warbler1_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler1\Warbler1_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler1\Warbler1_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler1\Warbler1_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler1\Warbler1_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * ((randomPos factor[0.1,0.11]) * (randomPos factor[0.2,0.19]))";
		range=25;
	};
	class Warbler2_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_7",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_8",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\warbler2\Warbler2_9",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * ((randomPos factor[0.4,0.41]) * (randomPos factor[0.5,0.49]))";
		range=25;
	};
	class Towhee_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\birds\Towhee_1",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Towhee_2",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Towhee_3",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Towhee_4",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Towhee_5",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Towhee_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * ((randomPos factor[0.6,0.61]) * (randomPos factor[0.7,0.69]))";
		range=25;
	};
	class Grosbeak_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_7",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_8",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_9",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_11",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\grosbeak\Grosbeak_12",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * ((randomPos factor[0.8,0.81]) * (randomPos factor[0.9,0.91]))";
		range=25;
	};
	class Sparrow_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_1",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_2",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_3",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_5",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_6",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_7",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_8",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_9",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_11",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_12",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_13",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_14",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_15",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_16",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_17",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_18",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_19",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_20",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_21",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_22",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_23",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\sparrow\Sparrow_24",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * ((randomPos factor[0.05,0.06]) * (randomPos factor[0.15,0.14]) + (randomPos factor[0.30,0.31]) * (randomPos factor[0.40,0.39]))";
		range=25;
	};
	class Quail_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\birds\Quail_1",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Quail_2",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Quail_3",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Quail_4",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (randomPos factor[0.6,0.61]) * (randomPos factor[0.7,0.69])";
		range=25;
	};
	class Wren_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_04",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_05",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_06",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_07",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_08",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_09",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_11",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_12",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_13",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_14",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_15",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_16",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\wren\Wren_Forest_Day_17",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.33,0.35]) * (daytime factor[0.75,0.73]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * ((randomPos factor[0.5,0.51]) * (randomPos factor[0.56,0.55]))";
		range=25;
	};
	class Birds_Night_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\birds\Owl_13",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Owl_14",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Owl_15",
				1
			},
			
			{
				"\DZ\sounds\environment\birds\Owl_16",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird01_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird01_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird01_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird03_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird03_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird03_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird04_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\distant_night\bird04_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="(raindrops factor[0.9,1]) * (rain factor[0.7,0.4]) * night * (windy factor[0.6,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1]) * (((randomPos factor[0.5, 0.51]) * (randomPos factor[0.55, 0.54])) max ((randomPos factor[0.7, 0.71]) * (randomPos factor[0.75, 0.74])))";
		range=25;
	};
	class Whippoorwhill1_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_04",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_05",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_06",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_07",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_08",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_09",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_04",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_05",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.16,0.2]) * (daytime factor[0.35,0.33]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (trees factor[0.7,0.71]) * (1 - ((randomPos factor[0.5,0.51]) * (randomPos factor[0.56,0.55])))";
		range=25;
	};
	class Whippoorwhill2_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_04",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_05",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_06",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_07",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_08",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_09",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_01_Forest_Night_Dawn_10",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_01",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_02",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_03",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_04",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\whippoorwhill\Whippoorwhill_02_Forest_Night_Dawn_05",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\birds\empty\20s",
				1
			}
		};
		volume="((rain factor[0.7,0.4]) * (daytime factor[0.16,0.2]) * (daytime factor[0.35,0.33]) * (windy factor[0.7,0.4]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.4])) * (shooting factor [0.6,1])) * (trees factor[0.7,0.71]) * ((randomPos factor[0.15,14]) + (randomPos factor[0.7,71]))";
		range=25;
	};
	class InsectDay_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\insects\InsectDay_1",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_2",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_3",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_4",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_5",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_6",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_7",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_8",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_9",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_10",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_11",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_12",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_13",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_14",
				1
			},
			
			{
				"\DZ\sounds\environment\insects\InsectDay_15",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\insect\InsectDay_15",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\insect\InsectDay_16",
				1
			},
			
			{
				"\DZ\sounds_bliss\environment\insect\InsectDay_17",
				1
			}
		};
		volume="(1-night) * (rain factor [0.4, 0.1]) * (windy factor[0.6,0.5]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.8])) * (shooting factor [0.6,1]) * (randomPos factor[0.5, 0.51])";
		range=25;
	};
	class InsectNight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\insects\InsectNight_1",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_2",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_3",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_4",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_7",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_8",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_9",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_10",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_11",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_12",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_13",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_14",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_15",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_16",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_17",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_18",
				1
			},
			
			{
				"DZ\sounds\environment\insects\InsectNight_19",
				1
			}
		};
		volume="night * (rain factor [0.4, 0.1]) * (windy factor[0.6,0.5]) * ((overcast factor[0.8,0.6]) min (fog factor[0.9,0.8])) * (shooting factor [0.6,1]) * (randomPos factor[0.51, 0.5])";
		range=25;
	};
	class WindBush_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindBush_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindBush_2",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindBush_3",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindBush_4",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=10;
	};
	class WindTreeSmallLeaves_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeSmallLeaves_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeSmallLeaves_2",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeSmallLeaves_3",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeSmallLeaves_4",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=10;
	};
	class WindTreeMediumLeaves_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeLeaves_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeLeaves_2",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=17;
	};
	class WindTreeLargeLeaves_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeLeaves_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeLeaves_2",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=25;
	};
	class WindTreeSmallEvergreen_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeEvergreen_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeEvergreen_2",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=10;
	};
	class WindTreeMediumEvergreen_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeEvergreen_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeEvergreen_2",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=17;
	};
	class WindTreeLargeEvergreen_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeEvergreen_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeLargeEvergreen_2",
				1
			}
		};
		volume="(((windy factor[0.3,1]) * 1.5) / ((windy factor[0.3,1]) + 0.5)) * (rain factor[0.4,0.3])";
		range=25;
	};
	class WindTreeNoLeaves_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeNoLeaves_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeNoLeaves_2",
				1
			}
		};
		volume="(windy factor[0,1.1]) * (windy factor[0.3,0.55]) * (rain factor[0.4,0.3])";
		range=17;
	};
	class WindTreeSmallNoLeaves_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeSmallNoLeaves_1",
				1
			}
		};
		volume="(windy factor[0,1.1]) * (windy factor[0.3,0.55]) * (rain factor[0.4,0.3])";
		range=17;
	};
	class WindTreeCreak3D_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_2",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_3",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_4",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_5",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_6",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_7",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_8",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_9",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_10",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_11",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_12",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_13",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_14",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreak_15",
				1
			}
		};
		volume="(windy factor[0.5,0.95]) * (rain factor[0.4,0.3]) * ((randomPos factor[0.3,0.31]) * (randomPos factor[0.41,0.4]))";
		range=25;
	};
	class WindTreeCreakHeavy3D_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_1",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_2",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_3",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_4",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_5",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_6",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_7",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_8",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_9",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_10",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_11",
				1
			},
			
			{
				"DZ\sounds\environment\weather\winds\WindTreeCreakHeavy_12",
				1
			}
		};
		volume="(windy factor[0.5,0.95]) * (rain factor[0.4,0.3]) * ((randomPos factor[0.6,0.61]) * (randomPos factor[0.71,0.7]))";
		range=25;
	};
	class ForestDay_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\ambients\ForestDay",
				1
			}
		};
		volume="trees * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6]) * (1 - night)";
	};
	class ForestMorning_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\ForestMorning",
				1
			}
		};
		volume="trees * trees * (rain factor[0.6,0.2]) * (windy factor[0.6,0.3]) * ((daytime factor [0.26, 0.28]) * (daytime factor [0.5, 0.42])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class ForestNoon_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\ForestNoon",
				1
			}
		};
		volume="trees * trees * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6]) * ((daytime factor [0.4, 0.45]) * (daytime factor [0.67, 0.56])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class ForestAfternoon_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\ForestAfterNoon",
				1
			}
		};
		volume="trees * trees * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6]) * ((daytime factor [0.56, 0.67]) * (daytime factor [0.875, 0.75])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class ForestNight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\ForestNight",
				1
			}
		};
		volume="trees * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6]) * night";
	};
	class ForestEarlyNight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\ForestEarlyNight",
				1
			}
		};
		volume="trees * trees * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6]) * ((daytime factor [0.83, 0.87]) * (daytime factor [0.95, 0.9])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class ForestLateNight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\ForestLateNight",
				1
			}
		};
		volume="trees * trees * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6]) * ((daytime factor [0.9, 0.95]) + (daytime factor [0.2, 0.15])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class MeadowsDay_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\MeadowsDay",
				1
			}
		};
		volume="(1 - trees) * (rain factor[0.6,0.2]) * (windy factor[0.8,0.6])";
	};
	class MeadowsMorning_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\MeadowsMorning",
				1
			}
		};
		volume="(1 - (trees factor[0.5,1])) * (rain factor[0.6,0.2]) * (windy factor[0.9,0.7]) * ((daytime factor [0.26, 0.28]) * (daytime factor [0.5, 0.42])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class MeadowsNoon_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\ambients\MeadowsNoon",
				1
			}
		};
		volume="(1 - (trees factor[0.5,1])) * (rain factor[0.6,0.2]) * (windy factor[0.9,0.7]) * ((daytime factor [0.4, 0.45]) * (daytime factor [0.67, 0.56])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class MeadowsAfterNoon_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\ambients\MeadowsAfternoon",
				1
			}
		};
		volume="(1 - (trees factor[0.5,1])) * (rain factor[0.6,0.2]) * (windy factor[0.9,0.7]) * ((daytime factor [0.56, 0.67]) * (daytime factor [0.875, 0.75])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class MeadowsLateNight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\environment\ambients\MeadowsLateNight",
				1
			}
		};
		volume="(1 - (trees factor[0.5,1])) * (rain factor[0.6,0.2]) * (windy factor[0.9,0.7]) * ((daytime factor [0.9, 0.95]) + (daytime factor [0.2, 0.15])) * (1 - ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class RainForestLight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\RainForestLight_-3db",
				1
			}
		};
		volume="(1 - (( 1.6 * houses ) / ( houses + 0.6 ))) * 0.5 * (rain factor[0, 0.1]) * (rain factor[0.55, 0.3]) * (0.25 + 0.75*rain)";
	};
	class RainForestMedium_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\RainForestMedium_-3db",
				1
			}
		};
		volume="(1 - (( 1.6 * houses ) / ( houses + 0.6 ))) * (rain factor[0.2, 0.45]) * (rain factor[0.9, 0.6]) * (0.25 + 0.75*rain)";
	};
	class RainForestHeavy_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\RainForestHeavy_-3db",
				1
			}
		};
		volume="(1 - (( 1.6 * houses ) / ( houses + 0.6 ))) * (rain factor[0.55, 0.85]) * (0.25 + 0.75*rain)";
	};
	class RainHousesLight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\RainHousesLight_-3db",
				1
			}
		};
		volume="(( 1.6 * houses ) / ( houses + 0.6 )) * 0.5 * (rain factor[0, 0.1]) * (rain factor[0.55, 0.3]) * (0.25 + 0.75*rain)";
	};
	class RainHousesMedium_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\RainHousesMedium_-3db",
				1
			}
		};
		volume="(( 1.6 * houses ) / ( houses + 0.6 )) * (rain factor[0.2, 0.45]) * (rain factor[0.9, 0.6]) * (0.25 + 0.75*rain)";
	};
	class RainHousesHeavy_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\RainHousesHeavy_-3db",
				1
			}
		};
		volume="(( 1.6 * houses ) / ( houses + 0.6 )) * (rain factor[0.55, 0.85]) * (0.25 + 0.75*rain)";
	};
	class WindForestLight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\WindForestLight",
				1
			}
		};
		volume="(windy factor[0.2, 0.8]) * (( 2 * trees ) / ( trees + 1 )) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * (1 - 0.3*night) + (0.126 * ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class WindForestHeavy_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\WindForestHeavy",
				1
			}
		};
		volume="(windy factor[0.55, 1]) * (( 2 * trees ) / ( trees + 1 )) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * (1 - 0.3*night)";
	};
	class WindMeadowsLight_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\WindMeadowsLight",
				1
			}
		};
		volume="(windy factor[0.2, 0.8]) * ( 1 - (( 2 * trees ) / ( trees + 1 ))) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * (1 - 0.3*night) + (0.126 * ((fog factor[0.8,0.95]) max (overcast factor[0.65,0.8])))";
	};
	class WindMeadowsHeavy_Bliss_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds_bliss\environment\ambients\WindMeadowsHeavy",
				1
			}
		};
		volume="(windy factor[0.55, 1]) * ( 1 - (( 2 * trees ) / ( trees + 1 ))) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * (1 - 0.3*night)";
	};
	class WindHills_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\environment\ambients\WindHills_-9db",
				1
			}
		};
		volume="(windy factor[0.6,1]) * (hills factor[0.5,1]) * 0.4 * (1 - 0.3*night)";
	};
	class BearAttack_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\attack\attack_heavy_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\attack\attack_heavy_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\attack\attack_heavy_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\attack\attack_heavy_4",
				1
			}
		};
		volume=1;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearBreath_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_5",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\breath\breath_6",
				1
			}
		};
		volume=0.63095737;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearGrowl_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_5",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_6",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_7",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_8",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_9",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_10",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_11",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_12",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\growl\growl_13",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearMumble_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_5",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_6",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\mumble\mumble_7",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearRoar_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_5",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_6",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar\roar_7",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearRoarShort_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_5",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_6",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\roar_short\roar_short_7",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearSigh_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_5",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_6",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_7",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_8",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_9",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_10",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh\sigh_11",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearSighLong_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_long\sigh_long_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_long\sigh_long_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_long\sigh_long_2",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearSighShort_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_short\sigh_short_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_short\sigh_short_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_short\sigh_short_2",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_short\sigh_short_3",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_short\sigh_short_4",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\sigh_short\sigh_short_5",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearSnarl_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\snarl\snarl_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\snarl\snarl_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\snarl\snarl_2",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearSnarlLong_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\snarl_long\snarl_long_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\snarl_long\snarl_long_1",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\snarl_long\snarl_long_2",
				1
			}
		};
		volume=1;
		range=140;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearSnort_SoundShader
	{
		samples[]=
		{
			
			{
				"dz\sounds_bliss\ai\animals\bear\snort\snort_0",
				1
			},
			
			{
				"dz\sounds_bliss\ai\animals\bear\snort\snort_1",
				1
			}
		};
		volume=0.63095737;
		range=45;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	class BearGrowl_1_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_1",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_1_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_1_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_1_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_1_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_1_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_1_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_1_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_1_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_1_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_1_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_1_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_1_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_3_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_3",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_3_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_3_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_3_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_3_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_3_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_3_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_3_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_3_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_3_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_3_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_3_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_3_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_4_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_4",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_4_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_4_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_4_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_4_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_4_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_4_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_4_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_4_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_4_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_4_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_4_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_4_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_5_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_5",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_5_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_5_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_5_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_5_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_5_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_5_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_5_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_5_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_5_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_5_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_5_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_5_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_6_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_6",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_6_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_6_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_6_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_6_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_6_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_6_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_6_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_6_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_6_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_6_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_6_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_6_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_7_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_7",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_7_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_7_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_7_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_7_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_7_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_7_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_7_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_7_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_7_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_7_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_7_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_7_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_9_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_9",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_9_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_9_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_9_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_9_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_9_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_9_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_9_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_9_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_9_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_9_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_9_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_9_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_11_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_11",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_11_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_11_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_11_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_11_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_11_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_11_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_11_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_11_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_11_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_11_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_11_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_11_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_8_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_8",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_8_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_8_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_8_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_8_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_8_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_8_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_8_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_8_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_8_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_8_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_8_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_8_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_10_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_10",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_10_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_10_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_10_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_10_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_10_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_10_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_10_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_10_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_10_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_10_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_10_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_10_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_12_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_12",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_12_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_12_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_12_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_12_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_12_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_12_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_12_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_12_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_12_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_12_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_12_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_12_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_13_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\growl_13",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearGrowl_13_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_13_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearGrowl_13_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_13_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_13_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_13_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_13_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_13_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearGrowl_13_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_13_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearGrowl_13_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\growl\tail\growl_13_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_1_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\roar_1",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearRoar_1_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_1_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearRoar_1_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_1_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_1_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_1_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_1_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_1_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearRoar_1_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_1_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_1_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_1_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_2_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\roar_2",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearRoar_2_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_2_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearRoar_2_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_2_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_2_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_2_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_2_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_2_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearRoar_2_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_2_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_2_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_2_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_3_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\roar_3",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearRoar_3_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_3_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearRoar_3_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_3_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_3_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_3_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_3_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_3_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearRoar_3_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_3_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_3_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_3_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_5_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\roar_5",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearRoar_5_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_5_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearRoar_5_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_5_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_5_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_5_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_5_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_5_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearRoar_5_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_5_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_5_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_5_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_6_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\roar_6",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearRoar_6_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_6_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearRoar_6_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_6_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_6_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_6_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_6_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_6_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearRoar_6_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_6_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_6_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_6_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_7_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\roar_7",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearRoar_7_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_7_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearRoar_7_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_7_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_7_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_7_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_7_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_7_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearRoar_7_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_7_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearRoar_7_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\roar\tail\roar_7_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_0_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\sigh_long_0",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearSighLong_0_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_0_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearSighLong_0_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_0_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_0_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_0_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_0_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_0_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearSighLong_0_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_0_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_0_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_0_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_1_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\sigh_long_1",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearSighLong_1_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_1_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearSighLong_1_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_1_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_1_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_1_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_1_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_1_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearSighLong_1_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_1_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_1_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_1_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_2_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\sigh_long_2",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearSighLong_2_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_2_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearSighLong_2_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_2_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_2_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_2_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_2_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_2_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearSighLong_2_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_2_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSighLong_2_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\sigh_long\tail\sigh_long_2_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_0_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\snarl_long_0",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearSnarlLong_0_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_0_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearSnarlLong_0_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_0_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_0_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_0_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_0_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_0_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearSnarlLong_0_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_0_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_0_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_0_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_1_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\snarl_long_1",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearSnarlLong_1_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_1_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearSnarlLong_1_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_1_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_1_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_1_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_1_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_1_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearSnarlLong_1_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_1_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_1_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_1_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_2_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\snarl_long_2",
				1
			}
		};
		volume=0.70794576;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{80,0.30000001},
			{100,0.30000001},
			{150,0.2},
			{300,0.1},
			{400,0}
		};
	};
	class BearSnarlLong_2_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_2_tailDistant",
				1
			}
		};
		volume=3.1622777;
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{310,0.1},
			{400,0.5},
			{650,1}
		};
	};
	class BearSnarlLong_2_TailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_2_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_2_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_2_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_2_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_2_tailInterior",
				1
			}
		};
		volume="interior";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{8,0.40000001},
			{10,0.2},
			{15,0}
		};
	};
	class BearSnarlLong_2_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_2_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
	class BearSnarlLong_2_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds_bliss\ai\animals\bear\snarl_long\tail\snarl_long_2_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=410;
		rangeCurve[]=
		{
			{0,0},
			{80,0.30000001},
			{100,0.60000002},
			{150,1},
			{410,1}
		};
	};
};
class CfgSoundSets
{
	class RainObjectInner3Metal4_Medium_SoundSet
	{
		soundShaders[]=
		{
			"RainObjectInner3Metal4_Medium_SoundShader"
		};
		volumeFactor="0.251 * 1";
		volumeCurve="objectInner3VolumeCurve";
		volumeRandomizer=0.2;
		frequencyRandomizer=3;
		frequencyFactor=0.89999998;
		loop="true";
		spatial="true";
		sound3DProcessingType="ObjectsInner33DProcessingType";
		doppler="false";
	};
	class RainObjectInner5Metal4_Medium_SoundSet
	{
		soundShaders[]=
		{
			"RainObjectInner5Metal4_Medium_SoundShader"
		};
		volumeFactor="0.251 * 1";
		volumeCurve="objectInner5VolumeCurve";
		volumeRandomizer=0.2;
		frequencyFactor=0.80000001;
		frequencyRandomizer=3;
		loop="true";
		spatial="true";
		sound3DProcessingType="ObjectsInner53DProcessingType";
		doppler="false";
	};
	class RainObjectInner0Concrete_Medium_SoundSet
	{
		soundShaders[]=
		{
			"RainObjectInner1Concrete_Medium_SoundShader"
		};
		volumeFactor="0.251 * 1";
		volumeCurve="objectInner0VolumeCurve";
		volumeRandomizer=0.2;
		frequencyRandomizer=3;
		frequencyFactor=1.1;
		loop="true";
		spatial="true";
		sound3DProcessingType="ObjectsInner03DProcessingType";
		doppler="false";
	};
	class RainObjectInner2Concrete_Medium_SoundSet
	{
		soundShaders[]=
		{
			"RainObjectInner1Concrete_Medium_SoundShader"
		};
		volumeFactor="0.251 * 1";
		volumeCurve="objectInner1VolumeCurve";
		volumeRandomizer=0.2;
		frequencyRandomizer=3;
		frequencyFactor=1;
		loop="true";
		spatial="true";
		sound3DProcessingType="ObjectsInner13DProcessingType";
		doppler="false";
	};
	class Bird_Bliss_Base_SoundSet
	{
		spatial="true";
		doppler="false";
		loop="false";
		volumeFactor="1 * 1";
		volumeRandomizer=0.5;
		sound3DProcessingType="Birds3DProcessingType";
	};
	class Jay1_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Jay1_SoundShader"
		};
		startdelay=10;
		startDelayRandomizer=15;
		delay=45;
		delayRandomizer=15;
		volumeCurve="birds10VolumeCurve";
	};
	class Jay2_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Jay2_SoundShader"
		};
		startdelay=5;
		startDelayRandomizer=20;
		delay=30;
		delayRandomizer=20;
		volumeCurve="birds10VolumeCurve";
	};
	class Jay3_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Jay3_SoundShader"
		};
		startdelay=1;
		startDelayRandomizer=10;
		delay=40;
		delayRandomizer=25;
		volumeCurve="birds10VolumeCurve";
	};
	class Jay4_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Jay4_SoundShader"
		};
		startdelay=1;
		startDelayRandomizer=5;
		delay=30;
		delayRandomizer=10;
		volumeCurve="birds10VolumeCurve";
	};
	class Woodpacker_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Woodpacker_SoundShader"
		};
		startdelay=5;
		startDelayRandomizer=20;
		delay=30;
		delayRandomizer=20;
		volumeCurve="birds10VolumeCurve";
	};
	class Raven_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Raven_SoundShader"
		};
		startdelay=15;
		startDelayRandomizer=10;
		delay=80;
		delayRandomizer=30;
		volumeCurve="birds10VolumeCurve";
	};
	class Tit_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Tit_SoundShader"
		};
		startdelay=3;
		startDelayRandomizer=2;
		delay=3;
		delayRandomizer=5;
		volumeCurve="birds6VolumeCurve";
	};
	class Tit_8_SoundSet: Tit_6_SoundSet
	{
		volumeCurve="birds8VolumeCurve";
	};
	class Tit_10_SoundSet: Tit_6_SoundSet
	{
		volumeCurve="birds10VolumeCurve";
	};
	class Chickadee_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Chickadee_SoundShader"
		};
		startdelay=10;
		startDelayRandomizer=15;
		delay=45;
		delayRandomizer=20;
		volumeCurve="birds6VolumeCurve";
	};
	class Chickadee_8_SoundSet: Chickadee_6_SoundSet
	{
		volumeCurve="birds8VolumeCurve";
	};
	class Kokorin_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kokorin_SoundShader"
		};
		startdelay=4;
		startDelayRandomizer=6;
		delay=5;
		delayRandomizer=10;
		volumeCurve="birds6VolumeCurve";
	};
	class Kokorin_8_SoundSet: Kokorin_6_SoundSet
	{
		volumeCurve="birds8VolumeCurve";
	};
	class Warbler_4_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Warbler1_SoundShader"
		};
		startdelay=2;
		startDelayRandomizer=6;
		delay=2.5;
		delayRandomizer=3;
		volumeCurve="birds4VolumeCurve";
	};
	class Warbler_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Warbler2_SoundShader"
		};
		startdelay=2.5;
		startDelayRandomizer=7;
		delay=4;
		delayRandomizer=3.0999999;
		volumeCurve="birds6VolumeCurve";
	};
	class Warbler_10_SoundSet: Warbler_6_SoundSet
	{
		volumeCurve="birds10VolumeCurve";
	};
	class Towhee_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Towhee_SoundShader"
		};
		startdelay=3;
		startDelayRandomizer=6;
		delay=3.5;
		delayRandomizer=3.2;
		volumeCurve="birds10VolumeCurve";
	};
	class Grosbeak_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Grosbeak_SoundShader"
		};
		startdelay=3.5;
		startDelayRandomizer=6;
		delay=3;
		delayRandomizer=3.3;
		volumeCurve="birds6VolumeCurve";
	};
	class Sparrow_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Sparrow_SoundShader"
		};
		startdelay=5;
		startDelayRandomizer=10;
		delay=10;
		delayRandomizer=20;
		volumeCurve="birds6VolumeCurve";
	};
	class Sparrow_10_SoundSet: Sparrow_6_SoundSet
	{
		volumeCurve="birds10VolumeCurve";
	};
	class Quail_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Quail_SoundShader"
		};
		startdelay=5;
		startDelayRandomizer=10;
		delay=30;
		delayRandomizer=10;
		volumeCurve="birds10VolumeCurve";
	};
	class Wren_6_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Wren_SoundShader"
		};
		volumeFactor="0.501 * 1 * 1";
		startdelay=8;
		startDelayRandomizer=15;
		delay=10;
		delayRandomizer=7.5;
		volumeCurve="birds6VolumeCurve";
	};
	class Wren_8_SoundSet: Wren_6_SoundSet
	{
		volumeCurve="birds8VolumeCurve";
	};
	class Birds_8_Night_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Birds_Night_SoundShader"
		};
		volumeFactor="0.501 * 1 * 1";
		startdelay=5;
		startDelayRandomizer=10;
		delay=15;
		delayRandomizer=10;
		volumeCurve="birds8VolumeCurve";
	};
	class Birds_10_Night_SoundSet: Birds_8_Night_SoundSet
	{
		volumeCurve="birds10VolumeCurve";
	};
	class Whippoorwhill_8_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Whippoorwhill1_SoundShader"
		};
		startdelay=5;
		startDelayRandomizer=20;
		delay=50;
		delayRandomizer=30;
		volumeCurve="birds8VolumeCurve";
	};
	class Whippoorwhill_10_SoundSet: Bird_Bliss_Base_SoundSet
	{
		soundShaders[]=
		{
			"Whippoorwhill2_SoundShader"
		};
		startdelay=1;
		startDelayRandomizer=20;
		delay=35;
		delayRandomizer=25;
		volumeCurve="birds10VolumeCurve";
	};
	class InsectDay_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"InsectDay_Bliss_SoundShader"
		};
		volumeFactor="0.089 * 1";
		volumeRandomizer=6;
		frequencyRandomizer=2;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve[]=
		{
			{0,0.5},
			{3,0.5},
			{4,0.25},
			{5,0.111},
			{6,0.063000001},
			{7,0.028000001},
			{8,0.02},
			{9,0.016000001},
			{10,0.012},
			{11,0.0099999998},
			{12,0}
		};
		sound3DProcessingType="Insect3DProcessingType";
	};
	class InsectNight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"InsectNight_Bliss_SoundShader"
		};
		volumeFactor="0.089 * 1";
		volumeRandomizer=6;
		frequencyRandomizer=2;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="insectsVolumeCurve";
		sound3DProcessingType="Insect3DProcessingType";
	};
	class WindBush_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindBush_Bliss_SoundShader"
		};
		volumeFactor="0.6 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1.1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantSmall3DProcessingType";
	};
	class WindTreeSmallLeaves_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeSmallLeaves_Bliss_SoundShader"
		};
		volumeFactor="0.3 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1.1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantSmall3DProcessingType";
	};
	class WindTreeMediumLeaves_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeMediumLeaves_Bliss_SoundShader"
		};
		volumeFactor="0.684 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantMedium3DProcessingType";
	};
	class WindTreeLargeLeaves_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeLargeLeaves_Bliss_SoundShader"
		};
		volumeFactor="0.684 * 0.071 * 1";
		frequencyFactor=0.85000002;
		volumeRandomizer=2;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantLarge3DProcessingType";
	};
	class WindTreeSmallEvergreen_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeSmallEvergreen_Bliss_SoundShader"
		};
		volumeFactor="0.30 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantSmall3DProcessingType";
	};
	class WindTreeMediumEvergreen_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeMediumEvergreen_Bliss_SoundShader"
		};
		volumeFactor="0.4 * 0.071 * 1";
		frequencyFactor=1;
		volumeRandomizer=2;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantMedium3DProcessingType";
	};
	class WindTreeLargeEvergreen_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeLargeEvergreen_Bliss_SoundShader"
		};
		volumeFactor="0.4 * 0.071 * 1";
		frequencyFactor=1;
		volumeRandomizer=2;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantLarge3DProcessingType";
	};
	class WindTreeSmallNoLeaves_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeSmallNoLeaves_Bliss_SoundShader"
		};
		volumeFactor="0.178 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantSmall3DProcessingType";
	};
	class WindTreeMediumNoLeaves_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeSmallNoLeaves_Bliss_SoundShader"
		};
		volumeFactor="0.141 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantMedium3DProcessingType";
	};
	class WindTreeLargeNoLeaves_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeNoLeaves_Bliss_SoundShader"
		};
		volumeFactor="0.178 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1;
		frequencyRandomizer=4;
		spatial="true";
		doppler="false";
		loop="true";
		volumeCurve="WindAttenuationCurve";
		sound3DProcessingType="WindPlantLarge3DProcessingType";
	};
	class WindTreeCreak3D_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeCreak3D_Bliss_SoundShader"
		};
		volumeFactor="0.2 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=0.89999998;
		frequencyRandomizer=3;
		spatial="true";
		doppler="false";
		delay=2;
		delayRandomize=1;
		positionOffset[]={0,-1,0};
		volumeCurve="CreakAttenuationCurve";
		sound3DProcessingType="WindPlantSmall3DProcessingType";
	};
	class WindTreeCreakHeavy3D_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindTreeCreakHeavy3D_Bliss_SoundShader"
		};
		volumeFactor="0.2 * 0.071 * 1";
		volumeRandomizer=2;
		frequencyFactor=1;
		frequencyRandomizer=3;
		spatial="true";
		doppler="false";
		delay=2;
		delayRandomize=1;
		positionOffset[]={0,-4,0};
		volumeCurve="CreakAttenuationCurve";
		sound3DProcessingType="WindPlantSmall3DProcessingType";
	};
	class ForestDay_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestDay_Bliss_SoundShader"
		};
		volumeFactor="0.335 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class ForestMorning_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestMorning_Bliss_SoundShader"
		};
		volumeFactor="0.501 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class ForestNoon_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestNoon_Bliss_SoundShader"
		};
		volumeFactor="0.708 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class ForestAfternoon_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestAfternoon_Bliss_SoundShader"
		};
		volumeFactor="0.708 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class ForestNight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestNight_Bliss_SoundShader"
		};
		volumeFactor="0.335 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class ForestEarlyNight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestEarlyNight_Bliss_SoundShader"
		};
		volumeFactor="0.501 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class ForestLateNight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"ForestLateNight_Bliss_SoundShader"
		};
		volumeFactor="0.501 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class MeadowsDay_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"MeadowsDay_Bliss_SoundShader"
		};
		volumeFactor="0.335 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class MeadowsMorning_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"MeadowsMorning_Bliss_SoundShader"
		};
		volumeFactor="1 * 1";
		spatial="false";
		loop="true";
	};
	class MeadowsNoon_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"MeadowsNoon_Bliss_SoundShader"
		};
		volumeFactor="1 * 1";
		spatial="false";
		loop="true";
	};
	class MeadowsAfterNoon_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"MeadowsAfterNoon_Bliss_SoundShader"
		};
		volumeFactor="1 * 1";
		spatial="false";
		loop="true";
	};
	class MeadowsLateNight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"MeadowsLateNight_Bliss_SoundShader"
		};
		volumeFactor="0.501 * 1 * 1";
		spatial="false";
		loop="true";
	};
	class RainForestLight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"RainForestLight_Bliss_SoundShader"
		};
		volumeFactor="0.708 * 1";
		spatial="false";
		loop="true";
	};
	class RainForestMedium_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"RainForestMedium_SoundShader"
		};
		volumeFactor="0.708 * 1";
		spatial="false";
		loop="true";
	};
	class RainForestHeavy_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"RainForestHeavy_SoundShader"
		};
		volumeFactor="0.708 * 1";
		spatial="false";
		loop="true";
	};
	class RainHousesLight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"RainHousesLight_SoundShader"
		};
		volumeFactor="0.708 * 0.708 * 1";
		spatial="false";
		loop="true";
	};
	class RainHousesMedium_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"RainHousesMedium_SoundShader"
		};
		volumeFactor="0.708 * 1";
		spatial="false";
		loop="true";
	};
	class RainHousesHeavy_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"RainHousesHeavy_SoundShader"
		};
		volumeFactor="0.708 * 1";
		spatial="false";
		loop="true";
	};
	class WindForestLight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindForestLight_Bliss_SoundShader"
		};
		volumeFactor="0.562 * 1";
		spatial="false";
		loop="true";
	};
	class WindForestHeavy_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindForestHeavy_Bliss_SoundShader"
		};
		volumeFactor="0.335 * 0.562 * 1";
		spatial="false";
		loop="true";
	};
	class WindMeadowsLight_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindMeadowsLight_Bliss_SoundShader"
		};
		volumeFactor="0.562 * 1";
		spatial="false";
		loop="true";
	};
	class WindMeadowsHeavy_Bliss_SoundSet
	{
		soundShaders[]=
		{
			"WindMeadowsHeavy_Bliss_SoundShader"
		};
		volumeFactor="0.335 * 0.562 * 1";
		spatial="false";
		loop="true";
	};
	class WindHills_SoundSet
	{
		soundShaders[]=
		{
			"WindHills_SoundShader"
		};
		volumeFactor="0.562 * 1";
		spatial="false";
		loop="true";
	};
	class baseBear_SoundSet
	{
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial="true";
		doppler="false";
		loop="false";
	};
	class BearAttack_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearAttack_SoundShader"
		};
	};
	class BearBreath_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearBreath_SoundShader"
		};
	};
	class BearGrowl_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_SoundShader"
		};
	};
	class BearMumble_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearMumble_SoundShader"
		};
	};
	class BearRoar_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_SoundShader"
		};
	};
	class BearRoarShort_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoarShort_SoundShader"
		};
	};
	class BearSigh_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSigh_SoundShader"
		};
	};
	class BearSighLong_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSighLong_SoundShader"
		};
	};
	class BearSighShort_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSighShort_SoundShader"
		};
	};
	class BearSnarl_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSnarl_SoundShader"
		};
	};
	class BearSnarlLong_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSnarlLong_SoundShader"
		};
	};
	class BearSnort_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSnort_SoundShader"
		};
	};
	class BearGrowl_1_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_1_SoundShader",
			"BearGrowl_1_tailDistant_SoundShader",
			"BearGrowl_1_tailTrees_SoundShader",
			"BearGrowl_1_tailForest_SoundShader",
			"BearGrowl_1_tailMeadows_SoundShader",
			"BearGrowl_1_tailHouses_SoundShader"
		};
	};
	class BearGrowl_3_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_3_SoundShader",
			"BearGrowl_3_tailDistant_SoundShader",
			"BearGrowl_3_tailTrees_SoundShader",
			"BearGrowl_3_tailForest_SoundShader",
			"BearGrowl_3_tailMeadows_SoundShader",
			"BearGrowl_3_tailHouses_SoundShader"
		};
	};
	class BearGrowl_4_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_4_SoundShader",
			"BearGrowl_4_tailDistant_SoundShader",
			"BearGrowl_4_tailTrees_SoundShader",
			"BearGrowl_4_tailForest_SoundShader",
			"BearGrowl_4_tailMeadows_SoundShader",
			"BearGrowl_4_tailHouses_SoundShader"
		};
	};
	class BearGrowl_5_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_5_SoundShader",
			"BearGrowl_5_tailDistant_SoundShader",
			"BearGrowl_5_tailTrees_SoundShader",
			"BearGrowl_5_tailForest_SoundShader",
			"BearGrowl_5_tailMeadows_SoundShader",
			"BearGrowl_5_tailHouses_SoundShader"
		};
	};
	class BearGrowl_6_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_6_SoundShader",
			"BearGrowl_6_tailDistant_SoundShader",
			"BearGrowl_6_tailTrees_SoundShader",
			"BearGrowl_6_tailForest_SoundShader",
			"BearGrowl_6_tailMeadows_SoundShader",
			"BearGrowl_6_tailHouses_SoundShader"
		};
	};
	class BearGrowl_7_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_7_SoundShader",
			"BearGrowl_7_tailDistant_SoundShader",
			"BearGrowl_7_tailTrees_SoundShader",
			"BearGrowl_7_tailForest_SoundShader",
			"BearGrowl_7_tailMeadows_SoundShader",
			"BearGrowl_7_tailHouses_SoundShader"
		};
	};
	class BearGrowl_8_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_8_SoundShader",
			"BearGrowl_8_tailDistant_SoundShader",
			"BearGrowl_8_tailTrees_SoundShader",
			"BearGrowl_8_tailForest_SoundShader",
			"BearGrowl_8_tailMeadows_SoundShader",
			"BearGrowl_8_tailHouses_SoundShader"
		};
	};
	class BearGrowl_9_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_9_SoundShader",
			"BearGrowl_9_tailDistant_SoundShader",
			"BearGrowl_9_tailTrees_SoundShader",
			"BearGrowl_9_tailForest_SoundShader",
			"BearGrowl_9_tailMeadows_SoundShader",
			"BearGrowl_9_tailHouses_SoundShader"
		};
	};
	class BearGrowl_10_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_10_SoundShader",
			"BearGrowl_10_tailDistant_SoundShader",
			"BearGrowl_10_tailTrees_SoundShader",
			"BearGrowl_10_tailForest_SoundShader",
			"BearGrowl_10_tailMeadows_SoundShader",
			"BearGrowl_10_tailHouses_SoundShader"
		};
	};
	class BearGrowl_12_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_12_SoundShader",
			"BearGrowl_12_tailDistant_SoundShader",
			"BearGrowl_12_tailTrees_SoundShader",
			"BearGrowl_12_tailForest_SoundShader",
			"BearGrowl_12_tailMeadows_SoundShader",
			"BearGrowl_12_tailHouses_SoundShader"
		};
	};
	class BearGrowl_13_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_13_SoundShader",
			"BearGrowl_13_tailDistant_SoundShader",
			"BearGrowl_13_tailTrees_SoundShader",
			"BearGrowl_13_tailForest_SoundShader",
			"BearGrowl_13_tailMeadows_SoundShader",
			"BearGrowl_13_tailHouses_SoundShader"
		};
	};
	class BearRoar_1_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_1_SoundShader",
			"BearRoar_1_tailDistant_SoundShader",
			"BearRoar_1_tailTrees_SoundShader",
			"BearRoar_1_tailForest_SoundShader",
			"BearRoar_1_tailMeadows_SoundShader",
			"BearRoar_1_tailHouses_SoundShader"
		};
	};
	class BearRoar_2_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_2_SoundShader",
			"BearRoar_2_tailDistant_SoundShader",
			"BearRoar_2_tailTrees_SoundShader",
			"BearRoar_2_tailForest_SoundShader",
			"BearRoar_2_tailMeadows_SoundShader",
			"BearRoar_2_tailHouses_SoundShader"
		};
	};
	class BearRoar_3_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_3_SoundShader",
			"BearRoar_3_tailDistant_SoundShader",
			"BearRoar_3_tailTrees_SoundShader",
			"BearRoar_3_tailForest_SoundShader",
			"BearRoar_3_tailMeadows_SoundShader",
			"BearRoar_3_tailHouses_SoundShader"
		};
	};
	class BearRoar_5_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_5_SoundShader",
			"BearRoar_5_tailDistant_SoundShader",
			"BearRoar_5_tailTrees_SoundShader",
			"BearRoar_5_tailForest_SoundShader",
			"BearRoar_5_tailMeadows_SoundShader",
			"BearRoar_5_tailHouses_SoundShader"
		};
	};
	class BearRoar_6_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_6_SoundShader",
			"BearRoar_6_tailDistant_SoundShader",
			"BearRoar_6_tailTrees_SoundShader",
			"BearRoar_6_tailForest_SoundShader",
			"BearRoar_6_tailMeadows_SoundShader",
			"BearRoar_6_tailHouses_SoundShader"
		};
	};
	class BearRoar_7_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearRoar_7_SoundShader",
			"BearRoar_7_tailDistant_SoundShader",
			"BearRoar_7_tailTrees_SoundShader",
			"BearRoar_7_tailForest_SoundShader",
			"BearRoar_7_tailMeadows_SoundShader",
			"BearRoar_7_tailHouses_SoundShader"
		};
	};
	class BearSighLong_0_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSighLong_0_SoundShader",
			"BearSighLong_0_tailDistant_SoundShader",
			"BearSighLong_0_tailTrees_SoundShader",
			"BearSighLong_0_tailForest_SoundShader",
			"BearSighLong_0_tailMeadows_SoundShader",
			"BearSighLong_0_tailHouses_SoundShader"
		};
	};
	class BearSighLong_1_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSighLong_1_SoundShader",
			"BearSighLong_1_tailDistant_SoundShader",
			"BearSighLong_1_tailTrees_SoundShader",
			"BearSighLong_1_tailForest_SoundShader",
			"BearSighLong_1_tailMeadows_SoundShader",
			"BearSighLong_1_tailHouses_SoundShader"
		};
	};
	class BearSighLong_2_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSighLong_2_SoundShader",
			"BearSighLong_2_tailDistant_SoundShader",
			"BearSighLong_2_tailTrees_SoundShader",
			"BearSighLong_2_tailForest_SoundShader",
			"BearSighLong_2_tailMeadows_SoundShader",
			"BearSighLong_2_tailHouses_SoundShader"
		};
	};
	class BearSnarlLong_0_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSnarlLong_0_SoundShader",
			"BearSnarlLong_0_tailDistant_SoundShader",
			"BearSnarlLong_0_tailTrees_SoundShader",
			"BearSnarlLong_0_tailForest_SoundShader",
			"BearSnarlLong_0_tailMeadows_SoundShader",
			"BearSnarlLong_0_tailHouses_SoundShader"
		};
	};
	class BearSnarlLong_1_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSnarlLong_1_SoundShader",
			"BearSnarlLong_1_tailDistant_SoundShader",
			"BearSnarlLong_1_tailTrees_SoundShader",
			"BearSnarlLong_1_tailForest_SoundShader",
			"BearSnarlLong_1_tailMeadows_SoundShader",
			"BearSnarlLong_1_tailHouses_SoundShader"
		};
	};
	class BearSnarlLong_2_SoundSet: baseBear_SoundSet
	{
		soundShaders[]=
		{
			"BearSnarlLong_2_SoundShader",
			"BearSnarlLong_2_tailDistant_SoundShader",
			"BearSnarlLong_2_tailTrees_SoundShader",
			"BearSnarlLong_2_tailForest_SoundShader",
			"BearSnarlLong_2_tailMeadows_SoundShader",
			"BearSnarlLong_2_tailHouses_SoundShader"
		};
	};
};
class CfgSoundTables
{
	class CfgStepSoundTables
	{
		class BirdWalk_LookupTable
		{
			class BirdWalkstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"BirdWalk_Grass_dry_SoundSet"
				};
			};
			class BirdWalkstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"BirdWalk_Grass_dry_SoundSet"
				};
			};
			class BirdWalkstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"BirdWalk_Grass_dry_SoundSet"
				};
			};
			class BirdWalkstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"BirdWalk_Grass_dry_SoundSet"
				};
			};
			class BirdWalkstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"BirdWalk_Grass_dry_SoundSet"
				};
			};
			class BirdWalkstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"BirdWalk_Forest_SoundSet"
				};
			};
			class BirdWalkstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"BirdWalk_Forest_SoundSet"
				};
			};
			class BirdWalkstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"BirdWalk_Dirt_SoundSet"
				};
			};
			class BirdWalkstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"BirdWalk_Road_SoundSet"
				};
			};
			class BirdWalkstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"BirdWalk_Grass_dry_SoundSet"
				};
			};
			class BirdWalkstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"BirdWalk_Gravel_SoundSet"
				};
			};
		};
		class BirdGrazing_LookupTable
		{
			class BirdGrazingstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"BirdGrazing_Grass_dry_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"BirdGrazing_Grass_dry_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"BirdGrazing_Grass_dry_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"BirdGrazing_Grass_dry_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"BirdGrazing_Grass_dry_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"BirdGrazing_Forest_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"BirdGrazing_Forest_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"BirdGrazing_Dirt_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"BirdGrazing_Road_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"BirdGrazing_Grass_dry_SoundSet"
				};
			};
			class BirdGrazingstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"BirdGrazing_Gravel_SoundSet"
				};
			};
		};
		class BirdBodyfall_LookupTable
		{
			class BirdBodyfallstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"BirdBodyfall_Grass_dry_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"BirdBodyfall_Grass_dry_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"BirdBodyfall_Grass_dry_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"BirdBodyfall_Grass_dry_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"BirdBodyfall_Grass_dry_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"BirdBodyfall_Forest_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"BirdBodyfall_Forest_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"BirdBodyfall_Dirt_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"BirdBodyfall_Road_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"BirdBodyfall_Grass_dry_SoundSet"
				};
			};
			class BirdBodyfallstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"BirdBodyfall_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumWalk_LookupTable
		{
			class HoofMediumWalkstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumWalk_Grass_dry_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumWalk_Grass_dry_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumWalk_Grass_dry_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumWalk_Grass_dry_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumWalk_Grass_dry_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumWalk_Forest_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumWalk_Forest_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumWalk_Dirt_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumWalk_Road_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumWalk_Grass_dry_SoundSet"
				};
			};
			class HoofMediumWalkstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumWalk_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumRun_LookupTable
		{
			class HoofMediumRunstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumRun_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumRun_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumRun_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumRun_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumRun_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumRun_Forest_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumRun_Forest_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumRun_Dirt_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumRun_Road_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumRun_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRunstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumRun_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumGrazing_LookupTable
		{
			class HoofMediumGrazingstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumGrazing_Forest_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumGrazing_Forest_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumGrazing_Dirt_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumGrazing_Road_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofMediumGrazingstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumGrazing_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumBodyfall_LookupTable
		{
			class HoofMediumBodyfallstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumBodyfall_Forest_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumBodyfall_Forest_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumBodyfall_Dirt_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumBodyfall_Road_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofMediumBodyfallstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumBodyfall_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumSettle_LookupTable
		{
			class HoofMediumSettlestepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumSettle_Grass_dry_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumSettle_Grass_dry_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumSettle_Grass_dry_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumSettle_Grass_dry_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumSettle_Grass_dry_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumSettle_Forest_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumSettle_Forest_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumSettle_Dirt_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumSettle_Road_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumSettle_Grass_dry_SoundSet"
				};
			};
			class HoofMediumSettlestepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumSettle_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumRest2standA_LookupTable
		{
			class HoofMediumRest2standAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumRest2standA_Forest_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumRest2standA_Forest_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumRest2standA_Dirt_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumRest2standA_Road_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumRest2standA_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumRest2standB_LookupTable
		{
			class HoofMediumRest2standBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumRest2standB_Forest_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumRest2standB_Forest_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumRest2standB_Dirt_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumRest2standB_Road_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRest2standBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumRest2standB_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumStand2restA_LookupTable
		{
			class HoofMediumStand2restAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumStand2restA_Forest_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumStand2restA_Forest_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumStand2restA_Dirt_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumStand2restA_Road_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumStand2restA_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumStand2restB_LookupTable
		{
			class HoofMediumStand2restBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumStand2restB_Forest_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumStand2restB_Forest_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumStand2restB_Dirt_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumStand2restB_Road_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumStand2restB_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumStand2restC_LookupTable
		{
			class HoofMediumStand2restCstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumStand2restC_Forest_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumStand2restC_Forest_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumStand2restC_Dirt_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumStand2restC_Road_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofMediumStand2restCstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumStand2restC_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumRub1_LookupTable
		{
			class HoofMediumRub1stepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumRub1_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumRub1_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumRub1_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumRub1_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumRub1_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumRub1_Forest_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumRub1_Forest_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumRub1_Dirt_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumRub1_Road_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumRub1_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub1stepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumRub1_Gravel_SoundSet"
				};
			};
		};
		class HoofMediumRub2_LookupTable
		{
			class HoofMediumRub2stepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofMediumRub2_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofMediumRub2_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofMediumRub2_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofMediumRub2_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofMediumRub2_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofMediumRub2_Forest_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofMediumRub2_Forest_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofMediumRub2_Dirt_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofMediumRub2_Road_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofMediumRub2_Grass_dry_SoundSet"
				};
			};
			class HoofMediumRub2stepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofMediumRub2_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallWalk_LookupTable
		{
			class HoofSmallWalkstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallWalk_Grass_dry_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallWalk_Grass_dry_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallWalk_Grass_dry_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallWalk_Grass_dry_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallWalk_Grass_dry_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallWalk_Forest_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallWalk_Forest_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallWalk_Dirt_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallWalk_Road_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallWalk_Grass_dry_SoundSet"
				};
			};
			class HoofSmallWalkstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallWalk_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallRun_LookupTable
		{
			class HoofSmallRunstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallRun_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallRun_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallRun_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallRun_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallRun_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallRun_Forest_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallRun_Forest_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallRun_Dirt_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallRun_Road_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallRun_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRunstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallRun_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallGrazing_LookupTable
		{
			class HoofSmallGrazingstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallGrazing_Forest_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallGrazing_Forest_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallGrazing_Dirt_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallGrazing_Road_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallGrazing_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallGrazingHard_LookupTable
		{
			class HoofSmallGrazingHardstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Forest_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Forest_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Dirt_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Road_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingHardstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallGrazingHard_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallGrazingLeave_LookupTable
		{
			class HoofSmallGrazingLeavestepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Forest_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Forest_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Dirt_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Road_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Grass_dry_SoundSet"
				};
			};
			class HoofSmallGrazingLeavestepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallGrazingLeave_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallBodyfall_LookupTable
		{
			class HoofSmallBodyfallstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallBodyfall_Forest_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallBodyfall_Forest_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallBodyfall_Dirt_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallBodyfall_Road_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class HoofSmallBodyfallstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallBodyfall_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallSettle_LookupTable
		{
			class HoofSmallSettlestepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallSettle_Grass_dry_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallSettle_Grass_dry_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallSettle_Grass_dry_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallSettle_Grass_dry_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallSettle_Grass_dry_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallSettle_Forest_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallSettle_Forest_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallSettle_Dirt_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallSettle_Road_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallSettle_Grass_dry_SoundSet"
				};
			};
			class HoofSmallSettlestepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallSettle_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallRest2standA_LookupTable
		{
			class HoofSmallRest2standAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallRest2standA_Forest_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallRest2standA_Forest_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallRest2standA_Dirt_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallRest2standA_Road_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallRest2standA_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallRest2standB_LookupTable
		{
			class HoofSmallRest2standBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallRest2standB_Forest_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallRest2standB_Forest_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallRest2standB_Dirt_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallRest2standB_Road_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRest2standBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallRest2standB_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallStand2restA_LookupTable
		{
			class HoofSmallStand2restAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallStand2restA_Forest_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallStand2restA_Forest_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallStand2restA_Dirt_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallStand2restA_Road_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallStand2restA_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallStand2restB_LookupTable
		{
			class HoofSmallStand2restBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallStand2restB_Forest_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallStand2restB_Forest_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallStand2restB_Dirt_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallStand2restB_Road_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallStand2restB_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallStand2restC_LookupTable
		{
			class HoofSmallStand2restCstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallStand2restC_Forest_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallStand2restC_Forest_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallStand2restC_Dirt_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallStand2restC_Road_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class HoofSmallStand2restCstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallStand2restC_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallRub1_LookupTable
		{
			class HoofSmallRub1stepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallRub1_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallRub1_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallRub1_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallRub1_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallRub1_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallRub1_Forest_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallRub1_Forest_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallRub1_Dirt_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallRub1_Road_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallRub1_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub1stepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallRub1_Gravel_SoundSet"
				};
			};
		};
		class HoofSmallRub2_LookupTable
		{
			class HoofSmallRub2stepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"HoofSmallRub2_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"HoofSmallRub2_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"HoofSmallRub2_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"HoofSmallRub2_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"HoofSmallRub2_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"HoofSmallRub2_Forest_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"HoofSmallRub2_Forest_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"HoofSmallRub2_Dirt_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"HoofSmallRub2_Road_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"HoofSmallRub2_Grass_dry_SoundSet"
				};
			};
			class HoofSmallRub2stepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"HoofSmallRub2_Gravel_SoundSet"
				};
			};
		};
		class PawBigWalk_LookupTable
		{
			class PawBigWalkstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigWalk_Grass_dry_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigWalk_Grass_dry_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigWalk_Grass_dry_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigWalk_Grass_dry_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigWalk_Grass_dry_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigWalk_Forest_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigWalk_Forest_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigWalk_Dirt_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigWalk_Road_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigWalk_Grass_dry_SoundSet"
				};
			};
			class PawBigWalkstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigWalk_Gravel_SoundSet"
				};
			};
		};
		class PawBigRun_LookupTable
		{
			class PawBigRunstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigRun_Grass_dry_SoundSet"
				};
			};
			class PawBigRunstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigRun_Grass_dry_SoundSet"
				};
			};
			class PawBigRunstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigRun_Grass_dry_SoundSet"
				};
			};
			class PawBigRunstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigRun_Grass_dry_SoundSet"
				};
			};
			class PawBigRunstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigRun_Grass_dry_SoundSet"
				};
			};
			class PawBigRunstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigRun_Forest_SoundSet"
				};
			};
			class PawBigRunstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigRun_Forest_SoundSet"
				};
			};
			class PawBigRunstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigRun_Dirt_SoundSet"
				};
			};
			class PawBigRunstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigRun_Road_SoundSet"
				};
			};
			class PawBigRunstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigRun_Grass_dry_SoundSet"
				};
			};
			class PawBigRunstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigRun_Gravel_SoundSet"
				};
			};
		};
		class PawBigGrazing_LookupTable
		{
			class PawBigGrazingstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigGrazing_Grass_dry_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigGrazing_Grass_dry_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigGrazing_Grass_dry_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigGrazing_Grass_dry_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigGrazing_Grass_dry_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigGrazing_Forest_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigGrazing_Forest_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigGrazing_Dirt_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigGrazing_Road_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigGrazing_Grass_dry_SoundSet"
				};
			};
			class PawBigGrazingstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigGrazing_Gravel_SoundSet"
				};
			};
		};
		class PawBigBodyfall_LookupTable
		{
			class PawBigBodyfallstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigBodyfall_Forest_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigBodyfall_Forest_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigBodyfall_Dirt_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigBodyfall_Road_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawBigBodyfallstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigBodyfall_Gravel_SoundSet"
				};
			};
		};
		class PawBigSettle_LookupTable
		{
			class PawBigSettlestepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigSettle_Grass_dry_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigSettle_Grass_dry_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigSettle_Grass_dry_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigSettle_Grass_dry_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigSettle_Grass_dry_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigSettle_Forest_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigSettle_Forest_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigSettle_Dirt_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigSettle_Road_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigSettle_Grass_dry_SoundSet"
				};
			};
			class PawBigSettlestepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigSettle_Gravel_SoundSet"
				};
			};
		};
		class PawBigRest2standA_LookupTable
		{
			class PawBigRest2standAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigRest2standA_Forest_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigRest2standA_Forest_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigRest2standA_Dirt_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigRest2standA_Road_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigRest2standA_Gravel_SoundSet"
				};
			};
		};
		class PawBigRest2standB_LookupTable
		{
			class PawBigRest2standBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigRest2standB_Forest_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigRest2standB_Forest_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigRest2standB_Dirt_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigRest2standB_Road_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawBigRest2standBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigRest2standB_Gravel_SoundSet"
				};
			};
		};
		class PawBigStand2restA_LookupTable
		{
			class PawBigStand2restAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigStand2restA_Forest_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigStand2restA_Forest_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigStand2restA_Dirt_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigStand2restA_Road_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigStand2restA_Gravel_SoundSet"
				};
			};
		};
		class PawBigStand2restB_LookupTable
		{
			class PawBigStand2restBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigStand2restB_Forest_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigStand2restB_Forest_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigStand2restB_Dirt_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigStand2restB_Road_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigStand2restB_Gravel_SoundSet"
				};
			};
		};
		class PawBigStand2restC_LookupTable
		{
			class PawBigStand2restCstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigStand2restC_Forest_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigStand2restC_Forest_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigStand2restC_Dirt_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigStand2restC_Road_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawBigStand2restCstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigStand2restC_Gravel_SoundSet"
				};
			};
		};
		class PawBigJump_LookupTable
		{
			class PawBigJumpstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigJump_Grass_dry_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigJump_Grass_dry_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigJump_Grass_dry_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigJump_Grass_dry_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigJump_Grass_dry_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigJump_Forest_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigJump_Forest_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigJump_Dirt_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigJump_Road_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigJump_Grass_dry_SoundSet"
				};
			};
			class PawBigJumpstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigJump_Gravel_SoundSet"
				};
			};
		};
		class PawBigImpact_LookupTable
		{
			class PawBigImpactstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawBigImpact_Grass_dry_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawBigImpact_Grass_dry_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawBigImpact_Grass_dry_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawBigImpact_Grass_dry_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawBigImpact_Grass_dry_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawBigImpact_Forest_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawBigImpact_Forest_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawBigImpact_Dirt_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawBigImpact_Road_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawBigImpact_Grass_dry_SoundSet"
				};
			};
			class PawBigImpactstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawBigImpact_Gravel_SoundSet"
				};
			};
		};
		class PawMediumWalk_LookupTable
		{
			class PawMediumWalkstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumWalk_Grass_dry_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumWalk_Grass_dry_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumWalk_Grass_dry_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumWalk_Grass_dry_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumWalk_Grass_dry_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumWalk_Forest_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumWalk_Forest_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumWalk_Dirt_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumWalk_Road_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumWalk_Grass_dry_SoundSet"
				};
			};
			class PawMediumWalkstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumWalk_Gravel_SoundSet"
				};
			};
		};
		class PawMediumRun_LookupTable
		{
			class PawMediumRunstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumRun_Grass_dry_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumRun_Grass_dry_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumRun_Grass_dry_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumRun_Grass_dry_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumRun_Grass_dry_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumRun_Forest_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumRun_Forest_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumRun_Dirt_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumRun_Road_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumRun_Grass_dry_SoundSet"
				};
			};
			class PawMediumRunstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumRun_Gravel_SoundSet"
				};
			};
		};
		class PawMediumGrazing_LookupTable
		{
			class PawMediumGrazingstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumGrazing_Forest_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumGrazing_Forest_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumGrazing_Dirt_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumGrazing_Road_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumGrazing_Grass_dry_SoundSet"
				};
			};
			class PawMediumGrazingstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumGrazing_Gravel_SoundSet"
				};
			};
		};
		class PawMediumBodyfall_LookupTable
		{
			class PawMediumBodyfallstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumBodyfall_Forest_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumBodyfall_Forest_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumBodyfall_Dirt_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumBodyfall_Road_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawMediumBodyfallstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumBodyfall_Gravel_SoundSet"
				};
			};
		};
		class PawMediumSettle_LookupTable
		{
			class PawMediumSettlestepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumSettle_Grass_dry_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumSettle_Grass_dry_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumSettle_Grass_dry_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumSettle_Grass_dry_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumSettle_Grass_dry_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumSettle_Forest_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumSettle_Forest_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumSettle_Dirt_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumSettle_Road_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumSettle_Grass_dry_SoundSet"
				};
			};
			class PawMediumSettlestepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumSettle_Gravel_SoundSet"
				};
			};
		};
		class PawMediumRest2standA_LookupTable
		{
			class PawMediumRest2standAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumRest2standA_Forest_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumRest2standA_Forest_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumRest2standA_Dirt_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumRest2standA_Road_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumRest2standA_Gravel_SoundSet"
				};
			};
		};
		class PawMediumRest2standB_LookupTable
		{
			class PawMediumRest2standBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumRest2standB_Forest_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumRest2standB_Forest_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumRest2standB_Dirt_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumRest2standB_Road_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawMediumRest2standBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumRest2standB_Gravel_SoundSet"
				};
			};
		};
		class PawMediumStand2restA_LookupTable
		{
			class PawMediumStand2restAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumStand2restA_Forest_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumStand2restA_Forest_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumStand2restA_Dirt_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumStand2restA_Road_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumStand2restA_Gravel_SoundSet"
				};
			};
		};
		class PawMediumStand2restB_LookupTable
		{
			class PawMediumStand2restBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumStand2restB_Forest_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumStand2restB_Forest_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumStand2restB_Dirt_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumStand2restB_Road_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumStand2restB_Gravel_SoundSet"
				};
			};
		};
		class PawMediumStand2restC_LookupTable
		{
			class PawMediumStand2restCstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumStand2restC_Forest_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumStand2restC_Forest_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumStand2restC_Dirt_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumStand2restC_Road_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawMediumStand2restCstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumStand2restC_Gravel_SoundSet"
				};
			};
		};
		class PawMediumJump_LookupTable
		{
			class PawMediumJumpstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumJump_Grass_dry_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumJump_Grass_dry_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumJump_Grass_dry_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumJump_Grass_dry_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumJump_Grass_dry_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumJump_Forest_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumJump_Forest_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumJump_Dirt_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumJump_Road_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumJump_Grass_dry_SoundSet"
				};
			};
			class PawMediumJumpstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumJump_Gravel_SoundSet"
				};
			};
		};
		class PawMediumImpact_LookupTable
		{
			class PawMediumImpactstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawMediumImpact_Grass_dry_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawMediumImpact_Grass_dry_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawMediumImpact_Grass_dry_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawMediumImpact_Grass_dry_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawMediumImpact_Grass_dry_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawMediumImpact_Forest_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawMediumImpact_Forest_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawMediumImpact_Dirt_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawMediumImpact_Road_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawMediumImpact_Grass_dry_SoundSet"
				};
			};
			class PawMediumImpactstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawMediumImpact_Gravel_SoundSet"
				};
			};
		};
		class PawSmallWalk_LookupTable
		{
			class PawSmallWalkstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallWalk_Grass_dry_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallWalk_Grass_dry_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallWalk_Grass_dry_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallWalk_Grass_dry_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallWalk_Grass_dry_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallWalk_Forest_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallWalk_Forest_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallWalk_Dirt_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallWalk_Road_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallWalk_Grass_dry_SoundSet"
				};
			};
			class PawSmallWalkstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallWalk_Gravel_SoundSet"
				};
			};
		};
		class PawSmallRun_LookupTable
		{
			class PawSmallRunstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallRun_Grass_dry_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallRun_Grass_dry_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallRun_Grass_dry_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallRun_Grass_dry_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallRun_Grass_dry_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallRun_Forest_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallRun_Forest_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallRun_Dirt_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallRun_Road_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallRun_Grass_dry_SoundSet"
				};
			};
			class PawSmallRunstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallRun_Gravel_SoundSet"
				};
			};
		};
		class PawSmallGrazing_LookupTable
		{
			class PawSmallGrazingstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallGrazing_Forest_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallGrazing_Forest_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallGrazing_Dirt_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallGrazing_Road_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallGrazing_Grass_dry_SoundSet"
				};
			};
			class PawSmallGrazingstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallGrazing_Gravel_SoundSet"
				};
			};
		};
		class PawSmallBodyfall_LookupTable
		{
			class PawSmallBodyfallstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallBodyfall_Forest_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallBodyfall_Forest_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallBodyfall_Dirt_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallBodyfall_Road_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallBodyfall_Grass_dry_SoundSet"
				};
			};
			class PawSmallBodyfallstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallBodyfall_Gravel_SoundSet"
				};
			};
		};
		class PawSmallSettle_LookupTable
		{
			class PawSmallSettlestepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallSettle_Grass_dry_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallSettle_Grass_dry_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallSettle_Grass_dry_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallSettle_Grass_dry_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallSettle_Grass_dry_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallSettle_Forest_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallSettle_Forest_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallSettle_Dirt_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallSettle_Road_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallSettle_Grass_dry_SoundSet"
				};
			};
			class PawSmallSettlestepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallSettle_Gravel_SoundSet"
				};
			};
		};
		class PawSmallRest2standA_LookupTable
		{
			class PawSmallRest2standAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallRest2standA_Forest_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallRest2standA_Forest_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallRest2standA_Dirt_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallRest2standA_Road_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallRest2standA_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallRest2standA_Gravel_SoundSet"
				};
			};
		};
		class PawSmallRest2standB_LookupTable
		{
			class PawSmallRest2standBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallRest2standB_Forest_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallRest2standB_Forest_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallRest2standB_Dirt_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallRest2standB_Road_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallRest2standB_Grass_dry_SoundSet"
				};
			};
			class PawSmallRest2standBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallRest2standB_Gravel_SoundSet"
				};
			};
		};
		class PawSmallStand2restA_LookupTable
		{
			class PawSmallStand2restAstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallStand2restA_Forest_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallStand2restA_Forest_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallStand2restA_Dirt_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallStand2restA_Road_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallStand2restA_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restAstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallStand2restA_Gravel_SoundSet"
				};
			};
		};
		class PawSmallStand2restB_LookupTable
		{
			class PawSmallStand2restBstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallStand2restB_Forest_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallStand2restB_Forest_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallStand2restB_Dirt_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallStand2restB_Road_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallStand2restB_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restBstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallStand2restB_Gravel_SoundSet"
				};
			};
		};
		class PawSmallStand2restC_LookupTable
		{
			class PawSmallStand2restCstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallStand2restC_Forest_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallStand2restC_Forest_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallStand2restC_Dirt_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallStand2restC_Road_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallStand2restC_Grass_dry_SoundSet"
				};
			};
			class PawSmallStand2restCstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallStand2restC_Gravel_SoundSet"
				};
			};
		};
		class PawSmallJump_LookupTable
		{
			class PawSmallJumpstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallJump_Grass_dry_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallJump_Grass_dry_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallJump_Grass_dry_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallJump_Grass_dry_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallJump_Grass_dry_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallJump_Forest_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallJump_Forest_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallJump_Dirt_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallJump_Road_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallJump_Grass_dry_SoundSet"
				};
			};
			class PawSmallJumpstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallJump_Gravel_SoundSet"
				};
			};
		};
		class PawSmallImpact_LookupTable
		{
			class PawSmallImpactstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"PawSmallImpact_Grass_dry_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"PawSmallImpact_Grass_dry_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"PawSmallImpact_Grass_dry_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"PawSmallImpact_Grass_dry_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"PawSmallImpact_Grass_dry_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"PawSmallImpact_Forest_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"PawSmallImpact_Forest_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"PawSmallImpact_Dirt_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"PawSmallImpact_Road_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"PawSmallImpact_Grass_dry_SoundSet"
				};
			};
			class PawSmallImpactstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"PawSmallImpact_Gravel_SoundSet"
				};
			};
		};
		class walkErc_Char_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_Char_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_Char_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class walkRasErc_Char_LookupTable
		{
			class walkRasErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkRasErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkRasErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkRasErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkRasErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkRasErc_dirt_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkRasErc_asphalt_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class walkRasErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkRasErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class runErc_Char_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_Char_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_Char_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class runRasErc_Char_LookupTable
		{
			class runRasErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runRasErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runRasErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runRasErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runRasErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runRasErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runRasErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runRasErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runRasErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runRasErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runRasErc_dirt_ext_Char_Soundset"
				};
			};
			class runRasErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runRasErc_asphalt_ext_Char_Soundset"
				};
			};
			class runRasErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runRasErc_grass_dry_ext_Char_Soundset"
				};
			};
			class runRasErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runRasErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class sprintErc_Char_LookupTable
		{
			class sprintErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_Char_Soundset"
				};
			};
			class sprintErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_Char_Soundset"
				};
			};
			class sprintErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_Char_Soundset"
				};
			};
			class sprintErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_Char_Soundset"
				};
			};
			class sprintErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_Char_Soundset"
				};
			};
			class sprintErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class sprintErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class sprintErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"sprintErc_dirt_ext_Char_Soundset"
				};
			};
			class sprintErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"sprintErc_asphalt_ext_Char_Soundset"
				};
			};
			class sprintErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_Char_Soundset"
				};
			};
			class sprintErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"sprintErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class landFootErc_Char_LookupTable
		{
			class landFootErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"landFootErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFootErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"landFootErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFootErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"landFootErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFootErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"landFootErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFootErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"landFootErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFootErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"landFootErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class landFootErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"landFootErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class landFootErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"landFootErc_dirt_ext_Char_Soundset"
				};
			};
			class landFootErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"landFootErc_asphalt_ext_Char_Soundset"
				};
			};
			class landFootErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"landFootErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFootErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"landFootErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class landFeetErc_Char_LookupTable
		{
			class landFeetErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class landFeetErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class landFeetErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"landFeetErc_dirt_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"landFeetErc_asphalt_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_Char_Soundset"
				};
			};
			class landFeetErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"landFeetErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class scuffErc_Char_LookupTable
		{
			class scuffErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_Char_Soundset"
				};
			};
			class scuffErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_Char_Soundset"
				};
			};
			class scuffErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_Char_Soundset"
				};
			};
			class scuffErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_Char_Soundset"
				};
			};
			class scuffErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_Char_Soundset"
				};
			};
			class scuffErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class scuffErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class scuffErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"scuffErc_dirt_ext_Char_Soundset"
				};
			};
			class scuffErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"scuffErc_asphalt_ext_Char_Soundset"
				};
			};
			class scuffErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_Char_Soundset"
				};
			};
			class scuffErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"scuffErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class walkCro_Char_LookupTable
		{
			class walkCro_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkCro_grass_dry_ext_Char_Soundset"
				};
			};
			class walkCro_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkCro_grass_dry_ext_Char_Soundset"
				};
			};
			class walkCro_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkCro_grass_dry_ext_Char_Soundset"
				};
			};
			class walkCro_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkCro_grass_dry_ext_Char_Soundset"
				};
			};
			class walkCro_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkCro_grass_dry_ext_Char_Soundset"
				};
			};
			class walkCro_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkCro_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkCro_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkCro_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkCro_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkCro_dirt_ext_Char_Soundset"
				};
			};
			class walkCro_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkCro_asphalt_ext_Char_Soundset"
				};
			};
			class walkCro_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkCro_grass_dry_ext_Char_Soundset"
				};
			};
			class walkCro_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkCro_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class runCro_Char_LookupTable
		{
			class runCro_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runCro_grass_dry_ext_Char_Soundset"
				};
			};
			class runCro_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runCro_grass_dry_ext_Char_Soundset"
				};
			};
			class runCro_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runCro_grass_dry_ext_Char_Soundset"
				};
			};
			class runCro_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runCro_grass_dry_ext_Char_Soundset"
				};
			};
			class runCro_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runCro_grass_dry_ext_Char_Soundset"
				};
			};
			class runCro_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runCro_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runCro_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runCro_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runCro_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runCro_dirt_ext_Char_Soundset"
				};
			};
			class runCro_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runCro_asphalt_ext_Char_Soundset"
				};
			};
			class runCro_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runCro_grass_dry_ext_Char_Soundset"
				};
			};
			class runCro_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runCro_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class jumpErc_Char_LookupTable
		{
			class jumpErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"jumpErc_grass_dry_ext_Char_Soundset"
				};
			};
			class jumpErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"jumpErc_grass_dry_ext_Char_Soundset"
				};
			};
			class jumpErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"jumpErc_grass_dry_ext_Char_Soundset"
				};
			};
			class jumpErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"jumpErc_grass_dry_ext_Char_Soundset"
				};
			};
			class jumpErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"jumpErc_grass_dry_ext_Char_Soundset"
				};
			};
			class jumpErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"jumpErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class jumpErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"jumpErc_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class jumpErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"jumpErc_dirt_ext_Char_Soundset"
				};
			};
			class jumpErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"jumpErc_asphalt_ext_Char_Soundset"
				};
			};
			class jumpErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"jumpErc_grass_dry_ext_Char_Soundset"
				};
			};
			class jumpErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"jumpErc_gravel_small_ext_Char_Soundset"
				};
			};
		};
		class walkProne_Char_LookupTable
		{
			class walkProne_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkProne_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProne_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkProne_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProne_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkProne_dirt_ext_Char_Soundset"
				};
			};
			class walkProne_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkProne_asphalt_ext_Char_Soundset"
				};
			};
			class walkProne_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkProne_gravelSmall_ext_Char_Soundset"
				};
			};
		};
		class runProne_Char_LookupTable
		{
			class runProne_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Char_Soundset"
				};
			};
			class runProne_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Char_Soundset"
				};
			};
			class runProne_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Char_Soundset"
				};
			};
			class runProne_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Char_Soundset"
				};
			};
			class runProne_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Char_Soundset"
				};
			};
			class runProne_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runProne_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runProne_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runProne_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runProne_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runProne_dirt_ext_Char_Soundset"
				};
			};
			class runProne_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runProne_asphalt_ext_Char_Soundset"
				};
			};
			class runProne_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Char_Soundset"
				};
			};
			class runProne_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runProne_gravelSmall_ext_Char_Soundset"
				};
			};
		};
		class walkProneElbow_Char_LookupTable
		{
			class walkProneElbow_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkProneElbow_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProneElbow_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkProneElbow_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProneElbow_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkProneElbow_dirt_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkProneElbow_asphalt_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneElbow_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkProneElbow_gravelSmall_ext_Char_Soundset"
				};
			};
		};
		class runProneElbow_Char_LookupTable
		{
			class runProneElbow_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runProneElbow_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runProneElbow_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runProneElbow_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class runProneElbow_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runProneElbow_dirt_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runProneElbow_asphalt_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runProneElbow_grass_dry_ext_Char_Soundset"
				};
			};
			class runProneElbow_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runProneElbow_gravelSmall_ext_Char_Soundset"
				};
			};
		};
		class walkProne_noHS_Char_LookupTable
		{
			class walkProne_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkProne_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkProne_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkProne_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkProne_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkProne_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkProne_noHS_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProne_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkProne_noHS_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProne_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkProne_noHS_dirt_ext_Char_Soundset"
				};
			};
			class walkProne_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkProne_noHS_asphalt_ext_Char_Soundset"
				};
			};
			class walkProne_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkProne_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProne_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkProne_noHS_gravelSmall_ext_Char_Soundset"
				};
			};
		};
		class walkProneLong_noHS_Char_LookupTable
		{
			class walkProneLong_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkProneLong_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkProneLong_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkProneLong_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkProneLong_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkProneLong_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkProneLong_noHS_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProneLong_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkProneLong_noHS_cp_broadleaf_dense1_Char_Soundset"
				};
			};
			class walkProneLong_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkProneLong_noHS_dirt_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkProneLong_noHS_asphalt_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkProneLong_noHS_grass_dry_ext_Char_Soundset"
				};
			};
			class walkProneLong_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkProneLong_noHS_gravelSmall_ext_Char_Soundset"
				};
			};
		};
		class handstepSound_Char_LookupTable
		{
			class handstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"Handstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"Handstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"Handstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"Handstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"Handstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"Handstep_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class handstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"Handstep_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class handstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"Handstep_dirt_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"Handstep_asphalt_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"Handstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"Handstep_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class handstepSound_Hard_Char_LookupTable
		{
			class handstepSound_Hard_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"Handstep_Hard_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"Handstep_Hard_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"Handstep_Hard_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"Handstep_Hard_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"Handstep_Hard_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"Handstep_Hard_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"Handstep_Hard_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"Handstep_Hard_dirt_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"Handstep_Hard_asphalt_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"Handstep_Hard_grass_dry_ext_Char_SoundSet"
				};
			};
			class handstepSound_Hard_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"Handstep_Hard_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class handsstepSound_Char_LookupTable
		{
			class handsstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"Handsstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"Handsstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"Handsstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"Handsstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"Handsstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"Handsstep_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class handsstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"Handsstep_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class handsstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"Handsstep_dirt_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"Handsstep_asphalt_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"Handsstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class handsstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"Handsstep_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class elbowstepSound_Char_LookupTable
		{
			class elbowstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"Elbowstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"Elbowstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"Elbowstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"Elbowstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"Elbowstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"Elbowstep_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class elbowstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"Elbowstep_cp_broadleaf_dense1_Char_SoundSet"
				};
			};
			class elbowstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"Elbowstep_dirt_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"Elbowstep_asphalt_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"Elbowstep_grass_dry_ext_Char_SoundSet"
				};
			};
			class elbowstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"Elbowstep_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfallSound_Char_LookupTable
		{
			class bodyfallSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_grass_Char_SoundSet"
				};
			};
			class bodyfallSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_grass_Char_SoundSet"
				};
			};
			class bodyfallSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_grass_Char_SoundSet"
				};
			};
			class bodyfallSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_grass_Char_SoundSet"
				};
			};
			class bodyfallSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_grass_Char_SoundSet"
				};
			};
			class bodyfallSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfallSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfallSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfallSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfallSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_grass_Char_SoundSet"
				};
			};
			class bodyfallSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfall_handSound_Char_LookupTable
		{
			class bodyfall_handSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_hand_grass_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_hand_grass_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_hand_grass_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_hand_grass_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_hand_grass_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_hand_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_hand_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_hand_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_hand_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_hand_grass_Char_SoundSet"
				};
			};
			class bodyfall_handSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_hand_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfall_rollSound_Char_LookupTable
		{
			class bodyfall_rollSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_roll_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_roll_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_roll_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_roll_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_roll_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_roll_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_roll_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_roll_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_roll_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_roll_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_roll_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfall_rollHardSound_Char_LookupTable
		{
			class bodyfall_rollHardSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_rollHard_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_rollHard_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_rollHard_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_rollHard_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_rollHard_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_rollHard_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_rollHard_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_rollHard_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_rollHard_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_rollHard_grass_Char_SoundSet"
				};
			};
			class bodyfall_rollHardSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_rollHard_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfall_slideSound_Char_LookupTable
		{
			class bodyfall_slideSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_slide_grass_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_slide_grass_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_slide_grass_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_slide_grass_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_slide_grass_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_slide_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_slide_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_slide_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_slide_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_slide_grass_Char_SoundSet"
				};
			};
			class bodyfall_slideSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_slide_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfall_slide_lightSound_Char_LookupTable
		{
			class bodyfall_slide_lightSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_slide_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_slide_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_slide_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_slide_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_slide_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_slide_light_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_slide_light_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_slide_light_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_slide_light_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_slide_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_slide_lightSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_slide_light_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class bodyfall_hand_lightSound_Char_LookupTable
		{
			class bodyfall_hand_lightSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_hand_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_hand_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_hand_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_hand_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_hand_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_hand_light_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_hand_light_forestBroadleaf_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_hand_light_dirt_ext_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_hand_light_asphalt_ext_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_hand_light_grass_Char_SoundSet"
				};
			};
			class bodyfall_hand_lightSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_hand_light_gravelSmall_ext_Char_SoundSet"
				};
			};
		};
		class step_ladder_Char_LookupTable
		{
			class handstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
			class handstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"step_ladder_Char_Soundset"
				};
			};
		};
		class step_ladder_run_Char_LookupTable
		{
			class handstepSound_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
			class handstepSound_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"step_ladder_run_Char_Soundset"
				};
			};
		};
		class drop_item_LookupTable
		{
			class en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"grass_dry_ext_drop_Soundset"
				};
			};
			class en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"grass_dry_ext_drop_Soundset"
				};
			};
			class en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"grass_dry_ext_drop_Soundset"
				};
			};
			class en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"grass_dry_ext_drop_Soundset"
				};
			};
			class en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"grass_dry_ext_drop_Soundset"
				};
			};
			class en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"cp_broadleaf_dense1_drop_Soundset"
				};
			};
			class en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"cp_broadleaf_dense1_drop_Soundset"
				};
			};
			class en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"dirt_ext_drop_Soundset"
				};
			};
			class en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"asphalt_ext_drop_Soundset"
				};
			};
			class en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"grass_dry_ext_drop_Soundset"
				};
			};
			class en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"gravel_small_ext_drop_Soundset"
				};
			};
		};
		class walkErc_Bare_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class runErc_Bare_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class sprintErc_Bare_Zmb_LookupTable
		{
			class sprintErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"sprintErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"sprintErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class sprintErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"sprintErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class landFeetErc_Bare_Zmb_LookupTable
		{
			class landFeetErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"landFeetErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"landFeetErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class landFeetErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"landFeetErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class scuffErc_Bare_Zmb_LookupTable
		{
			class scuffErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"scuffErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"scuffErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class scuffErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"scuffErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class walkRasErc_Bare_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class runRasErc_Bare_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class landFootErc_Bare_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class walkCro_Bare_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class runCro_Bare_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class jumpErc_Bare_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_bare_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_bare_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_bare_Zmb_Soundset"
				};
			};
		};
		class walkErc_Boots_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class runErc_Boots_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class sprintErc_Boots_Zmb_LookupTable
		{
			class sprintErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"sprintErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"sprintErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class sprintErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"sprintErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class landFeetErc_Boots_Zmb_LookupTable
		{
			class landFeetErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"landFeetErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"landFeetErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class landFeetErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"landFeetErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class scuffErc_Boots_Zmb_LookupTable
		{
			class scuffErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"scuffErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"scuffErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class scuffErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"scuffErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class walkRasErc_Boots_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class runRasErc_Boots_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class landFootErc_Boots_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class walkCro_Boots_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class runCro_Boots_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class jumpErc_Boots_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_boots_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_boots_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_boots_Zmb_Soundset"
				};
			};
		};
		class walkErc_Sneakers_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class runErc_Sneakers_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class sprintErc_Sneakers_Zmb_LookupTable
		{
			class sprintErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"sprintErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"sprintErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"sprintErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"sprintErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class sprintErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"sprintErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class landFeetErc_Sneakers_Zmb_LookupTable
		{
			class landFeetErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"landFeetErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"landFeetErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"landFeetErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"landFeetErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class landFeetErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"landFeetErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class scuffErc_Sneakers_Zmb_LookupTable
		{
			class scuffErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"scuffErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"scuffErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"scuffErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"scuffErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class scuffErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"scuffErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class walkRasErc_Sneakers_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class runRasErc_Sneakers_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class landFootErc_Sneakers_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class walkCro_Sneakers_Zmb_LookupTable
		{
			class walkErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class walkErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class runCro_Sneakers_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class jumpErc_Sneakers_Zmb_LookupTable
		{
			class runErc_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runErc_cp_broadleaf_dense1_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runErc_dirt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runErc_asphalt_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runErc_grass_dry_ext_sneakers_Zmb_Soundset"
				};
			};
			class runErc_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runErc_gravel_small_ext_sneakers_Zmb_Soundset"
				};
			};
		};
		class walkProne_Zmb_LookupTable
		{
			class walkProne_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"walkProne_cp_broadleaf_dense1_Zmb_Soundset"
				};
			};
			class walkProne_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"walkProne_cp_broadleaf_dense1_Zmb_Soundset"
				};
			};
			class walkProne_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"walkProne_dirt_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"walkProne_asphalt_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"walkProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class walkProne_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"walkProne_gravelSmall_ext_Zmb_Soundset"
				};
			};
		};
		class runProne_Zmb_LookupTable
		{
			class runProne_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class runProne_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class runProne_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class runProne_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class runProne_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class runProne_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"runProne_cp_broadleaf_dense1_Zmb_Soundset"
				};
			};
			class runProne_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"runProne_cp_broadleaf_dense1_Zmb_Soundset"
				};
			};
			class runProne_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"runProne_dirt_ext_Zmb_Soundset"
				};
			};
			class runProne_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"runProne_asphalt_ext_Zmb_Soundset"
				};
			};
			class runProne_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"runProne_grass_dry_ext_Zmb_Soundset"
				};
			};
			class runProne_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"runProne_gravelSmall_ext_Zmb_Soundset"
				};
			};
		};
		class bodyfall_Zmb_LookupTable
		{
			class bodyfall_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_forestBroadleaf_Zmb_SoundSet"
				};
			};
			class bodyfall_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_forestBroadleaf_Zmb_SoundSet"
				};
			};
			class bodyfall_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_dirt_ext_Zmb_SoundSet"
				};
			};
			class bodyfall_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_asphalt_ext_Zmb_SoundSet"
				};
			};
			class bodyfall_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_gravelSmall_ext_Zmb_SoundSet"
				};
			};
		};
		class bodyfall_hand_Zmb_LookupTable
		{
			class bodyfall_hand_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_hand_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_hand_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_hand_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_hand_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_hand_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_hand_forestBroadleaf_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_hand_forestBroadleaf_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_hand_dirt_ext_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_hand_asphalt_ext_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_hand_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_hand_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_hand_gravelSmall_ext_Zmb_SoundSet"
				};
			};
		};
		class bodyfall_slide_Zmb_LookupTable
		{
			class bodyfall_slide_en_grass1
			{
				surface="en_grass1";
				soundSets[]=
				{
					"bodyfall_slide_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_grass2
			{
				surface="en_grass2";
				soundSets[]=
				{
					"bodyfall_slide_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_flowers1
			{
				surface="en_flowers1";
				soundSets[]=
				{
					"bodyfall_slide_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_flowers2
			{
				surface="en_flowers2";
				soundSets[]=
				{
					"bodyfall_slide_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_flowers3
			{
				surface="en_flowers3";
				soundSets[]=
				{
					"bodyfall_slide_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_forestcon
			{
				surface="en_forestcon";
				soundSets[]=
				{
					"bodyfall_slide_forestBroadleaf_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_forestdec
			{
				surface="en_forestdec";
				soundSets[]=
				{
					"bodyfall_slide_forestBroadleaf_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_soil
			{
				surface="en_soil";
				soundSets[]=
				{
					"bodyfall_slide_dirt_ext_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_tarmacold
			{
				surface="en_tarmacold";
				soundSets[]=
				{
					"bodyfall_slide_asphalt_ext_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_stubble
			{
				surface="en_stubble";
				soundSets[]=
				{
					"bodyfall_slide_grass_Zmb_SoundSet"
				};
			};
			class bodyfall_slide_en_stones
			{
				surface="en_stones";
				soundSets[]=
				{
					"bodyfall_slide_gravelSmall_ext_Zmb_SoundSet"
				};
			};
		};
	};
	class CfgImpactSoundTables
	{
	};
};
class CfgSoundCurves
{
	class birds10VolumeCurve
	{
		points[]=
		{
			{0,1},
			{0.1,1},
			{0.2,0.44400001},
			{0.30000001,0.25},
			{0.40000001,0.16},
			{0.5,0.111},
			{0.60000002,0.081},
			{0.69999999,0.059999999},
			{0.80000001,0.045000002},
			{0.89999998,0.035},
			{1,0}
		};
	};
	class birds8VolumeCurve
	{
		points[]=
		{
			{0,0.49200001},
			{0.1,0.49200001},
			{0.2,0.278},
			{0.30000001,0.18700001},
			{0.40000001,0.13699999},
			{0.5,0.107},
			{0.60000002,0.086999997},
			{0.69999999,0.072999999},
			{0.80000001,0.061999999},
			{0.89999998,0.054000001},
			{1,0}
		};
	};
	class birds6VolumeCurve
	{
		points[]=
		{
			{0,0.30899999},
			{0.1,0.30899999},
			{0.2,0.208},
			{0.30000001,0.154},
			{0.40000001,0.12},
			{0.5,0.097000003},
			{0.60000002,0.081},
			{0.69999999,0.068999998},
			{0.80000001,0.059999999},
			{0.89999998,0.052999999},
			{1,0}
		};
	};
	class birds4VolumeCurve
	{
		points[]=
		{
			{0,0.219},
			{0.1,0.219},
			{0.2,0.164},
			{0.30000001,0.13},
			{0.40000001,0.106},
			{0.5,0.089000002},
			{0.60000002,0.075999998},
			{0.69999999,0.067000002},
			{0.80000001,0.059},
			{0.89999998,0.052000001},
			{1,0}
		};
	};
	class birdsMediumVolumeCurve
	{
		points[]=
		{
			{0,0.44400001},
			{0.1,0.44400001},
			{0.2,0.44400001},
			{0.30000001,0.25},
			{0.40000001,0.16},
			{0.5,0.111},
			{0.60000002,0.081},
			{0.69999999,0.059999999},
			{0.80000001,0.045000002},
			{0.89999998,0.035},
			{1,0}
		};
	};
};
class CfgTasks
{
	class AnimalMainTask
	{
		name="Animal Main Task";
		fsm="\dz\animals\Data\scripts\main.fsm";
		condition="\dz\animals\Data\scripts\createSingleTask.sqf";
		description="Animal master task";
		destination="";
		resources[]={};
	};
};
class CfgFSMs
{
	class Dragonfly
	{
		class States
		{
			class Random_Move
			{
				name="Random_Move";
				class Init
				{
					function="randomMove";
					parameters[]={1,-0.1,1.2,5};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom3";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom2";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongerWait
			{
				name="LongerWait";
				class Init
				{
					function="wait";
					parameters[]={0.80000001,2};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Init
			{
				name="Init";
				class Init
				{
					function="setNoBackwards";
					parameters[]={1};
					thresholds[]=
					{
						{0,0.5,0.5}
					};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name="SetTimerRandom";
				class Init
				{
					function="setTimer";
					parameters[]={0.5,2};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetRandom";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class ShortWait
			{
				name="ShortWait";
				class Init
				{
					function="wait";
					parameters[]={0.60000002,1.5};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom2
			{
				name="SetRandom2";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongWait";
						class Condition
						{
							function="const";
							parameters[]={0.1};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="LongerWait";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom3
			{
				name="SetRandom3";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongWait";
						class Condition
						{
							function="const";
							parameters[]={0.15000001};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="ShortWait";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongWait
			{
				name="LongWait";
				class Init
				{
					function="wait";
					parameters[]={4,8};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom
			{
				name="SetRandom";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongMove";
						class Condition
						{
							function="const";
							parameters[]={0.1};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="Random_Move";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongMove
			{
				name="LongMove";
				class Init
				{
					function="randomMove";
					parameters[]={2.5,-0.1,1.2,5};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom3";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom2";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
		};
		initState="Init";
		finalStates[]={};
	};
	class Butterfly
	{
		class States
		{
			class Init
			{
				name="Init";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{0,0.5,0.5}
					};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimer";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class MoveLand
			{
				name="MoveLand";
				class Init
				{
					function="randomMoveLand";
					parameters[]={2};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetTimer3";
						class Condition
						{
							function="moveCompletedVertical";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="wait";
							parameters[]={5,15};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="Land";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer3
			{
				name="SetTimer3";
				class Init
				{
					function="setTimer";
					parameters[]={4,6};
					thresholds[]={};
				};
				class Links
				{
					class TimeElapsed
					{
						priority=0;
						to="checkWait";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="switchAction";
							parameters[]={1};
							thresholds[]={};
						};
					};
				};
			};
			class checkWait
			{
				name="checkWait";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=1;
						to="SetTimer";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="switchAction";
							parameters[]={0};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="SetTimer3";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer
			{
				name="SetTimer";
				class Init
				{
					function="setTimer";
					parameters[]={10,25};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="Move";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Land
			{
				name="Land";
				class Init
				{
					function="Land";
					parameters[]={};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="Wait";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Wait
			{
				name="Wait";
				class Init
				{
					function="wait";
					parameters[]={3,10};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimer3";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Move
			{
				name="Move";
				class Init
				{
					function="randomMove";
					parameters[]={3};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="Continue";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetTimer2";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer2
			{
				name="SetTimer2";
				class Init
				{
					function="setTimer";
					parameters[]={3,6};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="MoveLand";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Continue
			{
				name="Continue";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="Move";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
		};
		initState="Init";
		finalStates[]={};
	};
	class HoneyBee
	{
		class States
		{
			class ShortMove
			{
				name="ShortMove";
				class Init
				{
					function="randomMove";
					parameters[]={0.2};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Break
			{
				name="Break";
				class Init
				{
					function="break";
					parameters[]={50};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimer";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Init
			{
				name="Init";
				class Init
				{
					function="setNoBackwards";
					parameters[]={0};
					thresholds[]=
					{
						{0,0.5,0.5}
					};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name="SetTimerRandom";
				class Init
				{
					function="setTimer";
					parameters[]={0.5,2};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetRandom_1";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer
			{
				name="SetTimer";
				class Init
				{
					function="setTimer";
					parameters[]={0.1,0.30000001};
					thresholds[]={};
				};
				class Links
				{
					class TimeElapsed
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom
			{
				name="SetRandom";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="SetRandom_1";
						class Condition
						{
							function="const";
							parameters[]={0.5};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="Break";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom_1
			{
				name="SetRandom_1";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongMove";
						class Condition
						{
							function="const";
							parameters[]={0.1};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="ShortMove";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongMove
			{
				name="LongMove";
				class Init
				{
					function="randomMove";
					parameters[]={1.5};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
		};
		initState="Init";
		finalStates[]={};
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
	class Animal_UrsusArctos;
	class Animal_CanisLupus;
	class Animal_CapraHircus;
	class DZ_LightAI;
	class Clothing: Clothing_Base
	{
	};
	class AnimalBase: DZ_LightAI
		{
		scope=0;
		vehicleClass="Animals";
		simulation="animal";
		storageCategory=2;
		icon="\dz\animals\data\mapicon_animals_ca.paa";
		displayName="$STR_DN_ANIMAL";
		nameSound="veh_animal";
		accuracy=0.25;
		faceType="Default";
		memoryPointHeadAxis="head_axis";
		memoryPointAim="aimPoint";
		memoryPointCameraTarget="camera";
		agentTasks[]=
		{
			"AnimalMainTask"
		};
		attackSounds="";
		spottedSounds="";
		chaseSounds="";
		idleSounds="";
		class VariablesScalar
		{
			_threatMaxRadius=50;
			_runDistanceMax=100;
			_movePrefer=0.69999999;
			_formationPrefer=0.1;
			_scareLimit=0.2;
			_dangerLimit=1;
		};
		class VariablesString
		{
			_expSafe="(0.5 * meadow) * (0.5 * trees) * (1 - forest) * (1 - houses) * (1 - sea)";
			_expDanger="(trees) * (forest) * (1 - meadow)";
		};
		htMin=60;
		htMax=1800;
		afMax=30;
		mfMax=0;
		mFact=1;
		tBody=37;
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
class CfgWorlds
{
	class CAWorld;
	class Enoch: CAWorld
	{
		class EnvSounds
		{
			soundSetEnvironment[]=
			{
				"ForestDay_Bliss_SoundSet",
				"ForestMorning_Bliss_SoundSet",
				"ForestNoon_Bliss_SoundSet",
				"ForestAfternoon_Bliss_SoundSet",
				"ForestNight_Bliss_SoundSet",
				"ForestEarlyNight_Bliss_SoundSet",
				"ForestLateNight_Bliss_SoundSet",
				"MeadowsDay_Bliss_SoundSet",
				"MeadowsMorning_Bliss_SoundSet",
				"MeadowsNoon_Bliss_SoundSet",
				"MeadowsAfterNoon_Bliss_SoundSet",
				"MeadowsLateNight_Bliss_SoundSet",
				"WindForestLight_Bliss_SoundSet",
				"WindForestHeavy_Bliss_SoundSet",
				"WindMeadowsLight_Bliss_SoundSet",
				"WindMeadowsHeavy_Bliss_SoundSet",
				"RainForestLight_Bliss_SoundSet",
				"RainForestMedium_Bliss_SoundSet",
				"RainForestHeavy_Bliss_SoundSet",
				"RainHousesLight_Bliss_SoundSet",
				"RainHousesMedium_Bliss_SoundSet",
				"RainHousesHeavy_Bliss_SoundSet"
			};
			class CfgEnvSpatialSounds
			{
				class sound_rain_metalTin_tiny_1
				{
					memPoint="sound_rain_metalTin_tiny_1";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_2
				{
					memPoint="sound_rain_metalTin_tiny_2";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_3
				{
					memPoint="sound_rain_metalTin_tiny_3";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_4
				{
					memPoint="sound_rain_metalTin_tiny_4";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_5
				{
					memPoint="sound_rain_metalTin_tiny_5";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_6
				{
					memPoint="sound_rain_metalTin_tiny_6";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_7
				{
					memPoint="sound_rain_metalTin_tiny_7";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_8
				{
					memPoint="sound_rain_metalTin_tiny_8";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_9
				{
					memPoint="sound_rain_metalTin_tiny_9";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_10
				{
					memPoint="sound_rain_metalTin_tiny_10";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_11
				{
					memPoint="sound_rain_metalTin_tiny_11";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_12
				{
					memPoint="sound_rain_metalTin_tiny_12";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_13
				{
					memPoint="sound_rain_metalTin_tiny_13";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_14
				{
					memPoint="sound_rain_metalTin_tiny_14";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_15
				{
					memPoint="sound_rain_metalTin_tiny_15";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_16
				{
					memPoint="sound_rain_metalTin_tiny_16";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_17
				{
					memPoint="sound_rain_metalTin_tiny_17";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_18
				{
					memPoint="sound_rain_metalTin_tiny_18";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_19
				{
					memPoint="sound_rain_metalTin_tiny_19";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_20
				{
					memPoint="sound_rain_metalTin_tiny_20";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_21
				{
					memPoint="sound_rain_metalTin_tiny_21";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_22
				{
					memPoint="sound_rain_metalTin_tiny_22";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_tiny_23
				{
					memPoint="sound_rain_metalTin_tiny_23";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_rain_metalTin_small_narrow_1
				{
					memPoint="sound_rain_metalTin_small_narrow_1";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_rain_metalTin_small_1
				{
					memPoint="sound_rain_metalTin_small_1";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_metalTin_small_2
				{
					memPoint="sound_rain_metalTin_small_2";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_1
				{
					memPoint="sound_rain_metalTin_medium_1";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_2
				{
					memPoint="sound_rain_metalTin_medium_2";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_rain_metalTin_medium_3
				{
					memPoint="sound_rain_metalTin_medium_3";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_rain_tiles_tiny_1
				{
					memPoint="sound_rain_tiles_tiny_1";
					soundSets[]=
					{
						"RainObjectInner0MetalSpot_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_rain_tiles_tiny_2
				{
					memPoint="sound_rain_tiles_tiny_2";
					soundSets[]=
					{
						"RainObjectInner0MetalSpot_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_1
				{
					memPoint="sound_rain_tiles_small_1";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_2
				{
					memPoint="sound_rain_tiles_small_2";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_3
				{
					memPoint="sound_rain_tiles_small_3";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_4
				{
					memPoint="sound_rain_tiles_small_4";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_5
				{
					memPoint="sound_rain_tiles_small_5";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_6
				{
					memPoint="sound_rain_tiles_small_6";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_7
				{
					memPoint="sound_rain_tiles_small_7";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_8
				{
					memPoint="sound_rain_tiles_small_8";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_9
				{
					memPoint="sound_rain_tiles_small_9";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_small_10
				{
					memPoint="sound_rain_tiles_small_10";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_tiles_medium_1
				{
					memPoint="sound_rain_tiles_medium_1";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_rain_tiles_medium_2
				{
					memPoint="sound_rain_tiles_medium_2";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_rain_tiles_medium_3
				{
					memPoint="sound_rain_tiles_medium_3";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_rain_tiles_medium_4
				{
					memPoint="sound_rain_tiles_medium_4";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_rain_tiles_medium_5
				{
					memPoint="sound_rain_tiles_medium_5";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_rain_tiles_medium_6
				{
					memPoint="sound_rain_tiles_medium_6";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Metal4_1
				{
					memPoint="sound_RainObjectInner3Metal4_1";
					soundSets[]=
					{
						"RainObjectInner3Metal4_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal4_1
				{
					memPoint="sound_RainObjectInner5Metal4_1";
					soundSets[]=
					{
						"RainObjectInner5Metal4_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_rain_concrete_tiny_01
				{
					memPoint="sound_rain_concrete_tiny_01";
					soundSets[]=
					{
						"RainObjectInner0Concrete_Medium_SoundSet"
					};
				};
				class sound_rain_concrete_small_01
				{
					memPoint="sound_rain_concrete_small_01";
					soundSets[]=
					{
						"RainObjectInner2Concrete_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_concrete_small_02
				{
					memPoint="sound_rain_concrete_small_02";
					soundSets[]=
					{
						"RainObjectInner2Concrete_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_concrete_small_03
				{
					memPoint="sound_rain_concrete_small_03";
					soundSets[]=
					{
						"RainObjectInner2Concrete_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_concrete_small_04
				{
					memPoint="sound_rain_concrete_small_04";
					soundSets[]=
					{
						"RainObjectInner2Concrete_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_rain_concrete_small_05
				{
					memPoint="sound_rain_concrete_small_05";
					soundSets[]=
					{
						"RainObjectInner2Concrete_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_stairs_1
				{
					memPoint="sound_metal_stairs_1";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_stairs_2
				{
					memPoint="sound_metal_stairs_2";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_stairs_3
				{
					memPoint="sound_metal_stairs_3";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_stairs_4
				{
					memPoint="sound_metal_stairs_4";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_stairs_5
				{
					memPoint="sound_metal_stairs_5";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_stairs_6
				{
					memPoint="sound_metal_stairs_6";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_metal_tension_1
				{
					memPoint="sound_metal_tension_1";
					soundSets[]=
					{
						"WindObjectInner7MetalCreak_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_net_fence_1
				{
					memPoint="sound_net_fence_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalFence_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_1
				{
					memPoint="sound_RainObjectInner0Metal1_1";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_2
				{
					memPoint="sound_RainObjectInner0Metal1_2";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_3
				{
					memPoint="sound_RainObjectInner0Metal1_3";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_4
				{
					memPoint="sound_RainObjectInner0Metal1_4";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_5
				{
					memPoint="sound_RainObjectInner0Metal1_5";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_6
				{
					memPoint="sound_RainObjectInner0Metal1_6";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_7
				{
					memPoint="sound_RainObjectInner0Metal1_7";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_8
				{
					memPoint="sound_RainObjectInner0Metal1_8";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_9
				{
					memPoint="sound_RainObjectInner0Metal1_9";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal1_10
				{
					memPoint="sound_RainObjectInner0Metal1_10";
					soundSets[]=
					{
						"RainObjectInner0Metal1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_1
				{
					memPoint="sound_RainObjectInner0SpotMetal1_1";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_2
				{
					memPoint="sound_RainObjectInner0SpotMetal1_2";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_3
				{
					memPoint="sound_RainObjectInner0SpotMetal1_3";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_4
				{
					memPoint="sound_RainObjectInner0SpotMetal1_4";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_5
				{
					memPoint="sound_RainObjectInner0SpotMetal1_5";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_6
				{
					memPoint="sound_RainObjectInner0SpotMetal1_6";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_7
				{
					memPoint="sound_RainObjectInner0SpotMetal1_7";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal1_8
				{
					memPoint="sound_RainObjectInner0SpotMetal1_8";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_1
				{
					memPoint="sound_RainObjectInner1Metal1_1";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_2
				{
					memPoint="sound_RainObjectInner1Metal1_2";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_3
				{
					memPoint="sound_RainObjectInner1Metal1_3";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_4
				{
					memPoint="sound_RainObjectInner1Metal1_4";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_5
				{
					memPoint="sound_RainObjectInner1Metal1_5";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_6
				{
					memPoint="sound_RainObjectInner1Metal1_6";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_7
				{
					memPoint="sound_RainObjectInner1Metal1_7";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal1_8
				{
					memPoint="sound_RainObjectInner1Metal1_8";
					soundSets[]=
					{
						"RainObjectInner1Metal1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1SpotMetal1_1
				{
					memPoint="sound_RainObjectInner1SpotMetal1_1";
					soundSets[]=
					{
						"RainObjectInner1SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1SpotMetal1_2
				{
					memPoint="sound_RainObjectInner1SpotMetal1_2";
					soundSets[]=
					{
						"RainObjectInner1SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_1
				{
					memPoint="sound_RainObjectInner2Metal1_1";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_2
				{
					memPoint="sound_RainObjectInner2Metal1_2";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_3
				{
					memPoint="sound_RainObjectInner2Metal1_3";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_4
				{
					memPoint="sound_RainObjectInner2Metal1_4";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_5
				{
					memPoint="sound_RainObjectInner2Metal1_5";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_6
				{
					memPoint="sound_RainObjectInner2Metal1_6";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_7
				{
					memPoint="sound_RainObjectInner2Metal1_7";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_8
				{
					memPoint="sound_RainObjectInner2Metal1_8";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_9
				{
					memPoint="sound_RainObjectInner2Metal1_9";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal1_10
				{
					memPoint="sound_RainObjectInner2Metal1_10";
					soundSets[]=
					{
						"RainObjectInner2Metal1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_1
				{
					memPoint="sound_RainObjectInner25Metal1_1";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_2
				{
					memPoint="sound_RainObjectInner25Metal1_2";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_3
				{
					memPoint="sound_RainObjectInner25Metal1_3";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_4
				{
					memPoint="sound_RainObjectInner25Metal1_4";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_5
				{
					memPoint="sound_RainObjectInner25Metal1_5";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_6
				{
					memPoint="sound_RainObjectInner25Metal1_6";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_7
				{
					memPoint="sound_RainObjectInner25Metal1_7";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_8
				{
					memPoint="sound_RainObjectInner25Metal1_8";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_9
				{
					memPoint="sound_RainObjectInner25Metal1_9";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_10
				{
					memPoint="sound_RainObjectInner25Metal1_10";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_11
				{
					memPoint="sound_RainObjectInner25Metal1_11";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Metal1_12
				{
					memPoint="sound_RainObjectInner25Metal1_12";
					soundSets[]=
					{
						"RainObjectInner25Metal1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Metal1_1
				{
					memPoint="sound_RainObjectInner3Metal1_1";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_2
				{
					memPoint="sound_RainObjectInner3Metal1_2";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_3
				{
					memPoint="sound_RainObjectInner3Metal1_3";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_4
				{
					memPoint="sound_RainObjectInner3Metal1_4";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_5
				{
					memPoint="sound_RainObjectInner3Metal1_5";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_6
				{
					memPoint="sound_RainObjectInner3Metal1_6";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_7
				{
					memPoint="sound_RainObjectInner3Metal1_7";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_8
				{
					memPoint="sound_RainObjectInner3Metal1_8";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_9
				{
					memPoint="sound_RainObjectInner3Metal1_9";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_10
				{
					memPoint="sound_RainObjectInner3Metal1_10";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_11
				{
					memPoint="sound_RainObjectInner3Metal1_11";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal1_12
				{
					memPoint="sound_RainObjectInner3Metal1_12";
					soundSets[]=
					{
						"RainObjectInner3Metal1_Medium_SoundSet",
						"WindObjectInner3Metal1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_1
				{
					memPoint="sound_RainObjectInner4Metal1_1";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_2
				{
					memPoint="sound_RainObjectInner4Metal1_2";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_3
				{
					memPoint="sound_RainObjectInner4Metal1_3";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_4
				{
					memPoint="sound_RainObjectInner4Metal1_4";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_5
				{
					memPoint="sound_RainObjectInner4Metal1_5";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_6
				{
					memPoint="sound_RainObjectInner4Metal1_6";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_7
				{
					memPoint="sound_RainObjectInner4Metal1_7";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_8
				{
					memPoint="sound_RainObjectInner4Metal1_8";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_9
				{
					memPoint="sound_RainObjectInner4Metal1_9";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_10
				{
					memPoint="sound_RainObjectInner4Metal1_10";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_11
				{
					memPoint="sound_RainObjectInner4Metal1_11";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal1_12
				{
					memPoint="sound_RainObjectInner4Metal1_12";
					soundSets[]=
					{
						"RainObjectInner4Metal1_Medium_SoundSet",
						"WindObjectInner4Metal1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_1
				{
					memPoint="sound_RainObjectInner5Metal1_1";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_2
				{
					memPoint="sound_RainObjectInner5Metal1_2";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_3
				{
					memPoint="sound_RainObjectInner5Metal1_3";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_4
				{
					memPoint="sound_RainObjectInner5Metal1_4";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_5
				{
					memPoint="sound_RainObjectInner5Metal1_5";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_6
				{
					memPoint="sound_RainObjectInner5Metal1_6";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_7
				{
					memPoint="sound_RainObjectInner5Metal1_7";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_8
				{
					memPoint="sound_RainObjectInner5Metal1_8";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_9
				{
					memPoint="sound_RainObjectInner5Metal1_9";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_10
				{
					memPoint="sound_RainObjectInner5Metal1_10";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_11
				{
					memPoint="sound_RainObjectInner5Metal1_11";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal1_12
				{
					memPoint="sound_RainObjectInner5Metal1_12";
					soundSets[]=
					{
						"RainObjectInner5Metal1_Medium_SoundSet",
						"WindObjectInner5Metal1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_1
				{
					memPoint="sound_RainObjectInner7Metal1_1";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_2
				{
					memPoint="sound_RainObjectInner7Metal1_2";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_3
				{
					memPoint="sound_RainObjectInner7Metal1_3";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_4
				{
					memPoint="sound_RainObjectInner7Metal1_4";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_5
				{
					memPoint="sound_RainObjectInner7Metal1_5";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_6
				{
					memPoint="sound_RainObjectInner7Metal1_6";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_7
				{
					memPoint="sound_RainObjectInner7Metal1_7";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_8
				{
					memPoint="sound_RainObjectInner7Metal1_8";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_9
				{
					memPoint="sound_RainObjectInner7Metal1_9";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_10
				{
					memPoint="sound_RainObjectInner7Metal1_10";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_11
				{
					memPoint="sound_RainObjectInner7Metal1_11";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal1_12
				{
					memPoint="sound_RainObjectInner7Metal1_12";
					soundSets[]=
					{
						"RainObjectInner7Metal1_Medium_SoundSet",
						"WindObjectInner7Metal1_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner0Metal2_1
				{
					memPoint="sound_RainObjectInner0Metal2_1";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_2
				{
					memPoint="sound_RainObjectInner0Metal2_2";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_3
				{
					memPoint="sound_RainObjectInner0Metal2_3";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_4
				{
					memPoint="sound_RainObjectInner0Metal2_4";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_5
				{
					memPoint="sound_RainObjectInner0Metal2_5";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_6
				{
					memPoint="sound_RainObjectInner0Metal2_6";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_7
				{
					memPoint="sound_RainObjectInner0Metal2_7";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_8
				{
					memPoint="sound_RainObjectInner0Metal2_8";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_9
				{
					memPoint="sound_RainObjectInner0Metal2_9";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_10
				{
					memPoint="sound_RainObjectInner0Metal2_10";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_11
				{
					memPoint="sound_RainObjectInner0Metal2_11";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Metal2_12
				{
					memPoint="sound_RainObjectInner0Metal2_12";
					soundSets[]=
					{
						"RainObjectInner0Metal2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_1
				{
					memPoint="sound_RainObjectInner0SpotMetal2_1";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_2
				{
					memPoint="sound_RainObjectInner0SpotMetal2_2";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_3
				{
					memPoint="sound_RainObjectInner0SpotMetal2_3";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_4
				{
					memPoint="sound_RainObjectInner0SpotMetal2_4";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_5
				{
					memPoint="sound_RainObjectInner0SpotMetal2_5";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_6
				{
					memPoint="sound_RainObjectInner0SpotMetal2_6";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_7
				{
					memPoint="sound_RainObjectInner0SpotMetal2_7";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_8
				{
					memPoint="sound_RainObjectInner0SpotMetal2_8";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_9
				{
					memPoint="sound_RainObjectInner0SpotMetal2_9";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_10
				{
					memPoint="sound_RainObjectInner0SpotMetal2_10";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotMetal2_11
				{
					memPoint="sound_RainObjectInner0SpotMetal2_11";
					soundSets[]=
					{
						"RainObjectInner0SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1Metal2_1
				{
					memPoint="sound_RainObjectInner1Metal2_1";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_2
				{
					memPoint="sound_RainObjectInner1Metal2_2";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_3
				{
					memPoint="sound_RainObjectInner1Metal2_3";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_4
				{
					memPoint="sound_RainObjectInner1Metal2_4";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_5
				{
					memPoint="sound_RainObjectInner1Metal2_5";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_6
				{
					memPoint="sound_RainObjectInner1Metal2_6";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_7
				{
					memPoint="sound_RainObjectInner1Metal2_7";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_8
				{
					memPoint="sound_RainObjectInner1Metal2_8";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_9
				{
					memPoint="sound_RainObjectInner1Metal2_9";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_10
				{
					memPoint="sound_RainObjectInner1Metal2_10";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_11
				{
					memPoint="sound_RainObjectInner1Metal2_11";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_12
				{
					memPoint="sound_RainObjectInner1Metal2_12";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_13
				{
					memPoint="sound_RainObjectInner1Metal2_13";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_14
				{
					memPoint="sound_RainObjectInner1Metal2_14";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1Metal2_15
				{
					memPoint="sound_RainObjectInner1Metal2_15";
					soundSets[]=
					{
						"RainObjectInner1Metal2_Medium_SoundSet",
						"WindObjectInner1Metal2_Mid_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner1SpotMetal2_1
				{
					memPoint="sound_RainObjectInner1SpotMetal2_1";
					soundSets[]=
					{
						"RainObjectInner1SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1SpotMetal2_2
				{
					memPoint="sound_RainObjectInner1SpotMetal2_2";
					soundSets[]=
					{
						"RainObjectInner1SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1SpotMetal2_3
				{
					memPoint="sound_RainObjectInner1SpotMetal2_3";
					soundSets[]=
					{
						"RainObjectInner1SpotMetalSpot_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner2Metal2_1
				{
					memPoint="sound_RainObjectInner2Metal2_1";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_2
				{
					memPoint="sound_RainObjectInner2Metal2_2";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_3
				{
					memPoint="sound_RainObjectInner2Metal2_3";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_4
				{
					memPoint="sound_RainObjectInner2Metal2_4";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_5
				{
					memPoint="sound_RainObjectInner2Metal2_5";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_6
				{
					memPoint="sound_RainObjectInner2Metal2_6";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_7
				{
					memPoint="sound_RainObjectInner2Metal2_7";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_8
				{
					memPoint="sound_RainObjectInner2Metal2_8";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_9
				{
					memPoint="sound_RainObjectInner2Metal2_9";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_10
				{
					memPoint="sound_RainObjectInner2Metal2_10";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_11
				{
					memPoint="sound_RainObjectInner2Metal2_11";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Metal2_12
				{
					memPoint="sound_RainObjectInner2Metal2_12";
					soundSets[]=
					{
						"RainObjectInner2Metal2_Medium_SoundSet",
						"WindObjectInner2Metal2_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_1
				{
					memPoint="sound_RainObjectInner25Metal2_1";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_2
				{
					memPoint="sound_RainObjectInner25Metal2_2";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_3
				{
					memPoint="sound_RainObjectInner25Metal2_3";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_4
				{
					memPoint="sound_RainObjectInner25Metal2_4";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_5
				{
					memPoint="sound_RainObjectInner25Metal2_5";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_6
				{
					memPoint="sound_RainObjectInner25Metal2_6";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_7
				{
					memPoint="sound_RainObjectInner25Metal2_7";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_8
				{
					memPoint="sound_RainObjectInner25Metal2_8";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_9
				{
					memPoint="sound_RainObjectInner25Metal2_9";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_10
				{
					memPoint="sound_RainObjectInner25Metal2_10";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_11
				{
					memPoint="sound_RainObjectInner25Metal2_11";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Metal2_12
				{
					memPoint="sound_RainObjectInner25Metal2_12";
					soundSets[]=
					{
						"RainObjectInner25Metal2_Medium_SoundSet",
						"WindObjectInner25Metal2_Mid_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_1
				{
					memPoint="sound_RainObjectInner3Metal2_1";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_2
				{
					memPoint="sound_RainObjectInner3Metal2_2";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_3
				{
					memPoint="sound_RainObjectInner3Metal2_3";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_4
				{
					memPoint="sound_RainObjectInner3Metal2_4";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_5
				{
					memPoint="sound_RainObjectInner3Metal2_5";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_6
				{
					memPoint="sound_RainObjectInner3Metal2_6";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_7
				{
					memPoint="sound_RainObjectInner3Metal2_7";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_8
				{
					memPoint="sound_RainObjectInner3Metal2_8";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_9
				{
					memPoint="sound_RainObjectInner3Metal2_9";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_10
				{
					memPoint="sound_RainObjectInner3Metal2_10";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_11
				{
					memPoint="sound_RainObjectInner3Metal2_11";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal2_12
				{
					memPoint="sound_RainObjectInner3Metal2_12";
					soundSets[]=
					{
						"RainObjectInner3Metal2_Medium_SoundSet",
						"WindObjectInner3Metal2_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_1
				{
					memPoint="sound_RainObjectInner4Metal2_1";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_2
				{
					memPoint="sound_RainObjectInner4Metal2_2";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_3
				{
					memPoint="sound_RainObjectInner4Metal2_3";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_4
				{
					memPoint="sound_RainObjectInner4Metal2_4";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_5
				{
					memPoint="sound_RainObjectInner4Metal2_5";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_6
				{
					memPoint="sound_RainObjectInner4Metal2_6";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_7
				{
					memPoint="sound_RainObjectInner4Metal2_7";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_8
				{
					memPoint="sound_RainObjectInner4Metal2_8";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_9
				{
					memPoint="sound_RainObjectInner4Metal2_9";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_10
				{
					memPoint="sound_RainObjectInner4Metal2_10";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_11
				{
					memPoint="sound_RainObjectInner4Metal2_11";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Metal2_12
				{
					memPoint="sound_RainObjectInner4Metal2_12";
					soundSets[]=
					{
						"RainObjectInner4Metal2_Medium_SoundSet",
						"WindObjectInner4Metal2_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_1
				{
					memPoint="sound_RainObjectInner5Metal2_1";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_2
				{
					memPoint="sound_RainObjectInner5Metal2_2";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_3
				{
					memPoint="sound_RainObjectInner5Metal2_3";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_4
				{
					memPoint="sound_RainObjectInner5Metal2_4";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_5
				{
					memPoint="sound_RainObjectInner5Metal2_5";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_6
				{
					memPoint="sound_RainObjectInner5Metal2_6";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_7
				{
					memPoint="sound_RainObjectInner5Metal2_7";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_8
				{
					memPoint="sound_RainObjectInner5Metal2_8";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_9
				{
					memPoint="sound_RainObjectInner5Metal2_9";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_10
				{
					memPoint="sound_RainObjectInner5Metal2_10";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_11
				{
					memPoint="sound_RainObjectInner5Metal2_11";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Metal2_12
				{
					memPoint="sound_RainObjectInner5Metal2_12";
					soundSets[]=
					{
						"RainObjectInner5Metal2_Medium_SoundSet",
						"WindObjectInner5Metal2_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal2_1
				{
					memPoint="sound_RainObjectInner7Metal2_1";
					soundSets[]=
					{
						"RainObjectInner7Metal2_Medium_SoundSet",
						"WindObjectInner7Metal2_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal2_2
				{
					memPoint="sound_RainObjectInner7Metal2_2";
					soundSets[]=
					{
						"RainObjectInner7Metal2_Medium_SoundSet",
						"WindObjectInner7Metal2_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal2_3
				{
					memPoint="sound_RainObjectInner7Metal2_3";
					soundSets[]=
					{
						"RainObjectInner7Metal2_Medium_SoundSet",
						"WindObjectInner7Metal2_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal2_4
				{
					memPoint="sound_RainObjectInner7Metal2_4";
					soundSets[]=
					{
						"RainObjectInner7Metal2_Medium_SoundSet",
						"WindObjectInner7Metal2_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal2_5
				{
					memPoint="sound_RainObjectInner7Metal2_5";
					soundSets[]=
					{
						"RainObjectInner7Metal2_Medium_SoundSet",
						"WindObjectInner7Metal2_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Metal2_6
				{
					memPoint="sound_RainObjectInner7Metal2_6";
					soundSets[]=
					{
						"RainObjectInner7Metal2_Medium_SoundSet",
						"WindObjectInner7Metal2_Mid_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner8Metal2_1
				{
					memPoint="sound_RainObjectInner8Metal2_1";
					soundSets[]=
					{
						"RainObjectInner8Metal2_Medium_SoundSet",
						"WindObjectInner8Metal2_Mid_SoundSet",
						"WindObjectInner8Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner8Metal2_2
				{
					memPoint="sound_RainObjectInner8Metal2_2";
					soundSets[]=
					{
						"RainObjectInner8Metal2_Medium_SoundSet",
						"WindObjectInner8Metal2_Mid_SoundSet",
						"WindObjectInner8Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner8Metal2_3
				{
					memPoint="sound_RainObjectInner8Metal2_3";
					soundSets[]=
					{
						"RainObjectInner8Metal2_Medium_SoundSet",
						"WindObjectInner8Metal2_Mid_SoundSet",
						"WindObjectInner8Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner8Metal2_4
				{
					memPoint="sound_RainObjectInner8Metal2_4";
					soundSets[]=
					{
						"RainObjectInner8Metal2_Medium_SoundSet",
						"WindObjectInner8Metal2_Mid_SoundSet",
						"WindObjectInner8Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner8Metal2_5
				{
					memPoint="sound_RainObjectInner8Metal2_5";
					soundSets[]=
					{
						"RainObjectInner8Metal2_Medium_SoundSet",
						"WindObjectInner8Metal2_Mid_SoundSet",
						"WindObjectInner8Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner8Metal2_6
				{
					memPoint="sound_RainObjectInner8Metal2_6";
					soundSets[]=
					{
						"RainObjectInner8Metal2_Medium_SoundSet",
						"WindObjectInner8Metal2_Mid_SoundSet",
						"WindObjectInner8Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Metal3_1
				{
					memPoint="sound_RainObjectInner3Metal3_1";
					soundSets[]=
					{
						"RainObjectInner3Metal3_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Metal3_1
				{
					memPoint="sound_RainObjectInner4Metal3_1";
					soundSets[]=
					{
						"RainObjectInner4Metal3_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Metal3_1
				{
					memPoint="sound_RainObjectInner7Metal3_1";
					soundSets[]=
					{
						"RainObjectInner7Metal3_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Metal3_2
				{
					memPoint="sound_RainObjectInner7Metal3_2";
					soundSets[]=
					{
						"RainObjectInner7Metal3_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Metal3_3
				{
					memPoint="sound_RainObjectInner7Metal3_3";
					soundSets[]=
					{
						"RainObjectInner7Metal3_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Metal3_4
				{
					memPoint="sound_RainObjectInner7Metal3_4";
					soundSets[]=
					{
						"RainObjectInner7Metal3_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric1_1
				{
					memPoint="sound_RainObjectInner0Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner0Fabric1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric1_2
				{
					memPoint="sound_RainObjectInner0Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner0Fabric1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric1_3
				{
					memPoint="sound_RainObjectInner0Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner0Fabric1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric1_4
				{
					memPoint="sound_RainObjectInner0Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner0Fabric1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric1_5
				{
					memPoint="sound_RainObjectInner0Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner0Fabric1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric1_6
				{
					memPoint="sound_RainObjectInner0Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner0Fabric1_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric1_1
				{
					memPoint="sound_RainObjectInner1Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner1Fabric1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric1_2
				{
					memPoint="sound_RainObjectInner1Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner1Fabric1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric1_3
				{
					memPoint="sound_RainObjectInner1Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner1Fabric1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric1_4
				{
					memPoint="sound_RainObjectInner1Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner1Fabric1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric1_5
				{
					memPoint="sound_RainObjectInner1Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner1Fabric1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric1_6
				{
					memPoint="sound_RainObjectInner1Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner1Fabric1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric1_1
				{
					memPoint="sound_RainObjectInner2Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner2Fabric1_Medium_SoundSet",
						"WindObjectInner2Fabric1_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Fabric1_2
				{
					memPoint="sound_RainObjectInner2Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner2Fabric1_Medium_SoundSet",
						"WindObjectInner2Fabric1_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Fabric1_3
				{
					memPoint="sound_RainObjectInner2Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner2Fabric1_Medium_SoundSet",
						"WindObjectInner2Fabric1_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Fabric1_4
				{
					memPoint="sound_RainObjectInner2Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner2Fabric1_Medium_SoundSet",
						"WindObjectInner2Fabric1_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Fabric1_5
				{
					memPoint="sound_RainObjectInner2Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner2Fabric1_Medium_SoundSet",
						"WindObjectInner2Fabric1_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner2Fabric1_6
				{
					memPoint="sound_RainObjectInner2Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner2Fabric1_Medium_SoundSet",
						"WindObjectInner2Fabric1_Mid_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner25Fabric1_1
				{
					memPoint="sound_RainObjectInner25Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner25Fabric1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric1_2
				{
					memPoint="sound_RainObjectInner25Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner25Fabric1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric1_3
				{
					memPoint="sound_RainObjectInner25Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner25Fabric1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric1_4
				{
					memPoint="sound_RainObjectInner25Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner25Fabric1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric1_5
				{
					memPoint="sound_RainObjectInner25Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner25Fabric1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric1_6
				{
					memPoint="sound_RainObjectInner25Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner25Fabric1_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric1_1
				{
					memPoint="sound_RainObjectInner3Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner3Fabric1_Medium_SoundSet",
						"WindObjectInner3Fabric1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Fabric1_2
				{
					memPoint="sound_RainObjectInner3Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner3Fabric1_Medium_SoundSet",
						"WindObjectInner3Fabric1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Fabric1_3
				{
					memPoint="sound_RainObjectInner3Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner3Fabric1_Medium_SoundSet",
						"WindObjectInner3Fabric1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Fabric1_4
				{
					memPoint="sound_RainObjectInner3Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner3Fabric1_Medium_SoundSet",
						"WindObjectInner3Fabric1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Fabric1_5
				{
					memPoint="sound_RainObjectInner3Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner3Fabric1_Medium_SoundSet",
						"WindObjectInner3Fabric1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner3Fabric1_6
				{
					memPoint="sound_RainObjectInner3Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner3Fabric1_Medium_SoundSet",
						"WindObjectInner3Fabric1_Mid_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Fabric1_1
				{
					memPoint="sound_RainObjectInner4Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner4Fabric1_Medium_SoundSet",
						"WindObjectInner4Fabric1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Fabric1_2
				{
					memPoint="sound_RainObjectInner4Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner4Fabric1_Medium_SoundSet",
						"WindObjectInner4Fabric1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Fabric1_3
				{
					memPoint="sound_RainObjectInner4Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner4Fabric1_Medium_SoundSet",
						"WindObjectInner4Fabric1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Fabric1_4
				{
					memPoint="sound_RainObjectInner4Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner4Fabric1_Medium_SoundSet",
						"WindObjectInner4Fabric1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Fabric1_5
				{
					memPoint="sound_RainObjectInner4Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner4Fabric1_Medium_SoundSet",
						"WindObjectInner4Fabric1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner4Fabric1_6
				{
					memPoint="sound_RainObjectInner4Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner4Fabric1_Medium_SoundSet",
						"WindObjectInner4Fabric1_Mid_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Fabric1_1
				{
					memPoint="sound_RainObjectInner5Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner5Fabric1_Medium_SoundSet",
						"WindObjectInner5Fabric1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Fabric1_2
				{
					memPoint="sound_RainObjectInner5Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner5Fabric1_Medium_SoundSet",
						"WindObjectInner5Fabric1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Fabric1_3
				{
					memPoint="sound_RainObjectInner5Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner5Fabric1_Medium_SoundSet",
						"WindObjectInner5Fabric1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Fabric1_4
				{
					memPoint="sound_RainObjectInner5Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner5Fabric1_Medium_SoundSet",
						"WindObjectInner5Fabric1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Fabric1_5
				{
					memPoint="sound_RainObjectInner5Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner5Fabric1_Medium_SoundSet",
						"WindObjectInner5Fabric1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner5Fabric1_6
				{
					memPoint="sound_RainObjectInner5Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner5Fabric1_Medium_SoundSet",
						"WindObjectInner5Fabric1_Mid_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
					soundSetsAttenuation[]=
					{
						"true",
						"false",
						"false"
					};
				};
				class sound_RainObjectInner7Fabric1_1
				{
					memPoint="sound_RainObjectInner7Fabric1_1";
					soundSets[]=
					{
						"RainObjectInner7Fabric1_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric1_2
				{
					memPoint="sound_RainObjectInner7Fabric1_2";
					soundSets[]=
					{
						"RainObjectInner7Fabric1_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric1_3
				{
					memPoint="sound_RainObjectInner7Fabric1_3";
					soundSets[]=
					{
						"RainObjectInner7Fabric1_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric1_4
				{
					memPoint="sound_RainObjectInner7Fabric1_4";
					soundSets[]=
					{
						"RainObjectInner7Fabric1_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric1_5
				{
					memPoint="sound_RainObjectInner7Fabric1_5";
					soundSets[]=
					{
						"RainObjectInner7Fabric1_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric1_6
				{
					memPoint="sound_RainObjectInner7Fabric1_6";
					soundSets[]=
					{
						"RainObjectInner7Fabric1_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric2_1
				{
					memPoint="sound_RainObjectInner0Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner0Fabric2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric2_2
				{
					memPoint="sound_RainObjectInner0Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner0Fabric2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric2_3
				{
					memPoint="sound_RainObjectInner0Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner0Fabric2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric2_4
				{
					memPoint="sound_RainObjectInner0Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner0Fabric2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric2_5
				{
					memPoint="sound_RainObjectInner0Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner0Fabric2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Fabric2_6
				{
					memPoint="sound_RainObjectInner0Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner0Fabric2_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric2_1
				{
					memPoint="sound_RainObjectInner1Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner1Fabric2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric2_2
				{
					memPoint="sound_RainObjectInner1Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner1Fabric2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric2_3
				{
					memPoint="sound_RainObjectInner1Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner1Fabric2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric2_4
				{
					memPoint="sound_RainObjectInner1Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner1Fabric2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric2_5
				{
					memPoint="sound_RainObjectInner1Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner1Fabric2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Fabric2_6
				{
					memPoint="sound_RainObjectInner1Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner1Fabric2_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric2_1
				{
					memPoint="sound_RainObjectInner2Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner2Fabric2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric2_2
				{
					memPoint="sound_RainObjectInner2Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner2Fabric2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric2_3
				{
					memPoint="sound_RainObjectInner2Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner2Fabric2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric2_4
				{
					memPoint="sound_RainObjectInner2Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner2Fabric2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric2_5
				{
					memPoint="sound_RainObjectInner2Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner2Fabric2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Fabric2_6
				{
					memPoint="sound_RainObjectInner2Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner2Fabric2_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric2_1
				{
					memPoint="sound_RainObjectInner25Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner25Fabric2_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric2_2
				{
					memPoint="sound_RainObjectInner25Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner25Fabric2_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric2_3
				{
					memPoint="sound_RainObjectInner25Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner25Fabric2_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric2_4
				{
					memPoint="sound_RainObjectInner25Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner25Fabric2_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric2_5
				{
					memPoint="sound_RainObjectInner25Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner25Fabric2_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Fabric2_6
				{
					memPoint="sound_RainObjectInner25Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner25Fabric2_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric2_1
				{
					memPoint="sound_RainObjectInner3Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner3Fabric2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric2_2
				{
					memPoint="sound_RainObjectInner3Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner3Fabric2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric2_3
				{
					memPoint="sound_RainObjectInner3Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner3Fabric2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric2_4
				{
					memPoint="sound_RainObjectInner3Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner3Fabric2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric2_5
				{
					memPoint="sound_RainObjectInner3Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner3Fabric2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Fabric2_6
				{
					memPoint="sound_RainObjectInner3Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner3Fabric2_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Fabric2_1
				{
					memPoint="sound_RainObjectInner4Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner4Fabric2_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Fabric2_2
				{
					memPoint="sound_RainObjectInner4Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner4Fabric2_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Fabric2_3
				{
					memPoint="sound_RainObjectInner4Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner4Fabric2_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Fabric2_4
				{
					memPoint="sound_RainObjectInner4Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner4Fabric2_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Fabric2_5
				{
					memPoint="sound_RainObjectInner4Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner4Fabric2_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Fabric2_6
				{
					memPoint="sound_RainObjectInner4Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner4Fabric2_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Fabric2_1
				{
					memPoint="sound_RainObjectInner5Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner5Fabric2_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Fabric2_2
				{
					memPoint="sound_RainObjectInner5Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner5Fabric2_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Fabric2_3
				{
					memPoint="sound_RainObjectInner5Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner5Fabric2_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Fabric2_4
				{
					memPoint="sound_RainObjectInner5Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner5Fabric2_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Fabric2_5
				{
					memPoint="sound_RainObjectInner5Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner5Fabric2_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Fabric2_6
				{
					memPoint="sound_RainObjectInner5Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner5Fabric2_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric2_1
				{
					memPoint="sound_RainObjectInner7Fabric2_1";
					soundSets[]=
					{
						"RainObjectInner7Fabric2_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric2_2
				{
					memPoint="sound_RainObjectInner7Fabric2_2";
					soundSets[]=
					{
						"RainObjectInner7Fabric2_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric2_3
				{
					memPoint="sound_RainObjectInner7Fabric2_3";
					soundSets[]=
					{
						"RainObjectInner7Fabric2_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric2_4
				{
					memPoint="sound_RainObjectInner7Fabric2_4";
					soundSets[]=
					{
						"RainObjectInner7Fabric2_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric2_5
				{
					memPoint="sound_RainObjectInner7Fabric2_5";
					soundSets[]=
					{
						"RainObjectInner7Fabric2_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Fabric2_6
				{
					memPoint="sound_RainObjectInner7Fabric2_6";
					soundSets[]=
					{
						"RainObjectInner7Fabric2_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Tile_1
				{
					memPoint="sound_RainObjectInner0Tile_1";
					soundSets[]=
					{
						"RainObjectInner0Tile_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Tile_2
				{
					memPoint="sound_RainObjectInner0Tile_2";
					soundSets[]=
					{
						"RainObjectInner0Tile_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Tile_3
				{
					memPoint="sound_RainObjectInner0Tile_3";
					soundSets[]=
					{
						"RainObjectInner0Tile_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Tile_4
				{
					memPoint="sound_RainObjectInner0Tile_4";
					soundSets[]=
					{
						"RainObjectInner0Tile_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Tile_5
				{
					memPoint="sound_RainObjectInner0Tile_5";
					soundSets[]=
					{
						"RainObjectInner0Tile_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Tile_6
				{
					memPoint="sound_RainObjectInner0Tile_6";
					soundSets[]=
					{
						"RainObjectInner0Tile_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Tile_1
				{
					memPoint="sound_RainObjectInner1Tile_1";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Tile_2
				{
					memPoint="sound_RainObjectInner1Tile_2";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Tile_3
				{
					memPoint="sound_RainObjectInner1Tile_3";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Tile_4
				{
					memPoint="sound_RainObjectInner1Tile_4";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Tile_5
				{
					memPoint="sound_RainObjectInner1Tile_5";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Tile_6
				{
					memPoint="sound_RainObjectInner1Tile_6";
					soundSets[]=
					{
						"RainObjectInner1Tile_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Tile_1
				{
					memPoint="sound_RainObjectInner2Tile_1";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Tile_2
				{
					memPoint="sound_RainObjectInner2Tile_2";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Tile_3
				{
					memPoint="sound_RainObjectInner2Tile_3";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Tile_4
				{
					memPoint="sound_RainObjectInner2Tile_4";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Tile_5
				{
					memPoint="sound_RainObjectInner2Tile_5";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Tile_6
				{
					memPoint="sound_RainObjectInner2Tile_6";
					soundSets[]=
					{
						"RainObjectInner2Tile_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Tile_1
				{
					memPoint="sound_RainObjectInner25Tile_1";
					soundSets[]=
					{
						"RainObjectInner25Tile_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Tile_2
				{
					memPoint="sound_RainObjectInner25Tile_2";
					soundSets[]=
					{
						"RainObjectInner25Tile_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Tile_3
				{
					memPoint="sound_RainObjectInner25Tile_3";
					soundSets[]=
					{
						"RainObjectInner25Tile_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Tile_4
				{
					memPoint="sound_RainObjectInner25Tile_4";
					soundSets[]=
					{
						"RainObjectInner25Tile_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Tile_5
				{
					memPoint="sound_RainObjectInner25Tile_5";
					soundSets[]=
					{
						"RainObjectInner25Tile_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Tile_6
				{
					memPoint="sound_RainObjectInner25Tile_6";
					soundSets[]=
					{
						"RainObjectInner25Tile_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_1
				{
					memPoint="sound_RainObjectInner3Tile_1";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_2
				{
					memPoint="sound_RainObjectInner3Tile_2";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_3
				{
					memPoint="sound_RainObjectInner3Tile_3";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_4
				{
					memPoint="sound_RainObjectInner3Tile_4";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_5
				{
					memPoint="sound_RainObjectInner3Tile_5";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_6
				{
					memPoint="sound_RainObjectInner3Tile_6";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_7
				{
					memPoint="sound_RainObjectInner3Tile_7";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Tile_8
				{
					memPoint="sound_RainObjectInner3Tile_8";
					soundSets[]=
					{
						"RainObjectInner3Tile_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_1
				{
					memPoint="sound_RainObjectInner4Tile_1";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_2
				{
					memPoint="sound_RainObjectInner4Tile_2";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_3
				{
					memPoint="sound_RainObjectInner4Tile_3";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_4
				{
					memPoint="sound_RainObjectInner4Tile_4";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_5
				{
					memPoint="sound_RainObjectInner4Tile_5";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_6
				{
					memPoint="sound_RainObjectInner4Tile_6";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_7
				{
					memPoint="sound_RainObjectInner4Tile_7";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Tile_8
				{
					memPoint="sound_RainObjectInner4Tile_8";
					soundSets[]=
					{
						"RainObjectInner4Tile_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_1
				{
					memPoint="sound_RainObjectInner5Tile_1";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_2
				{
					memPoint="sound_RainObjectInner5Tile_2";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_3
				{
					memPoint="sound_RainObjectInner5Tile_3";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_4
				{
					memPoint="sound_RainObjectInner5Tile_4";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_5
				{
					memPoint="sound_RainObjectInner5Tile_5";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_6
				{
					memPoint="sound_RainObjectInner5Tile_6";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_7
				{
					memPoint="sound_RainObjectInner5Tile_7";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Tile_8
				{
					memPoint="sound_RainObjectInner5Tile_8";
					soundSets[]=
					{
						"RainObjectInner5Tile_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Tile_1
				{
					memPoint="sound_RainObjectInner7Tile_1";
					soundSets[]=
					{
						"RainObjectInner7Tile_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Tile_2
				{
					memPoint="sound_RainObjectInner7Tile_2";
					soundSets[]=
					{
						"RainObjectInner7Tile_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Tile_3
				{
					memPoint="sound_RainObjectInner7Tile_3";
					soundSets[]=
					{
						"RainObjectInner7Tile_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Tile_4
				{
					memPoint="sound_RainObjectInner7Tile_4";
					soundSets[]=
					{
						"RainObjectInner7Tile_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Tile_5
				{
					memPoint="sound_RainObjectInner7Tile_5";
					soundSets[]=
					{
						"RainObjectInner7Tile_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Tile_6
				{
					memPoint="sound_RainObjectInner7Tile_6";
					soundSets[]=
					{
						"RainObjectInner7Tile_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Ipa_1
				{
					memPoint="sound_RainObjectInner0Ipa_1";
					soundSets[]=
					{
						"RainObjectInner0Ipa_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Ipa_2
				{
					memPoint="sound_RainObjectInner0Ipa_2";
					soundSets[]=
					{
						"RainObjectInner0Ipa_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Ipa_3
				{
					memPoint="sound_RainObjectInner0Ipa_3";
					soundSets[]=
					{
						"RainObjectInner0Ipa_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Ipa_4
				{
					memPoint="sound_RainObjectInner0Ipa_4";
					soundSets[]=
					{
						"RainObjectInner0Ipa_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Ipa_5
				{
					memPoint="sound_RainObjectInner0Ipa_5";
					soundSets[]=
					{
						"RainObjectInner0Ipa_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Ipa_6
				{
					memPoint="sound_RainObjectInner0Ipa_6";
					soundSets[]=
					{
						"RainObjectInner0Ipa_Medium_SoundSet",
						"WindObjectInner0Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Ipa_1
				{
					memPoint="sound_RainObjectInner1Ipa_1";
					soundSets[]=
					{
						"RainObjectInner1Ipa_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Ipa_2
				{
					memPoint="sound_RainObjectInner1Ipa_2";
					soundSets[]=
					{
						"RainObjectInner1Ipa_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Ipa_3
				{
					memPoint="sound_RainObjectInner1Ipa_3";
					soundSets[]=
					{
						"RainObjectInner1Ipa_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Ipa_4
				{
					memPoint="sound_RainObjectInner1Ipa_4";
					soundSets[]=
					{
						"RainObjectInner1Ipa_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Ipa_5
				{
					memPoint="sound_RainObjectInner1Ipa_5";
					soundSets[]=
					{
						"RainObjectInner1Ipa_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Ipa_6
				{
					memPoint="sound_RainObjectInner1Ipa_6";
					soundSets[]=
					{
						"RainObjectInner1Ipa_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Ipa_1
				{
					memPoint="sound_RainObjectInner2Ipa_1";
					soundSets[]=
					{
						"RainObjectInner2Ipa_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Ipa_2
				{
					memPoint="sound_RainObjectInner2Ipa_2";
					soundSets[]=
					{
						"RainObjectInner2Ipa_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Ipa_3
				{
					memPoint="sound_RainObjectInner2Ipa_3";
					soundSets[]=
					{
						"RainObjectInner2Ipa_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Ipa_4
				{
					memPoint="sound_RainObjectInner2Ipa_4";
					soundSets[]=
					{
						"RainObjectInner2Ipa_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Ipa_5
				{
					memPoint="sound_RainObjectInner2Ipa_5";
					soundSets[]=
					{
						"RainObjectInner2Ipa_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Ipa_6
				{
					memPoint="sound_RainObjectInner2Ipa_6";
					soundSets[]=
					{
						"RainObjectInner2Ipa_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Ipa_1
				{
					memPoint="sound_RainObjectInner25Ipa_1";
					soundSets[]=
					{
						"RainObjectInner25Ipa_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Ipa_2
				{
					memPoint="sound_RainObjectInner25Ipa_2";
					soundSets[]=
					{
						"RainObjectInner25Ipa_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Ipa_3
				{
					memPoint="sound_RainObjectInner25Ipa_3";
					soundSets[]=
					{
						"RainObjectInner25Ipa_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Ipa_4
				{
					memPoint="sound_RainObjectInner25Ipa_4";
					soundSets[]=
					{
						"RainObjectInner25Ipa_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Ipa_5
				{
					memPoint="sound_RainObjectInner25Ipa_5";
					soundSets[]=
					{
						"RainObjectInner25Ipa_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner25Ipa_6
				{
					memPoint="sound_RainObjectInner25Ipa_6";
					soundSets[]=
					{
						"RainObjectInner25Ipa_Medium_SoundSet",
						"WindObjectInner25Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Ipa_1
				{
					memPoint="sound_RainObjectInner3Ipa_1";
					soundSets[]=
					{
						"RainObjectInner3Ipa_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Ipa_2
				{
					memPoint="sound_RainObjectInner3Ipa_2";
					soundSets[]=
					{
						"RainObjectInner3Ipa_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Ipa_3
				{
					memPoint="sound_RainObjectInner3Ipa_3";
					soundSets[]=
					{
						"RainObjectInner3Ipa_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Ipa_4
				{
					memPoint="sound_RainObjectInner3Ipa_4";
					soundSets[]=
					{
						"RainObjectInner3Ipa_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Ipa_5
				{
					memPoint="sound_RainObjectInner3Ipa_5";
					soundSets[]=
					{
						"RainObjectInner3Ipa_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Ipa_6
				{
					memPoint="sound_RainObjectInner3Ipa_6";
					soundSets[]=
					{
						"RainObjectInner3Ipa_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_1
				{
					memPoint="sound_RainObjectInner4Ipa_1";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_2
				{
					memPoint="sound_RainObjectInner4Ipa_2";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_3
				{
					memPoint="sound_RainObjectInner4Ipa_3";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_4
				{
					memPoint="sound_RainObjectInner4Ipa_4";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_5
				{
					memPoint="sound_RainObjectInner4Ipa_5";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_6
				{
					memPoint="sound_RainObjectInner4Ipa_6";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_7
				{
					memPoint="sound_RainObjectInner4Ipa_7";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner4Ipa_8
				{
					memPoint="sound_RainObjectInner4Ipa_8";
					soundSets[]=
					{
						"RainObjectInner4Ipa_Medium_SoundSet",
						"WindObjectInner4Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Ipa_1
				{
					memPoint="sound_RainObjectInner5Ipa_1";
					soundSets[]=
					{
						"RainObjectInner5Ipa_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Ipa_2
				{
					memPoint="sound_RainObjectInner5Ipa_2";
					soundSets[]=
					{
						"RainObjectInner5Ipa_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Ipa_3
				{
					memPoint="sound_RainObjectInner5Ipa_3";
					soundSets[]=
					{
						"RainObjectInner5Ipa_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Ipa_4
				{
					memPoint="sound_RainObjectInner5Ipa_4";
					soundSets[]=
					{
						"RainObjectInner5Ipa_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Ipa_5
				{
					memPoint="sound_RainObjectInner5Ipa_5";
					soundSets[]=
					{
						"RainObjectInner5Ipa_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner5Ipa_6
				{
					memPoint="sound_RainObjectInner5Ipa_6";
					soundSets[]=
					{
						"RainObjectInner5Ipa_Medium_SoundSet",
						"WindObjectInner5Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Ipa_1
				{
					memPoint="sound_RainObjectInner7Ipa_1";
					soundSets[]=
					{
						"RainObjectInner7Ipa_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Ipa_2
				{
					memPoint="sound_RainObjectInner7Ipa_2";
					soundSets[]=
					{
						"RainObjectInner7Ipa_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Ipa_3
				{
					memPoint="sound_RainObjectInner7Ipa_3";
					soundSets[]=
					{
						"RainObjectInner7Ipa_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Ipa_4
				{
					memPoint="sound_RainObjectInner7Ipa_4";
					soundSets[]=
					{
						"RainObjectInner7Ipa_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Ipa_5
				{
					memPoint="sound_RainObjectInner7Ipa_5";
					soundSets[]=
					{
						"RainObjectInner7Ipa_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner7Ipa_6
				{
					memPoint="sound_RainObjectInner7Ipa_6";
					soundSets[]=
					{
						"RainObjectInner7Ipa_Medium_SoundSet",
						"WindObjectInner7Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotWood1_1
				{
					memPoint="sound_RainObjectInner0SpotWood1_1";
					soundSets[]=
					{
						"RainObjectInner0SpotWood1_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner0SpotWood1_2
				{
					memPoint="sound_RainObjectInner0SpotWood1_2";
					soundSets[]=
					{
						"RainObjectInner0SpotWood1_Medium_SoundSet",
						"WindObjectInner0SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1Wood1_1
				{
					memPoint="sound_RainObjectInner1Wood1_1";
					soundSets[]=
					{
						"RainObjectInner1Wood1_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Wood1_1
				{
					memPoint="sound_RainObjectInner2Wood1_1";
					soundSets[]=
					{
						"RainObjectInner2Wood1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Wood1_2
				{
					memPoint="sound_RainObjectInner2Wood1_2";
					soundSets[]=
					{
						"RainObjectInner2Wood1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Wood1_3
				{
					memPoint="sound_RainObjectInner2Wood1_3";
					soundSets[]=
					{
						"RainObjectInner2Wood1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Wood1_4
				{
					memPoint="sound_RainObjectInner2Wood1_4";
					soundSets[]=
					{
						"RainObjectInner2Wood1_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Wood1_1
				{
					memPoint="sound_RainObjectInner3Wood1_1";
					soundSets[]=
					{
						"RainObjectInner3Wood1_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Wood1_2
				{
					memPoint="sound_RainObjectInner3Wood1_2";
					soundSets[]=
					{
						"RainObjectInner3Wood1_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Wood1_3
				{
					memPoint="sound_RainObjectInner3Wood1_3";
					soundSets[]=
					{
						"RainObjectInner3Wood1_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner3Wood1_4
				{
					memPoint="sound_RainObjectInner3Wood1_4";
					soundSets[]=
					{
						"RainObjectInner3Wood1_Medium_SoundSet",
						"WindObjectInner3Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Glass_1
				{
					memPoint="sound_RainObjectInner2Glass_1";
					soundSets[]=
					{
						"RainObjectInner2Glass_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Glass_2
				{
					memPoint="sound_RainObjectInner2Glass_2";
					soundSets[]=
					{
						"RainObjectInner2Glass_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1Plastic_1
				{
					memPoint="sound_RainObjectInner1Plastic_1";
					soundSets[]=
					{
						"RainObjectInner1Plastic_Medium_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner1SpotIgelit_1
				{
					memPoint="sound_RainObjectInner1SpotIgelit_1";
					soundSets[]=
					{
						"RainObjectInner1SpotIgelit_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner1SpotIgelit_2
				{
					memPoint="sound_RainObjectInner1SpotIgelit_2";
					soundSets[]=
					{
						"RainObjectInner1SpotIgelit_Medium_SoundSet",
						"WindObjectInner1SpotGust_SoundSet"
					};
				};
				class sound_RainObjectInner2Igelit_1
				{
					memPoint="sound_RainObjectInner2Igelit_1";
					soundSets[]=
					{
						"RainObjectInner2Igelit_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Igelit_2
				{
					memPoint="sound_RainObjectInner2Igelit_2";
					soundSets[]=
					{
						"RainObjectInner2Igelit_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Camo_1
				{
					memPoint="sound_RainObjectInner2Camo_1";
					soundSets[]=
					{
						"RainObjectInner2Camo_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Camo_2
				{
					memPoint="sound_RainObjectInner2Camo_2";
					soundSets[]=
					{
						"RainObjectInner2Camo_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Camo_3
				{
					memPoint="sound_RainObjectInner2Camo_3";
					soundSets[]=
					{
						"RainObjectInner2Camo_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Camo_4
				{
					memPoint="sound_RainObjectInner2Camo_4";
					soundSets[]=
					{
						"RainObjectInner2Camo_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Camo_5
				{
					memPoint="sound_RainObjectInner2Camo_5";
					soundSets[]=
					{
						"RainObjectInner2Camo_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner2Camo_6
				{
					memPoint="sound_RainObjectInner2Camo_6";
					soundSets[]=
					{
						"RainObjectInner2Camo_Medium_SoundSet",
						"WindObjectInner2Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Gutter_1
				{
					memPoint="sound_RainObjectInner0Gutter_1";
					soundSets[]=
					{
						"RainObjectInner0Gutter_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Gutter_2
				{
					memPoint="sound_RainObjectInner0Gutter_2";
					soundSets[]=
					{
						"RainObjectInner0Gutter_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Gutter_3
				{
					memPoint="sound_RainObjectInner0Gutter_3";
					soundSets[]=
					{
						"RainObjectInner0Gutter_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Gutter_4
				{
					memPoint="sound_RainObjectInner0Gutter_4";
					soundSets[]=
					{
						"RainObjectInner0Gutter_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Gutter_5
				{
					memPoint="sound_RainObjectInner0Gutter_5";
					soundSets[]=
					{
						"RainObjectInner0Gutter_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_RainObjectInner0Gutter_6
				{
					memPoint="sound_RainObjectInner0Gutter_6";
					soundSets[]=
					{
						"RainObjectInner0Gutter_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotRopeSqueak_1
				{
					memPoint="sound_WindObjectInner0SpotRopeSqueak_1";
					soundSets[]=
					{
						"WindObjectInner0SpotRopeSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotMetalSqueak_1
				{
					memPoint="sound_WindObjectInner0SpotMetalSqueak_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalSqueak_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotMetalSqueak_2
				{
					memPoint="sound_WindObjectInner0SpotMetalSqueak_2";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalSqueak_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotMetalSqueak_3
				{
					memPoint="sound_WindObjectInner0SpotMetalSqueak_3";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotLadderSqueak_1
				{
					memPoint="sound_WindObjectInner0SpotLadderSqueak_1";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotLadderSqueak_2
				{
					memPoint="sound_WindObjectInner0SpotLadderSqueak_2";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotLadderSqueak_3
				{
					memPoint="sound_WindObjectInner0SpotLadderSqueak_3";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotLadderSqueak_4
				{
					memPoint="sound_WindObjectInner0SpotLadderSqueak_4";
					soundSets[]=
					{
						"WindObjectInner0SpotLadderSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotWoodSqueak_1
				{
					memPoint="sound_WindObjectInner0SpotWoodSqueak_1";
					soundSets[]=
					{
						"WindObjectInner0SpotWoodSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotWoodSqueak_2
				{
					memPoint="sound_WindObjectInner0SpotWoodSqueak_2";
					soundSets[]=
					{
						"WindObjectInner0SpotWoodSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotFallingDirt_1
				{
					memPoint="sound_WindObjectInner0SpotFallingDirt_1";
					soundSets[]=
					{
						"WindObjectInner0SpotFallingDirt_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotFallingDirt_2
				{
					memPoint="sound_WindObjectInner0SpotFallingDirt_2";
					soundSets[]=
					{
						"WindObjectInner0SpotFallingDirt_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotFallingDirt_3
				{
					memPoint="sound_WindObjectInner0SpotFallingDirt_3";
					soundSets[]=
					{
						"WindObjectInner0SpotFallingDirt_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotLadder_1
				{
					memPoint="sound_WindObjectInner0SpotLadder_1";
					soundSets[]=
					{
						"WindObjectInner1SpotMetalSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotLadder_2
				{
					memPoint="sound_WindObjectInner0SpotLadder_2";
					soundSets[]=
					{
						"WindObjectInner1SpotMetalSqueak_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotMetalFence_1
				{
					memPoint="sound_WindObjectInner0SpotMetalFence_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalFence_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotMetalGate_1
				{
					memPoint="sound_WindObjectInner0SpotMetalGate_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalGate_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotWoodGate_1
				{
					memPoint="sound_WindObjectInner0SpotWoodGate_1";
					soundSets[]=
					{
						"WindObjectInner0SpotWoodGate_SoundSet"
					};
				};
				class sound_WindObjectInner7MetalCreak_1
				{
					memPoint="sound_WindObjectInner7MetalCreak_1";
					soundSets[]=
					{
						"WindObjectInner7MetalCreak_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotDirectional_1
				{
					memPoint="sound_WindObjectInner0SpotDirectional_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalGate_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotSettlements_1
				{
					memPoint="sound_WindObjectInner0SpotSettlements_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalGate_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotTouristSmall_1
				{
					memPoint="sound_WindObjectInner0SpotTouristSmall_1";
					soundSets[]=
					{
						"WindObjectInner0SpotWoodGate_SoundSet",
						"RainObjectInner0SpotWood1_Medium_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotCitySign_1
				{
					memPoint="sound_WindObjectInner0SpotCitySign_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalGate_SoundSet",
						"RainObjectInner0SpotMetal2_Medium_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotCitySign_2
				{
					memPoint="sound_WindObjectInner0SpotCitySign_2";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalGate_SoundSet",
						"RainObjectInner0SpotMetal2_Medium_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotTrailMap_1
				{
					memPoint="sound_WindObjectInner0SpotTrailMap_1";
					soundSets[]=
					{
						"WindObjectInner0SpotWoodGate_SoundSet",
						"RainObjectInner0SpotWood1_Medium_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotTrailMap_2
				{
					memPoint="sound_WindObjectInner0SpotTrailMap_2";
					soundSets[]=
					{
						"WindObjectInner0SpotWoodGate_SoundSet",
						"RainObjectInner0SpotWood1_Medium_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotBillboard_1
				{
					memPoint="sound_WindObjectInner0SpotBillboard_1";
					soundSets[]=
					{
						"WindObjectInner0SpotMetalGate_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotRock_1
				{
					memPoint="sound_WindObjectInner0SpotRock_1";
					soundSets[]=
					{
						"WindObjectInner0SpotFallingDirt_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotRock_2
				{
					memPoint="sound_WindObjectInner0SpotRock_2";
					soundSets[]=
					{
						"WindObjectInner0SpotFallingDirt_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_WindObjectInner0SpotRock_3
				{
					memPoint="sound_WindObjectInner0SpotRock_3";
					soundSets[]=
					{
						"WindObjectInner0SpotFallingDirt_SoundSet",
						"WindObjectInner1Gust_SoundSet"
					};
				};
				class sound_GrassSmall
				{
					memPoint="sound_GrassSmall";
					soundSets[]={};
				};
				class sound_GrassMedium
				{
					memPoint="sound_GrassMedium";
					soundSets[]=
					{
						"InsectDay_Bliss_SoundSet",
						"InsectNight_Bliss_SoundSet",
						"WindBush_SoundSet"
					};
				};
				class sound_BushSmall
				{
					memPoint="sound_BushSmall";
					soundSets[]=
					{
						"InsectDay_Bliss_SoundSet",
						"InsectNight_Bliss_SoundSet",
						"WindBush_SoundSet"
					};
				};
				class sound_BushMedium
				{
					memPoint="sound_BushMedium";
					soundSets[]=
					{
						"InsectDay_Bliss_SoundSet",
						"InsectNight_Bliss_SoundSet",
						"WindBush_Bliss_SoundSet"
					};
				};
				class sound_2_Leaves
				{
					memPoint="sound_2_Leaves";
					soundSets[]=
					{
						"WindTreeSmallLeaves_Bliss_SoundSet"
					};
				};
				class sound_4_Leaves: sound_2_Leaves
				{
				};
				class sound_6_Leaves
				{
					memPoint="sound_6_Leaves";
					soundSets[]=
					{
						"Wren_8_SoundSet",
						"Sparrow_6_SoundSet",
						"WindTreeMediumLeaves_Bliss_SoundSet"
					};
				};
				class sound_8_Leaves
				{
					memPoint="sound_8_Leaves";
					soundSets[]=
					{
						"Whippoorwhill_8_SoundSet",
						"Wren_8_SoundSet",
						"Birds_8_Night_SoundSet",
						"WindTreeMediumLeaves_Bliss_SoundSet"
					};
				};
				class sound_10_Leaves: sound_8_Leaves
				{
				};
				class sound_12_Leaves
				{
					memPoint="sound_12_Leaves";
					soundSets[]=
					{
						"Whippoorwhill_10_SoundSet",
						"Sparrow_10_SoundSet",
						"Quail_10_SoundShader",
						"Birds_10_Night_SoundSet",
						"WindTreeLargeLeaves_Bliss_SoundSet",
						"WindTreeCreak3D_Bliss_SoundSet",
						"WindTreeCreakHeavy3D_Bliss_SoundSet"
					};
				};
				class sound_14_Leaves: sound_12_Leaves
				{
				};
				class sound_16_Leaves: sound_12_Leaves
				{
				};
				class sound_4_Domestic
				{
					memPoint="sound_4_Domestic";
					soundSets[]=
					{
						"Warbler_4_SoundSet",
						"WindTreeSmallLeaves_Bliss_SoundSet"
					};
				};
				class sound_6_Domestic
				{
					memPoint="sound_6_Domestic";
					soundSets[]=
					{
						"Warbler_6_SoundSet",
						"Grosbeak_6_SoundSet",
						"WindTreeMediumLeaves_Bliss_SoundSet"
					};
				};
				class sound_8_Domestic: sound_6_Domestic
				{
				};
				class sound_10_Domestic
				{
					memPoint="sound_10_Domestic";
					soundSets[]=
					{
						"Warbler_10_SoundSet",
						"Towhee_10_SoundSet",
						"WindTreeLargeLeaves_Bliss_SoundSet",
						"WindTreeCreak3D_Bliss_SoundSet",
						"WindTreeCreakHeavy3D_Bliss_SoundSet"
					};
				};
				class sound_2_Evergreeen
				{
					memPoint="sound_2_Evergreeen";
					soundSets[]=
					{
						"WindTreeSmallEvergreen_Bliss_SoundSet"
					};
				};
				class sound_4_Evergreeen: sound_2_Evergreeen
				{
				};
				class sound_6_Evergreeen
				{
					memPoint="sound_6_Evergreeen";
					soundSets[]=
					{
						"Tit_6_SoundSet",
						"Chickadee_6_SoundSet",
						"Kokorin_6_SoundSet",
						"WindTreeMediumEvergreen_Bliss_SoundSet"
					};
				};
				class sound_8_Evergreeen
				{
					memPoint="sound_8_Evergreeen";
					soundSets[]=
					{
						"Tit_8_SoundSet",
						"Chickadee_8_SoundSet",
						"Kokorin_8_SoundSet",
						"Birds_10_Night_SoundSet",
						"WindTreeMediumEvergreen_Bliss_SoundSet"
					};
				};
				class sound_10_Evergreeen
				{
					memPoint="sound_10_Evergreeen";
					soundSets[]=
					{
						"Jay1_10_SoundSet",
						"Raven_10_SoundSet",
						"Birds_10_Night_SoundSet",
						"WindTreeLargeEvergreen_Bliss_SoundSet",
						"WindTreeCreak3D_Bliss_SoundSet",
						"WindTreeCreakHeavy3D_Bliss_SoundSet"
					};
				};
				class sound_12_Evergreeen
				{
					memPoint="sound_12_Evergreeen";
					soundSets[]=
					{
						"Whippoorwhill_10_SoundSet",
						"Jay2_10_SoundSet",
						"Woodpacker_10_SoundSet",
						"WindTreeLargeEvergreen_Bliss_SoundSet",
						"WindTreeCreak3D_Bliss_SoundSet",
						"WindTreeCreakHeavy3D_Bliss_SoundSet"
					};
				};
				class sound_14_Evergreeen
				{
					memPoint="sound_14_Evergreeen";
					soundSets[]=
					{
						"Jay3_10_SoundSet",
						"Jay4_10_SoundSet",
						"Tit_10_SoundSet",
						"WindTreeLargeEvergreen_Bliss_SoundSet",
						"WindTreeCreak3D_Bliss_SoundSet",
						"WindTreeCreakHeavy3D_Bliss_SoundSet"
					};
				};
				class sound_TreeSmallNoleaves
				{
					memPoint="sound_TreeSmallNoleaves";
					soundSets[]=
					{
						"WindTreeSmallNoLeaves_Bliss_SoundSet"
					};
				};
				class sound_TreeMediumNoleaves
				{
					memPoint="sound_TreeMediumNoleaves";
					soundSets[]=
					{
						"WindTreeMediumNoLeaves_Bliss_SoundSet"
					};
				};
				class sound_TreeLargeNoleaves
				{
					memPoint="sound_TreeLargeNoleaves";
					soundSets[]=
					{
						"WindTreeLargeNoLeaves_Bliss_SoundSet"
					};
				};
			};
		};
	};
};	
