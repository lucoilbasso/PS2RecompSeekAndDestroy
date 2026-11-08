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

// Function: caseD_7
// Address: 0x115440 - 0x115448
void caseD_7_0x115440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x115440");
#endif

    ctx->pc = 0x115440u;

    // 0x115440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115440u;
    {
        const bool branch_taken_0x115440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115440u;
        // 0x115444: 0x2624014c  addiu       $a0, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115440) {
            ctx->pc = 0x115464u;
            return;
        }
    }
    ctx->pc = 0x115448u;
}
