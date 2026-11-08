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

// Function: Cmd_EFFECT_MODE_Entry__FP15BsSCDEntControl
// Address: 0x11d968 - 0x11d9a4
void Cmd_EFFECT_MODE_Entry__FP15BsSCDEntControl_0x11d968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_MODE_Entry__FP15BsSCDEntControl_0x11d968");
#endif

    switch (ctx->pc) {
        case 0x11d978u: goto label_11d978;
        case 0x11d998u: goto label_11d998;
        default: break;
    }

    ctx->pc = 0x11d968u;

    // 0x11d968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d970: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D970u;
    SET_GPR_U32(ctx, 31, 0x11D978u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D970u, 0x11D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D978u;
label_11d978:
    // 0x11d978: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d97c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11d97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11d980: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11d984: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11d984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11d988: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x11d988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
    // 0x11d98c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11d990: 0xc04776a  jal         func_11DDA8
    ctx->pc = 0x11D990u;
    SET_GPR_U32(ctx, 31, 0x11D998u);
    ctx->pc = 0x11D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D990u;
    // 0x11d994: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDA8u, 0x11D990u, 0x11D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D998u;
label_11d998:
    // 0x11d998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d99c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D99Cu;
        // 0x11d9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D9A4u;
}
