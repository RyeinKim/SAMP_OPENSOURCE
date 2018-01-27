#include a_samp.inc
#include dini.inc
#include dudb.inc
#include streamer.inc
#include utils.inc
#include a_npc.inc
#include gameinfo.inc
#include veh.inc
#include audio.inc


#define M_P 	200
#define Anim(%1) ApplyAnimation(%1,1)

#define Func:%0(%1) \
		forward %0(%1);\
		public %0(%1)

#define PLAYER_CAMERA_HEIGHT 20.0
#define CAMERA_ZOOM_VALUE 40.0 //ī�޶� ������� ����.
#define DEFAULT_CAMERA_ZOOM 120.0 //ī�޶� �⺻����
#define CAMERA_MOVE_DISTANCE 5.0 //ī�޶� �̵�����.
#define MISSILE_SPEED 50.0

#define callback:%0(%1) forward %0(%1); public %0(%1) // �ݹ��Լ� �����ϰ� �������ִ� ��ũ��.

#define MAX_SHOOT_DISTANCE 15.0
#define speedcolor 0x008080FF

enum pInfo
{
	Key[128],			    // ���
	pAdmin,                             // ����
        pGMNick[256],                       // GM�г���
        pOldGMNick[256],                    // ����� GM�� (�� �ٲٱ��� ��)
	pLevel,                             // ����
	pExp,                               // ����ġ
	pSex,                               // ����
	pAge,                               // ����
	pSkin,                              // ��Ų
	pTut,                               // Ʃ�丮��
	pPlayerSave,			    // ����
    	pLeader,                            // ����
	pMember,                            // ����
	pRank,                              // ���
	pCash,                              // ��
	pCay,                               // ����
	pAban,                              // ���̵��
	pSquad[2],			    // �д�
	pJail,                              // ��𸣰�
	pJailTime,                          // ��𸣰� �ð�
	pKos,                               // ���
	pCos,				    // Ī��
	pGoodjob,                           // ����
	pBadjob,			    // ¡��
	pPayDay,                            // ���޺���
	pMoneyTime,			    // ���޽ð�
	pBbox,                              // �չڽ�
	pDice,                              // �ֻ���
	pCigar,                             // ���
	pCia,				    // ��
	pCias,				    // ��(����/������)
	pCiac,				    // �ؼ���
	pHemostatic,                        // ����
	pCamera,                            // ī�޶�
	pAyg,                               // ����
	pRadio,                             // �缳������
	pWatch,                             // �ð�
	pClean,                             // ����
	pHungry,                            // �����
	pNotes[5],                          // �޸�
	pNote1[128],                        // �޸�[1]
	pNote2[128],                        // �޸�[2]
	pNote3[128],                        // �޸�[3]
	pNote4[128],                        // �޸�[4]
	pNote5[128],                        // �޸�[5]
	gExp[2],                            // ��� ����ġ
	pBomb,				    // ����
	Float:pBombPos,			    // ������ġ
	Float:pBoomPos[3],                  // ������ġ
	pLeaderCool,			    // ���� ���ð�
	pFrequency,			    // ���� ���ļ�
	pNationalmoney,			    // ����� �ݾ�
	pHops,				    // Ȯ����
	pCuffed,			    // ����ö��
	pBombCf,			    // ��ȣź
	pPlayerChoco,			    // ��纴
	pPlayerDie,			    // ����
	pPlayerDeath,			    // ����
	pDieTime,			    // ȥ������ �ð�
	pChoco[2],                          // ����
	pChoco1[128],                       // ����[1]
	pChoco2[128]                        // ����[2]
	pAdminCheck			   //����üũ
}
new PlayerInfo[MAX_PLAYERS][pInfo];

new CaptureTimers[M_P][6];

new ArmyGate1[3]; 			  // [0] = �ź��� [1] = ������ ��� �ð�
new ArmyGate2[3]; 			  // [0] = Ĳ ���� [1] = ������ ��� �ð�
new ArmyGate3[3]; 			  // [0] = ���� [1] = ������ ��� �ð�
new ArmyGate4[3]; 			  // [0] = ������ [1] = ������ ��� �ð�
new ArmyGate5[3]; 			  // [0] = ��� [1] = ������ ��� �ð�
new ArmyGate6[3];			  // [0] = �̱� ���ʱ��� [1] = ������ ��� �ð�
new ArmyGate7[3];                         // [0] = �ݹ��� [1] = ������ ��� �ð�
new ArmyGate8[3];                         // [0] = �װ����� [1] = ������ ��� �ð�

new ArmyGate1Text[128];
new ArmyGate2Text[128];
new ArmyGate3Text[128];
new ArmyGate4Text[128];
new ArmyGate5Text[128];
new ArmyGate6Text[128];
new ArmyGate7Text[128];
new ArmyGate8Text[128];

new Kangmaeul;
new Maeboksan;
new Sightseeing;
new Villa;
new Hill;
new USAHQ;
new GOLDBRIGE;
new AIRBASE;
new RUSTeamGang;
new USATeamGang;