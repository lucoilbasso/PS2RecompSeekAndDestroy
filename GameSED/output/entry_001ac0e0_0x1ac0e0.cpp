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

// Function: entry_001ac0e0
// Address: 0x1ac0e0 - 0x1ac0f8
void entry_001ac0e0_0x1ac0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac0e0_0x1ac0e0");
#endif

    switch (ctx->pc) {
        case 0x1ac0f0u: goto label_1ac0f0;
        default: break;
    }

    ctx->pc = 0x1ac0e0u;

    // 0x1ac0e0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC0E0u;
    {
        const bool branch_taken_0x1ac0e0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1ac0e0) {
            ctx->pc = 0x1AC0F8u;
            return;
        }
    }
    ctx->pc = 0x1AC0E8u;
    // 0x1ac0e8: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AC0E8u;
    SET_GPR_U32(ctx, 31, 0x1AC0F0u);
    ctx->pc = 0x1AC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0E8u;
    // 0x1ac0ec: 0x264499b0  addiu       $a0, $s2, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AC0E8u, 0x1AC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0F0u;
label_1ac0f0:
    // 0x1ac0f0: 0xc06b212  jal         func_1AC848
    ctx->pc = 0x1AC0F0u;
    SET_GPR_U32(ctx, 31, 0x1AC0F8u);
    ctx->pc = 0x1AC0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0F0u;
    // 0x1ac0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC848u, 0x1AC0F0u, 0x1AC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0F8u;
}
