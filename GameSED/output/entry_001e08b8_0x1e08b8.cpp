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

// Function: entry_001e08b8
// Address: 0x1e08b8 - 0x1e08d8
void entry_001e08b8_0x1e08b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e08b8_0x1e08b8");
#endif

    ctx->pc = 0x1e08b8u;

    // 0x1e08b8: 0x54450011  bnel        $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E08B8u;
    {
        const bool branch_taken_0x1e08b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e08b8) {
            ctx->pc = 0x1E08BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E08B8u;
            // 0x1e08bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0900u;
            return;
        }
    }
    ctx->pc = 0x1E08C0u;
    // 0x1e08c0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E08C0u;
    {
        const bool branch_taken_0x1e08c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08C0u;
        // 0x1e08c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08c0) {
            ctx->pc = 0x1E08D8u;
            return;
        }
    }
    ctx->pc = 0x1E08C8u;
    // 0x1e08c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e08cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E08CCu;
    {
        const bool branch_taken_0x1e08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08CCu;
        // 0x1e08d0: 0xac8201b0  sw          $v0, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08cc) {
            ctx->pc = 0x1E08E0u;
            return;
        }
    }
    ctx->pc = 0x1E08D4u;
    // 0x1e08d4: 0x0  nop
    ctx->pc = 0x1e08d4u;
    // NOP
    ctx->pc = 0x1e08d8u;
}
