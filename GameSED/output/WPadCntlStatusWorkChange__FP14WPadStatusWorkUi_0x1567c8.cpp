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

// Function: WPadCntlStatusWorkChange__FP14WPadStatusWorkUi
// Address: 0x1567c8 - 0x1567ec
void WPadCntlStatusWorkChange__FP14WPadStatusWorkUi_0x1567c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadCntlStatusWorkChange__FP14WPadStatusWorkUi_0x1567c8");
#endif

    ctx->pc = 0x1567c8u;

    // 0x1567c8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1567c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1567cc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x1567ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1567d0: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x1567d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1567d4: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1567d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1567d8: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1567d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1567dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1567dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1567e0: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x1567e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1567e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1567E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1567E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567E4u;
        // 0x1567e8: 0xa4850006  sh          $a1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1567ECu;
}
