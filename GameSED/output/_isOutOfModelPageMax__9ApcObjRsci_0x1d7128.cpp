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

// Function: _isOutOfModelPageMax__9ApcObjRsci
// Address: 0x1d7128 - 0x1d714c
void _isOutOfModelPageMax__9ApcObjRsci_0x1d7128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isOutOfModelPageMax__9ApcObjRsci_0x1d7128");
#endif

    ctx->pc = 0x1d7128u;

    // 0x1d7128: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7128u;
    {
        const bool branch_taken_0x1d7128 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7128u;
        // 0x1d712c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7128) {
            ctx->pc = 0x1D7140u;
            goto label_1d7140;
        }
    }
    ctx->pc = 0x1D7130u;
    // 0x1d7130: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1d7134: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d7134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7138: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7138u;
    {
        const bool branch_taken_0x1d7138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7138) {
            ctx->pc = 0x1D7144u;
            goto label_1d7144;
        }
    }
    ctx->pc = 0x1D7140u;
label_1d7140:
    // 0x1d7140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7144:
    // 0x1d7144: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7144u;
        // 0x1d7148: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D714Cu;
}
