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

// Function: ApUserPressAnalog__FUc
// Address: 0x1568a8 - 0x1568c4
void ApUserPressAnalog__FUc_0x1568a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserPressAnalog__FUc_0x1568a8");
#endif

    ctx->pc = 0x1568a8u;

    // 0x1568a8: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x1568a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1568ac: 0x3084003c  andi        $a0, $a0, 0x3C
    ctx->pc = 0x1568acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)60);
    // 0x1568b0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1568b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1568b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1568b8: 0x8c42a0a0  lw          $v0, -0x5F60($v0)
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942880)));
    // 0x1568bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1568BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1568C4u;
}
