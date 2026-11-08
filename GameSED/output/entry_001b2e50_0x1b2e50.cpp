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

// Function: entry_001b2e50
// Address: 0x1b2e50 - 0x1b2e74
void entry_001b2e50_0x1b2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2e50_0x1b2e50");
#endif

    switch (ctx->pc) {
        case 0x1b2e5cu: goto label_1b2e5c;
        case 0x1b2e6cu: goto label_1b2e6c;
        default: break;
    }

    ctx->pc = 0x1b2e50u;

    // 0x1b2e50: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b2e54: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2E54u;
    SET_GPR_U32(ctx, 31, 0x1B2E5Cu);
    ctx->pc = 0x1B2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E54u;
    // 0x1b2e58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2E54u, 0x1B2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E5Cu;
label_1b2e5c:
    // 0x1b2e5c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2E5Cu;
    {
        const bool branch_taken_0x1b2e5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E5Cu;
        // 0x1b2e60: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e5c) {
            ctx->pc = 0x1B2E74u;
            return;
        }
    }
    ctx->pc = 0x1B2E64u;
    // 0x1b2e64: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2E64u;
    SET_GPR_U32(ctx, 31, 0x1B2E6Cu);
    ctx->pc = 0x1B2E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E64u;
    // 0x1b2e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2E64u, 0x1B2E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E6Cu;
label_1b2e6c:
    // 0x1b2e6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2E6Cu;
    {
        const bool branch_taken_0x1b2e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E6Cu;
        // 0x1b2e70: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e6c) {
            ctx->pc = 0x1B2EA0u;
            return;
        }
    }
    ctx->pc = 0x1B2E74u;
}
