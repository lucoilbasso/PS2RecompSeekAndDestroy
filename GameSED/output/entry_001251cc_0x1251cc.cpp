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

// Function: entry_001251cc
// Address: 0x1251cc - 0x125290
void entry_001251cc_0x1251cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001251cc_0x1251cc");
#endif

    ctx->pc = 0x1251ccu;

    // 0x1251cc: 0xafb00128  sw          $s0, 0x128($sp)
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 16));
    // 0x1251d0: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x1251d4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1251d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1251d8: 0x354a8005  ori         $t2, $t2, 0x8005
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32773);
    // 0x1251dc: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1251dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1251e0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1251e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1251e8: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x1251ec: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x1251ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x1251f0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1251f4: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1251f8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1251f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1251fc: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x1251fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x125200: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x125200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x125204: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x125208: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x125208u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x12520c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x125210: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x125210u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x125214: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x125218: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x125218u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12521c: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x12521cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x125220: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x125220u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x125224: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x125224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x125228: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x125228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12522c: 0x24690050  addiu       $t1, $v1, 0x50
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x125230: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x125230u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x125234: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x125234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x125238: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x125238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x12523c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x12523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x125240: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x125240u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x125244: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x125244u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x125248: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x125248u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x12524c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x125250: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x125250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x125254: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x125258: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x125258u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12525c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12525cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125260: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x125260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x125264: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x125264u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x125268: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x125268u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x12526c: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x12526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x125270: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x125270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x125274: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x125274u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x125278: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x125278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12527c: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12527cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x125280: 0xfcec0008  sd          $t4, 0x8($a3)
    ctx->pc = 0x125280u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 12));
    // 0x125284: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x125284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x125288: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x125288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12528c: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x12528cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x125290u;
}
