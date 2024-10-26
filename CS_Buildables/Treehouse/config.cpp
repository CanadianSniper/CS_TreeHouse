class CfgPatches
{
	class CS_Treehouse
	{
		units[]={"Land_CS_Treehouse","Land_CS_Treehouse_1","Land_CS_Treehouse_2","Land_CS_Treehouse_3","Land_CS_Treehouse_4","Land_CS_Treehouse_5"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Land_CS_Treehouse: HouseNoDestruct
	{
		scope = 1;
		model = "CS_Buildables\Treehouse\Treehouse.p3d";
	};
	class Land_CS_Treehouse_1: HouseNoDestruct
	{
		scope = 1;
		model = "CS_Buildables\Treehouse\Treehouse_1.p3d";
	};
	class Land_CS_Treehouse_2: HouseNoDestruct
	{
		scope = 1;
		model = "CS_Buildables\Treehouse\Treehouse_2.p3d";
	};
	class Land_CS_Treehouse_3: HouseNoDestruct
	{
		scope = 1;
		model = "CS_Buildables\Treehouse\Treehouse_3.p3d";
	};
	class Land_CS_Treehouse_4: HouseNoDestruct
	{
		scope = 1;
		model = "CS_Buildables\Treehouse\Treehouse_4.p3d";
	};
	class Land_CS_Treehouse_5: HouseNoDestruct
	{
		scope = 1;
		model = "CS_Buildables\Treehouse\Treehouse_5.p3d";
	};
};