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

// Function: WTxPanelCellMapFillMaskRect__FP9WcTxPanelPUsUsP7IRect16
// Address: 0x18e5b8 - 0x18e644
void WTxPanelCellMapFillMaskRect__FP9WcTxPanelPUsUsP7IRect16_0x18e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapFillMaskRect__FP9WcTxPanelPUsUsP7IRect16_0x18e5b8");
#endif

    switch (ctx->pc) {
        case 0x18e5e8u: goto label_18e5e8;
        case 0x18e5f8u: goto label_18e5f8;
        default: break;
    }

    ctx->pc = 0x18e5b8u;

    // 0x18e5b8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x18e5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5bc: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x18e5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e5c0: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x18e5c4: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x18e5c8: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x18e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18e5cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18e5ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5d0: 0x84e60006  lh          $a2, 0x6($a3)
    ctx->pc = 0x18e5d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e5d4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18e5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e5d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e5dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e5e0: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E5E0u;
    {
        const bool branch_taken_0x18e5e0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E0u;
        // 0x18e5e4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5e0) {
            ctx->pc = 0x18E63Cu;
            goto label_18e63c;
        }
    }
    ctx->pc = 0x18E5E8u;
label_18e5e8:
    // 0x18e5e8: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e5ec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E5ECu;
    {
        const bool branch_taken_0x18e5ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5ECu;
        // 0x18e5f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5ec) {
            ctx->pc = 0x18E61Cu;
            goto label_18e61c;
        }
    }
    ctx->pc = 0x18E5F4u;
    // 0x18e5f4: 0xa2027  nor         $a0, $zero, $t2
    ctx->pc = 0x18e5f4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
label_18e5f8:
    // 0x18e5f8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e5fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e600: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18e604: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e604u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e608: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e60c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e610: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E610u;
    {
        const bool branch_taken_0x18e610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E610u;
        // 0x18e614: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e610) {
            ctx->pc = 0x18E5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e5f8;
        }
    }
    ctx->pc = 0x18E618u;
    // 0x18e618: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_18e61c:
    // 0x18e61c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x18e620: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x18e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18e624: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x18e624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e628: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e628u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e62c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e630: 0x124202a  slt         $a0, $t1, $a0
    ctx->pc = 0x18e630u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e634: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E634u;
    {
        const bool branch_taken_0x18e634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E634u;
        // 0x18e638: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e634) {
            ctx->pc = 0x18E5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e5e8;
        }
    }
    ctx->pc = 0x18E63Cu;
label_18e63c:
    // 0x18e63c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E644u;
}
