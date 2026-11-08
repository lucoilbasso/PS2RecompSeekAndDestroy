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

// Function: entry_00199770
// Address: 0x199770 - 0x1997a8
void entry_00199770_0x199770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199770_0x199770");
#endif

    switch (ctx->pc) {
        case 0x199778u: goto label_199778;
        case 0x199794u: goto label_199794;
        default: break;
    }

    ctx->pc = 0x199770u;

    // 0x199770: 0xc068086  jal         func_1A0218
    ctx->pc = 0x199770u;
    SET_GPR_U32(ctx, 31, 0x199778u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x199770u, 0x199778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199778u;
label_199778:
    // 0x199778: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19977c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19977cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199780: 0x24848440  addiu       $a0, $a0, -0x7BC0
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935616));
    // 0x199784: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x199784u;
    {
        const bool branch_taken_0x199784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x199788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199784u;
        // 0x199788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199784) {
            ctx->pc = 0x1997A8u;
            return;
        }
    }
    ctx->pc = 0x19978Cu;
    // 0x19978c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19978Cu;
    SET_GPR_U32(ctx, 31, 0x199794u);
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19978Cu, 0x199794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199794u;
label_199794:
    // 0x199794: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x199798: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19979c: 0x24a58450  addiu       $a1, $a1, -0x7BB0
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935632));
    // 0x1997a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1997A0u;
    SET_GPR_U32(ctx, 31, 0x1997A8u);
    ctx->pc = 0x1997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997A0u;
    // 0x1997a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1997A0u, 0x1997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997A8u;
}
