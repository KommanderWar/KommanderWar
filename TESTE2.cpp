class CfgPatches
{
    class Amigos_MODPACK
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Tops",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Gear_Camping",
			"DZ_Data"
        };
    };
};
class CfgMods
{
    class Amigos_MODPACK
    {
        dir="Amigos_MODPACK";
        picture="";
        action="https://steamcommunity.com/id/KommanderWar/";
        hideName=0;
        hidePicture=0;
        name="PACK DE MODS do SERVER AMIGOS";
        credits="76561198135264603";
        author="76561198135264603";
        authorID="76561198135264603";
        version="1";
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
            class gameScriptModule
            {
                value="";
                files[]=
                {
                    "Amigos_MODPACK/scripts/3_Game"
                };
            };
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "Amigos_MODPACK/scripts/4_World"
                };
            };
            class missionScriptModule
            {
                value="";
                files[]=
                {
                    "Amigos_MODPACK/scripts/5_Mission"
                };
            };
        };
    };
};
class cfgVehicles
{
    class Clothing_Base;
    class Clothing: Clothing_Base {};
    class CoyoteBag_ColorBase: Clothing {};
	class HikingJacket_ColorBase: Clothing {};
	class TTSKOPants: Clothing {};
	class Flag_DayZ {};
	class PlateCarrierVest: Clothing {};
    class AMIGOS_COYOTE_BLACK: CoyoteBag_ColorBase
    {scope=2;
        displayName="Mochila Táctica Amigos Preta";
        descriptionShort="A Mochila Coyote/Táctica Preta oferece a você a quantidade de espaço ideal para sua sobrevivência e o charme do servidor amigos :D";
        itemsCargoSize[]={10,9};
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\AMIGOS_Coyote_BLACK.paa",
            "\Amigos_MODPACK\data\AMIGOS_Coyote_BLACK.paa",
            "\Amigos_MODPACK\data\AMIGOS_Coyote_BLACK.paa"
        };
    };
    class Amigos_Hiking_JacketVerde: HikingJacket_ColorBase
    {scope=2;
        displayName="Hiking Jacket Amigos Verde";
        descriptionShort="A Hiking Jacket Amigos Verde oferece conforto e uma razoável quantidade de espaço durante sua sobrevivência.";
        itemsCargoSize[]={5,8};
		quickBarBonus=3;
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketVerde.paa",
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketVerde.paa",
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketVerde.paa"
        };
    };
    class Amigos_Hiking_JacketBlack: HikingJacket_ColorBase
    {scope=2;
        displayName="Hiking Jacket Amigos Preta";
        descriptionShort="A Hiking Jacket Amigos Preta oferece conforto e uma razoável quantidade de espaço durante sua sobrevivência.";
        itemsCargoSize[]={5,8};
		quickBarBonus=3;
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketBlack.paa",
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketBlack.paa",
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketBlack.paa"
        };
    };
    class Amigos_Hiking_JacketAzul: HikingJacket_ColorBase
    {scope=2;
        displayName="Hiking Jacket Amigos Azul";
        descriptionShort="A Hiking Jacket Amigos Azul oferece conforto e uma razoável quantidade de espaço durante sua sobrevivência.";
        itemsCargoSize[]={5,8};
		quickBarBonus=3;
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketAzul.paa",
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketAzul.paa",
            "\Amigos_MODPACK\data\Amigos_Hiking_JacketAzul.paa"
        };
    };
    class Amigos_TTSKO_BLACK: TTSKOPants
    {scope=2;
        displayName="Calça de Combate Amigos Preta ";
        descriptionShort="A Calça TTSKO ou como mais conhecida Calça de Combate Preta do servidor amigo te garante bastante espaço e um diferencial de cor.";
        itemsCargoSize[]={6,6};
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_TTSKO_BLACK.paa",
            "\Amigos_MODPACK\data\Amigos_TTSKO_BLACK.paa",
            "\Amigos_MODPACK\data\Amigos_TTSKO_BLACK.paa"
        };
    };
	class Amigos_Plate_Carrier_Preto: PlateCarrierVest
	{scope=2;
        displayName="Plate Carrier Preto";
        descriptionShort="Colete Preto Amigos";
		weight=10000;
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Plate_Carrier_Preto.paa",
            "\Amigos_MODPACK\data\Amigos_Plate_Carrier_Preto.paa",
            "\Amigos_MODPACK\data\Amigos_Plate_Carrier_Preto.paa"
        };
    };
    class Amigos_Flag_Azul: Flag_DayZ
    {scope=2;
        displayName="Bandeira Amigos Azul";
        descriptionShort="Uma Bandeira usada para demarcar território.";
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Flag_Azul.paa"
        };
    };
	class Amigos_Flag_Branco: Flag_DayZ
    {scope=2;
        displayName="Bandeira Amigos Branca";
        descriptionShort="Uma Bandeira usada para demarcar território.";
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Flag_Branco.paa"
        };
    };
	class Amigos_Flag_Verde: Flag_DayZ
    {scope=2;
        displayName="Bandeira Amigos Verde";
        descriptionShort="Uma Bandeira usada para demarcar território.";
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Flag_Verde.paa"
        };
    };
	class Amigos_Flag_Vermelho: Flag_DayZ
    {scope=2;
        displayName="Bandeira Amigos Vermelha";
        descriptionShort="Uma Bandeira usada para demarcar território.";
        hiddenSelectionsTextures[]=
        {
            "\Amigos_MODPACK\data\Amigos_Flag_Vermelho.paa"
        };
    };
};
