#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SpriteImageSetup__8WcSpriteP10WImageInfoP7IRect16
// Address: 0x18a1f8 - 0x18a4a8
void SpriteImageSetup__8WcSpriteP10WImageInfoP7IRect16_0x18a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteImageSetup__8WcSpriteP10WImageInfoP7IRect16_0x18a1f8");
#endif

    ctx->pc = 0x18a1f8u;

    // 0x18a1f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x18a1f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1fc: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x18a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18a200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a204: 0x25270150  addiu       $a3, $t1, 0x150
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x18a208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a20c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18a210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a214: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x18a214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x18a218: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18a21c: 0x24af0010  addiu       $t7, $a1, 0x10
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x18a220: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x18a220u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18a224: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x18a224u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a228: 0xc6680b  movn        $t5, $a2, $a2
    ctx->pc = 0x18a228u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 6));
    // 0x18a22c: 0x9043ed90  lbu         $v1, -0x1270($v0)
    ctx->pc = 0x18a22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962576)));
    // 0x18a230: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x18a230u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x18a234: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x18a234u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a238: 0x8d02d630  lw          $v0, -0x29D0($t0)
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294956592)));
    // 0x18a23c: 0xad220154  sw          $v0, 0x154($t1)
    ctx->pc = 0x18a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 2));
    // 0x18a240: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x18a240u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x18a244: 0x252a01c0  addiu       $t2, $t1, 0x1C0
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 448));
    // 0x18a248: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x18a248u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18a24c: 0x1293bc  dsll32      $s2, $s2, 14
    ctx->pc = 0x18a24cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 14));
    // 0x18a250: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x18a250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18a254: 0x118cf8  dsll        $s1, $s1, 19
    ctx->pc = 0x18a254u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 19);
    // 0x18a258: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18a258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a25c: 0xfd2201c0  sd          $v0, 0x1C0($t1)
    ctx->pc = 0x18a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 448), GPR_U64(ctx, 2));
    // 0x18a260: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x18a260u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18a264: 0xfd2301c8  sd          $v1, 0x1C8($t1)
    ctx->pc = 0x18a264u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 456), GPR_U64(ctx, 3));
    // 0x18a268: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x18a268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x18a26c: 0xfd2201d0  sd          $v0, 0x1D0($t1)
    ctx->pc = 0x18a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 464), GPR_U64(ctx, 2));
    // 0x18a270: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x18a270u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x18a274: 0xfd2301d8  sd          $v1, 0x1D8($t1)
    ctx->pc = 0x18a274u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 472), GPR_U64(ctx, 3));
    // 0x18a278: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x18a278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x18a27c: 0xfd2201e0  sd          $v0, 0x1E0($t1)
    ctx->pc = 0x18a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 480), GPR_U64(ctx, 2));
    // 0x18a280: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x18a280u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x18a284: 0xfd2301e8  sd          $v1, 0x1E8($t1)
    ctx->pc = 0x18a284u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 488), GPR_U64(ctx, 3));
    // 0x18a288: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x18a288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18a28c: 0xfd2201f0  sd          $v0, 0x1F0($t1)
    ctx->pc = 0x18a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 496), GPR_U64(ctx, 2));
    // 0x18a290: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x18a290u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x18a294: 0xfd2301f8  sd          $v1, 0x1F8($t1)
    ctx->pc = 0x18a294u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 504), GPR_U64(ctx, 3));
    // 0x18a298: 0x95440018  lhu         $a0, 0x18($t2)
    ctx->pc = 0x18a298u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x18a29c: 0x94f0000c  lhu         $s0, 0xC($a3)
    ctx->pc = 0x18a29cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18a2a0: 0xa4e40008  sh          $a0, 0x8($a3)
    ctx->pc = 0x18a2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a2a4: 0x9542001a  lhu         $v0, 0x1A($t2)
    ctx->pc = 0x18a2a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 26)));
    // 0x18a2a8: 0xa4e2000a  sh          $v0, 0xA($a3)
    ctx->pc = 0x18a2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a2ac: 0x954b0018  lhu         $t3, 0x18($t2)
    ctx->pc = 0x18a2acu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x18a2b0: 0x95460004  lhu         $a2, 0x4($t2)
    ctx->pc = 0x18a2b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x18a2b4: 0x954c0002  lhu         $t4, 0x2($t2)
    ctx->pc = 0x18a2b4u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x18a2b8: 0xb5eb8  dsll        $t3, $t3, 26
    ctx->pc = 0x18a2b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 26);
    // 0x18a2bc: 0x9544001a  lhu         $a0, 0x1A($t2)
    ctx->pc = 0x18a2bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 26)));
    // 0x18a2c0: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x18a2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x18a2c4: 0x9548000c  lhu         $t0, 0xC($t2)
    ctx->pc = 0x18a2c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x18a2c8: 0xc63b8  dsll        $t4, $t4, 14
    ctx->pc = 0x18a2c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 14);
    // 0x18a2cc: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x18a2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18a2d0: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x18a2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x18a2d4: 0x844fc  dsll32      $t0, $t0, 19
    ctx->pc = 0x18a2d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 19));
    // 0x18a2d8: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x18a2d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x18a2dc: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x18a2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x18a2e0: 0x85e80000  lh          $t0, 0x0($t7)
    ctx->pc = 0x18a2e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x18a2e4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x18a2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x18a2e8: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x18a2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x18a2ec: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x18a2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x18a2f0: 0x84a40012  lh          $a0, 0x12($a1)
    ctx->pc = 0x18a2f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x18a2f4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x18a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x18a2f8: 0x954e0030  lhu         $t6, 0x30($t2)
    ctx->pc = 0x18a2f8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x18a2fc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x18a2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x18a300: 0x85a60002  lh          $a2, 0x2($t5)
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x18a304: 0x85a50000  lh          $a1, 0x0($t5)
    ctx->pc = 0x18a304u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18a308: 0x95420008  lhu         $v0, 0x8($t2)
    ctx->pc = 0x18a308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x18a30c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18a310: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x18a310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18a314: 0xfd430038  sd          $v1, 0x38($t2)
    ctx->pc = 0x18a314u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 3));
    // 0x18a318: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x18a31c: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x18a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x18a320: 0xa5280204  sh          $t0, 0x204($t1)
    ctx->pc = 0x18a320u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 516), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a324: 0x50102d  daddu       $v0, $v0, $s0
    ctx->pc = 0x18a324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x18a328: 0xa5240206  sh          $a0, 0x206($t1)
    ctx->pc = 0x18a328u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 518), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a32c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x18a32cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x18a330: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18a334: 0x85aa0004  lh          $t2, 0x4($t5)
    ctx->pc = 0x18a334u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x18a338: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18a33c: 0x85ac0006  lh          $t4, 0x6($t5)
    ctx->pc = 0x18a33cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x18a340: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x18a340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18a344: 0x94eb0008  lhu         $t3, 0x8($a3)
    ctx->pc = 0x18a344u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18a348: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18a34c: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x18a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x18a350: 0xa4e80050  sh          $t0, 0x50($a3)
    ctx->pc = 0x18a350u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a354: 0x1631807  srav        $v1, $v1, $t3
    ctx->pc = 0x18a354u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
    // 0x18a358: 0xa4e40052  sh          $a0, 0x52($a3)
    ctx->pc = 0x18a358u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a35c: 0xa4ea0054  sh          $t2, 0x54($a3)
    ctx->pc = 0x18a35cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 10));
    // 0x18a360: 0xa4ec0056  sh          $t4, 0x56($a3)
    ctx->pc = 0x18a360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 12));
    // 0x18a364: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18a364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18a368: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a368u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a36c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a36cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a374: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x18a374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18a378: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x18a378u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x18a37c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18a37cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18a380: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x18a380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x18a384: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x18a384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18a388: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18a38c: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x18a38cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x18a390: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18a390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18a394: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a394u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a398: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a398u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a3a0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x18a3a4: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x18a3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x18a3a8: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x18a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18a3ac: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x18a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x18a3b0: 0x1652807  srav        $a1, $a1, $t3
    ctx->pc = 0x18a3b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
    // 0x18a3b4: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x18a3b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x18a3b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a3b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a3bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a3bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a3c4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x18a3c8: 0xe4e00068  swc1        $f0, 0x68($a3)
    ctx->pc = 0x18a3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x18a3cc: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18a3d0: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x18a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x18a3d4: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x18a3d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x18a3d8: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18a3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18a3dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a3dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a3e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a3e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a3e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a3e8: 0x85a30006  lh          $v1, 0x6($t5)
    ctx->pc = 0x18a3e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x18a3ec: 0x25260180  addiu       $a2, $t1, 0x180
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 384));
    // 0x18a3f0: 0x85a20004  lh          $v0, 0x4($t5)
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x18a3f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18a3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18a3f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18a3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18a3fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18a400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a404: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x18a404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18a408: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18a408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18a40c: 0xe4e1006c  swc1        $f1, 0x6C($a3)
    ctx->pc = 0x18a40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x18a410: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x18a410u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x18a414: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18a414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a418: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x18a418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x18a41c: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x18a41cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x18a420: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x18a420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x18a424: 0xe4e40028  swc1        $f4, 0x28($a3)
    ctx->pc = 0x18a424u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x18a428: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x18a428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x18a42c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18a42cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18a430: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x18a430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x18a434: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18a434u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18a438: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18a43c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18a440: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18a440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18a444: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18a448: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18a448u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18a44c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18a44cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18a450: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18a450u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18a454: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18a454u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18a458: 0x25290190  addiu       $t1, $t1, 0x190
    ctx->pc = 0x18a458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 400));
    // 0x18a45c: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x18a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a460: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x18a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a464: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18a468: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18a46c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18a46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18a470: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18a470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18a474: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18a474u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18a478: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18a478u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18a47c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18a47cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18a480: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x18a480u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x18a484: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x18a484u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18a488: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x18a488u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18a48c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18a48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18a490: 0xf9220000  sqc2        $vf2, 0x0($t1)
    ctx->pc = 0x18a490u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18a494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a49c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4A0u;
        // 0x18a4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A4A8u;
}
