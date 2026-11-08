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
// Address: 0x115410 - 0x115418
void caseD_1_0x115410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x115410");
#endif

    ctx->pc = 0x115410u;

    // 0x115410: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115410u;
    {
        const bool branch_taken_0x115410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115410u;
        // 0x115414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115410) {
            ctx->pc = 0x115464u;
            return;
        }
    }
    ctx->pc = 0x115418u;
}
