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

// Function: caseD_18
// Address: 0x110fb8 - 0x110fd8
void caseD_18_0x110fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x110fb8");
#endif

    switch (ctx->pc) {
        case 0x110fc0u: goto label_110fc0;
        default: break;
    }

    ctx->pc = 0x110fb8u;

    // 0x110fb8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110FB8u;
    SET_GPR_U32(ctx, 31, 0x110FC0u);
    ctx->pc = 0x110FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FB8u;
    // 0x110fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110FB8u, 0x110FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FC0u;
label_110fc0:
    // 0x110fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110fc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110fc8: 0x8c503630  lw          $s0, 0x3630($v0)
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x110fcc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x110fd0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x110FD0u;
    {
        const bool branch_taken_0x110fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FD0u;
        // 0x110fd4: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd0) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110FD8u;
}
