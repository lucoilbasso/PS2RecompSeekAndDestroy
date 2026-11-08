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

// Function: ApContSEGetPitchFrange__Fv
// Address: 0x15a120 - 0x15a14c
void ApContSEGetPitchFrange__Fv_0x15a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApContSEGetPitchFrange__Fv_0x15a120");
#endif

    ctx->pc = 0x15a120u;

    // 0x15a120: 0x27848b34  addiu       $a0, $gp, -0x74CC
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937396));
    // 0x15a124: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a128: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x15a128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15a12c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15a130: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15a130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15a134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15a134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15a138: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15a138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x15a13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a140: 0x8c42a250  lw          $v0, -0x5DB0($v0)
    ctx->pc = 0x15a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943312)));
    // 0x15a144: 0x3e00008  jr          $ra
    ctx->pc = 0x15A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A14Cu;
}
