#define SERVER_FILE "user/serverconfig"
#pragma tabsize 0
main()
{
    	new file[256];
	format(file, sizeof(file),SERVER_FILE);
	if(!dini_Exists(file))
	{
		printf("-------------����-------------");
		printf("����� �ҹ������� �� ��带 ����Ͽ����ϴ�");
		printf(" ������ ����˴ϴ� ");
		SendRconCommand("exit");
	}
	else if(fexist(file))
	{
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print(" ");
		print("======================= New Ethiopia Role Playing Mode ===================");
		print(" ");
		print(" ");
		print("               Mode Maker : MatDongSan([J.F]Marry(dasfdasfsa))            ");
		print(" ");
		print(" ");
		print("==========================================================================");
		print(" ");
		print(" ");
	}
}