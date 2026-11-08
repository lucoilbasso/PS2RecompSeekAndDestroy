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

// Function: GetRepeat__5WcPadUs
// Address: 0x1dc1f8 - 0x1dc20c
void GetRepeat__5WcPadUs_0x1dc1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRepeat__5WcPadUs_0x1dc1f8");
#endif

    ctx->pc = 0x1dc1f8u;

    // 0x1dc1f8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1dc1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dc1fc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1dc200: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc204: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC204u;
        // 0x1dc208: 0x94a20026  lhu         $v0, 0x26($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC20Cu;
}
