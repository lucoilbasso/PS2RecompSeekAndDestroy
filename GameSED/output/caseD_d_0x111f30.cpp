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
// Address: 0x111f30 - 0x111f38
void caseD_d_0x111f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x111f30");
#endif

    ctx->pc = 0x111f30u;

    // 0x111f30: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x111F30u;
    {
        const bool branch_taken_0x111f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F30u;
        // 0x111f34: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f30) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111F38u;
}
