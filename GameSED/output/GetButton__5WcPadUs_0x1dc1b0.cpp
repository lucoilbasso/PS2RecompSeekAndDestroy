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

// Function: GetButton__5WcPadUs
// Address: 0x1dc1b0 - 0x1dc1c4
void GetButton__5WcPadUs_0x1dc1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetButton__5WcPadUs_0x1dc1b0");
#endif

    ctx->pc = 0x1dc1b0u;

    // 0x1dc1b0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1dc1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dc1b4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1dc1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1dc1b8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1dc1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1BCu;
        // 0x1dc1c0: 0x94a20020  lhu         $v0, 0x20($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC1C4u;
}
