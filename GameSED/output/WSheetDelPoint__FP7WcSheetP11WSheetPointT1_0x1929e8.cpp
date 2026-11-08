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

// Function: WSheetDelPoint__FP7WcSheetP11WSheetPointT1
// Address: 0x1929e8 - 0x192a1c
void WSheetDelPoint__FP7WcSheetP11WSheetPointT1_0x1929e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetDelPoint__FP7WcSheetP11WSheetPointT1_0x1929e8");
#endif

    ctx->pc = 0x1929e8u;

    // 0x1929e8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1929E8u;
    {
        const bool branch_taken_0x1929e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1929ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929E8u;
        // 0x1929ec: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929e8) {
            ctx->pc = 0x1929F8u;
            goto label_1929f8;
        }
    }
    ctx->pc = 0x1929F0u;
    // 0x1929f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1929F0u;
    {
        const bool branch_taken_0x1929f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F0u;
        // 0x1929f4: 0xac820158  sw          $v0, 0x158($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929f0) {
            ctx->pc = 0x1929FCu;
            goto label_1929fc;
        }
    }
    ctx->pc = 0x1929F8u;
label_1929f8:
    // 0x1929f8: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x1929f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_1929fc:
    // 0x1929fc: 0x248201d0  addiu       $v0, $a0, 0x1D0
    ctx->pc = 0x1929fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x192a00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x192a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192a04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x192a08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x192a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x192a0c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x192a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x192a10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x192a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x192a14: 0x3e00008  jr          $ra
    ctx->pc = 0x192A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A14u;
        // 0x192a18: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A1Cu;
}
