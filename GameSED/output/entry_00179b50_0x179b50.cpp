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

// Function: entry_00179b50
// Address: 0x179b50 - 0x179b60
void entry_00179b50_0x179b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b50_0x179b50");
#endif

    switch (ctx->pc) {
        case 0x179b58u: goto label_179b58;
        default: break;
    }

    ctx->pc = 0x179b50u;

label_179b50:
    // 0x179b50: 0xc07180e  jal         func_1C6038
    ctx->pc = 0x179B50u;
    SET_GPR_U32(ctx, 31, 0x179B58u);
    ctx->pc = 0x179B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B50u;
    // 0x179b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6038u, 0x179B50u, 0x179B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B58u;
label_179b58:
    // 0x179b58: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179B58u;
    {
        const bool branch_taken_0x179b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B58u;
        // 0x179b5c: 0x26264030  addiu       $a2, $s1, 0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b58) {
            ctx->pc = 0x179B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b50;
        }
    }
    ctx->pc = 0x179B60u;
}
