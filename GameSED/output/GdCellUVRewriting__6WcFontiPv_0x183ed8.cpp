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

// Function: GdCellUVRewriting__6WcFontiPv
// Address: 0x183ed8 - 0x183ef8
void GdCellUVRewriting__6WcFontiPv_0x183ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellUVRewriting__6WcFontiPv_0x183ed8");
#endif

    ctx->pc = 0x183ed8u;

    // 0x183ed8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x183ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x183edc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x183edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183ee0: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x183ee0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x183ee4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x183ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x183ee8: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x183ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x183eec: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x183eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x183ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x183EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EF0u;
        // 0x183ef4: 0xa0620007  sb          $v0, 0x7($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183EF8u;
}
