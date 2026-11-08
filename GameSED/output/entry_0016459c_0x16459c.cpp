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

// Function: entry_0016459c
// Address: 0x16459c - 0x1645d0
void entry_0016459c_0x16459c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016459c_0x16459c");
#endif

    switch (ctx->pc) {
        case 0x1645a4u: goto label_1645a4;
        case 0x1645c4u: goto label_1645c4;
        default: break;
    }

    ctx->pc = 0x16459cu;

    // 0x16459c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x16459Cu;
    SET_GPR_U32(ctx, 31, 0x1645A4u);
    ctx->pc = 0x1645A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16459Cu;
    // 0x1645a0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x16459Cu, 0x1645A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645A4u;
label_1645a4:
    // 0x1645a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a8: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1645A8u;
    {
        const bool branch_taken_0x1645a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645A8u;
        // 0x1645ac: 0xae26000c  sw          $a2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645a8) {
            ctx->pc = 0x1645D0u;
            return;
        }
    }
    ctx->pc = 0x1645B0u;
    // 0x1645b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1645b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b8: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x1645bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1645BCu;
    SET_GPR_U32(ctx, 31, 0x1645C4u);
    ctx->pc = 0x1645C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645BCu;
    // 0x1645c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1645BCu, 0x1645C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645C4u;
label_1645c4:
    // 0x1645c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1645C4u;
    {
        const bool branch_taken_0x1645c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C4u;
        // 0x1645c8: 0x26a519c0  addiu       $a1, $s5, 0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c4) {
            ctx->pc = 0x1646B8u;
            return;
        }
    }
    ctx->pc = 0x1645CCu;
    // 0x1645cc: 0x0  nop
    ctx->pc = 0x1645ccu;
    // NOP
    ctx->pc = 0x1645d0u;
}
