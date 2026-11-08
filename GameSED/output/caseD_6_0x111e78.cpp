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
// Address: 0x111e78 - 0x111e88
void caseD_6_0x111e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x111e78");
#endif

    ctx->pc = 0x111e78u;

    // 0x111e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e7c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x111E7Cu;
    {
        const bool branch_taken_0x111e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E7Cu;
        // 0x111e80: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e7c) {
            ctx->pc = 0x1120C4u;
            return;
        }
    }
    ctx->pc = 0x111E84u;
    // 0x111e84: 0x0  nop
    ctx->pc = 0x111e84u;
    // NOP
    ctx->pc = 0x111e88u;
}
