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

// Function: sceDevVu0GetTBit
// Address: 0x1aca48 - 0x1aca58
void sceDevVu0GetTBit_0x1aca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0GetTBit_0x1aca48");
#endif

    ctx->pc = 0x1aca48u;

    // 0x1aca48: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x1aca48u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x1aca4c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1aca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1aca50: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA50u;
        // 0x1aca54: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA58u;
}
