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

// Function: WSheetSearchPrePointPtr__FP7WcSheetP11WSheetPoint
// Address: 0x1928a0 - 0x1928e8
void WSheetSearchPrePointPtr__FP7WcSheetP11WSheetPoint_0x1928a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSearchPrePointPtr__FP7WcSheetP11WSheetPoint_0x1928a0");
#endif

    switch (ctx->pc) {
        case 0x1928b0u: goto label_1928b0;
        default: break;
    }

    ctx->pc = 0x1928a0u;

    // 0x1928a0: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1928a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1928a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1928A8u;
    {
        const bool branch_taken_0x1928a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928A8u;
        // 0x1928ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928a8) {
            ctx->pc = 0x1928E0u;
            goto label_1928e0;
        }
    }
    ctx->pc = 0x1928B0u;
label_1928b0:
    // 0x1928b0: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1928B0u;
    {
        const bool branch_taken_0x1928b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1928B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928B0u;
        // 0x1928b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928b0) {
            ctx->pc = 0x1928E0u;
            goto label_1928e0;
        }
    }
    ctx->pc = 0x1928B8u;
    // 0x1928b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1928bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1928BCu;
    {
        const bool branch_taken_0x1928bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928bc) {
            ctx->pc = 0x1928C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1928BCu;
            // 0x1928c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1928E0u;
            goto label_1928e0;
        }
    }
    ctx->pc = 0x1928C4u;
    // 0x1928c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1928c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928c8: 0x0  nop
    ctx->pc = 0x1928c8u;
    // NOP
    // 0x1928cc: 0x0  nop
    ctx->pc = 0x1928ccu;
    // NOP
    // 0x1928d0: 0x0  nop
    ctx->pc = 0x1928d0u;
    // NOP
    // 0x1928d4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1928D4u;
    {
        const bool branch_taken_0x1928d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928D4u;
        // 0x1928d8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928d4) {
            ctx->pc = 0x1928B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1928b0;
        }
    }
    ctx->pc = 0x1928DCu;
    // 0x1928dc: 0x0  nop
    ctx->pc = 0x1928dcu;
    // NOP
label_1928e0:
    // 0x1928e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1928E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928E8u;
}
