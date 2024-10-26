class CfgPatches
{
    class CS_Buildables
    {
		units[]={};
		weapons[]={};
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class CS_Buildables
	{	
		dir = "CS_Buildables";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_Buildables";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"CS_Buildables/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"CS_Buildables/Scripts/4_World"};
			};
		};
	};
};
