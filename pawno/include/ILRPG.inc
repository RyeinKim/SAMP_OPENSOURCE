#include <a_samp>
#include <dudb>
#include <gameinfo>
#include <utils>
#include <morphinc>
#include <veh>
#include <streamer>
#include <audio>
#include <DL>
#include <puni>

#define MAX_AUDIOS 50
#define VAR_MAX_AUDIOS 50+1
#define MAX_AUDIOSRADI 50
#define INVALID_AUDIO_ID MAX_AUDIOS
#define MAX_MUSICS 50
#define AdminMessage SendAdminMessage

enum pInfo
{
      pKey[128],
	  pLevel,
	  pWanted[128],
	  noneon,
	  pNewbie,
	  pHosting,
	  ppremium,
	  pBaejin2,
	  pBaejin3,
	  pBaejin4,
	  pBaejin5,
	  pInjong,
	pBox,
	pBoxLock,
	  pCHour,
		pCPTime,
		pCMinute,
	  pChaeyoung,
	  pInfe,
	  pHouse1,
	  pHouse2,
	  pHouse3,
	  pBokgun,
	  pGun22,
	  pqntkd,
	  pAdmin,
	  pDonateRank,
	  gPupgrade,
	  Carkey,
	  pDriv,
	  pReg,
	  pSex,
	  pAge,
		  //覗傾戚獣娃凪戚
	  pConnectTime,//t亜 企庚切姥幻 ..
	//  pConnectTime2,//t亜 企庚切姥幻 ..
	//  pConnectTime3,//t亜 企庚切姥幻 ..
//	  pConnectTime4,//t亜 企庚切姥幻 ..
	   //覗傾戚獣娃凪戚
	  pOrigin,
	  rmsdbr,
	  Gimbob,
	 // qorhvma,
	  dhwna,
	  pCK,
	 // pWhyDie,
	  pMuted,
	  pExp,
	  pCash,
  	  pCard,
	  pAccount,
	  pJobTimer,
	  pCrimes,
	  pKills,
      pMeter,
      pWhyDie,
	  pDeaths,
	  pArrested,
	  pWantedDeaths,
	  pPhoneBook,
	  pabcdefg,
	  pLottoNr,
	  pFishes,
	  pBiggestFish,
	  pJob,
	  pPayCheck,
	  pPayCheck2,
	  pHeadValue,
	  pResult[128],
	  pJailed,
	  pdudwkd,//p慎舌
	  pdudwkdt,//p慎舌
	  pJailTime,
	  pMats,
	  peogudLic,
	  dmdrmqLic,
	  diedie,
	  pDrugs,
	  pLeader,
	  pMember,
	  pFMember,
	  pRank,
	  pArmysp,
	  pChar,
	  pBoxSkill,
      pMoneyer,
	  pJackSkill,
	  pNewsSkill,
	  pCookSkill,
      pFishSkill,
	  Float:pHealth,
	  Float:pSHealth,
      pInt,
	  pLocal,
	  pTeam,
  	  pMode,
	  pModel,
	  pPnumber,
	  pSmart, // 什原闘肉
	  pBoombox,
	  pPhousekey,
   	  Float:pga,
   	  Float:pga2,
   	  pGangKey,
	  pPbiskey,
	  Float:pPos_x,
	  Float:pPos_y,
	  Float:pPos_z,
	  pCarLic,
	  pBmxLic,
	  pFlyLic,
	  pBoatLic,
	  pFishLic,
	  pGunLic,
	  pCityLic,
	  Float:pAmour,
	  pGun1,
	  pGun2,
	  pGun3,
	  pGun4,
	  pAmmo1,
	  pAmmo2,
	  pAmmo3,
	  pAmmo4,
	  pCarTime,
	  pCarTime2,
	  pPayDay,
	  pPayDayHad,
	  pWatch,
	  pgktehrm,
	  pfkaus,
	  pdkdltm,
	  pCrashed,
	  pWins,
	  pLoses,
	  pAlcoholPerk,
	  pDrugPerk,
	  pMiserPerk,
	  pPainPerk,
	  pTraderPerk,
	  pTut,
	  pMissionNr,
	  pWarns,
  	  pJu,
	  pPucking,
	  pWarns2,
	  pVirWorld,
	  pFuel,
	  pMarried,
	  pMarriedTo[128],
	  pMarriedTo2[128],
	  pFishTool,
	  pNote1[128],
	  pNote1s,
	  pNote2[128],
	  pNote2s,
	  pNote3[128],
	  pNote3s,
	  pNote4[128],
	  pNote4s,
	  pNote5[128],
	  pNote5s,
	  pInvWeapon,
	  pInvAmmo,
	  pInvAmmo6,
	  pInvAmmo7,
	  pInvAmmo8,
	  pInvAmmo9,
	  pInvAmmo10,
	  pInvWeapon2,
	  pInvAmmo2,
	  pInvWeapon3,
	  pInvAmmo3,
	  pInvWeapon4,
	  pInvAmmo4,
	  pInvWeapon5,
	  pInvAmmo5,
	  pLighter,
	  pCigarettes,
	  pQnvna,
	  pRequestingBackup,
	  pRoadblock,
	  pHideNumber,
	  pSpeaker,
	  pLocked,
	  pChingchan,
	  pHotel1,
	  pHotel2,
	  pGabang,
	  pSavelocations,
	  pSavelocations2,
	  pSavelocations3,
	  pSaveinterior,
	  vNeon1,
	  vNeon2,
	  vNeon3,
	  vNeon4,
	  vNeon5,
	  vNeon6,
	  vNeon7,
	  vNeon8,
	  vNeon9,
	  vNeon10,
	  vNeon11,
	  pVworld,
	  pHotel3,
	  pHotel4,
	  pHotel5,
	  pfishrod,
	  //pSQLID,
	  pMeal,
      phammer,
	  pHarvestMeal,
	  pRice,
	  pHarvestRice,
	  pRadio,
	  pPill,
	  pSongpun,
	  pRope,
	  pShutupMouse,//せせせせせせせせせせせせせせせせせせせせせ
	  Float:pArmour,
	  pBadge,
	  pLine,
	  pDemerit,
	  pAD,
	  pBoxing,
	  pKungfu,
	  pTaek,
	  pTatoo[256],
	  bool:pTatooOn,
	  pGrabk,
	  pEllbow,
	  pcModel,
  	  Float:pcX,
  	  Float:pcY,
  	  Float:pcZ,
	  Float:pcAngle,
	  pcColor1,
	  pcColor2,
	  pcLocked,
	  pcOwned,
	  pcPark,
	  pcModel2,
	  Float:pcX2,
	  Float:pcY2,
	  Float:pcZ2,
	  Float:pcAngle2,
	  pcColor12,
	  pcColor22,
	  pcLocked2,
	  pcOwned2,
	  pcPark2,
	  pcSpo,
	  pcHood,
	  pcRoof,
	  pcSideS,
	  pcLamp,
	  pcNitro,
	  pcExh,
	  pcWheel,
	  pcStero,
	  pcHyd,
	  pcFBum,
	  pcRbum,
	  pcVentR,
	  pcVentL,
	  pcSpo2,
	  pcHood2,
	  pcRoof2,
	  pcSideS2,
	  pcLamp2,
	  pcNitro2,
	  pcExh2,
	  pcWheel2,
	  pcStero2,
	  RentTime,
	  pcHyd2,
	  pcFBum2,
	  pcRbum2,
	  pcVentR2,
	  pcVentL2,
	  pPhoneB1,
	  pPhoneB2,
	  pPhoneB3,
	  pPhoneB4,
	  pPhoneB5,
	  pPhoneN1[128],
	  pPhoneN2[128],
	  pPhoneN3[128],
	  pPhoneN4[128],
	  pPhoneN5[128],
	  Item1,
	  TongJang,
	  pBuild,
	  pHouse,
	  pPackage,
	  pDrug,
	  pRentHouse,
	  Byeong,
//	 Food4,
	  Cloth_1,
	  Cloth_2,
	  Cloth_3,

