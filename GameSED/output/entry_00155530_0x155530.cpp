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

// Function: entry_00155530
// Address: 0x155530 - 0x155548
void entry_00155530_0x155530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155530_0x155530");
#endif

    ctx->pc = 0x155530u;

    // 0x155530: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155534: 0x8cc30898  lw          $v1, 0x898($a2)
    ctx->pc = 0x155534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
    // 0x155538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15553c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15553Cu;
    {
        const bool branch_taken_0x15553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15553Cu;
        // 0x155540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15553c) {
            ctx->pc = 0x15556Cu;
            return;
        }
    }
    ctx->pc = 0x155544u;
    // 0x155544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x155548u;
}
