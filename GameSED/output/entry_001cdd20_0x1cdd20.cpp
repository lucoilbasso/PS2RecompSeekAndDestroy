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

// Function: entry_001cdd20
// Address: 0x1cdd20 - 0x1cdd48
void entry_001cdd20_0x1cdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdd20_0x1cdd20");
#endif

    ctx->pc = 0x1cdd20u;

    // 0x1cdd20: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDD20u;
    {
        const bool branch_taken_0x1cdd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD20u;
        // 0x1cdd24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd20) {
            ctx->pc = 0x1CDD48u;
            return;
        }
    }
    ctx->pc = 0x1CDD28u;
    // 0x1cdd28: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cdd2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdd30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cdd34: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cdd38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cdd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD3Cu;
        // 0x1cdd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD44u;
    // 0x1cdd44: 0x0  nop
    ctx->pc = 0x1cdd44u;
    // NOP
    ctx->pc = 0x1cdd48u;
}
