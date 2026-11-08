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

// Function: _sysbitPtr
// Address: 0x1c41d0 - 0x1c41fc
void _sysbitPtr_0x1c41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitPtr_0x1c41d0");
#endif

    ctx->pc = 0x1c41d0u;

    // 0x1c41d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c41d4: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1c41d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x1c41d8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1c41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c41dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c41e0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1c41e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c41e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C41E4u;
    {
        const bool branch_taken_0x1c41e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c41e4) {
            ctx->pc = 0x1C41F4u;
            goto label_1c41f4;
        }
    }
    ctx->pc = 0x1C41ECu;
    // 0x1c41ec: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1c41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c41f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c41f4:
    // 0x1c41f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41F4u;
        // 0x1c41f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C41F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C41FCu;
}
