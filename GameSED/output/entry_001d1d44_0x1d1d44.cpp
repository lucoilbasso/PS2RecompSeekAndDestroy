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

// Function: entry_001d1d44
// Address: 0x1d1d44 - 0x1d1d80
void entry_001d1d44_0x1d1d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1d44_0x1d1d44");
#endif

    ctx->pc = 0x1d1d44u;

    // 0x1d1d44: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1d1d48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1d4c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D1D4Cu;
    {
        const bool branch_taken_0x1d1d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D4Cu;
        // 0x1d1d50: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d4c) {
            ctx->pc = 0x1D1E38u;
            return;
        }
    }
    ctx->pc = 0x1D1D54u;
    // 0x1d1d54: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1d1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d1d58: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d1d5c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x1d1d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1d60: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D1D60u;
    {
        const bool branch_taken_0x1d1d60 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D60u;
        // 0x1d1d64: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d60) {
            ctx->pc = 0x1D1E38u;
            return;
        }
    }
    ctx->pc = 0x1D1D68u;
    // 0x1d1d68: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1d6c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D1D6Cu;
    {
        const bool branch_taken_0x1d1d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D6Cu;
        // 0x1d1d70: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d6c) {
            ctx->pc = 0x1D1DE8u;
            return;
        }
    }
    ctx->pc = 0x1D1D74u;
    // 0x1d1d74: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1d78: 0x24f4c3d0  addiu       $s4, $a3, -0x3C30
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1d7c: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    ctx->pc = 0x1d1d80u;
}
