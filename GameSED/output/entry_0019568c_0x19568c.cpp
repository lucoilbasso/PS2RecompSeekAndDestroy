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

// Function: entry_0019568c
// Address: 0x19568c - 0x1956a8
void entry_0019568c_0x19568c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019568c_0x19568c");
#endif

    switch (ctx->pc) {
        case 0x195694u: goto label_195694;
        default: break;
    }

    ctx->pc = 0x19568cu;

    // 0x19568c: 0xc065764  jal         func_195D90
    ctx->pc = 0x19568Cu;
    SET_GPR_U32(ctx, 31, 0x195694u);
    ctx->pc = 0x195690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19568Cu;
    // 0x195690: 0x8c850244  lw          $a1, 0x244($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D90u, 0x19568Cu, 0x195694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195694u;
label_195694:
    // 0x195694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19569c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19569cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1956A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A0u;
        // 0x1956a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1956A8u;
}
