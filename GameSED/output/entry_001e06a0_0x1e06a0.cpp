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

// Function: entry_001e06a0
// Address: 0x1e06a0 - 0x1e06d0
void entry_001e06a0_0x1e06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e06a0_0x1e06a0");
#endif

    switch (ctx->pc) {
        case 0x1e06a8u: goto label_1e06a8;
        case 0x1e06c8u: goto label_1e06c8;
        default: break;
    }

    ctx->pc = 0x1e06a0u;

    // 0x1e06a0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1E06A0u;
    SET_GPR_U32(ctx, 31, 0x1E06A8u);
    ctx->pc = 0x1E06A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06A0u;
    // 0x1e06a4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1E06A0u, 0x1E06A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06A8u;
label_1e06a8:
    // 0x1e06a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e06a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06ac: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E06ACu;
    {
        const bool branch_taken_0x1e06ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e06ac) {
            ctx->pc = 0x1E06B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E06ACu;
            // 0x1e06b0: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E06D0u;
            return;
        }
    }
    ctx->pc = 0x1E06B4u;
    // 0x1e06b4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e06b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e06b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e06b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06bc: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
    // 0x1e06c0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E06C0u;
    SET_GPR_U32(ctx, 31, 0x1E06C8u);
    ctx->pc = 0x1E06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06C0u;
    // 0x1e06c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E06C0u, 0x1E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06C8u;
label_1e06c8:
    // 0x1e06c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E06C8u;
    {
        const bool branch_taken_0x1e06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06C8u;
        // 0x1e06cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06c8) {
            ctx->pc = 0x1E0728u;
            return;
        }
    }
    ctx->pc = 0x1E06D0u;
}
