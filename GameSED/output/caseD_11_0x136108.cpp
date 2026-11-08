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

// Function: caseD_11
// Address: 0x136108 - 0x136110
void caseD_11_0x136108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x136108");
#endif

    ctx->pc = 0x136108u;

    // 0x136108: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x136108u;
    {
        const bool branch_taken_0x136108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136108u;
        // 0x13610c: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136108) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136110u;
}
