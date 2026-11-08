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

// Function: entry_0018e430
// Address: 0x18e430 - 0x18e45c
void entry_0018e430_0x18e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e430_0x18e430");
#endif

    switch (ctx->pc) {
        case 0x18e438u: goto label_18e438;
        case 0x18e458u: goto label_18e458;
        default: break;
    }

    ctx->pc = 0x18e430u;

    // 0x18e430: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18E430u;
    SET_GPR_U32(ctx, 31, 0x18E438u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18E430u, 0x18E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E438u;
label_18e438:
    // 0x18e438: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e43c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e440: 0x24a580b8  addiu       $a1, $a1, -0x7F48
    ctx->pc = 0x18e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934712));
    // 0x18e444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e448: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E448u;
    {
        const bool branch_taken_0x18e448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E448u;
        // 0x18e44c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e448) {
            ctx->pc = 0x18E45Cu;
            return;
        }
    }
    ctx->pc = 0x18E450u;
    // 0x18e450: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E450u;
    SET_GPR_U32(ctx, 31, 0x18E458u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E450u, 0x18E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E458u;
label_18e458:
    // 0x18e458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18e45cu;
}
