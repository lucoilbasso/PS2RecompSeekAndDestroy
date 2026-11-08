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

// Function: ApRscKeyCheck__Fii
// Address: 0x114730 - 0x114778
void ApRscKeyCheck__Fii_0x114730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyCheck__Fii_0x114730");
#endif

    ctx->pc = 0x114730u;

    // 0x114730: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x114730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x114734: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x114734u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x114738: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11473c: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x11473cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x114740: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x114740u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x114744: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x114744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x114748: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x114748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x11474c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x11474cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x114750: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x114750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x114754: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x114754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114758: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x114758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x11475c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11475Cu;
    {
        const bool branch_taken_0x11475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11475Cu;
        // 0x114760: 0x94c30012  lhu         $v1, 0x12($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11475c) {
            ctx->pc = 0x11476Cu;
            goto label_11476c;
        }
    }
    ctx->pc = 0x114764u;
    // 0x114764: 0x94c20016  lhu         $v0, 0x16($a2)
    ctx->pc = 0x114764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x114768: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x114768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11476c:
    // 0x11476c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x11476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x114770: 0x3e00008  jr          $ra
    ctx->pc = 0x114770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114770u;
        // 0x114774: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114778u;
}
