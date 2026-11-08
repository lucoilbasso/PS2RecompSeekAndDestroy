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

// Function: entry_0016f8f8
// Address: 0x16f8f8 - 0x16f914
void entry_0016f8f8_0x16f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f8f8_0x16f8f8");
#endif

    switch (ctx->pc) {
        case 0x16f900u: goto label_16f900;
        case 0x16f90cu: goto label_16f90c;
        default: break;
    }

    ctx->pc = 0x16f8f8u;

    // 0x16f8f8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x16F8F8u;
    SET_GPR_U32(ctx, 31, 0x16F900u);
    ctx->pc = 0x16F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8F8u;
    // 0x16f8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x16F8F8u, 0x16F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F900u;
label_16f900:
    // 0x16f900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f904: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16F904u;
    SET_GPR_U32(ctx, 31, 0x16F90Cu);
    ctx->pc = 0x16F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F904u;
    // 0x16f908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16F904u, 0x16F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F90Cu;
label_16f90c:
    // 0x16f90c: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x16F90Cu;
    {
        const bool branch_taken_0x16f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F90Cu;
        // 0x16f910: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f90c) {
            ctx->pc = 0x16F748u;
            return;
        }
    }
    ctx->pc = 0x16F914u;
}
