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

// Function: caseD_13
// Address: 0x1360f0 - 0x1360f8
void caseD_13_0x1360f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1360f0");
#endif

    ctx->pc = 0x1360f0u;

    // 0x1360f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1360F0u;
    {
        const bool branch_taken_0x1360f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360F0u;
        // 0x1360f4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360f0) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x1360F8u;
}
