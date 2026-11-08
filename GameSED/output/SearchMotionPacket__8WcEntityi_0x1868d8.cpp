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

// Function: SearchMotionPacket__8WcEntityi
// Address: 0x1868d8 - 0x186918
void SearchMotionPacket__8WcEntityi_0x1868d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMotionPacket__8WcEntityi_0x1868d8");
#endif

    switch (ctx->pc) {
        case 0x1868e8u: goto label_1868e8;
        default: break;
    }

    ctx->pc = 0x1868d8u;

    // 0x1868d8: 0x8c840148  lw          $a0, 0x148($a0)
    ctx->pc = 0x1868d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1868dc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1868DCu;
    {
        const bool branch_taken_0x1868dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868DCu;
        // 0x1868e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868dc) {
            ctx->pc = 0x186910u;
            goto label_186910;
        }
    }
    ctx->pc = 0x1868E4u;
    // 0x1868e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1868e8:
    // 0x1868e8: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1868E8u;
    {
        const bool branch_taken_0x1868e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1868ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868E8u;
        // 0x1868ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868e8) {
            ctx->pc = 0x186910u;
            goto label_186910;
        }
    }
    ctx->pc = 0x1868F0u;
    // 0x1868f0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1868f4: 0x0  nop
    ctx->pc = 0x1868f4u;
    // NOP
    // 0x1868f8: 0x0  nop
    ctx->pc = 0x1868f8u;
    // NOP
    // 0x1868fc: 0x0  nop
    ctx->pc = 0x1868fcu;
    // NOP
    // 0x186900: 0x0  nop
    ctx->pc = 0x186900u;
    // NOP
    // 0x186904: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186904u;
    {
        const bool branch_taken_0x186904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186904) {
            ctx->pc = 0x186908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186904u;
            // 0x186908: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1868E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1868e8;
        }
    }
    ctx->pc = 0x18690Cu;
    // 0x18690c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18690cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186910:
    // 0x186910: 0x3e00008  jr          $ra
    ctx->pc = 0x186910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186918u;
}
