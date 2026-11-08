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

// Function: SInqFieldBackColor__Fi
// Address: 0x149018 - 0x149044
void SInqFieldBackColor__Fi_0x149018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SInqFieldBackColor__Fi_0x149018");
#endif

    ctx->pc = 0x149018u;

    // 0x149018: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x149018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x14901c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14901cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x149020: 0x244226c0  addiu       $v0, $v0, 0x26C0
    ctx->pc = 0x149020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x149024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149028: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x14902c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x149030: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x149030u;
    {
        const bool branch_taken_0x149030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x149034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149030u;
        // 0x149034: 0x24420370  addiu       $v0, $v0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149030) {
            ctx->pc = 0x14903Cu;
            goto label_14903c;
        }
    }
    ctx->pc = 0x149038u;
    // 0x149038: 0x24820378  addiu       $v0, $a0, 0x378
    ctx->pc = 0x149038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 888));
label_14903c:
    // 0x14903c: 0x3e00008  jr          $ra
    ctx->pc = 0x14903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149044u;
}
