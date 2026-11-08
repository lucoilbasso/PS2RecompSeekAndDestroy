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

// Function: entry_001c1f4c
// Address: 0x1c1f4c - 0x1c1f78
void entry_001c1f4c_0x1c1f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f4c_0x1c1f4c");
#endif

    ctx->pc = 0x1c1f4cu;

    // 0x1c1f4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1f50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1f54: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c1f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c1f58: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1f60: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1f64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c1f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c1f68: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C1F68u;
    {
        const bool branch_taken_0x1c1f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F68u;
        // 0x1c1f6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f68) {
            ctx->pc = 0x1C1F30u;
            return;
        }
    }
    ctx->pc = 0x1C1F70u;
    // 0x1c1f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1F70u;
    {
        const bool branch_taken_0x1c1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F70u;
        // 0x1c1f74: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f70) {
            ctx->pc = 0x1C1F80u;
            return;
        }
    }
    ctx->pc = 0x1C1F78u;
}
