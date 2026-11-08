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

// Function: caseD_15
// Address: 0x164338 - 0x164340
void caseD_15_0x164338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x164338");
#endif

    ctx->pc = 0x164338u;

    // 0x164338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164338u;
    {
        const bool branch_taken_0x164338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164338u;
        // 0x16433c: 0x24911a08  addiu       $s1, $a0, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164338) {
            ctx->pc = 0x16434Cu;
            return;
        }
    }
    ctx->pc = 0x164340u;
}
