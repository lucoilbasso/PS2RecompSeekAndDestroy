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

// Function: entry_0010e298
// Address: 0x10e298 - 0x10e2b4
void entry_0010e298_0x10e298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e298_0x10e298");
#endif

    switch (ctx->pc) {
        case 0x10e2a0u: goto label_10e2a0;
        default: break;
    }

    ctx->pc = 0x10e298u;

    // 0x10e298: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E298u;
    SET_GPR_U32(ctx, 31, 0x10E2A0u);
    ctx->pc = 0x10E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E298u;
    // 0x10e29c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E298u, 0x10E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2A0u;
label_10e2a0:
    // 0x10e2a0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E2A0u;
    {
        const bool branch_taken_0x10e2a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A0u;
        // 0x10e2a4: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2a0) {
            ctx->pc = 0x10E2B4u;
            return;
        }
    }
    ctx->pc = 0x10E2A8u;
    // 0x10e2a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10e2ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e2b0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x10e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x10e2b4u;
}
