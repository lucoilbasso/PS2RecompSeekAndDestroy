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

// Function: GetSwOn__5WcPadUs
// Address: 0x1dc1c8 - 0x1dc1dc
void GetSwOn__5WcPadUs_0x1dc1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSwOn__5WcPadUs_0x1dc1c8");
#endif

    ctx->pc = 0x1dc1c8u;

    // 0x1dc1c8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1dc1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dc1cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1dc1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1dc1d0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1dc1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1D4u;
        // 0x1dc1d8: 0x94a20022  lhu         $v0, 0x22($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC1DCu;
}
