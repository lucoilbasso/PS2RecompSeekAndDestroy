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

// Function: entry_001df7c8
// Address: 0x1df7c8 - 0x1df7f8
void entry_001df7c8_0x1df7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df7c8_0x1df7c8");
#endif

    switch (ctx->pc) {
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7f0u: goto label_1df7f0;
        default: break;
    }

    ctx->pc = 0x1df7c8u;

    // 0x1df7c8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DF7C8u;
    SET_GPR_U32(ctx, 31, 0x1DF7D0u);
    ctx->pc = 0x1DF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7C8u;
    // 0x1df7cc: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DF7C8u, 0x1DF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7D0u;
label_1df7d0:
    // 0x1df7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7d4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF7D4u;
    {
        const bool branch_taken_0x1df7d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7d4) {
            ctx->pc = 0x1DF7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF7D4u;
            // 0x1df7d8: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF7F8u;
            return;
        }
    }
    ctx->pc = 0x1DF7DCu;
    // 0x1df7dc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7e4: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x1df7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x1df7e8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DF7E8u;
    SET_GPR_U32(ctx, 31, 0x1DF7F0u);
    ctx->pc = 0x1DF7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7E8u;
    // 0x1df7ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DF7E8u, 0x1DF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7F0u;
label_1df7f0:
    // 0x1df7f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F0u;
        // 0x1df7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF844u;
            return;
        }
    }
    ctx->pc = 0x1DF7F8u;
}
