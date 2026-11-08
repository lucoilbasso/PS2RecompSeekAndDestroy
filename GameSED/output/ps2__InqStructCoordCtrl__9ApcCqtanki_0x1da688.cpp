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

// Function: _InqStructCoordCtrl__9ApcCqtanki
// Address: 0x1da688 - 0x1da6b8
void ps2__InqStructCoordCtrl__9ApcCqtanki_0x1da688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqStructCoordCtrl__9ApcCqtanki_0x1da688");
#endif

    ctx->pc = 0x1da688u;

    // 0x1da688: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1da688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da68c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1da68cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1da690: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1da690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1da694: 0x8ca20c04  lw          $v0, 0xC04($a1)
    ctx->pc = 0x1da694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3076)));
    // 0x1da698: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA698u;
    {
        const bool branch_taken_0x1da698 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA698u;
        // 0x1da69c: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da698) {
            ctx->pc = 0x1DA6B0u;
            goto label_1da6b0;
        }
    }
    ctx->pc = 0x1DA6A0u;
    // 0x1da6a0: 0x8c6201b4  lw          $v0, 0x1B4($v1)
    ctx->pc = 0x1da6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x1da6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6A4u;
        // 0x1da6a8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6ACu;
    // 0x1da6ac: 0x0  nop
    ctx->pc = 0x1da6acu;
    // NOP
label_1da6b0:
    // 0x1da6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6B0u;
        // 0x1da6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6B8u;
}
