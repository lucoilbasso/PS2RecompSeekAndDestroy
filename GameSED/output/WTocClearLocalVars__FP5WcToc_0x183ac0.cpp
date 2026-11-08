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

// Function: WTocClearLocalVars__FP5WcToc
// Address: 0x183ac0 - 0x183aec
void WTocClearLocalVars__FP5WcToc_0x183ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTocClearLocalVars__FP5WcToc_0x183ac0");
#endif

    switch (ctx->pc) {
        case 0x183ae0u: goto label_183ae0;
        default: break;
    }

    ctx->pc = 0x183ac0u;

    // 0x183ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183acc: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x183accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x183ad0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x183ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183ad4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x183ad8: 0xc067294  jal         func_19CA50
    ctx->pc = 0x183AD8u;
    SET_GPR_U32(ctx, 31, 0x183AE0u);
    ctx->pc = 0x183ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AD8u;
    // 0x183adc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x183AD8u, 0x183AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AE0u;
label_183ae0:
    // 0x183ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x183AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AE4u;
        // 0x183ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AECu;
}
