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

// Function: entry_001ceca0
// Address: 0x1ceca0 - 0x1cecd0
void entry_001ceca0_0x1ceca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceca0_0x1ceca0");
#endif

    switch (ctx->pc) {
        case 0x1cecccu: goto label_1ceccc;
        default: break;
    }

    ctx->pc = 0x1ceca0u;

    // 0x1ceca0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CECA0u;
    {
        const bool branch_taken_0x1ceca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECA0u;
        // 0x1ceca4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceca0) {
            ctx->pc = 0x1CECD0u;
            return;
        }
    }
    ctx->pc = 0x1CECA8u;
    // 0x1ceca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cecac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1cecacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecb0: 0x26e51de8  addiu       $a1, $s7, 0x1DE8
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7656));
    // 0x1cecb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cecb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecb8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cecb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecbc: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cecc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cecc4: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CECC4u;
    SET_GPR_U32(ctx, 31, 0x1CECCCu);
    ctx->pc = 0x1CECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECC4u;
    // 0x1cecc8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CECC4u, 0x1CECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECCCu;
label_1ceccc:
    // 0x1ceccc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cecccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cecd0u;
}
