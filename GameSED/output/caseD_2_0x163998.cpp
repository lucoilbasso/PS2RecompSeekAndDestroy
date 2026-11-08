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

// Function: caseD_2
// Address: 0x163998 - 0x1639a0
void caseD_2_0x163998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x163998");
#endif

    ctx->pc = 0x163998u;

    // 0x163998: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x163998u;
    {
        const bool branch_taken_0x163998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163998u;
        // 0x16399c: 0x26560260  addiu       $s6, $s2, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163998) {
            ctx->pc = 0x163B94u;
            return;
        }
    }
    ctx->pc = 0x1639A0u;
}
