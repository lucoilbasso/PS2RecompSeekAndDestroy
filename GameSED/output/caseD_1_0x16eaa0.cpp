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

// Function: caseD_1
// Address: 0x16eaa0 - 0x16eaa8
void caseD_1_0x16eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x16eaa0");
#endif

    ctx->pc = 0x16eaa0u;

    // 0x16eaa0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16EAA0u;
    {
        const bool branch_taken_0x16eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAA0u;
        // 0x16eaa4: 0x26350270  addiu       $s5, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaa0) {
            ctx->pc = 0x16EB64u;
            return;
        }
    }
    ctx->pc = 0x16EAA8u;
}
