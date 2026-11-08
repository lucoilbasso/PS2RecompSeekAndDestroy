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
// Address: 0x116ec8 - 0x116ed0
void caseD_1_0x116ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x116ec8");
#endif

    ctx->pc = 0x116ec8u;

    // 0x116ec8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x116EC8u;
    {
        const bool branch_taken_0x116ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EC8u;
        // 0x116ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ec8) {
            ctx->pc = 0x116F1Cu;
            return;
        }
    }
    ctx->pc = 0x116ED0u;
}
