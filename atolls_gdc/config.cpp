class CfgPatches
{
	class stdr_atolls_gdc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] =
		{
			"A3_Map_Tanoabuka"
		};
	};
};

class CfgMods
{
	class Mod_Base;
	class stdr_atolls_gdc : Mod_Base
	{
		picture = "\stdr\atolls_gdc\data\image_large.paa";
		logo = "\stdr\atolls_gdc\data\logo.paa";
		logoOver = "\stdr\atolls_gdc\data\logo_over.paa";
		logoSmall = "\stdr\atolls_gdc\data\logo.paa";
		tooltipOwned = "Atolls GDC";
		action = "-";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "$STR_ATOLLSGDC_UI_OVERVIEW";
		hideName = 1;
		hidePicture = 0;
		name = "Atolls GDC";
		dir = "Atolls GDC";
	};
};
 
class CfgWorldList
{
	class atolls_gdc{};
};
 
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather
		{
			class Overcast;
		};
		class WaterExPars;
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class EnvSounds;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class atolls_gdc: CAWorld
	{
		cutscenes[] = {};
		description = "Atolls GDC";
		worldName = "\stdr\atolls_gdc\atolls_gdc.wrp";
		author = "Sparfell";
		icon = "";
		previewVideo = "";
		pictureMap = "\stdr\atolls_gdc\data\picture_map.paa";
		pictureShot = "";
 
		newRoadsShape = "\stdr\atolls_gdc\data\roads\roads.shp";
		
		mapSize = 4096;
		centerPosition[] =
		{
			2048, 2048
		};
		ilsPosition[] = {1257.12,2665.78};
		ilsDirection[] = {0,0.052336,-1};
		ilsTaxiOff[] = {
			1257.12,2809.73,
			1257.12,3002.32,
			1252.05,3017.83,
			1240.36,3024.08,
			1226.1,3020.06,
			1224.88,3002.61,
			1224.88,2809.73
		};
		ilsTaxiIn[] = {
			1224.88,2809.73,
			1224.88,2649.13,
			1230.67,2630.17,
			1244.35,2622.65,
			1256.37,2631.7,
			1257.12,2650.14,
			1257.12,2696.65
		};
		drawTaxiway = 0;
		//takeOffReversed = 0;
		class SecondaryAirports{};
		class ReplaceObjects{};
 
		class Sounds
		{
			sounds[] = {};
		};
 
		class Animation
		{
			vehicles[] = {};
		};
		
		/*
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		hazeBaseHeight = 0;
		hazeBaseBeta0 = 8e-05;
		hazeDensityDecay = 0.00536;
		class DefaultKeyframe
		{
			hazeBaseKm = 12;
		};
		*/
 
		minTreesInForestSquare = 13;
		minRocksInRockSquare = 10;
		minObjInTownSquare = 1.4;
		
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 4096;
			class Zoom1
			{
				zoomMax = 0.4;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.95;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+30;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		
		access = 3;
		worldId = 79;
		dummyWorld = 0;
		plateFormat = "T#$-####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		mapZone = 60;
		mapArea[] = {-20.267975,174.00284,-20.135265,174.14566};
		longitude = 178.783;
		latitude = 17.698;
		elevationOffset = 0;
		seaBedUnderwaterDepth = 52;
		minHillsAltitude = 80;
		maxHillsAltitude = 450;
		class EnvMaps
		{
			class EnvMap1
			{
				texture = "A3\Map_Tanoabuka\data\env_land_ClearSky_ca.paa";
				overcast = 0;
			};
			class EnvMap2
			{
				texture = "A3\Map_Tanoabuka\data\env_land_SemiCloudySky_ca.paa";
				overcast = 0.4;
			};
			class EnvMap3
			{
				texture = "A3\Map_Tanoabuka\data\env_land_OvercastSky_ca.paa";
				overcast = 0.8;
			};
		};
		class OutsideTerrain
		{
			satellite = "A3\Map_Tanoabuka\data\s_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "A3\Map_Data_Exp\gdt_seabedexp_nopx.paa";
					texture = "A3\Map_Data_Exp\gdt_seabedexp_co.paa";
				};
			};
			colorOutside[] = {0.227451,0.27451,0.384314,1};
		};
		startTime = "12:00";
		startDate = "26/12/2021";
		seagullPos[] = {1024,130.0,1024};
		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0.0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 60;
			waterFogDistanceNear = -10;
			waterFogDistance = 90;
			waterColor[] = {0.0,0.04,0.03};
			deepWaterColor[] = {0.0,0.001,0.009};
			surfaceColor[] = {0.0,0.04,0.03};
			deepSurfaceColor[] = {0.0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.035;
			fogColor[] = {0.0002345,0.04515,0.07035};
			fogColorExtinctionSpeed[] = {0.32814,0.0149,0.00511};
			ligtExtinctionSpeed[] = {0.32814,0.0149,0.00511};
			diffuseLigtExtinctionSpeed[] = {0.36814,0.0449,0.02511};
			fogGradientCoefs[] = {0.35,1.0,1.7};
			fogColorLightInfluence[] = {0.8,0.2,1.0};
			shadowIntensity = 0.0;
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = 0.15;
			foamAroundObjectsFadeCoef = 8.0;
			foamColorCoef = 2.0;
			foamDeformationCoef = 0.02;
			foamTextureCoef = 0.2;
			foamTimeMoveSpeed = 0.2;
			foamTimeMoveAmount = 0.1;
			shoreDarkeningMaxCoef = 0.45;
			shoreDarkeningOffset = 0.36;
			shoreDarkeningGradient = 0.08;
			shoreWaveTimeScale = 0.8;
			shoreWaveShifDerivativeOffset = -0.8;
			shoreFoamIntensity = 0.25;
			shoreMaxWaveHeight = 0.15;
			shoreWetLayerReflectionIntensity = 0.55;
		};
		causticsEnabled = 1;
		causticsTextureMask = "A3\data_f\caustics\caustics_anim_%03d.paa";
		causticsTextureCount = 32;
		causticsDistanceLimit = 200.0;
		causticsDepthLimit = 80.0;
		causticsTextureArea = 2.0;
		causticsTextureAreaDeep = 156.0;
		causticsTextureChangeInterval = 0.04;
		causticsDepthFadeCoef = 0.05;
		causticsTextureDepthGranularity = 2.5;
		causticsBrightnessCoef = 4.0;
		startWeather = 0.3;
		startFog = 0.0;
		forecastWeather = 0.0;
		forecastFog = 0.0;
		startFogBase = 250.0;
		forecastFogBase = 250.0;
		startFogDecay = 0.014;
		forecastFogDecay = 0.014;
		fogBeta0Min = 0.0;
		fogBeta0Max = 0.05;
		skyColorInfluencesFogColor = 0;
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		fogHeight = 2000;
		hazeBaseHeight = 0;
		hazeBaseBeta0 = 8e-05;
		hazeDensityDecay = 0.00036;
		aroundSunCoefMultiplier = 1.4;
		aroundSunCoefExponent = 12.0;
		horizonSunColorationIntensity = 0.001;
		class HDRNewPars
		{
			minAperture = 1e-05;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1.0;
			bloomScale = 0.09;
			bloomExponent = 0.75;
			bloomLuminanceOffset = 0.4;
			bloomLuminanceScale = 0.15;
			bloomLuminanceExponent = 0.25;
			tonemapMethod = 1;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.12;
			tonemapLinearAngle = 0.1;
			tonemapToeStrength = 0.2;
			tonemapToeNumerator = 0.022;
			tonemapToeDenominator = 0.2;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1.0;
			tonemapLinearWhiteReinhard = "2.5f";
			eyeAdaptFactorLight = 3.3;
			eyeAdaptFactorDark = 0.75;
			nvgApertureMin = 10.0;
			nvgApertureStandard = 12.5;
			nvgApertureMax = 16.5;
			nvgStandardAvgLum = 10;
			nvgLightGain = 320;
			nvgTransition = 1;
			nvgTransitionCoefOn = "40.0f";
			nvgTransitionCoefOff = "0.01f";
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
		};
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.132,0.133,0.122};
			moonObjectColorFull[] = {460,440,400,1.0};
			moonHaloObjectColorFull[] = {465,477,475,1.0};
			moonsetObjectColor[] = {375,350,325,1.0};
			moonsetHaloObjectColor[] = {515,517,525,1.0};
			class ThunderBoltLight
			{
				diffuse[] = {2120,3170,5550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0.0;
					constant = 0.0;
					linear = 0.0;
					quadratic = 1.0;
				};
			};
			starEmissivity = 40;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0.0,0.002,0.003},{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.002,0.003},{0.0,0.002,0.003},0};
			fullNight[] = {-5,{0.182,0.213,0.25},{0.05,0.111,0.221},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.082,0.128,0.185},{0.283,0.35,0.431},0};
			sunMoon[] = {-3.75,{0.377,0.441,0.518},{0.103,0.227,0.453},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.174,0.274,0.395},{0.582,0.72,0.887},0.5};
			earlySun[] = {-2.5,{0.675,0.69,0.784},{0.22,0.322,0.471},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.424,0.549,0.745},{0.698,0.753,0.894},1};
			sunrise[] = {0,{0.675,0.69,0.784},{0.478,0.51,0.659},{0.2,0.19,0.07},{0.124,0.161,0.236},{{0.847,0.855,0.965},0.2},{{0.933,0.949,0.996},2},1};
			earlyMorning[] = {3,{{0.844,0.61,0.469},0.8},{0.424,0.557,0.651},{{1,0.45,0.2},1},{0.12,0.26,0.38},{{0.428,0.579,0.743},2},{{0.844,0.61,0.469},2.7},1};
			midMorning[] = {8,{{0.822,0.75,0.646},3.8},{{0.383,0.58,0.858},1.3},{{1.3,0.9,0.61},2.8},{{0.12,0.18,0.28},0.5},{{0.322,0.478,0.675},3.5},{{1.0,0.929,0.815},4.7},1};
			morning[] = {16,{{1,0.95,0.91},12.2},{{0.12,0.18,0.28},9.2},{{1,0.95,0.91},11.2},{{0.12,0.18,0.28},8.5},{{0.14,0.18,0.24},11.0},{{0.5,0.6,0.9},13.2},1};
			noon[] = {45,{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.5,0.64,1.0},12.0},{{0.5,0.5,0.5},14.8},1,0.5,0.4,0.5,0.4};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0.0,0.002,0.003},{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.002,0.003},{0.0,0.002,0.003},0};
			fullNight[] = {-5,{0.023,0.023,0.023},{0.02,0.02,0.02},{0.023,0.023,0.023},{0.02,0.02,0.02},{0.01,0.01,0.02},{0.08,0.06,0.06},0};
			sunMoon[] = {-3.75,{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.035,0.04},{0.11,0.08,0.09},0.5};
			earlySun[] = {-2.5,{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.08,0.07,0.08},{0.14,0.1,0.12},0.5};
			earlyMorning[] = {3,{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+4"},{{1,1,1},"(-4)+5.5"},1};
			morning[] = {16,{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+7"},{{1,1,1},"(-4)+8"},1};
			lateMorning[] = {25,{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+12"},{{1,1,1},"(-4)+12.75"},1};
			noon[] = {45,{{1,1,1},10.0},{{1,1,1},9.0},{{1,1,1},9.0},{{1,1,1},8.0},{{0.5,0.64,1},12.0},{{0.5,0.5,0.5},14.8},1};
		};
		class EnvSounds: EnvSounds
		{
			class Default
			{
				name = "$STR_CFG_ENVSOUNDS_DEFAULT";
				sound[] = {"$DEFAULT$",0,1};
				soundNight[] = {"$DEFAULT$",0,1};
			};
			class Rain
			{
				name = "$STR_DN_RAIN";
				sound[] = {"A3\Sounds_F\dummysound",0.25118864,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.31622776,1,200};
			};
			class Sea
			{
				name = "$STR_DN_SEA";
				sound[] = {"A3\Sounds_F\dummysound",0.08912509,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.070794575,1,200};
				volume = "sea*(1-coast)";
			};
			class Coast
			{
				name = "$STR_A3_CfgEnvSounds_Coast0";
				sound[] = {"A3\Sounds_F\dummysound",0.08912509,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.05623413,1,200};
				volume = "coast";
			};
			class WindSlow
			{
				name = "$STR_A3_CfgEnvSounds_WindSlow0";
				sound[] = {"A3\Sounds_F\dummysound",0.019952621,1};
				volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
			};
			class WindMedium
			{
				name = "$STR_A3_CfgEnvSounds_WindMedium0";
				sound[] = {"A3\Sounds_F\dummysound",0.025118863,1};
				volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
			};
			class WindFast
			{
				name = "$STR_A3_CfgEnvSounds_WindFast0";
				sound[] = {"A3\Sounds_F\dummysound",0.031622775,1};
				volume = "(windy factor[0.66,1])-(night*0.25)";
			};
			class Forest
			{
				name = "$STR_A3_CfgEnvSounds_Forest0";
				sound[] = {"A3\Sounds_F\dummysound",0.017782792,1};
				volume = "forest*trees*(1-night)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.05623413,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.031622775,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,40,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,50,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class ForestNight
			{
				name = "$STR_A3_CfgEnvSounds_ForestNight0";
				sound[] = {"A3\Sounds_F\dummysound",0.011220184,1};
				volume = "forest*trees*night";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,70,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,10,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,40,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,30,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class Houses
			{
				name = "$STR_A3_CfgEnvSounds_Houses0";
				sound[] = {"A3\Sounds_F\dummysound",0.01584893,1};
				volume = "(houses-0.75)*4";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,100,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,15,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,25,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class HousesNight
			{
				name = "$STR_A3_CfgEnvSounds_HousesNight0";
				sound[] = {"A3\Sounds_F\dummysound",0.014125374,1};
				volume = "(houses-0.75)*4*night";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,80,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,15,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,15,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,30,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class Meadows
			{
				name = "$STR_A3_CfgEnvSounds_Meadows0";
				sound[] = {"A3\Sounds_F\dummysound",0.01584893,1};
				volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.06309573,1,70,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.06309573,1,100,0.12,15,25,30};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.06309573,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.06309573,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,100,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class MeadowsNight
			{
				name = "$STR_A3_CfgEnvSounds_MeadowsNight0";
				sound[] = {"A3\Sounds_F\dummysound",0.011220184,1};
				volume = "(1-forest)*(1-houses)*night*(1-sea)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,80,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class BattlefieldExplosions
			{
				sound0[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound1[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound2[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound3[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound4[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				random[] = {"sound0","sound1","sound2","sound3","sound4"};
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
			};
			class BattlefieldExplosions1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions4
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions5
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight4
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldHeli1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldHeli2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldHeli3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldJet1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldJet2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldJet3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class Earthquake_01
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE1";
				titles[] = {};
			};
			class Earthquake_02
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE2";
				titles[] = {};
			};
			class Earthquake_03
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE3";
				titles[] = {};
			};
			class Earthquake_04
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE4";
				titles[] = {};
			};
		};
		class Weather: Weather
		{
			class LightingNew
			{
				class Lighting0
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},0.2};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},0.05};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.044};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.04224};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0125,0.0125,0.0115};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting1
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting2
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting3
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 5;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting4
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},3};
					diffuseCloud[] = {{0.16,0.18,0.28},3};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.0115,0.012,0.0125};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting5
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},5};
					diffuseCloud[] = {{0.25,0.21,0.2},5};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting6
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},6};
					diffuseCloud[] = {{0.75,0.38,0.22},6};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting7
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},8.4};
					diffuseCloud[] = {{0.95,0.42,0.22},8.4};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting8
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},10.2};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting9
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},12.3};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting10
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},15.8};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.18816};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.18816};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting11
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting12
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting13
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0245,0.0245,0.02254};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting14
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting15
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting16
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 5;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting17
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},2.25};
					diffuseCloud[] = {{0.16,0.18,0.28},1.6875};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.01127,0.01176,0.01225};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting18
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},3.75};
					diffuseCloud[] = {{0.25,0.21,0.2},2.8125};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting19
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},4.5};
					diffuseCloud[] = {{0.75,0.38,0.22},3.375};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting20
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},6.72};
					diffuseCloud[] = {{0.95,0.42,0.22},5.04};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting21
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},7.65};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting22
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},9.225};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting23
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},11.85};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.18816};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.18816};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting24
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},12.75};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},13.616};
					ambientMidCloud[] = {{0.635,0.635,0.663},13.616};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},13.9564};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting25
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},13.94};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting26
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.09,0.137,0.22},1};
					diffuseCloud[] = {{0,0,0},0.75};
					ambient[] = {{0.09,0.137,0.22},1};
					ambientCloud[] = {{0.09,0.137,0.22},1};
					ambientMid[] = {{0.09,0.137,0.22},0.8624};
					ambientMidCloud[] = {{0.09,0.137,0.22},0.8624};
					groundReflection[] = {{0.09,0.137,0.22},0.758912};
					groundReflectionCloud[] = {{0.09,0.137,0.22},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.09,0.137,0.22};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting27
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.16954,0.239,0.37673};
					diffuseCloud[] = {0.042385,0.05975,0.094183};
					ambient[] = {{0.16954,0.239,0.37673},1};
					ambientCloud[] = {{0.16954,0.239,0.37673},1};
					ambientMid[] = {{0.173,0.239,0.373},0.8624};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.8624};
					groundReflection[] = {{0.14705,0.20315,0.31705},0.758912};
					groundReflectionCloud[] = {{0.14705,0.20315,0.31705},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting28
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting29
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting30
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.157,0.212,0.306},0.5625};
					diffuseCloud[] = {{0.03925,0.053,0.0765},0.39375};
					ambient[] = {{0.157,0.212,0.306},3.22};
					ambientCloud[] = {{0.157,0.212,0.306},3.22};
					ambientMid[] = {{0.157,0.208,0.298},3.96704};
					ambientMidCloud[] = {{0.157,0.208,0.298},3.96704};
					groundReflection[] = {{0.149,0.204,0.29},3.649677};
					groundReflectionCloud[] = {{0.149,0.204,0.29},3.649677};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.141,0.192,0.282},3.96704};
					apertureMin = 5;
					apertureStandard = 5;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting31
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.184,0.247,0.341},0.9375};
					diffuseCloud[] = {{0.046,0.06175,0.08525},0.65625};
					ambient[] = {{0.184,0.247,0.341},6.9};
					ambientCloud[] = {{0.184,0.247,0.341},6.9};
					ambientMid[] = {{0.184,0.243,0.329},5.95056};
					ambientMidCloud[] = {{0.184,0.243,0.329},5.95056};
					groundReflection[] = {{0.176,0.231,0.322},5.593526};
					groundReflectionCloud[] = {{0.176,0.231,0.322},5.593526};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.165,0.22,0.31},5.95056};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting32
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.216,0.286,0.384},1.125};
					diffuseCloud[] = {{0.054,0.0715,0.096},0.7875};
					ambient[] = {{0.216,0.286,0.384},7.8};
					ambientCloud[] = {{0.216,0.286,0.384},7.8};
					ambientMid[] = {{0.22,0.278,0.365},6.72672};
					ambientMidCloud[] = {{0.22,0.278,0.365},6.72672};
					groundReflection[] = {{0.204,0.267,0.353},6.457651};
					groundReflectionCloud[] = {{0.204,0.267,0.353},6.457651};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.188,0.247,0.341},6.72672};
					apertureMin = 7;
					apertureStandard = 7;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting33
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.255,0.325,0.42},1.68};
					diffuseCloud[] = {{0.06375,0.08125,0.105},1.176};
					ambient[] = {{0.255,0.325,0.42},8.4};
					ambientCloud[] = {{0.255,0.325,0.42},8.4};
					ambientMid[] = {{0.259,0.314,0.396},7.24416};
					ambientMidCloud[] = {{0.259,0.314,0.396},7.24416};
					groundReflection[] = {{0.239,0.294,0.376},7.099277};
					groundReflectionCloud[] = {{0.239,0.294,0.376},7.099277};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.216,0.275,0.373},7.24416};
					apertureMin = 8;
					apertureStandard = 8;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting34
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.298,0.365,0.451},2.55};
					diffuseCloud[] = {{0.0745,0.09125,0.11275},1.785};
					ambient[] = {{0.298,0.365,0.451},9.6};
					ambientCloud[] = {{0.298,0.365,0.451},9.6};
					ambientMid[] = {{0.302,0.349,0.416},8.27904};
					ambientMidCloud[] = {{0.302,0.349,0.416},8.27904};
					groundReflection[] = {{0.275,0.318,0.384},8.11346};
					groundReflectionCloud[] = {{0.275,0.318,0.384},8.11346};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.243,0.306,0.408},8.27904};
					apertureMin = 8;
					apertureStandard = 14;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting35
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{0.376,0.431,0.506},3.075};
					diffuseCloud[] = {{0.094,0.10775,0.1265},2.1525};
					ambient[] = {{0.376,0.431,0.506},10.9};
					ambientCloud[] = {{0.376,0.431,0.506},10.9};
					ambientMid[] = {{0.38,0.408,0.447},9.6138};
					ambientMidCloud[] = {{0.38,0.408,0.447},9.6138};
					groundReflection[] = {{0.329,0.361,0.396},9.421524};
					groundReflectionCloud[] = {{0.329,0.361,0.396},9.421524};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.286,0.353,0.463},9.6138};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting36
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{0.447,0.494,0.557},3.95};
					diffuseCloud[] = {{0,0,0},2.765};
					ambient[] = {{0.447,0.494,0.557},13.8};
					ambientCloud[] = {{0.447,0.494,0.557},13.8};
					ambientMid[] = {{0.455,0.467,0.475},12.44208};
					ambientMidCloud[] = {{0.455,0.467,0.475},12.44208};
					groundReflection[] = {{0.388,0.396,0.408},12.19324};
					groundReflectionCloud[] = {{0.388,0.396,0.408},12.19324};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.333,0.404,0.518},12.44208};
					apertureMin = 45;
					apertureStandard = 50;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting37
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.506,0.553,0.608},4.25};
					diffuseCloud[] = {0.1265,0.13825,0.152};
					ambient[] = {{0.506,0.553,0.608},14.8};
					ambientCloud[] = {{0.506,0.553,0.608},14.8};
					ambientMid[] = {{0.514,0.518,0.514},13.34368};
					ambientMidCloud[] = {{0.514,0.518,0.514},13.34368};
					groundReflection[] = {{0.435,0.439,0.439},13.07681};
					groundReflectionCloud[] = {{0.435,0.439,0.439},13.07681};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.369,0.447,0.565},13.34368};
					apertureMin = 70;
					apertureStandard = 100;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting38
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.549,0.596,0.651},4.25};
					diffuseCloud[] = {0.13725,0.149,0.16275};
					ambient[] = {{0.549,0.596,0.651},14.8};
					ambientCloud[] = {{0.549,0.596,0.651},14.8};
					ambientMid[] = {{0.557,0.557,0.585},14.21392};
					ambientMidCloud[] = {{0.557,0.557,0.585},14.21392};
					groundReflection[] = {{0.471,0.471,0.463},13.92964};
					groundReflectionCloud[] = {{0.471,0.471,0.463},13.92964};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.4,0.48,0.6},15};
					apertureMin = 70;
					apertureStandard = 110;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting39
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.6,0.8,1},2.8};
					diffuseCloud[] = {{0.6,0.8,1},2.8};
					ambient[] = {{0.4,0.9,1},0.84};
					ambientCloud[] = {{0.4,0.9,1},0.84};
					ambientMid[] = {{0.24,0.63,1},0.9072};
					ambientMidCloud[] = {{0.24,0.63,1},0.9072};
					groundReflection[] = {{0.24,0.63,1},0.870912};
					groundReflectionCloud[] = {{0.24,0.63,1},0.870912};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0,0.2355,0.2335};
					skyAroundSun[] = {0,0.2355,0.2335};
					fogColor[] = {{0.09,0.137,0.22},0.0275};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting40
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},2.1};
					diffuseCloud[] = {{0.6,0.8,1},2.1};
					ambient[] = {{0.4,0.9,1},3.68};
					ambientCloud[] = {{0.4,0.9,1},3.68};
					ambientMid[] = {{0.24,0.63,1},3.9744};
					ambientMidCloud[] = {{0.24,0.63,1},3.9744};
					groundReflection[] = {{0.24,0.63,1},3.815424};
					groundReflectionCloud[] = {{0.24,0.63,1},3.815424};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2235,0.2705},4.232};
					skyAroundSun[] = {{0,0.2235,0.2705},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting41
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},3.5};
					diffuseCloud[] = {{0.6,0.8,1},3.5};
					ambient[] = {{0.4,0.9,1},5.52};
					ambientCloud[] = {{0.4,0.9,1},5.52};
					ambientMid[] = {{0.24,0.63,1},5.9616};
					ambientMidCloud[] = {{0.24,0.63,1},5.9616};
					groundReflection[] = {{0.24,0.63,1},5.723136};
					groundReflectionCloud[] = {{0.24,0.63,1},5.723136};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2175,0.288},6.348};
					skyAroundSun[] = {{0,0.2175,0.288},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting42
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},4.2};
					diffuseCloud[] = {{0.6,0.8,1},4.2};
					ambient[] = {{0.4,0.9,1},6.24};
					ambientCloud[] = {{0.4,0.9,1},6.24};
					ambientMid[] = {{0.24,0.63,1},6.7392};
					ambientMidCloud[] = {{0.24,0.63,1},6.7392};
					groundReflection[] = {{0.24,0.63,1},6.469632};
					groundReflectionCloud[] = {{0.24,0.63,1},6.469632};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2115,0.306},7.176};
					skyAroundSun[] = {{0,0.2115,0.306},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting43
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.02541};
					groundReflectionCloud[] = {{0.36,0.72,1},11.02541};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting44
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.02541};
					groundReflectionCloud[] = {{0.36,0.72,1},11.02541};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0.0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1.0;
				};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_clear_lco.paa";
				};
				class Weather7: Weather1
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_clear_lco.paa";
				};
				class Weather2: Weather2
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_clear_lco.paa";
				};
				class Weather3: Weather3
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_cloudy_lco.paa";
				};
				class Weather4: Weather4
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_cloudy_lco.paa";
				};
				class Weather5: Weather5
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_overcast_lco.paa";
				};
				class Weather6: Weather6
				{
					sky = "A3\Map_Tanoabuka\data\sky_clear_gs.paa";
					horizon = "A3\Map_Tanoabuka\data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Tanoabuka\data\sky_overcast_lco.paa";
				};
			};
		};
		humidityUpCoef = 0.1;
		humidityDownCoef = 0.05;
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000.0;
			fadeMaxAltitudeKm = 15.0;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1000000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4.0;
			opticalDensity = 0.5;
			alphaSharpness = 0.85;
			selfShadowScale = 0.905;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6.0;
			directLightCoef = 1.0;
			indirectLightCoef = 0.04;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 5.0;
				hazeScaleKm = 1.0;
				hazeEccentricity = 1;
				brightnessAdjustment = 1.0;
				cloudiness = 0.6;
				cloudBaseKm = 2.85;
				cloudHeightKm = 6.0;
				directLight = 1.0;
				indirectLight = 1.0;
				ambientLight = 0.2;
				noiseOctaves = 4.3;
				noisePersistence = 0.535;
				fractalAmplitude = 2.3;
				fractalWavelength = 240.0;
				extinction = 4.7;
				diffusivity = 0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0.0;
					cloudiness = 0.0;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.25;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.45;
					diffusivity = 0.001;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.5;
					cloudiness = 0.46;
					diffusivity = 0.01;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.8;
					diffusivity = 0.01;
					extinction = 4.3;
					cloudBaseKm = 1.9;
					cloudHeightKm = 8.0;
					seqFileKeyframe = 4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1.0;
					cloudiness = 1.0;
					diffusivity = 0.001;
					extinction = 4.0;
					cloudBaseKm = 1.7;
					cloudHeightKm = 10.0;
					seqFileKeyframe = 4;
				};
			};
		};
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		skyObject = "A3\Map_Tanoabuka\data\skydome.p3d";
		horizontObject = "A3\Map_Tanoabuka\data\horizon.p3d";
		skyTexture = "A3\Map_Tanoabuka\data\sky_semicloudy_sky.paa";
		skyTextureR = "A3\Map_Tanoabuka\data\sky_semicloudy_lco.paa";
		terrainBlendMaxDarkenCoef = 1.0;
		terrainBlendMaxBrightenCoef = 0.0;
		clutterGrid = 0.8;
		clutterDist = 100;
		noDetailDist = 50;
		fullDetailDist = 5;
		clutterRoadwayCheckRadiusCoef = 0.8;
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = 5.0;
		clutterColoringFarStart = 20.0;
		clutterColoringFarSpeed = 2.0;
		midDetailTexture = "A3\Map_Tanoabuka\Data\L_middle_mco.paa";
		class clutter
		{
			class c_GrassBunch_HI: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_HI.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.3;
			};
			class c_GrassBunch_LO: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_LO.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.65;
				scaleMax = 1.4;
			};
			class c_GrassTropic: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_Tropic.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.65;
				scaleMax = 1.4;
			};
			class c_Grass_nettle: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_nettle.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.8;
				scaleMax = 1.6;
			};
			class c_Grass_Leaves_coltsfoot: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_Leaves_coltsfoot.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_Grass_mimosa: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_mimosa.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.4;
				scaleMax = 1.3;
			};
			class c_Grass_leaf_big: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_leaf_big.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_Grass_short_small: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_small.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.9;
			};
			class c_Grass_short_bunch: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_bunch.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class c_Grass_short_leaf: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_leaf.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.6;
			};
			class c_Grass_short_mimosa: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_mimosa.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class c_Grass_short_nettle: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_nettle.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class c_forest_BiglLeaves: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_forest_BiglLeaves2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves2.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_forest_fern: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_fern.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.8;
				scaleMax = 1.65;
			};
			class c_forest_roots: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_roots.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.4;
				scaleMax = 2.2;
			};
			class c_forest_violet_leaves: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.05;
			};
			class c_forest_violet_single: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_single.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.1;
			};
			class c_forest_violet_leaves2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves2.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.15;
			};
			class c_red_dirt_leaves: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_leaves.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 1.0;
				scaleMax = 1.2;
			};
			class short_Grass: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_short_Grass.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.1;
				scaleMax = 1.9;
			};
			class sparse_Grass: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_sparse_Grass.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 1.25;
				scaleMax = 1.6;
			};
			class sparse_Grass2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_sparse_Grass2.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class small_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_small_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 1;
				scaleMin = 0.3;
				scaleMax = 0.85;
			};
			class large_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_large_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class mimosa: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_mimosa.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class volcano_Grass: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_Grass.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 1.2;
				scaleMax = 1.5;
			};
			class volcano_GrassMix: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_GrassMix.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 1.5;
				scaleMax = 1.6;
			};
			class volcano_GrassMix2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_GrassMix2.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 1.5;
				scaleMax = 1.6;
			};
			class volcano_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.2;
			};
			class volcano_LargeStone: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_LargeStone.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class rock_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Cliff\c_rock_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 1.18;
			};
			class SeaWeed1Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_SeaWeed1_exp.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.25;
				scaleMax = 1.0;
			};
			class SeaWeed2Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_SeaWeed2_exp.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 1.0;
			};
			class Coral1Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral1_exp.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral2Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral2_exp.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral3Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral3_exp.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral4Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral4_exp.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral5Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral5_exp.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 1.0;
			};
		};
		
		class Ambient{};
		class AmbientA3
		{
			maxCost = 500;
			class Radius440_500
			{
				areaSpawnRadius = 440.0;
				areaMaxRadius = 500.0;
				spawnCircleRadius = 30.0;
				spawnInterval = 4.7;
				class Species
				{
					class Kestrel_random_F
					{
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night) * (1-rain)";
						maxWorldCount = 4;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Seagull
					{
						maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
						maxWorldCount = 8;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Crowe
					{
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night)";
						maxWorldCount = 8;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
				};
			};
			class Radius40_60
			{
				areaSpawnRadius = 50.0;
				areaMaxRadius = 83.0;
				spawnCircleRadius = 10.0;
				spawnInterval = 1.5;
				class Species
				{
					class CatShark_F
					{
						maxCircleCount = "(4 * (WaterDepth interpolate [1,30,0,1]))";
						maxWorldCount = 30;
						cost = 6;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 10;
						minAlt = -80;
					};
					class Turtle_F
					{
						maxCircleCount = "(2 * (waterDepth interpolate [1,16,0,1]) * ((1-houses) * (1-houses)))";
						maxWorldCount = 12;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 10;
						minAlt = -80;
					};
					class Salema_F
					{
						maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 20;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Ornate_random_F
					{
						maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.05))";
						maxWorldCount = 15;
						cost = 5;
						spawnCount = 3;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mackerel_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mullet_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 7;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Tuna_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) - 0.2))";
						maxWorldCount = 20;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
				};
			};
			class Radius30_40
			{
				areaSpawnRadius = 30.0;
				areaMaxRadius = 40.0;
				spawnCircleRadius = 3.0;
				spawnInterval = 3.75;
				class Species
				{
					class DragonFly
					{
						maxCircleCount = "4 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * sea * (1 - windy) * (1-rain)";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class ButterFly_random
					{
						maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1-rain)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius15_20
			{
				areaSpawnRadius = 15.0;
				areaMaxRadius = 20.0;
				spawnCircleRadius = 2.0;
				spawnInterval = 2.85;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf1
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf2
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf3
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPollen1
					{
						maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPaper1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 1;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPlastic1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 1;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius = 6.0;
				areaMaxRadius = 10.0;
				spawnCircleRadius = 1.0;
				spawnInterval = 0.1;
				class Species
				{
					class HoneyBee
					{
						maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy) * (1-rain)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class HouseFly
					{
						maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1-rain)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class Mosquito
					{
						maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1-rain)";
						maxWorldCount = 5;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
		};
		safePositionAnchor[] = {1218.14,3018.37};
		safePositionRadius = 50;
 
		class Subdivision{};
		class Names
		{
			class ecole
			{
				name = "$STR_ATOLLSGDC_LOCATION_ECOLE";
				position[] = {2510.08,1949.18};
				type = "NameVillage";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class port_migoyan
			{
				name = "$STR_ATOLLSGDC_LOCATION_PORT_MIGOYAN";
				position[] = {2173.3,1557.59};
				type = "NameVillage";
				radiusA = 55.0;
				radiusB = 67.0;
				angle = 56.6;
			};
			class QG
			{
				name = "$STR_ATOLLSGDC_LOCATION_QG";
				position[] = {904.164,2723.75};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class cabane_chasseurs
			{
				name = "$STR_ATOLLSGDC_LOCATION_CABANE_CHASSEURS";
				position[] = {2191.41,2289.34};
				type = "Name";
				radiusA = 0.0;
				radiusB = 0.0;
				angle = 0.0;
			};
			class shinriel
			{
				name = "$STR_ATOLLSGDC_LOCATION_SHINRIEL";
				position[] = {2519.24,2719.94};
				type = "NameCity";
				radiusA = 59.6;
				radiusB = 91.4;
				angle = 53.4;
			};
			class ferme_akuseru
			{
				name = "$STR_ATOLLSGDC_LOCATION_FERME_AKUSERU";
				position[] = {2306.05,2679.85};
				type = "Name";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class woami
			{
				name = "$STR_ATOLLSGDC_LOCATION_WOAMI";
				position[] = {2115.59,1791.55};
				type = "NameVillage";
				radiusA = 89.2;
				radiusB = 51.4;
				angle = 0.0;
			};
			class goyahka
			{
				name = "$STR_ATOLLSGDC_LOCATION_GOYAHKA";
				position[] = {1971.78,1752.9};
				type = "Name";
				radiusA = 40.0;
				radiusB = 36.0;
				angle = 0.0;
			};
			class fort_bruno
			{
				name = "$STR_ATOLLSGDC_LOCATION_FORT_BRUNO";
				position[] = {2012.71,2815.26};
				type = "Name";
				radiusA = 39.0;
				radiusB = 62.0;
				angle = 196.9;
			};
			class fort_ashrak
			{
				name = "$STR_ATOLLSGDC_LOCATION_FORT_ASHRAK";
				position[] = {599.547,2759.38};
				type = "Name";
				radiusA = 17.0;
				radiusB = 17.0;
				angle = 0.0;
			};
			class fort_patxie
			{
				name = "$STR_ATOLLSGDC_LOCATION_FORT_PATXIE";
				position[] = {919.321,3933.28};
				type = "Name";
				radiusA = 35.0;
				radiusB = 35.0;
				angle = 0.0;
			};
			class isokino
			{
				name = "$STR_ATOLLSGDC_LOCATION_ISOKINO";
				position[] = {2568.6,911.62};
				type = "NameVillage";
				radiusA = 64.2;
				radiusB = 39.2;
				angle = 307.5;
			};
			class cale_setch
			{
				name = "$STR_ATOLLSGDC_LOCATION_CALE_SETCH";
				position[] = {572.531,3681.03};
				type = "NameVillage";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class weldrid_airfield
			{
				name = "$STR_ATOLLSGDC_LOCATION_WELDRID_AIRFIELD";
				position[] = {1239.56,2846.88};
				type = "NameCity";
				radiusA = 80.0;
				radiusB = 262.0;
				angle = 0.0;
			};
			class kaddosh
			{
				name = "$STR_ATOLLSGDC_LOCATION_KADDOSH";
				position[] = {273.684,3418.73};
				type = "NameVillage";
				radiusA = 30.0;
				radiusB = 30.0;
				angle = 0.0;
			};
			class relai_naad
			{
				name = "$STR_ATOLLSGDC_LOCATION_RELAI_NAAD";
				position[] = {2109.91,2638.26};
				type = "Name";
				radiusA = 28.0;
				radiusB = 28.0;
				angle = 0.0;
			};
			class temple_nemo
			{
				name = "$STR_ATOLLSGDC_LOCATION_TEMPLE_NEMO";
				position[] = {3613.4,1071.62};
				type = "Name";
				radiusA = 30.0;
				radiusB = 30.0;
				angle = 0.0;
			};
			class manoir_ben
			{
				name = "$STR_ATOLLSGDC_LOCATION_MANOIR_BEN";
				position[] = {2519.93,670.257};
				type = "Name";
				radiusA = 38.0;
				radiusB = 38.0;
				angle = 0.0;
			};
			class redemption_bezboul
			{
				name = "$STR_ATOLLSGDC_LOCATION_REDEMPTION_BEZBOUL";
				position[] = {2346.88,2439.89};
				type = "Name";
				radiusA = 39.0;
				radiusB = 39.0;
				angle = 0.0;
			};
			class cache_scarlok
			{
				name = "$STR_ATOLLSGDC_LOCATION_CACHE_SCARLOK";
				position[] = {384.291,3095.79};
				type = "Name";
				radiusA = 39.0;
				radiusB = 39.0;
				angle = 0.0;
			};
			class pata
			{
				name = "$STR_ATOLLSGDC_LOCATION_PATA";
				position[] = {2287.84,2882.75};
				type = "Name";
				radiusA = 40.0;
				radiusB = 40.0;
				angle = 0.0;
			};
			// ground
			class mont_sardo
			{
				name = "$STR_ATOLLSGDC_LOCATION_MONT_SARDO";
				position[] = {1882.47,1719.23};
				type = "Hill";
				radiusA = 90.9;
				radiusB = 55.2;
				angle = 165.9;
			};
			class enfer_bluth
			{
				name = "$STR_ATOLLSGDC_LOCATION_ENFER_BLUTH";
				position[] = {3342.83,1388.27};
				type = "NameLocal";
				radiusA = 86.3;
				radiusB = 45.8;
				angle = 27.3;
			};
			class nipasasse
			{
				name = "$STR_ATOLLSGDC_LOCATION_NIPASASSE";
				position[] = {3492.22,351.887};
				type = "NameLocal";
				radiusA = 409.4;
				radiusB = 212.8;
				angle = 131.6;
			};
			class plainte_jay
			{
				name = "$STR_ATOLLSGDC_LOCATION_PLAINTE_JAY";
				position[] = {3248.23,2177.35};
				type = "NameLocal";
				radiusA = 114.6;
				radiusB = 257.9;
				angle = 210.3;
			};
			class izu
			{
				name = "$STR_ATOLLSGDC_LOCATION_IZU";
				position[] = {1005.49,2068.56};
				type = "NameLocal";
				radiusA = 107.5;
				radiusB = 107.5;
				angle = 0.0;
			};
			class bouchon_tanin
			{
				name = "$STR_ATOLLSGDC_LOCATION_BOUCHON_TANIN";
				position[] = {1727.6,3270.66};
				type = "NameLocal";
				radiusA = 61.0;
				radiusB = 168.7;
				angle = 157.8;
			};
			class gisant_sharko
			{
				name = "$STR_ATOLLSGDC_LOCATION_GISANT_SHARKO";
				position[] = {2136.23,1056.97};
				type = "NameLocal";
				radiusA = 183.4;
				radiusB = 355.4;
				angle = 180.4;
			};
			class cretes_dranac
			{
				name = "$STR_ATOLLSGDC_LOCATION_CRETE_DRANAC";
				position[] = {2104.53,2004.26};
				type = "Hill";
				radiusA = 64.7;
				radiusB = 102.3;
				angle = 26.7;
			};
			class foret_mystery
			{
				name = "$STR_ATOLLSGDC_LOCATION_FORET_MYSTERY";
				position[] = {2640.33,2274.45};
				type = "VegetationPalm";
				radiusA = 91.9;
				radiusB = 283.6;
				angle = 348.0;
			};
			class cap_guerrier
			{
				name = "$STR_ATOLLSGDC_LOCATION_CAP_GUERRIER";
				position[] = {1479.88,3577.34};
				type = "NameLocal";
				radiusA = 115.9;
				radiusB = 129.5;
				angle = 323.7;
			};
			class pointe_suedois
			{
				name = "$STR_ATOLLSGDC_LOCATION_POINTE_SUEDOIS";
				position[] = {2733.2,291.701};
				type = "NameLocal";
				radiusA = 50.0;
				radiusB = 96.0;
				angle = 328.3;
			};
			class random_island
			{
				name = "$STR_ATOLLSGDC_LOCATION_RANDOM_ISLAND";
				position[] = {3270.39,1751.12};
				type = "NameLocal";
				radiusA = 236.0;
				radiusB = 125.8;
				angle = 193.4;
			};
			class opossum
			{
				name = "$STR_ATOLLSGDC_LOCATION_OPOSSUM";
				position[] = {1475.49,1607.51};
				type = "NameLocal";
				radiusA = 114.5;
				radiusB = 96.4;
				angle = 0.0;
			};
			class plage_bitum
			{
				name = "$STR_ATOLLSGDC_LOCATION_PLAGE_BITUM";
				position[] = {633.933,3004.69};
				type = "NameLocal";
				radiusA = 225.0;
				radiusB = 64.5;
				angle = 218.7;
			};
			class morbakos
			{
				name = "$STR_ATOLLSGDC_LOCATION_MORBAKOS";
				position[] = {439.579,2480.13};
				type = "NameLocal";
				radiusA = 84.1;
				radiusB = 345.4;
				angle = 306.1;
			};
			// Sea
			class raz_schmurf
			{
				name = "$STR_ATOLLSGDC_LOCATION_RAZ_SCHMURF";
				position[] = {1195.71,1863.16};
				type = "NameMarine";
				radiusA = 464.9;
				radiusB = 532.1;
				angle = 279.8;
			};
			class baie_guerzene
			{
				name = "$STR_ATOLLSGDC_LOCATION_BAIE_GUERZENE";
				position[] = {953.972,3353.32};
				type = "NameMarine";
				radiusA = 417.0;
				radiusB = 417.0;
				angle = 0.0;
			};
			class anse_freezbe
			{
				name = "$STR_ATOLLSGDC_LOCATION_ANSE_FREEZBE";
				position[] = {3114.75,810.586};
				type = "NameMarine";
				radiusA = 492.6;
				radiusB = 492.6;
				angle = 0.0;
			};
			class passe_nico
			{
				name = "$STR_ATOLLSGDC_LOCATION_PASSE_NICO";
				position[] = {2658.01,1546.59};
				type = "NameMarine";
				radiusA = 417.5;
				radiusB = 118.3;
				angle = 328.3;
			};
			class etang_grenouilles
			{
				name = "$STR_ATOLLSGDC_LOCATION_ETANG_GRENOUILLES";
				position[] = {2429.79,2154.11};
				type = "NameMarine";
				radiusA = 141.4;
				radiusB = 235.4;
				angle = 13.8;
			};
			class see_gan
			{
				name = "$STR_ATOLLSGDC_LOCATION_SEE_GAN";
				position[] = {2914.79,3304.75};
				type = "NameMarine";
				radiusA = 1283.2;
				radiusB = 603.0;
				angle = 27.1;
			};
			//wrecks
			class eldouze
			{
				name = "$STR_ATOLLSGDC_LOCATION_ELDOUZE";
				position[] = {1004.5,1732.84};
				type = "Name";
				radiusA = 20.0;
				radiusB = 20.0;
				angle = 0.0;
			};
			class lilian
			{
				name = "$STR_ATOLLSGDC_LOCATION_LILIAN";
				position[] = {3625.32,434.108};
				type = "Name";
				radiusA = 20.0;
				radiusB = 20.0;
				angle = 0.0;
			};
			class looping
			{
				name = "$STR_ATOLLSGDC_LOCATION_LOOPING";
				position[] = {2968.11,1481.54};
				type = "Name";
				radiusA = 20.0;
				radiusB = 20.0;
				angle = 0.0;
			};
			class wilco
			{
				name = "$STR_ATOLLSGDC_LOCATION_WILCO";
				position[] = {1197.14,3851.86};
				type = "Name";
				radiusA = 20.0;
				radiusB = 20.0;
				angle = 0.0;
			};
			class totor
			{
				name = "$STR_ATOLLSGDC_LOCATION_TOTOR";
				position[] = {232.191,2651.84};
				type = "Name";
				radiusA = 20.0;
				radiusB = 20.0;
				angle = 0.0;
			};
		};
		loadingTexts[] = {"$STR_ATOLLSGDC_LOADINGTEXT_CANARDS","$STR_ATOLLSGDC_LOADINGTEXT_BRETONS","$STR_ATOLLSGDC_LOADINGTEXT_SARDO","$STR_ATOLLSGDC_LOADINGTEXT_PISTE","$STR_ATOLLSGDC_LOADINGTEXT_MIGOYAN","$STR_ATOLLSGDC_LOADINGTEXT_ECOLE","$STR_ATOLLSGDC_LOADINGTEXT_CHASSE"};
	};
};

