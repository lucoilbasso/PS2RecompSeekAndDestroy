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

// Function: SePan__7WcSeStdii
// Address: 0x17b9d0 - 0x17ba00
void SePan__7WcSeStdii_0x17b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePan__7WcSeStdii_0x17b9d0");
#endif

    ctx->pc = 0x17b9d0u;

    // 0x17b9d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b9d4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B9D4u;
    {
        const bool branch_taken_0x17b9d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9D4u;
        // 0x17b9d8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9d4) {
            ctx->pc = 0x17B9F8u;
            goto label_17b9f8;
        }
    }
    ctx->pc = 0x17B9DCu;
    // 0x17b9dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b9e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17b9e4: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17b9e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b9ec: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x17b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x17b9f0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17b9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17b9f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17b9f8:
    // 0x17b9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA00u;
}
