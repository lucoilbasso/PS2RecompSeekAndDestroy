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

// Function: SetTransparentMode__9WcStrPosti
// Address: 0x1e02d8 - 0x1e02f8
void SetTransparentMode__9WcStrPosti_0x1e02d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTransparentMode__9WcStrPosti_0x1e02d8");
#endif

    ctx->pc = 0x1e02d8u;

    // 0x1e02d8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e02dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e02e0: 0x9063ef38  lbu         $v1, -0x10C8($v1)
    ctx->pc = 0x1e02e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963000)));
    // 0x1e02e4: 0x24840154  addiu       $a0, $a0, 0x154
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x1e02e8: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1e02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1e02ec: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1e02ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e02f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E02F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02F0u;
        // 0x1e02f4: 0xa0830002  sb          $v1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E02F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E02F8u;
}
