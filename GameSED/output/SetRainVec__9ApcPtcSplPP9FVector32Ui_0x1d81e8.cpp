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

// Function: SetRainVec__9ApcPtcSplPP9FVector32Ui
// Address: 0x1d81e8 - 0x1d8200
void SetRainVec__9ApcPtcSplPP9FVector32Ui_0x1d81e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRainVec__9ApcPtcSplPP9FVector32Ui_0x1d81e8");
#endif

    ctx->pc = 0x1d81e8u;

    // 0x1d81e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d81e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d81ec: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1d81ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1d81f0: 0x24210ad0  addiu       $at, $at, 0xAD0
    ctx->pc = 0x1d81f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2768));
    // 0x1d81f4: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x1d81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1d81f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81F8u;
        // 0x1d81fc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8200u;
}
