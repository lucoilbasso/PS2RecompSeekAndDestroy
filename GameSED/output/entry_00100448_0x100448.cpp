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

// Function: entry_00100448
// Address: 0x100448 - 0x100490
void entry_00100448_0x100448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100448_0x100448");
#endif

    switch (ctx->pc) {
        case 0x100458u: goto label_100458;
        case 0x10046cu: goto label_10046c;
        case 0x10047cu: goto label_10047c;
        default: break;
    }

    ctx->pc = 0x100448u;

    // 0x100448: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10044c: 0x26c6cf08  addiu       $a2, $s6, -0x30F8
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954760));
    // 0x100450: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x100450u;
    SET_GPR_U32(ctx, 31, 0x100458u);
    ctx->pc = 0x100454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100450u;
    // 0x100454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x100450u, 0x100458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100458u;
label_100458:
    // 0x100458: 0x26a5cf10  addiu       $a1, $s5, -0x30F0
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954768));
    // 0x10045c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100460: 0x268617c0  addiu       $a2, $s4, 0x17C0
    ctx->pc = 0x100460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 6080));
    // 0x100464: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x100464u;
    SET_GPR_U32(ctx, 31, 0x10046Cu);
    ctx->pc = 0x100468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100464u;
    // 0x100468: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x100464u, 0x10046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10046Cu;
label_10046c:
    // 0x10046c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100474: 0xc06d964  jal         func_1B6590
    ctx->pc = 0x100474u;
    SET_GPR_U32(ctx, 31, 0x10047Cu);
    ctx->pc = 0x100478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100474u;
    // 0x100478: 0x2666cf18  addiu       $a2, $s3, -0x30E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6590u, 0x100474u, 0x10047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10047Cu;
label_10047c:
    // 0x10047c: 0x264417d0  addiu       $a0, $s2, 0x17D0
    ctx->pc = 0x10047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6096));
    // 0x100480: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100480u;
    {
        const bool branch_taken_0x100480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x100484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100480u;
        // 0x100484: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100480) {
            ctx->pc = 0x100490u;
            return;
        }
    }
    ctx->pc = 0x100488u;
    // 0x100488: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x100488u;
    SET_GPR_U32(ctx, 31, 0x100490u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x100488u, 0x100490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100490u;
}
