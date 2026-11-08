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

// Function: entry_0013a99c
// Address: 0x13a99c - 0x13a9b0
void entry_0013a99c_0x13a99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a99c_0x13a99c");
#endif

    ctx->pc = 0x13a99cu;

    // 0x13a99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a9a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A9A0u;
    {
        const bool branch_taken_0x13a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9A0u;
        // 0x13a9a4: 0x2622079c  addiu       $v0, $s1, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9a0) {
            ctx->pc = 0x13A9BCu;
            return;
        }
    }
    ctx->pc = 0x13A9A8u;
    // 0x13a9a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A9A8u;
    {
        const bool branch_taken_0x13a9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9A8u;
        // 0x13a9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9a8) {
            ctx->pc = 0x13A9BCu;
            return;
        }
    }
    ctx->pc = 0x13A9B0u;
}
