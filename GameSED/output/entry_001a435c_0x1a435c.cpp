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

// Function: entry_001a435c
// Address: 0x1a435c - 0x1a4384
void entry_001a435c_0x1a435c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a435c_0x1a435c");
#endif

    switch (ctx->pc) {
        case 0x1a4364u: goto label_1a4364;
        default: break;
    }

    ctx->pc = 0x1a435cu;

    // 0x1a435c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A435Cu;
    SET_GPR_U32(ctx, 31, 0x1A4364u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A435Cu, 0x1A4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4364u;
label_1a4364:
    // 0x1a4364: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a4368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a436c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4370: 0x24a59150  addiu       $a1, $a1, -0x6EB0
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938960));
    // 0x1a4374: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4374u;
    {
        const bool branch_taken_0x1a4374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4374u;
        // 0x1a4378: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4374) {
            ctx->pc = 0x1A4384u;
            return;
        }
    }
    ctx->pc = 0x1A437Cu;
    // 0x1a437c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A437Cu;
    SET_GPR_U32(ctx, 31, 0x1A4384u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A437Cu, 0x1A4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4384u;
}
