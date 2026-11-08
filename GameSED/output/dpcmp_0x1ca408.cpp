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

// Function: dpcmp
// Address: 0x1ca408 - 0x1ca454
void dpcmp_0x1ca408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x1ca408");
#endif

    switch (ctx->pc) {
        case 0x1ca428u: goto label_1ca428;
        case 0x1ca438u: goto label_1ca438;
        case 0x1ca444u: goto label_1ca444;
        default: break;
    }

    ctx->pc = 0x1ca408u;

    // 0x1ca408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ca40c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1ca40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1ca410: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ca414: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1ca414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1ca418: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1ca418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1ca41c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ca41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ca420: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA420u;
    SET_GPR_U32(ctx, 31, 0x1CA428u);
    ctx->pc = 0x1CA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA420u;
    // 0x1ca424: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA420u, 0x1CA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA428u;
label_1ca428:
    // 0x1ca428: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca42c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ca42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ca430: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA430u;
    SET_GPR_U32(ctx, 31, 0x1CA438u);
    ctx->pc = 0x1CA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA430u;
    // 0x1ca434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA430u, 0x1CA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA438u;
label_1ca438:
    // 0x1ca438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca43c: 0xc0739b6  jal         func_1CE6D8
    ctx->pc = 0x1CA43Cu;
    SET_GPR_U32(ctx, 31, 0x1CA444u);
    ctx->pc = 0x1CA440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA43Cu;
    // 0x1ca440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6D8u, 0x1CA43Cu, 0x1CA444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA444u;
label_1ca444:
    // 0x1ca444: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1ca444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca448: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ca448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca44c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA44Cu;
        // 0x1ca450: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA454u;
}
