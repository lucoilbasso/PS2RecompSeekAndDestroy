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

// Function: entry_001273dc
// Address: 0x1273dc - 0x127498
void entry_001273dc_0x1273dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001273dc_0x1273dc");
#endif

    ctx->pc = 0x1273dcu;

    // 0x1273dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1273dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1273e0: 0x278789e4  addiu       $a3, $gp, -0x761C
    ctx->pc = 0x1273e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937060));
    // 0x1273e4: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x1273e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x1273e8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1273e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1273ec: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1273ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1273f0: 0x35088004  ori         $t0, $t0, 0x8004
    ctx->pc = 0x1273f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32772);
    // 0x1273f4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1273f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1273f8: 0xaf9089e0  sw          $s0, -0x7620($gp)
    ctx->pc = 0x1273f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 16));
    // 0x1273fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1273fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x127400: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x127400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127408: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x127408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12740c: 0xaf8389e4  sw          $v1, -0x761C($gp)
    ctx->pc = 0x12740cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 3));
    // 0x127410: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x127410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x127414: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x127414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x127418: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x127418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12741c: 0x3c090007  lui         $t1, 0x7
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7 << 16));
    // 0x127420: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x127420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x127424: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x127424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x127428: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x127428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12742c: 0x240c004e  addiu       $t4, $zero, 0x4E
    ctx->pc = 0x12742cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x127430: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x127430u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x127434: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x127434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x127438: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x127438u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x12743c: 0x24480040  addiu       $t0, $v0, 0x40
    ctx->pc = 0x12743cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x127440: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x127440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x127444: 0x240d0044  addiu       $t5, $zero, 0x44
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x127448: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x127448u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x12744c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x12744cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x127450: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x127450u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x127454: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x127454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x127458: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x127458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12745c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12745cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x127464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127468: 0xdf828c80  ld          $v0, -0x7380($gp)
    ctx->pc = 0x127468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x12746c: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x12746cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x127470: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x127470u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x127474: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x127474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x127478: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x127478u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x12747c: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x12747cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x127480: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x127480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x127484: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127488: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x127488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x12748c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x12748cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x127490: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x127490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127494: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x127494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    ctx->pc = 0x127498u;
}
