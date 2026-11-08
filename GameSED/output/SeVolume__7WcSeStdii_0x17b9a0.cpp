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

// Function: SeVolume__7WcSeStdii
// Address: 0x17b9a0 - 0x17b9d0
void SeVolume__7WcSeStdii_0x17b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeVolume__7WcSeStdii_0x17b9a0");
#endif

    ctx->pc = 0x17b9a0u;

    // 0x17b9a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b9a4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B9A4u;
    {
        const bool branch_taken_0x17b9a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9A4u;
        // 0x17b9a8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9a4) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B9ACu;
    // 0x17b9ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b9b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17b9b4: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17b9b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b9bc: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x17b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x17b9c0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17b9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17b9c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17b9c8:
    // 0x17b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9D0u;
}
