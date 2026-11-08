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

// Function: entry_0017eec8
// Address: 0x17eec8 - 0x17eee0
void entry_0017eec8_0x17eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eec8_0x17eec8");
#endif

    switch (ctx->pc) {
        case 0x17eed8u: goto label_17eed8;
        default: break;
    }

    ctx->pc = 0x17eec8u;

label_17eec8:
    // 0x17eec8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17eec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17eecc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17eeccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17eed0: 0xc05fdc8  jal         func_17F720
    ctx->pc = 0x17EED0u;
    SET_GPR_U32(ctx, 31, 0x17EED8u);
    ctx->pc = 0x17EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EED0u;
    // 0x17eed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F720u, 0x17EED0u, 0x17EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EED8u;
label_17eed8:
    // 0x17eed8: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17EED8u;
    {
        const bool branch_taken_0x17eed8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EED8u;
        // 0x17eedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eed8) {
            ctx->pc = 0x17EEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eec8;
        }
    }
    ctx->pc = 0x17EEE0u;
}
