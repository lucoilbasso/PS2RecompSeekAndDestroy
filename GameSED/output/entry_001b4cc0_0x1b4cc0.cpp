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

// Function: entry_001b4cc0
// Address: 0x1b4cc0 - 0x1b4cd8
void entry_001b4cc0_0x1b4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4cc0_0x1b4cc0");
#endif

    ctx->pc = 0x1b4cc0u;

    // 0x1b4cc0: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4CC0u;
    {
        const bool branch_taken_0x1b4cc0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CC0u;
        // 0x1b4cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cc0) {
            ctx->pc = 0x1B4D00u;
            return;
        }
    }
    ctx->pc = 0x1B4CC8u;
    // 0x1b4cc8: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x1b4ccc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4cd0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4cd4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b4cd8u;
}
