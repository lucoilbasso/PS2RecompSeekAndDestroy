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

// Function: WMCardHardReset__Fv
// Address: 0x1793c0 - 0x1793f4
void WMCardHardReset__Fv_0x1793c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardHardReset__Fv_0x1793c0");
#endif

    switch (ctx->pc) {
        case 0x1793dcu: goto label_1793dc;
        case 0x1793e4u: goto label_1793e4;
        default: break;
    }

    ctx->pc = 0x1793c0u;

    // 0x1793c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1793c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1793c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1793c8: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x1793c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x1793cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1793ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1793d0: 0x2610d180  addiu       $s0, $s0, -0x2E80
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955392));
    // 0x1793d4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1793D4u;
    SET_GPR_U32(ctx, 31, 0x1793DCu);
    ctx->pc = 0x1793D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793D4u;
    // 0x1793d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1793D4u, 0x1793DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793DCu;
label_1793dc:
    // 0x1793dc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1793DCu;
    SET_GPR_U32(ctx, 31, 0x1793E4u);
    ctx->pc = 0x1793E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793DCu;
    // 0x1793e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1793DCu, 0x1793E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793E4u;
label_1793e4:
    // 0x1793e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1793e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1793e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1793e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1793ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1793ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793ECu;
        // 0x1793f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1793ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793F4u;
}
