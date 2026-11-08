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

// Function: entry_001074e8
// Address: 0x1074e8 - 0x107518
void entry_001074e8_0x1074e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001074e8_0x1074e8");
#endif

    switch (ctx->pc) {
        case 0x107500u: goto label_107500;
        case 0x107510u: goto label_107510;
        default: break;
    }

    ctx->pc = 0x1074e8u;

    // 0x1074e8: 0x1467000b  bne         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1074E8u;
    {
        const bool branch_taken_0x1074e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E8u;
        // 0x1074ec: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074e8) {
            ctx->pc = 0x107518u;
            return;
        }
    }
    ctx->pc = 0x1074F0u;
    // 0x1074f0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1074f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1074f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1074f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074f8: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x1074F8u;
    SET_GPR_U32(ctx, 31, 0x107500u);
    ctx->pc = 0x1074FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074F8u;
    // 0x1074fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x1074F8u, 0x107500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107500u;
label_107500:
    // 0x107500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107508: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x10750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107508u;
    // 0x10750c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107510u;
    {
        const bool branch_taken_0x107510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107510u;
        // 0x107514: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107510) {
            ctx->pc = 0x107530u;
            return;
        }
    }
    ctx->pc = 0x107518u;
}
