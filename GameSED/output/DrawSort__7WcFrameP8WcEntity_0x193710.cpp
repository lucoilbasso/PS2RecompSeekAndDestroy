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

// Function: DrawSort__7WcFrameP8WcEntity
// Address: 0x193710 - 0x193768
void DrawSort__7WcFrameP8WcEntity_0x193710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__7WcFrameP8WcEntity_0x193710");
#endif

    ctx->pc = 0x193710u;

    // 0x193710: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x193710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x193714: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x193714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x193718: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x193718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x19371c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19371Cu;
    {
        const bool branch_taken_0x19371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19371Cu;
        // 0x193720: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19371c) {
            ctx->pc = 0x193760u;
            goto label_193760;
        }
    }
    ctx->pc = 0x193724u;
    // 0x193724: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x193724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x193728: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193728u;
    {
        const bool branch_taken_0x193728 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193728u;
        // 0x19372c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193728) {
            ctx->pc = 0x19374Cu;
            goto label_19374c;
        }
    }
    ctx->pc = 0x193730u;
    // 0x193730: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x193734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193738: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x193738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19373c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x193740: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x193740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x193744: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x193744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x193748: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19374c:
    // 0x19374c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x193750: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x193750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x193754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x193754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193758: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x193758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x19375c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19375cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_193760:
    // 0x193760: 0x3e00008  jr          $ra
    ctx->pc = 0x193760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193768u;
}
