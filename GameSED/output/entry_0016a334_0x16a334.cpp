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

// Function: entry_0016a334
// Address: 0x16a334 - 0x16a398
void entry_0016a334_0x16a334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a334_0x16a334");
#endif

    switch (ctx->pc) {
        case 0x16a33cu: goto label_16a33c;
        case 0x16a348u: goto label_16a348;
        case 0x16a354u: goto label_16a354;
        case 0x16a360u: goto label_16a360;
        case 0x16a36cu: goto label_16a36c;
        case 0x16a38cu: goto label_16a38c;
        default: break;
    }

    ctx->pc = 0x16a334u;

    // 0x16a334: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16A334u;
    SET_GPR_U32(ctx, 31, 0x16A33Cu);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16A334u, 0x16A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A33Cu;
label_16a33c:
    // 0x16a33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a340: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16A340u;
    SET_GPR_U32(ctx, 31, 0x16A348u);
    ctx->pc = 0x16A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A340u;
    // 0x16a344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16A340u, 0x16A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A348u;
label_16a348:
    // 0x16a348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a34c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16A34Cu;
    SET_GPR_U32(ctx, 31, 0x16A354u);
    ctx->pc = 0x16A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A34Cu;
    // 0x16a350: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16A34Cu, 0x16A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A354u;
label_16a354:
    // 0x16a354: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a358: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16A358u;
    SET_GPR_U32(ctx, 31, 0x16A360u);
    ctx->pc = 0x16A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A358u;
    // 0x16a35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16A358u, 0x16A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A360u;
label_16a360:
    // 0x16a360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a364: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16A364u;
    SET_GPR_U32(ctx, 31, 0x16A36Cu);
    ctx->pc = 0x16A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A364u;
    // 0x16a368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16A364u, 0x16A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A36Cu;
label_16a36c:
    // 0x16a36c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x16a36cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a378: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16a378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a37c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16a37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a380: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16a380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a384: 0xc05a664  jal         func_169990
    ctx->pc = 0x16A384u;
    SET_GPR_U32(ctx, 31, 0x16A38Cu);
    ctx->pc = 0x16A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A384u;
    // 0x16a388: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169990u, 0x16A384u, 0x16A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A38Cu;
label_16a38c:
    // 0x16a38c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16A38Cu;
    {
        const bool branch_taken_0x16a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A38Cu;
        // 0x16a390: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a38c) {
            ctx->pc = 0x16A3C4u;
            return;
        }
    }
    ctx->pc = 0x16A394u;
    // 0x16a394: 0x0  nop
    ctx->pc = 0x16a394u;
    // NOP
    ctx->pc = 0x16a398u;
}
