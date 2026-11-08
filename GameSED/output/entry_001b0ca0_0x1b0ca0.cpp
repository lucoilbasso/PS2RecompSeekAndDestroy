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

// Function: entry_001b0ca0
// Address: 0x1b0ca0 - 0x1b0cb0
void entry_001b0ca0_0x1b0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0ca0_0x1b0ca0");
#endif

    ctx->pc = 0x1b0ca0u;

    // 0x1b0ca0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0CA0u;
    {
        const bool branch_taken_0x1b0ca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CA0u;
        // 0x1b0ca4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ca0) {
            ctx->pc = 0x1B0CECu;
            return;
        }
    }
    ctx->pc = 0x1B0CA8u;
    // 0x1b0ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cac: 0x0  nop
    ctx->pc = 0x1b0cacu;
    // NOP
    ctx->pc = 0x1b0cb0u;
}
