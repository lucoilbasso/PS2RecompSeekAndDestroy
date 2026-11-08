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

// Function: entry_00150a48
// Address: 0x150a48 - 0x150ab8
void entry_00150a48_0x150a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150a48_0x150a48");
#endif

    ctx->pc = 0x150a48u;

    // 0x150a48: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x150A48u;
    {
        const bool branch_taken_0x150a48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x150a48) {
            ctx->pc = 0x150A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150A48u;
            // 0x150a4c: 0x8e4303b0  lw          $v1, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150AB8u;
            return;
        }
    }
    ctx->pc = 0x150A50u;
    // 0x150a50: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150a54: 0xae400438  sw          $zero, 0x438($s2)
    ctx->pc = 0x150a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1080), GPR_U32(ctx, 0));
    // 0x150a58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a5c: 0xae400488  sw          $zero, 0x488($s2)
    ctx->pc = 0x150a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
    // 0x150a60: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x150a64: 0xae4004d8  sw          $zero, 0x4D8($s2)
    ctx->pc = 0x150a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1240), GPR_U32(ctx, 0));
    // 0x150a68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150a6c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x150a70: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150a74: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x150a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x150a78: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x150a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x150a7c: 0x286b4000  slti        $t3, $v1, 0x4000
    ctx->pc = 0x150a7cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150a80: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x150a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x150a84: 0x24698000  addiu       $t1, $v1, -0x8000
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x150a88: 0x288a4000  slti        $t2, $a0, 0x4000
    ctx->pc = 0x150a88u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150a8c: 0x24878000  addiu       $a3, $a0, -0x8000
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x150a90: 0x28484000  slti        $t0, $v0, 0x4000
    ctx->pc = 0x150a90u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150a94: 0x24468000  addiu       $a2, $v0, -0x8000
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x150a98: 0x12b180a  movz        $v1, $t1, $t3
    ctx->pc = 0x150a98u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x150a9c: 0xea200a  movz        $a0, $a3, $t2
    ctx->pc = 0x150a9cu;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x150aa0: 0xc8100a  movz        $v0, $a2, $t0
    ctx->pc = 0x150aa0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x150aa4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x150aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x150aa8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x150aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x150aac: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x150aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x150ab0: 0xae400528  sw          $zero, 0x528($s2)
    ctx->pc = 0x150ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1320), GPR_U32(ctx, 0));
    // 0x150ab4: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    ctx->pc = 0x150ab8u;
}
