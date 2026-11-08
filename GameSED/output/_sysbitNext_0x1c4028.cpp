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

// Function: _sysbitNext
// Address: 0x1c4028 - 0x1c4044
void _sysbitNext_0x1c4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitNext_0x1c4028");
#endif

    ctx->pc = 0x1c4028u;

    // 0x1c4028: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1c4028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c402c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1c402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c4030: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c4034: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1c4034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1c4038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c4038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c403c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C403Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C403Cu;
        // 0x1c4040: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C403Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4044u;
}
