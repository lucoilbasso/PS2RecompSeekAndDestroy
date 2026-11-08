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

// Function: SePitch__7WcSeStdii
// Address: 0x17b970 - 0x17b9a0
void SePitch__7WcSeStdii_0x17b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePitch__7WcSeStdii_0x17b970");
#endif

    ctx->pc = 0x17b970u;

    // 0x17b970: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b974: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B974u;
    {
        const bool branch_taken_0x17b974 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B974u;
        // 0x17b978: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b974) {
            ctx->pc = 0x17B998u;
            goto label_17b998;
        }
    }
    ctx->pc = 0x17B97Cu;
    // 0x17b97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b980: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17b984: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17b988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b98c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x17b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17b990: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17b990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x17b994: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17b998:
    // 0x17b998: 0x3e00008  jr          $ra
    ctx->pc = 0x17B998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9A0u;
}
