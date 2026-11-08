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

// Function: ApItemGetGold__Fi
// Address: 0x119380 - 0x1193a0
void ApItemGetGold__Fi_0x119380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemGetGold__Fi_0x119380");
#endif

    ctx->pc = 0x119380u;

    // 0x119380: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x119380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x119384: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x119384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x119388: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x119388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
    // 0x11938c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119390: 0x62202a  slt         $a0, $v1, $v0
    ctx->pc = 0x119390u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119394: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x119394u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x119398: 0x3e00008  jr          $ra
    ctx->pc = 0x119398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119398u;
        // 0x11939c: 0xaf82896c  sw          $v0, -0x7694($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193A0u;
}
