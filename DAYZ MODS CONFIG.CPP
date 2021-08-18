class CfgPatches
{
    class Nome_da_Pasta
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Tops"
              //AQUI EM CIMA VC VAI COLOCAR DE ONDE OS ITENS QUE VC VAI USAR VÃO SER PEGOS é quase que um DIRETORIO por exemplo Dz/Characters_Pants, só adicionar e por , no final na ultima não precisa.
        };
    };
};
class cfgVehicles
{
    class Clothing_Base;
    class Clothing: Clothing_Base {};
    class CargoPants_ColorBase: Clothing {};
    class Nome_Do_Item_No_Menu_de_ADM: CargoPants_ColorBase
    {
        scope=2;
        displayName="Nome DO ITEM";
        descriptionShort="Descrição dahora, é importantissimo acredite";
      //aqui embaixo são os slots das roupas e sempre mutiplicar x na horizontal maximo é 10 e Y é na vertical, não sei se tem limite mas pfv ngm precisa de mais de 1000 espaços então coloca no máximo 100 (pode apagar essas linhas de dica que to escrevendo, que tem os // antes do texto, bom que já aprende certinho como funciona)
        itemsCargoSize[]={10,100};

        hiddenSelectionsTextures[]=
        {
            "\Nome_da_Pasta\data\ArquivoDeTextura1.paa",
            "\Nome_da_Pasta\data\ArquivoDeTextura1.paa",
            "\Nome_da_Pasta\data\ArquivoDeTextura1.paa"
        };
    };
    class M65Jacket_ColorBase: Clothing {};
    class Nome_Do_Item_No_Menu_de_ADM: M65Jacket_ColorBase //aqui é a "base do item" que vc vai usar não vou subistituir pq ainda não aprendi direito o que é.
    {
        scope=2;
        displayName="Nome DO ITEM";
        descriptionShort="Descrição dahora, é importantissimo acredite";
        itemsCargoSize[]={10,100};

        hiddenSelectionsTextures[]=
        {
            "\Nome_da_Pasta\data\ArquivoDeTextura2.paa",
            "\Nome_da_Pasta\data\ArquivoDeTextura2.paa",
            "\Nome_da_Pasta\data\ArquivoDeTextura2.paa"
        };
    };
};
