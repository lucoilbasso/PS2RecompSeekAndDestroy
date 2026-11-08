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

// Function: ResetOTRendering__7WcWorld
// Address: 0x1dd9a0 - 0x1dd9ec
void ResetOTRendering__7WcWorld_0x1dd9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetOTRendering__7WcWorld_0x1dd9a0");
#endif

    switch (ctx->pc) {
        case 0x1dd9c8u: goto label_1dd9c8;
        default: break;
    }

    ctx->pc = 0x1dd9a0u;

    // 0x1dd9a0: 0x8c84015c  lw          $a0, 0x15C($a0)
    ctx->pc = 0x1dd9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x1dd9a4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD9A4u;
    {
        const bool branch_taken_0x1dd9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9a4) {
            ctx->pc = 0x1DD9E4u;
            goto label_1dd9e4;
        }
    }
    ctx->pc = 0x1DD9ACu;
    // 0x1dd9ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1dd9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dd9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9b4: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1dd9b8: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD9B8u;
    {
        const bool branch_taken_0x1dd9b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9B8u;
        // 0x1dd9bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b8) {
            ctx->pc = 0x1DD9E4u;
            goto label_1dd9e4;
        }
    }
    ctx->pc = 0x1DD9C0u;
    // 0x1dd9c0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1dd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1dd9c4: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x1dd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
label_1dd9c8:
    // 0x1dd9c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dd9cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1dd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1dd9d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1dd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1dd9d4: 0x0  nop
    ctx->pc = 0x1dd9d4u;
    // NOP
    // 0x1dd9d8: 0x0  nop
    ctx->pc = 0x1dd9d8u;
    // NOP
    // 0x1dd9dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD9DCu;
    {
        const bool branch_taken_0x1dd9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9DCu;
        // 0x1dd9e0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9dc) {
            ctx->pc = 0x1DD9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9c8;
        }
    }
    ctx->pc = 0x1DD9E4u;
label_1dd9e4:
    // 0x1dd9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9ECu;
}
