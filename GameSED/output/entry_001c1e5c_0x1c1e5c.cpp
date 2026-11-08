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

// Function: entry_001c1e5c
// Address: 0x1c1e5c - 0x1c1e88
void entry_001c1e5c_0x1c1e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e5c_0x1c1e5c");
#endif

    ctx->pc = 0x1c1e5cu;

    // 0x1c1e5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1e60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e64: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c1e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c1e68: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1e6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1e70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c1e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c1e78: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C1E78u;
    {
        const bool branch_taken_0x1c1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E78u;
        // 0x1c1e7c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e78) {
            ctx->pc = 0x1C1E40u;
            return;
        }
    }
    ctx->pc = 0x1C1E80u;
    // 0x1c1e80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1E80u;
    {
        const bool branch_taken_0x1c1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E80u;
        // 0x1c1e84: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e80) {
            ctx->pc = 0x1C1E94u;
            return;
        }
    }
    ctx->pc = 0x1C1E88u;
}
