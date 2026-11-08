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

// Function: entry_001ceb38
// Address: 0x1ceb38 - 0x1ceb78
void entry_001ceb38_0x1ceb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb38_0x1ceb38");
#endif

    switch (ctx->pc) {
        case 0x1ceb74u: goto label_1ceb74;
        default: break;
    }

    ctx->pc = 0x1ceb38u;

    // 0x1ceb38: 0x12800070  beqz        $s4, . + 4 + (0x70 << 2)
    ctx->pc = 0x1CEB38u;
    {
        const bool branch_taken_0x1ceb38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB38u;
        // 0x1ceb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb38) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEB40u;
    // 0x1ceb40: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEB40u;
    {
        const bool branch_taken_0x1ceb40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB40u;
        // 0x1ceb44: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb40) {
            ctx->pc = 0x1CEB78u;
            return;
        }
    }
    ctx->pc = 0x1CEB48u;
    // 0x1ceb48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ceb4c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ceb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb50: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ceb50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb54: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ceb58: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb5c: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ceb60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ceb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceb64: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ceb64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ceb6c: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB74u);
    ctx->pc = 0x1CEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB6Cu;
    // 0x1ceb70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEB6Cu, 0x1CEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB74u;
label_1ceb74:
    // 0x1ceb74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ceb74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ceb78u;
}
