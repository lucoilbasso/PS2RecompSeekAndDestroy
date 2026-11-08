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

// Function: GetStructCoordCtrl__9ApcCqtanki
// Address: 0x1daac8 - 0x1dab18
void GetStructCoordCtrl__9ApcCqtanki_0x1daac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStructCoordCtrl__9ApcCqtanki_0x1daac8");
#endif

    ctx->pc = 0x1daac8u;

    // 0x1daac8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAAC8u;
    {
        const bool branch_taken_0x1daac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daac8) {
            ctx->pc = 0x1DAAD8u;
            goto label_1daad8;
        }
    }
    ctx->pc = 0x1DAAD0u;
    // 0x1daad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAD0u;
        // 0x1daad4: 0x8c8201b4  lw          $v0, 0x1B4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAD8u;
label_1daad8:
    // 0x1daad8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAAD8u;
    {
        const bool branch_taken_0x1daad8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1daad8) {
            ctx->pc = 0x1DAADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAAD8u;
            // 0x1daadc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAAF0u;
            goto label_1daaf0;
        }
    }
    ctx->pc = 0x1DAAE0u;
    // 0x1daae0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1daae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1daae4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1daae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAE8u;
        // 0x1daaec: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAF0u;
label_1daaf0:
    // 0x1daaf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1daaf4: 0x8c430c04  lw          $v1, 0xC04($v0)
    ctx->pc = 0x1daaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1daaf8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAAF8u;
    {
        const bool branch_taken_0x1daaf8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAF8u;
        // 0x1daafc: 0x32980  sll         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daaf8) {
            ctx->pc = 0x1DAB10u;
            goto label_1dab10;
        }
    }
    ctx->pc = 0x1DAB00u;
    // 0x1dab00: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1dab04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB04u;
        // 0x1dab08: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAB0Cu;
    // 0x1dab0c: 0x0  nop
    ctx->pc = 0x1dab0cu;
    // NOP
label_1dab10:
    // 0x1dab10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB10u;
        // 0x1dab14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAB18u;
}
