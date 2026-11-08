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

// Function: WSheetSetColor__FP7WcSheetiP7Color32
// Address: 0x192980 - 0x1929c0
void WSheetSetColor__FP7WcSheetiP7Color32_0x192980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSetColor__FP7WcSheetiP7Color32_0x192980");
#endif

    switch (ctx->pc) {
        case 0x192990u: goto label_192990;
        default: break;
    }

    ctx->pc = 0x192980u;

    // 0x192980: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x192980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x192984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192988: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x192988u;
    {
        const bool branch_taken_0x192988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192988u;
        // 0x19298c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192988) {
            ctx->pc = 0x1929B4u;
            goto label_1929b4;
        }
    }
    ctx->pc = 0x192990u;
label_192990:
    // 0x192990: 0x10e50008  beq         $a3, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x192990u;
    {
        const bool branch_taken_0x192990 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x192994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192990u;
        // 0x192994: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192990) {
            ctx->pc = 0x1929B4u;
            goto label_1929b4;
        }
    }
    ctx->pc = 0x192998u;
    // 0x192998: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x192998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x19299c: 0x0  nop
    ctx->pc = 0x19299cu;
    // NOP
    // 0x1929a0: 0x0  nop
    ctx->pc = 0x1929a0u;
    // NOP
    // 0x1929a4: 0x0  nop
    ctx->pc = 0x1929a4u;
    // NOP
    // 0x1929a8: 0x0  nop
    ctx->pc = 0x1929a8u;
    // NOP
    // 0x1929ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1929ACu;
    {
        const bool branch_taken_0x1929ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1929B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929ACu;
        // 0x1929b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929ac) {
            ctx->pc = 0x192990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192990;
        }
    }
    ctx->pc = 0x1929B4u;
label_1929b4:
    // 0x1929b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1929b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1929b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1929B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1929BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929B8u;
        // 0x1929bc: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1929C0u;
}
