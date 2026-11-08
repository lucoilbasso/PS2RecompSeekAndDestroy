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

// Function: entry_0018a908
// Address: 0x18a908 - 0x18a930
void entry_0018a908_0x18a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a908_0x18a908");
#endif

    switch (ctx->pc) {
        case 0x18a910u: goto label_18a910;
        default: break;
    }

    ctx->pc = 0x18a908u;

    // 0x18a908: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18A908u;
    SET_GPR_U32(ctx, 31, 0x18A910u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18A908u, 0x18A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A910u;
label_18a910:
    // 0x18a910: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x18a914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18a914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a918: 0x24a57f90  addiu       $a1, $a1, 0x7F90
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32656));
    // 0x18a91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a920: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A920u;
    {
        const bool branch_taken_0x18a920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A920u;
        // 0x18a924: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a920) {
            ctx->pc = 0x18A930u;
            return;
        }
    }
    ctx->pc = 0x18A928u;
    // 0x18a928: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18A928u;
    SET_GPR_U32(ctx, 31, 0x18A930u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18A928u, 0x18A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A930u;
}
