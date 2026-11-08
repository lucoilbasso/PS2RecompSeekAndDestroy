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

// Function: caseD_6
// Address: 0x112510 - 0x112520
void caseD_6_0x112510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x112510");
#endif

    ctx->pc = 0x112510u;

    // 0x112510: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112514: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x112514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112518u;
    {
        const bool branch_taken_0x112518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112518u;
        // 0x11251c: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112518) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x112520u;
}
