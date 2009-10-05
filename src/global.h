/* $Id$ */

#ifndef GLOBAL_H
#define GLOBAL_H

MSVC_PACKED_BEGIN;
/**
 * At segment 353F there is a big blob of all kinds of variables and constants.
 *  This struct tries to map all those.
 */
typedef struct GlobalData {
	/* 0000()    */ uint8   unknown_0000[0x35E8];
	/* 35E8(4)   */ csip32 unitStartPos;           //!< CS:IP of Unit array.
	/* 35EC(2)   */ uint16 unitCount;              //!< Amount of Units on the map.
	/* 35EE(4)   */ csip32 airUnitStartPos;        //!< CS:IP of AirUnit array.
	/* 35F2(2)   */ uint16 airUnitCount;           //!< Amount of AirUnits on the map.
	/* 35F4(4)   */ csip32 buildingStartPos;       //!< CS:IP of Building array.
	/* 35F8(2)   */ uint16 buildingCount;          //!< Amount of Buildings on the map.
	/* 35FA(4)   */ csip32 houseStartPos;          //!< CS:IP of house array.
	/* 35FE(2)   */ uint16 houseCount;             //!< Amount of houses on the map.
	/* 3600()    */ uint8   unknown_3600[0x02BC];
	/* 38BC(2)   */ uint16 variable_38BC;          //!< ?? If non-zero, Unit_Find/Building_Find skips Unit/Buildings with flag 0x4 off (being-built flag?).
	/* 38BE()    */ uint8   unknown_38BE[0x2DE6];
	/* 66A4(4)   */ csip32 callbackAfterMouse;     //!< CS:IP of routine called after mouse change.
	/* 66A8(12)  */ uint8   unknown_66A8[0x000C];
	/* 66B4(4)   */ csip32 callbackBeforeMouse;    //!< CS:IP of routine called before mouse change.
	/* 66B8()    */ uint8   unknown_66B8[0x05C0];
	/* 6C78(2)   */ uint16 snapX;                  //!< Snap mouse to grid, x-axis.
	/* 6C7A(2)   */ uint16 snapY;                  //!< Snap mouse to grid, y-axis.
	/* 6C7C(2)   */ uint16 snapGreyX;              //!< Grey zone for snapping, x-axis.
	/* 6C7E(2)   */ uint16 snapGreyY;              //!< Grey zone for snapping, y-axis.
	/* 6C80()    */ uint8   unknown_BC80[0x038E];
	/* 700E(2)   */ uint16 inputFlags;             //!< Flags for input. See InputFlagsEnum.
 	/* 7010(1)   */ uint8  mouseMode;              //!< Mouse mode. See InputMouseMode.
 	/* 7011(2)   */ uint16 variable_7011;          //!< ??
	/* 7013(2)   */ uint16 variable_7013;          //!< ??
	/* 7015(2)   */ uint16 variable_7015;          //!< ??
	/* 7017()    */ uint8   unknown_7017[0x0004];
	/* 701B(2)   */ uint16 variable_701B;          //!< ??
	/* 701D()    */ uint8   unknown_701D[0x0041];
 	/* 705E(2)   */ uint16 mouseLock;              //!< Lock for when handling mouse movement.
 	/* 7060(2)   */ uint16 mouseX;                 //!< Current X position of the mouse.
 	/* 7062(2)   */ uint16 mouseY;                 //!< Current Y position of the mouse.
	/* 7064(4)   */ uint8   unknown_7064[0x0004];
 	/* 7068(2)   */ uint16 doubleWidth;            //!< If non-zero, the X-position given by mouse is twice the real value.
 	/* 706A(2)   */ uint16 variable_706A;          //!< ?? If non-zero, mouse movement is not registered.
	/* 706C(2)   */ uint8   unknown_706C[0x0002];
	/* 706E(2)   */ uint16 variable_706E;          //!< ??
	/* 7070(2)   */ uint8   unknown_7070[0x0002];
	/* 7072(2)   */ uint16 variable_7072;          //!< ??
	/* 7074(8)   */ uint8   unknown_7074[0x0008];
 	/* 707C(2)   */ uint16 mousePrevX;             //!< Previous X position.
 	/* 707E(2)   */ uint16 mousePrevY;             //!< Previous Y position.
 	/* 7080(2)   */ uint16 regionFlags;            //!< Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check.
 	/* 7082(2)   */ uint16 regionMinX;             //!< Region - minimum value for X position.
 	/* 7084(2)   */ uint16 regionMinY;             //!< Region - minimum value for Y position.
 	/* 7086(2)   */ uint16 regionMaxX;             //!< Region - maximum value for X position.
 	/* 7088(2)   */ uint16 regionMaxY;             //!< Region - maximum value for Y position.
	/* 708A()    */ uint8   unknown_708A[0x0008];
 	/* 7092(2)   */ uint16 variable_7092;          //!< Parameter 1 for proc at 66B4.
 	/* 7094(2)   */ uint16 variable_7094;          //!< Paramerer 2 for proc at 66B4.
	/* 7096(1)   */ uint8  mouseInstalled;         //!< If non-zero, the mouse callback is installed.
 	/* 7097(1)   */ uint8  variable_7097;          //!< ?? If non-zero, no mouse handling.
 	/* 7098(1)   */ uint8  variable_7098;          //!< ?? If zero, no mouse handling.
 	/* 7099(1)   */ uint8  prevButtonState;        //!< Previous mouse button state.
	/* 709A()    */ uint8   unknown_709A[0x060C];
	/* 76A6(2)   */ uint16 variable_76A6;          //!< ??
	/* 76A8()    */ uint8   unknown_76A8[0x0D90];
	/* 8438(6)   */ uint8  unitFindStruct[6];      //!< Default find struct used if noone given to emu_Unit_FindFirst/FindNext.
	/* 843E(408) */ csip32 unitArray[102];         //!< Array with CS:IP of AirUnit, always gap-less.
	/* 85D6(6)   */ uint8  airUnitFindStruct[6];   //!< Default find struct used if noone given to emu_AirUnit_FindFirst/FindNext.
	/* 85DC(64)  */ csip32 airUnitArray[16];       //!< Array with CS:IP of AirUnit, always gap-less.
	/* 861C(6)   */ uint8  buildingFindStruct[6];  //!< Default find struct used if none given to emu_Building_FindFirst/FindNext.
	/* 8622(328) */ csip32 buildingArray[82];      //!< Array with CS:IP of Building, always gap-less.
	/* 876A()    */ uint8   unknown_876A[0x0050];
	/* 87BA(6)   */ uint8  houseFindStruct[6];     //!< Default find struct used if none given to emu_House_FindFirst/FindNext.
	/* 87C0(24)  */ csip32 houseArray[6];          //!< Array with CS:IP of House, always gap-less.
	/* 87D8()    */ uint8   unknown_87D8[0x1094];
	/* 986C(1)   */ uint8  variable_986C;          //!< ??
} GCC_PACKED GlobalData;
MSVC_PACKED_END;
assert_compile(sizeof(GlobalData) == 0x986D);

extern uint16 emu_Global_GetIP(void *ptr, uint16 segment);

extern GlobalData *g_global;

#endif /* GLOBAL_H */
