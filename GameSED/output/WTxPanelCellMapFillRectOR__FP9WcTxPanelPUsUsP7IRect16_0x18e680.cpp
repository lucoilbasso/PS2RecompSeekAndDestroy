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

// Function: WTxPanelCellMapFillRectOR__FP9WcTxPanelPUsUsP7IRect16
// Address: 0x18e680 - 0x18e70c
void WTxPanelCellMapFillRectOR__FP9WcTxPanelPUsUsP7IRect16_0x18e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapFillRectOR__FP9WcTxPanelPUsUsP7IRect16_0x18e680");
#endif

    switch (ctx->pc) {
        case 0x18e6b0u: goto label_18e6b0;
        case 0x18e6c0u: goto label_18e6c0;
        default: break;
    }

    ctx->pc = 0x18e680u;

    // 0x18e680: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x18e680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e684: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x18e684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e688: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x18e688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x18e68c: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x18e68cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x18e690: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    // 0x18e694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18e694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e698: 0x84e60006  lh          $a2, 0x6($a3)
    ctx->pc = 0x18e698u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e69c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18e69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e6a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e6a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e6a8: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E6A8u;
    {
        const bool branch_taken_0x18e6a8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A8u;
        // 0x18e6ac: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6a8) {
            ctx->pc = 0x18E704u;
            goto label_18e704;
        }
    }
    ctx->pc = 0x18E6B0u;
label_18e6b0:
    // 0x18e6b0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e6b4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E6B4u;
    {
        const bool branch_taken_0x18e6b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6B4u;
        // 0x18e6b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6b4) {
            ctx->pc = 0x18E6E4u;
            goto label_18e6e4;
        }
    }
    ctx->pc = 0x18E6BCu;
    // 0x18e6bc: 0x0  nop
    ctx->pc = 0x18e6bcu;
    // NOP
label_18e6c0:
    // 0x18e6c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e6c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e6c8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x18e6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18e6cc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e6d0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e6d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e6d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E6D8u;
    {
        const bool branch_taken_0x18e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D8u;
        // 0x18e6dc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6d8) {
            ctx->pc = 0x18E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e6c0;
        }
    }
    ctx->pc = 0x18E6E0u;
    // 0x18e6e0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_18e6e4:
    // 0x18e6e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18e6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18e6e8: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    // 0x18e6ec: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x18e6ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e6f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e6f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e6f8: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x18e6f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e6fc: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E6FCu;
    {
        const bool branch_taken_0x18e6fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6FCu;
        // 0x18e700: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6fc) {
            ctx->pc = 0x18E6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e6b0;
        }
    }
    ctx->pc = 0x18E704u;
label_18e704:
    // 0x18e704: 0x3e00008  jr          $ra
    ctx->pc = 0x18E704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E70Cu;
}
