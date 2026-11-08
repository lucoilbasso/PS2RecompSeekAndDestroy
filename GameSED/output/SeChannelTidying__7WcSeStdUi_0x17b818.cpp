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

// Function: SeChannelTidying__7WcSeStdUi
// Address: 0x17b818 - 0x17b854
void SeChannelTidying__7WcSeStdUi_0x17b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeChannelTidying__7WcSeStdUi_0x17b818");
#endif

    switch (ctx->pc) {
        case 0x17b828u: goto label_17b828;
        default: break;
    }

    ctx->pc = 0x17b818u;

    // 0x17b818: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x17b818u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x17b81c: 0x24840170  addiu       $a0, $a0, 0x170
    ctx->pc = 0x17b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x17b820: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b820u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b824: 0x0  nop
    ctx->pc = 0x17b824u;
    // NOP
label_17b828:
    // 0x17b828: 0x651006  srlv        $v0, $a1, $v1
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x17b82c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17b830: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17b834: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B834u;
    {
        const bool branch_taken_0x17b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B834u;
        // 0x17b838: 0x2866000c  slti        $a2, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b834) {
            ctx->pc = 0x17B840u;
            goto label_17b840;
        }
    }
    ctx->pc = 0x17B83Cu;
    // 0x17b83c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_17b840:
    // 0x17b840: 0x0  nop
    ctx->pc = 0x17b840u;
    // NOP
    // 0x17b844: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B844u;
    {
        const bool branch_taken_0x17b844 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B844u;
        // 0x17b848: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b844) {
            ctx->pc = 0x17B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b828;
        }
    }
    ctx->pc = 0x17B84Cu;
    // 0x17b84c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B854u;
}
