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

// Function: WTxPanelCellMapFillRect__FP9WcTxPanelPUsUsP7IRect16
// Address: 0x18e530 - 0x18e5b8
void WTxPanelCellMapFillRect__FP9WcTxPanelPUsUsP7IRect16_0x18e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapFillRect__FP9WcTxPanelPUsUsP7IRect16_0x18e530");
#endif

    switch (ctx->pc) {
        case 0x18e560u: goto label_18e560;
        case 0x18e570u: goto label_18e570;
        default: break;
    }

    ctx->pc = 0x18e530u;

    // 0x18e530: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x18e530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e534: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e538: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x18e53c: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x18e53cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x18e540: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    // 0x18e544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18e544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e548: 0x84e60006  lh          $a2, 0x6($a3)
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e54c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18e54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e550: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e554: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e558: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x18E558u;
    {
        const bool branch_taken_0x18e558 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E558u;
        // 0x18e55c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e558) {
            ctx->pc = 0x18E5B0u;
            goto label_18e5b0;
        }
    }
    ctx->pc = 0x18E560u;
label_18e560:
    // 0x18e560: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e564: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E564u;
    {
        const bool branch_taken_0x18e564 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E564u;
        // 0x18e568: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e564) {
            ctx->pc = 0x18E590u;
            goto label_18e590;
        }
    }
    ctx->pc = 0x18E56Cu;
    // 0x18e56c: 0x0  nop
    ctx->pc = 0x18e56cu;
    // NOP
label_18e570:
    // 0x18e570: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x18e570u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x18e574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e578: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e57c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e580: 0x0  nop
    ctx->pc = 0x18e580u;
    // NOP
    // 0x18e584: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E584u;
    {
        const bool branch_taken_0x18e584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E584u;
        // 0x18e588: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e584) {
            ctx->pc = 0x18E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E58Cu;
    // 0x18e58c: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_18e590:
    // 0x18e590: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18e590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18e594: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    // 0x18e598: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x18e598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e59c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e5a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e5a4: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e5a8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18E5A8u;
    {
        const bool branch_taken_0x18e5a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5A8u;
        // 0x18e5ac: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5a8) {
            ctx->pc = 0x18E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e560;
        }
    }
    ctx->pc = 0x18E5B0u;
label_18e5b0:
    // 0x18e5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E5B8u;
}