	  pHAt,//乞切
	  Float:At1Pos1,
	  Float:At1Pos2,
	  Float:At1Pos3,

	  Float:At1Rot1,
	  Float:At1Rot2,
	  Float:At1Rot3,

	  Float:At1Scale1,
	  Float:At1Scale2,
	  Float:At1Scale3,


	  pLAt,//図謝
	  Float:At2Pos1,
	  Float:At2Pos2,
	  Float:At2Pos3,

	  Float:At2Rot1,
	  Float:At2Rot2,
	  Float:At2Rot3,

	  Float:At2Scale1,
	  Float:At2Scale2,
	  Float:At2Scale3,


	  pRAt,//神献謝
	  Float:At3Pos1,
	  Float:At3Pos2,
	  Float:At3Pos3,

	  Float:At3Rot1,
	  Float:At3Rot2,
	  Float:At3Rot3,

	  Float:At3Scale1,
	  Float:At3Scale2,
	  Float:At3Scale3,

	  pMouth,//原什滴
	  Float:At4Pos1,
	  Float:At4Pos2,
	  Float:At4Pos3,

	  Float:At4Rot1,
	  Float:At4Rot2,
	  Float:At4Rot3,

	  Float:At4Scale1,
	  Float:At4Scale2,
	  Float:At4Scale3,
/*
	  pGat,//照井
	  Float:At4Pos1,
	  Float:At4Pos2,
	  Float:At4Pos3,

	  Float:At4Rot1,
	  Float:At4Rot2,
	  Float:At4Rot3,

	  Float:At4Scale1,
	  Float:At4Scale2,
	  Float:At4Scale3,
*/
	  pGPS,
//	  pBandage,
	  pGido,
	  pSorry,
	  pPage,
	  pBibun,
	  pMusic[MAX_MUSICS],
	  pMusicVer[MAX_MUSICS]
};
new PlayerInfo[M_P][pInfo];