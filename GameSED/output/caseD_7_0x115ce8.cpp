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

// Function: caseD_7
// Address: 0x115ce8 - 0x115cf0
void caseD_7_0x115ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x115ce8");
#endif

    ctx->pc = 0x115ce8u;

    // 0x115ce8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115CE8u;
    {
        const bool branch_taken_0x115ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CE8u;
        // 0x115cec: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ce8) {
            ctx->pc = 0x115D0Cu;
            return;
        }
    }
    ctx->pc = 0x115CF0u;
}
