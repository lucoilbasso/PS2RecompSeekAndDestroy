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

// Function: UnPostEntity__7WcLight
// Address: 0x189390 - 0x18941c
void UnPostEntity__7WcLight_0x189390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnPostEntity__7WcLight_0x189390");
#endif

    switch (ctx->pc) {
        case 0x1893d8u: goto label_1893d8;
        case 0x189410u: goto label_189410;
        default: break;
    }

    ctx->pc = 0x189390u;

    // 0x189390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189398: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x189398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18939c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18939Cu;
    {
        const bool branch_taken_0x18939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18939c) {
            ctx->pc = 0x189408u;
            goto label_189408;
        }
    }
    ctx->pc = 0x1893A4u;
    // 0x1893a4: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1893a8: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1893ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1893ACu;
    {
        const bool branch_taken_0x1893ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893ACu;
        // 0x1893b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893ac) {
            ctx->pc = 0x189408u;
            goto label_189408;
        }
    }
    ctx->pc = 0x1893B4u;
    // 0x1893b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1893b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893b8: 0x8ca30134  lw          $v1, 0x134($a1)
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x1893bc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1893BCu;
    {
        const bool branch_taken_0x1893bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1893bc) {
            ctx->pc = 0x1893D8u;
            goto label_1893d8;
        }
    }
    ctx->pc = 0x1893C4u;
    // 0x1893c4: 0x8c820134  lw          $v0, 0x134($a0)
    ctx->pc = 0x1893c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x1893c8: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1893c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
    // 0x1893cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1893CCu;
    {
        const bool branch_taken_0x1893cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893CCu;
        // 0x1893d0: 0xac800134  sw          $zero, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893cc) {
            ctx->pc = 0x189408u;
            goto label_189408;
        }
    }
    ctx->pc = 0x1893D4u;
    // 0x1893d4: 0x0  nop
    ctx->pc = 0x1893d4u;
    // NOP
label_1893d8:
    // 0x1893d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1893D8u;
    {
        const bool branch_taken_0x1893d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893D8u;
        // 0x1893dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893d8) {
            ctx->pc = 0x189408u;
            goto label_189408;
        }
    }
    ctx->pc = 0x1893E0u;
    // 0x1893e0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1893e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1893e4: 0x0  nop
    ctx->pc = 0x1893e4u;
    // NOP
    // 0x1893e8: 0x0  nop
    ctx->pc = 0x1893e8u;
    // NOP
    // 0x1893ec: 0x0  nop
    ctx->pc = 0x1893ecu;
    // NOP
    // 0x1893f0: 0x0  nop
    ctx->pc = 0x1893f0u;
    // NOP
    // 0x1893f4: 0x1466fff8  bne         $v1, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1893F4u;
    {
        const bool branch_taken_0x1893f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1893f4) {
            ctx->pc = 0x1893D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1893d8;
        }
    }
    ctx->pc = 0x1893FCu;
    // 0x1893fc: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x189400: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x189400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
    // 0x189404: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x189404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_189408:
    // 0x189408: 0xc06184c  jal         func_186130
    ctx->pc = 0x189408u;
    SET_GPR_U32(ctx, 31, 0x189410u);
    ctx->pc = 0x186130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186130u, 0x189408u, 0x189410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189410u;
label_189410:
    // 0x189410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189414: 0x3e00008  jr          $ra
    ctx->pc = 0x189414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189414u;
        // 0x189418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18941Cu;
}
