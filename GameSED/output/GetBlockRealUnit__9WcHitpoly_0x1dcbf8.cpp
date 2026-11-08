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

// Function: GetBlockRealUnit__9WcHitpoly
// Address: 0x1dcbf8 - 0x1dcc14
void GetBlockRealUnit__9WcHitpoly_0x1dcbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBlockRealUnit__9WcHitpoly_0x1dcbf8");
#endif

    ctx->pc = 0x1dcbf8u;

    // 0x1dcbf8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dcbfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc00: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1dcc04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dcc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dcc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC14u;
}
