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

// Function: entry_001b4b38
// Address: 0x1b4b38 - 0x1b4b5c
void entry_001b4b38_0x1b4b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4b38_0x1b4b38");
#endif

    switch (ctx->pc) {
        case 0x1b4b44u: goto label_1b4b44;
        case 0x1b4b54u: goto label_1b4b54;
        default: break;
    }

    ctx->pc = 0x1b4b38u;

    // 0x1b4b38: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1b4b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1b4b3c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B44u);
    ctx->pc = 0x1B4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B3Cu;
    // 0x1b4b40: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4B3Cu, 0x1B4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B44u;
label_1b4b44:
    // 0x1b4b44: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4B44u;
    {
        const bool branch_taken_0x1b4b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b44) {
            ctx->pc = 0x1B4B5Cu;
            return;
        }
    }
    ctx->pc = 0x1B4B4Cu;
    // 0x1b4b4c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B54u);
    ctx->pc = 0x1B4B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B4Cu;
    // 0x1b4b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4B4Cu, 0x1B4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B54u;
label_1b4b54:
    // 0x1b4b54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4B54u;
    {
        const bool branch_taken_0x1b4b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B54u;
        // 0x1b4b58: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b54) {
            ctx->pc = 0x1B4B70u;
            return;
        }
    }
    ctx->pc = 0x1B4B5Cu;
}
