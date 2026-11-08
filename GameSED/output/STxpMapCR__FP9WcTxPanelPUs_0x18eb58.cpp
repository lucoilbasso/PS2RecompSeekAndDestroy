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

// Function: STxpMapCR__FP9WcTxPanelPUs
// Address: 0x18eb58 - 0x18ebe0
void STxpMapCR__FP9WcTxPanelPUs_0x18eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("STxpMapCR__FP9WcTxPanelPUs_0x18eb58");
#endif

    ctx->pc = 0x18eb58u;

    // 0x18eb58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18eb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb5c: 0x84c20244  lh          $v0, 0x244($a2)
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 580)));
    // 0x18eb60: 0x8cc30208  lw          $v1, 0x208($a2)
    ctx->pc = 0x18eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x18eb64: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18eb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18eb68: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18EB68u;
    {
        const bool branch_taken_0x18eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb68) {
            ctx->pc = 0x18EBD8u;
            goto label_18ebd8;
        }
    }
    ctx->pc = 0x18EB70u;
    // 0x18eb70: 0x94c70246  lhu         $a3, 0x246($a2)
    ctx->pc = 0x18eb70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
    // 0x18eb74: 0x8cc4020c  lw          $a0, 0x20C($a2)
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    // 0x18eb78: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18eb7c: 0xa4c00244  sh          $zero, 0x244($a2)
    ctx->pc = 0x18eb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18eb80: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18eb84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18eb84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18eb88: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18eb8c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x18eb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18eb90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EB90u;
    {
        const bool branch_taken_0x18eb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB90u;
        // 0x18eb94: 0xa4c30246  sh          $v1, 0x246($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb90) {
            ctx->pc = 0x18EBA0u;
            goto label_18eba0;
        }
    }
    ctx->pc = 0x18EB98u;
    // 0x18eb98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EB98u;
    {
        const bool branch_taken_0x18eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB98u;
        // 0x18eb9c: 0xa4c70246  sh          $a3, 0x246($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 582), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb98) {
            ctx->pc = 0x18EBACu;
            goto label_18ebac;
        }
    }
    ctx->pc = 0x18EBA0u;
label_18eba0:
    // 0x18eba0: 0x8cc20254  lw          $v0, 0x254($a2)
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
    // 0x18eba4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18eba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18ebac:
    // 0x18ebac: 0x8cc20208  lw          $v0, 0x208($a2)
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x18ebb0: 0x84c30246  lh          $v1, 0x246($a2)
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
    // 0x18ebb4: 0x94c40248  lhu         $a0, 0x248($a2)
    ctx->pc = 0x18ebb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 584)));
    // 0x18ebb8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18ebb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18ebbc: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x18ebc0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18ebc4: 0xa4c40244  sh          $a0, 0x244($a2)
    ctx->pc = 0x18ebc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 580), (uint16_t)GPR_U32(ctx, 4));
    // 0x18ebc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18ebc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18ebcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ebd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ebd4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18ebd8:
    // 0x18ebd8: 0x3e00008  jr          $ra
    ctx->pc = 0x18EBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBD8u;
        // 0x18ebdc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EBE0u;
}
