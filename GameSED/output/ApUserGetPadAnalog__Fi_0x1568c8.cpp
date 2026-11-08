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

// Function: ApUserGetPadAnalog__Fi
// Address: 0x1568c8 - 0x1568e4
void ApUserGetPadAnalog__Fi_0x1568c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserGetPadAnalog__Fi_0x1568c8");
#endif

    ctx->pc = 0x1568c8u;

    // 0x1568c8: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x1568c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1568cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1568d0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1568d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1568d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1568d8: 0x8c42a0e0  lw          $v0, -0x5F20($v0)
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942944)));
    // 0x1568dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1568DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1568E4u;
}
