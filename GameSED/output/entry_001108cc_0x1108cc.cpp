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

// Function: entry_001108cc
// Address: 0x1108cc - 0x1108f8
void entry_001108cc_0x1108cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001108cc_0x1108cc");
#endif

    switch (ctx->pc) {
        case 0x1108d8u: goto label_1108d8;
        case 0x1108e0u: goto label_1108e0;
        case 0x1108e8u: goto label_1108e8;
        case 0x1108f0u: goto label_1108f0;
        default: break;
    }

    ctx->pc = 0x1108ccu;

    // 0x1108cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1108ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1108d0: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x1108D0u;
    SET_GPR_U32(ctx, 31, 0x1108D8u);
    ctx->pc = 0x1108D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108D0u;
    // 0x1108d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x1108D0u, 0x1108D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108D8u;
label_1108d8:
    // 0x1108d8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108D8u;
    SET_GPR_U32(ctx, 31, 0x1108E0u);
    ctx->pc = 0x1108DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108D8u;
    // 0x1108dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108D8u, 0x1108E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108E0u;
label_1108e0:
    // 0x1108e0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108E0u;
    SET_GPR_U32(ctx, 31, 0x1108E8u);
    ctx->pc = 0x1108E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108E0u;
    // 0x1108e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108E0u, 0x1108E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108E8u;
label_1108e8:
    // 0x1108e8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108E8u;
    SET_GPR_U32(ctx, 31, 0x1108F0u);
    ctx->pc = 0x1108ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108E8u;
    // 0x1108ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108E8u, 0x1108F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108F0u;
label_1108f0:
    // 0x1108f0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108F0u;
    SET_GPR_U32(ctx, 31, 0x1108F8u);
    ctx->pc = 0x1108F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108F0u;
    // 0x1108f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108F0u, 0x1108F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108F8u;
}
