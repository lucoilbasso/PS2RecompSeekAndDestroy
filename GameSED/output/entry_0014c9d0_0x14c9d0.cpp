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

// Function: entry_0014c9d0
// Address: 0x14c9d0 - 0x14c9f8
void entry_0014c9d0_0x14c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c9d0_0x14c9d0");
#endif

    switch (ctx->pc) {
        case 0x14c9d8u: goto label_14c9d8;
        default: break;
    }

    ctx->pc = 0x14c9d0u;

    // 0x14c9d0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14C9D0u;
    SET_GPR_U32(ctx, 31, 0x14C9D8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14C9D0u, 0x14C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9D8u;
label_14c9d8:
    // 0x14c9d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14c9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9e0: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14c9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14c9e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c9e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C9E8u;
    {
        const bool branch_taken_0x14c9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9E8u;
        // 0x14c9ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9e8) {
            ctx->pc = 0x14C9F8u;
            return;
        }
    }
    ctx->pc = 0x14C9F0u;
    // 0x14c9f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14C9F0u;
    SET_GPR_U32(ctx, 31, 0x14C9F8u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14C9F0u, 0x14C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9F8u;
}
