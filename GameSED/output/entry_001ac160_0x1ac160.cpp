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

// Function: entry_001ac160
// Address: 0x1ac160 - 0x1ac178
void entry_001ac160_0x1ac160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac160_0x1ac160");
#endif

    switch (ctx->pc) {
        case 0x1ac170u: goto label_1ac170;
        default: break;
    }

    ctx->pc = 0x1ac160u;

    // 0x1ac160: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC178u;
            return;
        }
    }
    ctx->pc = 0x1AC168u;
    // 0x1ac168: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AC168u;
    SET_GPR_U32(ctx, 31, 0x1AC170u);
    ctx->pc = 0x1AC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC168u;
    // 0x1ac16c: 0x266499b0  addiu       $a0, $s3, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AC168u, 0x1AC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC170u;
label_1ac170:
    // 0x1ac170: 0xc06b212  jal         func_1AC848
    ctx->pc = 0x1AC170u;
    SET_GPR_U32(ctx, 31, 0x1AC178u);
    ctx->pc = 0x1AC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC170u;
    // 0x1ac174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC848u, 0x1AC170u, 0x1AC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC178u;
}
