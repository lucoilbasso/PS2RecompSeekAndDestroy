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

// Function: entry_0018e3a8
// Address: 0x18e3a8 - 0x18e3d4
void entry_0018e3a8_0x18e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e3a8_0x18e3a8");
#endif

    switch (ctx->pc) {
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3d0u: goto label_18e3d0;
        default: break;
    }

    ctx->pc = 0x18e3a8u;

    // 0x18e3a8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18E3A8u;
    SET_GPR_U32(ctx, 31, 0x18E3B0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18E3A8u, 0x18E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3B0u;
label_18e3b0:
    // 0x18e3b0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3b8: 0x24a580a0  addiu       $a1, $a1, -0x7F60
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934688));
    // 0x18e3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3c0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E3C0u;
    {
        const bool branch_taken_0x18e3c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3C0u;
        // 0x18e3c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3c0) {
            ctx->pc = 0x18E3D4u;
            return;
        }
    }
    ctx->pc = 0x18E3C8u;
    // 0x18e3c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E3C8u;
    SET_GPR_U32(ctx, 31, 0x18E3D0u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E3C8u, 0x18E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3D0u;
label_18e3d0:
    // 0x18e3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18e3d4u;
}
