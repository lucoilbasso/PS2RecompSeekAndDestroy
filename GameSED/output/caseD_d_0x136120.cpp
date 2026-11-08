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

// Function: caseD_d
// Address: 0x136120 - 0x136128
void caseD_d_0x136120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x136120");
#endif

    ctx->pc = 0x136120u;

    // 0x136120: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x136120u;
    {
        const bool branch_taken_0x136120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136120u;
        // 0x136124: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136120) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136128u;
}
