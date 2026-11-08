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

// Function: entry_00183014
// Address: 0x183014 - 0x183024
void entry_00183014_0x183014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183014_0x183014");
#endif

    switch (ctx->pc) {
        case 0x18301cu: goto label_18301c;
        default: break;
    }

    ctx->pc = 0x183014u;

    // 0x183014: 0xc060300  jal         func_180C00
    ctx->pc = 0x183014u;
    SET_GPR_U32(ctx, 31, 0x18301Cu);
    ctx->pc = 0x183018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183014u;
    // 0x183018: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x183014u, 0x18301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18301Cu;
label_18301c:
    // 0x18301c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18301Cu;
    {
        const bool branch_taken_0x18301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18301Cu;
        // 0x183020: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18301c) {
            ctx->pc = 0x183034u;
            return;
        }
    }
    ctx->pc = 0x183024u;
}
