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

// Function: entry_0012a384
// Address: 0x12a384 - 0x12a438
void entry_0012a384_0x12a384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a384_0x12a384");
#endif

    ctx->pc = 0x12a384u;

    // 0x12a384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12a388: 0x278789f4  addiu       $a3, $gp, -0x760C
    ctx->pc = 0x12a388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937076));
    // 0x12a38c: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x12a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x12a390: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x12a390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x12a394: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12a394u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12a398: 0x35088004  ori         $t0, $t0, 0x8004
    ctx->pc = 0x12a398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32772);
    // 0x12a39c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12a3a0: 0xaf9089f0  sw          $s0, -0x7610($gp)
    ctx->pc = 0x12a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 16));
    // 0x12a3a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12a3a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12a3b4: 0xaf8389f4  sw          $v1, -0x760C($gp)
    ctx->pc = 0x12a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 3));
    // 0x12a3b8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12a3bc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12a3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12a3c0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12a3c4: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x12a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12a3c8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x12a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12a3cc: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x12a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x12a3d0: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x12a3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12a3d4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a3d8: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12a3dc: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x12a3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12a3e0: 0x3c0d0007  lui         $t5, 0x7
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)7 << 16));
    // 0x12a3e4: 0x35ad000d  ori         $t5, $t5, 0xD
    ctx->pc = 0x12a3e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)13);
    // 0x12a3e8: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x12a3e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12a3ec: 0x240b0047  addiu       $t3, $zero, 0x47
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12a3f0: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x12a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x12a3f4: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12a3f8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x12a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x12a3fc: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x12a3fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12a400: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12a400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12a404: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12a408: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x12a408u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x12a40c: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12a410: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x12a410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x12a414: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x12a414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x12a418: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x12a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x12a41c: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x12a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x12a420: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12a420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12a424: 0xacae0004  sw          $t6, 0x4($a1)
    ctx->pc = 0x12a424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 14));
    // 0x12a428: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x12a428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x12a42c: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x12a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x12a430: 0xfccf0000  sd          $t7, 0x0($a2)
    ctx->pc = 0x12a430u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 15));
    // 0x12a434: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->pc = 0x12a438u;
}
