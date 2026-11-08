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

// Function: EntityAllObjViewReset__8WcEntity
// Address: 0x186638 - 0x186684
void EntityAllObjViewReset__8WcEntity_0x186638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntityAllObjViewReset__8WcEntity_0x186638");
#endif

    switch (ctx->pc) {
        case 0x186650u: goto label_186650;
        default: break;
    }

    ctx->pc = 0x186638u;

    // 0x186638: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x186638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18663c: 0x3c06ffdf  lui         $a2, 0xFFDF
    ctx->pc = 0x18663cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65503 << 16));
    // 0x186640: 0x8c4515c4  lw          $a1, 0x15C4($v0)
    ctx->pc = 0x186640u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4115C4u));
    // 0x186644: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x186644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x186648: 0x24070946  addiu       $a3, $zero, 0x946
    ctx->pc = 0x186648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x18664c: 0x0  nop
    ctx->pc = 0x18664cu;
    // NOP
label_186650:
    // 0x186650: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x186650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x186654: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x186654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186658: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18665c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x186660: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x186660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x186664: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x186664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x186668: 0x14670002  bne         $v1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x186668u;
    {
        const bool branch_taken_0x186668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x18666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186668u;
        // 0x18666c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186668) {
            ctx->pc = 0x186674u;
            goto label_186674;
        }
    }
    ctx->pc = 0x186670u;
    // 0x186670: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x186670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
label_186674:
    // 0x186674: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x186674u;
    {
        const bool branch_taken_0x186674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x186674) {
            ctx->pc = 0x186650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186650;
        }
    }
    ctx->pc = 0x18667Cu;
    // 0x18667c: 0x3e00008  jr          $ra
    ctx->pc = 0x18667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186684u;
}
