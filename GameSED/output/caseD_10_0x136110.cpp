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

// Function: caseD_10
// Address: 0x136110 - 0x136118
void caseD_10_0x136110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x136110");
#endif

    ctx->pc = 0x136110u;

    // 0x136110: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136110u;
    {
        const bool branch_taken_0x136110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136110u;
        // 0x136114: 0x3c060002  lui         $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136110) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136118u;
}
