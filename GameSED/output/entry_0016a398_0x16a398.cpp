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

// Function: entry_0016a398
// Address: 0x16a398 - 0x16a3c4
void entry_0016a398_0x16a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a398_0x16a398");
#endif

    switch (ctx->pc) {
        case 0x16a3a0u: goto label_16a3a0;
        case 0x16a3acu: goto label_16a3ac;
        case 0x16a3c0u: goto label_16a3c0;
        default: break;
    }

    ctx->pc = 0x16a398u;

    // 0x16a398: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A398u;
    SET_GPR_U32(ctx, 31, 0x16A3A0u);
    ctx->pc = 0x16A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A398u;
    // 0x16a39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A398u, 0x16A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3A0u;
label_16a3a0:
    // 0x16a3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A3A4u;
    SET_GPR_U32(ctx, 31, 0x16A3ACu);
    ctx->pc = 0x16A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3A4u;
    // 0x16a3a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A3A4u, 0x16A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3ACu;
label_16a3ac:
    // 0x16a3ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16a3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16a3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b8: 0xc05a840  jal         func_16A100
    ctx->pc = 0x16A3B8u;
    SET_GPR_U32(ctx, 31, 0x16A3C0u);
    ctx->pc = 0x16A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3B8u;
    // 0x16a3bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A100u, 0x16A3B8u, 0x16A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3C0u;
label_16a3c0:
    // 0x16a3c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16a3c4u;
}
