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

// Function: FreePoint__8WcMulobjP12WMulobjPointT1
// Address: 0x1e05c8 - 0x1e0600
void FreePoint__8WcMulobjP12WMulobjPointT1_0x1e05c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreePoint__8WcMulobjP12WMulobjPointT1_0x1e05c8");
#endif

    ctx->pc = 0x1e05c8u;

    // 0x1e05c8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E05C8u;
    {
        const bool branch_taken_0x1e05c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05C8u;
        // 0x1e05cc: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05c8) {
            ctx->pc = 0x1E05D8u;
            goto label_1e05d8;
        }
    }
    ctx->pc = 0x1E05D0u;
    // 0x1e05d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E05D0u;
    {
        const bool branch_taken_0x1e05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D0u;
        // 0x1e05d4: 0xac8201b0  sw          $v0, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d0) {
            ctx->pc = 0x1E05DCu;
            goto label_1e05dc;
        }
    }
    ctx->pc = 0x1E05D8u;
label_1e05d8:
    // 0x1e05d8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e05dc:
    // 0x1e05dc: 0x248201b4  addiu       $v0, $a0, 0x1B4
    ctx->pc = 0x1e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 436));
    // 0x1e05e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1e05e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e05e8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e05ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e05f0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1e05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1e05f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e05f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F8u;
        // 0x1e05fc: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0600u;
}
