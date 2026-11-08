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

// Function: entry_001028cc
// Address: 0x1028cc - 0x1028f0
void entry_001028cc_0x1028cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001028cc_0x1028cc");
#endif

    switch (ctx->pc) {
        case 0x1028d4u: goto label_1028d4;
        default: break;
    }

    ctx->pc = 0x1028ccu;

    // 0x1028cc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1028CCu;
    SET_GPR_U32(ctx, 31, 0x1028D4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1028CCu, 0x1028D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028D4u;
label_1028d4:
    // 0x1028d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1028D4u;
    {
        const bool branch_taken_0x1028d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028D4u;
        // 0x1028d8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028d4) {
            ctx->pc = 0x1028F0u;
            return;
        }
    }
    ctx->pc = 0x1028DCu;
    // 0x1028dc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1028dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1028e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1028e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028e4: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x1028e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    // 0x1028e8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1028E8u;
    SET_GPR_U32(ctx, 31, 0x1028F0u);
    ctx->pc = 0x1028ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028E8u;
    // 0x1028ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1028E8u, 0x1028F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028F0u;
}
