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

// Function: entry_001c1cd4
// Address: 0x1c1cd4 - 0x1c1d00
void entry_001c1cd4_0x1c1cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1cd4_0x1c1cd4");
#endif

    ctx->pc = 0x1c1cd4u;

    // 0x1c1cd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1cd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1cdc: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c1cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c1ce0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1ce4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1ce8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1cec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c1cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c1cf0: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C1CF0u;
    {
        const bool branch_taken_0x1c1cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF0u;
        // 0x1c1cf4: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf0) {
            ctx->pc = 0x1C1CB8u;
            return;
        }
    }
    ctx->pc = 0x1C1CF8u;
    // 0x1c1cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1CF8u;
    {
        const bool branch_taken_0x1c1cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF8u;
        // 0x1c1cfc: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf8) {
            ctx->pc = 0x1C1D0Cu;
            return;
        }
    }
    ctx->pc = 0x1C1D00u;
}
