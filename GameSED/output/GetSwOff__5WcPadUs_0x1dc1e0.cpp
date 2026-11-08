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

// Function: GetSwOff__5WcPadUs
// Address: 0x1dc1e0 - 0x1dc1f4
void GetSwOff__5WcPadUs_0x1dc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSwOff__5WcPadUs_0x1dc1e0");
#endif

    ctx->pc = 0x1dc1e0u;

    // 0x1dc1e0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1dc1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dc1e4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1dc1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1dc1e8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1ECu;
        // 0x1dc1f0: 0x94a20024  lhu         $v0, 0x24($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC1F4u;
}
