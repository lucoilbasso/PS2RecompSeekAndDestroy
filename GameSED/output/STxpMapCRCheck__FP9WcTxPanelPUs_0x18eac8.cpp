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

// Function: STxpMapCRCheck__FP9WcTxPanelPUs
// Address: 0x18eac8 - 0x18eb58
void STxpMapCRCheck__FP9WcTxPanelPUs_0x18eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("STxpMapCRCheck__FP9WcTxPanelPUs_0x18eac8");
#endif

    ctx->pc = 0x18eac8u;

    // 0x18eac8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18eac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eacc: 0x84c20244  lh          $v0, 0x244($a2)
    ctx->pc = 0x18eaccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 580)));
    // 0x18ead0: 0x8cc30208  lw          $v1, 0x208($a2)
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x18ead4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18ead4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ead8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18EAD8u;
    {
        const bool branch_taken_0x18ead8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAD8u;
        // 0x18eadc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ead8) {
            ctx->pc = 0x18EB50u;
            goto label_18eb50;
        }
    }
    ctx->pc = 0x18EAE0u;
    // 0x18eae0: 0x84c3023c  lh          $v1, 0x23C($a2)
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 572)));
    // 0x18eae4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18EAE4u;
    {
        const bool branch_taken_0x18eae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAE4u;
        // 0x18eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eae4) {
            ctx->pc = 0x18EB50u;
            goto label_18eb50;
        }
    }
    ctx->pc = 0x18EAECu;
    // 0x18eaec: 0x94c70246  lhu         $a3, 0x246($a2)
    ctx->pc = 0x18eaecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
    // 0x18eaf0: 0x8cc4020c  lw          $a0, 0x20C($a2)
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    // 0x18eaf4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18eaf8: 0xa4c00244  sh          $zero, 0x244($a2)
    ctx->pc = 0x18eaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18eafc: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x18eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18eb00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18eb04: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18eb08: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x18eb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18eb0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EB0Cu;
    {
        const bool branch_taken_0x18eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB0Cu;
        // 0x18eb10: 0xa4c30246  sh          $v1, 0x246($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb0c) {
            ctx->pc = 0x18EB20u;
            goto label_18eb20;
        }
    }
    ctx->pc = 0x18EB14u;
    // 0x18eb14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EB14u;
    {
        const bool branch_taken_0x18eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB14u;
        // 0x18eb18: 0xa4c70246  sh          $a3, 0x246($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 582), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb14) {
            ctx->pc = 0x18EB2Cu;
            goto label_18eb2c;
        }
    }
    ctx->pc = 0x18EB1Cu;
    // 0x18eb1c: 0x0  nop
    ctx->pc = 0x18eb1cu;
    // NOP
label_18eb20:
    // 0x18eb20: 0x8cc20254  lw          $v0, 0x254($a2)
    ctx->pc = 0x18eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
    // 0x18eb24: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18eb28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18eb2c:
    // 0x18eb2c: 0x84c20246  lh          $v0, 0x246($a2)
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
    // 0x18eb30: 0x8cc30208  lw          $v1, 0x208($a2)
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x18eb34: 0x84c40244  lh          $a0, 0x244($a2)
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 580)));
    // 0x18eb38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18eb38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18eb3c: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x18eb40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18eb44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18eb48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18eb4c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x18eb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18eb50:
    // 0x18eb50: 0x3e00008  jr          $ra
    ctx->pc = 0x18EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EB58u;
}
