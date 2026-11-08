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

// Function: entry_001ddab0
// Address: 0x1ddab0 - 0x1ddb00
void entry_001ddab0_0x1ddab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddab0_0x1ddab0");
#endif

    switch (ctx->pc) {
        case 0x1ddac4u: goto label_1ddac4;
        case 0x1ddaccu: goto label_1ddacc;
        case 0x1ddae0u: goto label_1ddae0;
        case 0x1ddaecu: goto label_1ddaec;
        default: break;
    }

    ctx->pc = 0x1ddab0u;

label_1ddab0:
    // 0x1ddab0: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x1ddab0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ddab4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1ddab8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ddab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ddabc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DDABCu;
    SET_GPR_U32(ctx, 31, 0x1DDAC4u);
    ctx->pc = 0x1DDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDABCu;
    // 0x1ddac0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DDABCu, 0x1DDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAC4u;
label_1ddac4:
    // 0x1ddac4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DDAC4u;
    SET_GPR_U32(ctx, 31, 0x1DDACCu);
    ctx->pc = 0x1DDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAC4u;
    // 0x1ddac8: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DDAC4u, 0x1DDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDACCu;
label_1ddacc:
    // 0x1ddacc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ddaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddad4: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1ddad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1ddad8: 0xc0624a8  jal         func_1892A0
    ctx->pc = 0x1DDAD8u;
    SET_GPR_U32(ctx, 31, 0x1DDAE0u);
    ctx->pc = 0x1DDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAD8u;
    // 0x1ddadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x1DDAD8u, 0x1DDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAE0u;
label_1ddae0:
    // 0x1ddae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddae4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DDAE4u;
    SET_GPR_U32(ctx, 31, 0x1DDAECu);
    ctx->pc = 0x1DDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAE4u;
    // 0x1ddae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DDAE4u, 0x1DDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAECu;
label_1ddaec:
    // 0x1ddaec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ddaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ddaf0: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ddaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ddaf4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ddaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddaf8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DDAF8u;
    {
        const bool branch_taken_0x1ddaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddaf8) {
            ctx->pc = 0x1DDAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDAF8u;
            // 0x1ddafc: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddab0;
        }
    }
    ctx->pc = 0x1DDB00u;
}
