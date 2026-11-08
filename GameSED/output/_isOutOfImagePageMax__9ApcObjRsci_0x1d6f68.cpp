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

// Function: _isOutOfImagePageMax__9ApcObjRsci
// Address: 0x1d6f68 - 0x1d6f8c
void _isOutOfImagePageMax__9ApcObjRsci_0x1d6f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isOutOfImagePageMax__9ApcObjRsci_0x1d6f68");
#endif

    ctx->pc = 0x1d6f68u;

    // 0x1d6f68: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6F68u;
    {
        const bool branch_taken_0x1d6f68 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F68u;
        // 0x1d6f6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f68) {
            ctx->pc = 0x1D6F80u;
            goto label_1d6f80;
        }
    }
    ctx->pc = 0x1D6F70u;
    // 0x1d6f70: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d6f74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d6f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6f78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6F78u;
    {
        const bool branch_taken_0x1d6f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f78) {
            ctx->pc = 0x1D6F84u;
            goto label_1d6f84;
        }
    }
    ctx->pc = 0x1D6F80u;
label_1d6f80:
    // 0x1d6f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6f84:
    // 0x1d6f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F84u;
        // 0x1d6f88: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F8Cu;
}
