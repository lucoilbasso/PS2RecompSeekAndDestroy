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

// Function: entry_001917ac
// Address: 0x1917ac - 0x1917e0
void entry_001917ac_0x1917ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917ac_0x1917ac");
#endif

    switch (ctx->pc) {
        case 0x1917b4u: goto label_1917b4;
        case 0x1917d4u: goto label_1917d4;
        default: break;
    }

    ctx->pc = 0x1917acu;

    // 0x1917ac: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1917ACu;
    SET_GPR_U32(ctx, 31, 0x1917B4u);
    ctx->pc = 0x1917B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917ACu;
    // 0x1917b0: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1917ACu, 0x1917B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1917b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917b8: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1917B8u;
    {
        const bool branch_taken_0x1917b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917b8) {
            ctx->pc = 0x1917BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917B8u;
            // 0x1917bc: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1917E8u;
            return;
        }
    }
    ctx->pc = 0x1917C0u;
    // 0x1917c0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1917c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1917c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917c8: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x1917c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x1917cc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1917CCu;
    SET_GPR_U32(ctx, 31, 0x1917D4u);
    ctx->pc = 0x1917D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917CCu;
    // 0x1917d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1917CCu, 0x1917D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917D4u;
label_1917d4:
    // 0x1917d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1917D4u;
    {
        const bool branch_taken_0x1917d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917D4u;
        // 0x1917d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917d4) {
            ctx->pc = 0x191834u;
            return;
        }
    }
    ctx->pc = 0x1917DCu;
    // 0x1917dc: 0x0  nop
    ctx->pc = 0x1917dcu;
    // NOP
    ctx->pc = 0x1917e0u;
}
