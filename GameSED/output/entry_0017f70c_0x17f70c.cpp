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

// Function: entry_0017f70c
// Address: 0x17f70c - 0x17f714
void entry_0017f70c_0x17f70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f70c_0x17f70c");
#endif

    ctx->pc = 0x17f70cu;

    // 0x17f70c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17F70Cu;
    {
        const bool branch_taken_0x17f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F70Cu;
        // 0x17f710: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f70c) {
            ctx->pc = 0x17F6F8u;
            return;
        }
    }
    ctx->pc = 0x17F714u;
}
