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
// Address: 0x115418 - 0x115420
void caseD_2_0x115418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x115418");
#endif

    ctx->pc = 0x115418u;

    // 0x115418: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115418u;
    {
        const bool branch_taken_0x115418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115418u;
        // 0x11541c: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115418) {
            ctx->pc = 0x115464u;
            return;
        }
    }
    ctx->pc = 0x115420u;
}
