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

// Function: entry_0018b5a0
// Address: 0x18b5a0 - 0x18b5b0
void entry_0018b5a0_0x18b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b5a0_0x18b5a0");
#endif

    switch (ctx->pc) {
        case 0x18b5a8u: goto label_18b5a8;
        default: break;
    }

    ctx->pc = 0x18b5a0u;

label_18b5a0:
    // 0x18b5a0: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B5A0u;
    SET_GPR_U32(ctx, 31, 0x18B5A8u);
    ctx->pc = 0x18B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5A0u;
    // 0x18b5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B5A0u, 0x18B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5A8u;
label_18b5a8:
    // 0x18b5a8: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x18B5A8u;
    {
        const bool branch_taken_0x18b5a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5A8u;
        // 0x18b5ac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5a8) {
            ctx->pc = 0x18B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b5a0;
        }
    }
    ctx->pc = 0x18B5B0u;
}
