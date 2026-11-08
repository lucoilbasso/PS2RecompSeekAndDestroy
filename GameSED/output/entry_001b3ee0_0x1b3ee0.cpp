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

// Function: entry_001b3ee0
// Address: 0x1b3ee0 - 0x1b3f04
void entry_001b3ee0_0x1b3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ee0_0x1b3ee0");
#endif

    switch (ctx->pc) {
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3efcu: goto label_1b3efc;
        default: break;
    }

    ctx->pc = 0x1b3ee0u;

    // 0x1b3ee0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b3ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b3ee4: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3EE4u;
    SET_GPR_U32(ctx, 31, 0x1B3EECu);
    ctx->pc = 0x1B3EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EE4u;
    // 0x1b3ee8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3EE4u, 0x1B3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EECu;
label_1b3eec:
    // 0x1b3eec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3EECu;
    {
        const bool branch_taken_0x1b3eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3eec) {
            ctx->pc = 0x1B3F04u;
            return;
        }
    }
    ctx->pc = 0x1B3EF4u;
    // 0x1b3ef4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3EF4u;
    SET_GPR_U32(ctx, 31, 0x1B3EFCu);
    ctx->pc = 0x1B3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EF4u;
    // 0x1b3ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3EF4u, 0x1B3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EFCu;
label_1b3efc:
    // 0x1b3efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3EFCu;
    {
        const bool branch_taken_0x1b3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EFCu;
        // 0x1b3f00: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3efc) {
            ctx->pc = 0x1B3F18u;
            return;
        }
    }
    ctx->pc = 0x1B3F04u;
}
