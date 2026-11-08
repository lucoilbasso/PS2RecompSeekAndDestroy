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

// Function: ResetViewMode__8ApcFieldb
// Address: 0x1d86d8 - 0x1d870c
void ResetViewMode__8ApcFieldb_0x1d86d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetViewMode__8ApcFieldb_0x1d86d8");
#endif

    ctx->pc = 0x1d86d8u;

    // 0x1d86d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D86D8u;
    {
        const bool branch_taken_0x1d86d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D8u;
        // 0x1d86dc: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86d8) {
            ctx->pc = 0x1D86F0u;
            goto label_1d86f0;
        }
    }
    ctx->pc = 0x1D86E0u;
    // 0x1d86e0: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d86e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D86E4u;
    {
        const bool branch_taken_0x1d86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86E4u;
        // 0x1d86e8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86e4) {
            ctx->pc = 0x1D86F8u;
            goto label_1d86f8;
        }
    }
    ctx->pc = 0x1D86ECu;
    // 0x1d86ec: 0x0  nop
    ctx->pc = 0x1d86ecu;
    // NOP
label_1d86f0:
    // 0x1d86f0: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d86f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1d86f8:
    // 0x1d86f8: 0xac8201e0  sw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    // 0x1d86fc: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d8700: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d8700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d8704: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8704u;
        // 0x1d8708: 0xac8201e0  sw          $v0, 0x1E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D870Cu;
}
