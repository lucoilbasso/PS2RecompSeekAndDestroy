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

// Function: entry_001ce7d8
// Address: 0x1ce7d8 - 0x1ce7e4
void entry_001ce7d8_0x1ce7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce7d8_0x1ce7d8");
#endif

    ctx->pc = 0x1ce7d8u;

    // 0x1ce7d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7D8u;
    {
        const bool branch_taken_0x1ce7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7d8) {
            ctx->pc = 0x1CE7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7D8u;
            // 0x1ce7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7F0u;
            return;
        }
    }
    ctx->pc = 0x1CE7E0u;
    // 0x1ce7e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ce7e4u;
}
