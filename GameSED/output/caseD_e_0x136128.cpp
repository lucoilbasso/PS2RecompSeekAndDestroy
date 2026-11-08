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

// Function: caseD_e
// Address: 0x136128 - 0x136130
void caseD_e_0x136128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x136128");
#endif

    ctx->pc = 0x136128u;

    // 0x136128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136128u;
    {
        const bool branch_taken_0x136128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136128u;
        // 0x13612c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136128) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136130u;
}
