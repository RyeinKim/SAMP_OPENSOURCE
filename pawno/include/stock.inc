/*
�������� ��Ŭ���
Don_Dota(���)
���� 2:20 2010-11-13

*/

#define SCM SendClientMessage
#define SCMToAll SendClientMessageToAll
#define M_P 500
new bool:Hide[M_P];


forward Stopit(playerid);
public Stopit(playerid)
{
	SendClientMessage(playerid, 0xFFFFFFFF,"(����) 5�ʰ� �������ϴ� ������ ��߽�Ű�ʽÿ�.");
    SetPlayerFreeze(playerid, false, 0);
	TogglePlayerControllable(playerid, 1);
}
stock c_fwrite( File: handle, const str[] )
{
 for( new c_fwval = 0; c_fwval < strlen( str );  c_fwval++ )
  fputchar( handle, str[c_fwval], false);
 return ;
}
stock RPPlayerName (playerid)
{
	new playername[MAX_PLAYER_NAME];
	if(Hide[playerid])
	{
		playername="�˼�����";
	}
	else
	{
		GetPlayerName(playerid, playername, sizeof(playername));
		new PlyName1 = strfind(playername,"_", true);
		if(PlyName1 != -1)
		{
			playername[PlyName1] = ' ';
		}
	}
	return playername;
}
stock GetName(playerid)
{
	new pname[MAX_PLAYER_NAME];
	GetPlayerName(playerid, pname, sizeof(pname));
	return pname;
}
stock GetMemberName(member)
{
	new string[256];
	switch(member)
	{
	case 1: string="L.S.P.D";
	case 2: string="F.B.I";
	case 3: string="U.N";
	case 4: string="E.M.T";
	case 5: string="Locotes";
	case 6: string="Terranova Crime Famiglia";
	case 7: string="����";
	case 8: string="M.M.C";
	case 9: string="H.N.N";
	case 10: string="LS-PCT";
	case 11: string="Moters";
	case 12: string="Crip's";
	case 13: string="Cyco Clika";
	case 14: string="Yamaguchi_Gumi";
	case 15: string="߲����";
	case 16: string="Seviles";
	case 17: string="Bloodz";
	case 18: string="������";
	case 19: string="Mongols Motorcycle Club";
	case 20: string="CB�׷�";
	case 21: string="Comfortable Development";
	case 22: string="������";
	case 23: string="CIA";
	case 24: string="CAMORRA";
	default: string="����";
	}
	return string;
}
//forwsard GetRankName(member, rank);
stock GetRankName(member, rank)
{
	new string[256];
	switch(member)
	{
	case 1:
		{
			switch(rank)
			{
			case 1: string="����";
			case 2: string="����";
			case 3: string="���";
			case 4: string="����";
			case 5: string="�氨";
			case 6: string="����";
			case 7: string="�Ѱ�";
			case 8: string="�湫��";
			case 9: string="ġ�Ȱ�";
			case 10: string="ġ������";
			case 11: string="ġ���Ѱ�";
			default: string="-���°��-";
			}
		}
		case 2:
		{
			switch(rank)
			{
			case 1: string="Trainee";
			case 2: string="Third Agent";
			case 3: string="Second Agent";
			case 4: string="First Agent";
			case 5: string="Special Agent";
			case 6: string="Associate Director";
			case 7: string="Deputy Director";
			case 8: string="Assistant Director";
			case 9: string="Director";
			default: string="-���°��-";
			}
		}
	case 16:
		{
			switch(rank)
			{
			case 0: string="Girl'G";
			case 1: string="T.G";
			case 2: string="B.G";
			case 3: string="Trug";
			case 4: string="O.G";
			case 5: string="Double O.G";
			case 6: string="Triple O.G";
			case 7: string="Top O.G";
			default: string="Girl'G";
			}
		}
	case 3:
		{
			switch(rank)
			{
			case 1: string="�Ʒú�";
			case 2: string="�̵";
			case 3: string="�ϵ";
			case 4: string="��";
			case 5: string="����";
			case 6: string="�ϻ�";
			case 7: string="�߻�";
			case 8: string="���";
			case 9: string="����";
			case 10: string="��������";
			case 11: string="����";
			case 12: string="����";
			case 13: string="����";
			case 14: string="����";
			case 15: string="�ҷ�";
			case 16: string="�߷�";
			case 17: string="���";
			case 18: string="����";
			case 19: string="����";
			case 20: string="����";
			case 21: string="����";
			case 22: string="��������";
			default: string="�Ʒú�";
			}
		}
	case 4:
		{
			switch(rank)
			{
			case 0: string="������";
			case 1: string="�ܺ�����";
			case 2: string="��������";
			case 3: string="������Ʈ";
			case 4: string="��ο�";
			case 5: string="�α���";
			case 6: string="����";
			case 7: string="������";
			case 8: string="������";
			case 9: string="�Ƿ����";
			default: string="����";
			}
		}
	case 5:
		{
			switch(rank)
			{
			}
		}
	case 6:
		{
			switch(rank)
			{
			case 0: string="Outsider";
			case 1: string="Associates";
			case 2: string="Made guy";
			case 3: string="Soldaty";
			case 4: string="Caporegima";
			case 5: string="Capo";
			case 6: string="UnderBoss";
			case 7: string="Consigliere";
			case 8: string="Boss";
			case 9: string="Godfather";
			default: string="Outsider";
			}
		}
	case 7:
		{
			switch(rank)
			{
			case 0: string="��û������";
			case 1: string="��";
			case 2: string="�񼭽���";
			case 3: string="��ȣ��";
			case 4: string="��ȣ����";
			case 5: string="�μ���";
			case 6: string="�μ���";
			case 7: string="�������";
			case 8: string="���ǿ�";
			case 9: string="�ν���";
			case 10: string="����";
			default: string="��û������";
			}
		}
	case 8:
		{
			switch(rank)
			{
			case 1: string="No.6";
			case 2: string="No.5";
			case 3: string="No.4";
			case 4: string="No.3";
			case 5: string="No.2";
			case 6: string="No.1";
			default: string="No.6";
			}
		}
	case 9:
		{
			switch(rank)
			{
			case 1: string="�Ʒû�";
			case 2: string="����";
			case 3: string="���� ����";
			case 4: string="������";
			case 5: string="�α���";
			case 6: string="����";
			default: string="�Ʒû�";
			}
		}
	case 10:
	    {
			switch(rank)
			{
			case 1: string="�Ʒû�";
			case 2: string="���Ա��";
			case 3: string="���ı��";
			case 4: string="������";
			case 5: string="�������";
			case 6: string="��������";
			case 7: string="��������";
			case 8: string="�λ���";
			case 9: string="����";
			default: string="�Ʒû�";
			}
		}
	case 11:
		{
			switch(rank)
			{
			case 1: string="�˹ٻ�";
			case 2: string="�����Ͼ�";
			case 3: string="�Ŵ���";
			case 4: string="�λ���";
			case 5: string="����";
			default: string="�˹ٻ�";
			}
		}
	case 12:
		{
			switch(rank)
			{
			case 6: string="Top O.G";
			case 5: string="Double O.G";
			case 4: string="O.G";
			case 3: string="O.T.G";
			case 2: string="T.G";
			case 1: string="B.G";
			default: string="B.G";
			}
		}
	case 13:
		{
			switch(rank)
			{
			}
		}
	case 14:
		{
			switch(rank)
			{
			case 1: string="������";
			case 2: string="������";
			case 3: string="������";
			case 4: string="������";
			case 5: string="����ȥ���� ȣ��";
			case 6: string="�����̰��ö�";
			case 7: string="��ȥ����";
			case 8: string="��ī���ö� ȣ��";
			case 9: string="����ȥ����";
			case 10: string="�����ڼ���";
			case 11: string="��ī���ö�";
			case 12: string="ī������";
			case 13: string="������";
			default: string="����";
			}
		}
	case 15:
		{
			switch(rank)
			{
			case 1: string="�����";
			case 2: string="�籸��";
			case 3: string="����";
			case 4: string="������";
			case 5: string="ȫ��";
			case 6: string="����";
			case 7: string="����";
			case 8:string="�λ���";
			case 9:string="���";
			default: string="-���°��-";
			}
		}
	case 17:
		{
			switch(rank)
			{
			case 6: string="Top O.G";
			case 5: string="R.Hand";
			case 4: string="L.Hand";
			case 3: string="O.G";
			case 2: string="B.G";
			case 1: string="Crew";
			default: string="Crew";
			}
		}
	case 18:
		{
			switch(rank)
			{
			case 0: string="����";
			case 1: string="�ܺ���";
			case 2: string="���ġ";
			case 3: string="��������";
			case 4: string="������";
			case 5: string="�ൿ����";
			case 6: string="����";
			case 7: string="������";
			case 8: string="�εθ�";
			case 9: string="�θ�";
			case 10: string="����";
			default: string="�ܺ���";
			}
		}
	case 19:
		{
			switch(rank)
			{
			case 1: string="Prospect";
			case 2: string="Mongol";
			case 3: string="Veteran";
			case 4: string="Sergant at Arms";
			case 5: string="Road Captain";
			case 6: string="Treasurer";
			case 7: string="Houston-President";
			case 8: string="President";
			default: string="Prospect";
			}
		}
	case 20:
		{
			switch(rank)
			{
			case 0: string="�Ѿ˹���";
			case 1: string="����";
			case 2: string="���ݺ�";
			case 3: string="Ư����";
			case 4: string="���ݺ�";
			case 5: string="����Ʈ";
			case 6: string="����Ʈ";
			}
		}
	case 21:
		{
			switch(rank)
			{
			case 1: string="��������";
			case 2: string="CD����";
			case 3: string="��������";
			case 4: string="��";
			case 5: string="CD����";
			default: string="�Ʒû�";
			}
		}
	case 22:
		{
			switch(rank)
			{
			case 1: string="����ú�";
			case 2: string="����";
			case 3: string="����";
			case 4: string="����";
			case 5: string="����";
			case 6: string="������";
			case 7: string="������";
			case 8: string="�������̻��";
			case 9: string="�����̻��";
			default: string="-���°��-";
			}
		}
	case 23:
		{
			switch(rank)
			{
			case 1: string="Trainee";
			case 2: string="Third Class";
			case 3: string="Second Class";
			case 4: string="First Class";
			case 5: string="Special Agent";
			case 6: string="Associate Director";
			case 7: string="Deputy Director";
			case 8: string="Assistant Director";
			case 9: string="Director";
			default: string="-���°��-";
			}
		}
	case 24:
		{
			switch(rank)
			{
			case 0: string="Outsider";
			case 1: string="Associates";
			case 2: string="Made guy";
			case 3: string="Soldaty";
			case 4: string="Caporegima";
			case 5: string="Capo";
			case 6: string="UnderBoss";
			case 7: string="Consigliere";
			case 8: string="Boss";
			case 9: string="Godfather";
			default: string="Outsider";
			}
		}
	default: string="����";
	}
	return string;
}
stock HostLeader(playerid)
{
	new playersip[20];
	GetPlayerIp(playerid,playersip,sizeof(playersip));
	if(strcmp(playersip, "127.0.0.1", true) == 0)
	{
	    return 1;
	}
	return 0;
}
stock FactionAdmin(playerid)
{
	new name[20];
	GetPlayerName(playerid, name, sizeof(name));
	if(strcmp(name, "Pablo_Albino", true) == 0||strcmp(name, "Albanos_Washington", true) == 0)
	{
	    return 1;
	}
	return 0;
}
stock SuperAdmin(playerid)
{
	new name[20];
	GetPlayerName(playerid, name, sizeof(name));
	if(strcmp(name, "Pablo_Albino", true) == 0||strcmp(name, "Santino_Valenti", true) == 0)
	{
	    return 1;
	}
	return 0;
}
stock gc(playerid)
{
	new name[20];
	GetPlayerName(playerid, name, sizeof(name));
	if(strcmp(name, "Maurice_Mcdonald", true) == 0)
	{
	    return 1;
	}
	return 0;
}
stock FTF(playerid, facingtoid)//���̽� �� ���̽�(�����÷��̾�,���)
{
	new Float:angle;
	new Float:misc = 5.0;
	new Float:x, Float:y, Float:z;
	new Float:ix, Float:iy, Float:iz;
	GetPlayerPos(facingtoid, x, y, z);
	GetPlayerPos(playerid, ix, iy, iz);
	angle = 180.0-atan2(ix-x,iy-y);
	angle += misc;
	misc *= -1;
	SetPlayerFacingAngle(playerid, angle+misc);
}