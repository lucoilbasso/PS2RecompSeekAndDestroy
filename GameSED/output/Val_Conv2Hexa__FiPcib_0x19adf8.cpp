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

// Function: Val_Conv2Hexa__FiPcib
// Address: 0x19adf8 - 0x19af50
void Val_Conv2Hexa__FiPcib_0x19adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Conv2Hexa__FiPcib_0x19adf8");
#endif

    switch (ctx->pc) {
        case 0x19ae28u: goto label_19ae28;
        case 0x19ae70u: goto label_19ae70;
        case 0x19aea0u: goto label_19aea0;
        case 0x19aef0u: goto label_19aef0;
        case 0x19af28u: goto label_19af28;
        default: break;
    }

    ctx->pc = 0x19adf8u;

    // 0x19adf8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19adf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19adfc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19adfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ae00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x19ae04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AE04u;
    {
        const bool branch_taken_0x19ae04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE04u;
        // 0x19ae08: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae04) {
            ctx->pc = 0x19AE20u;
            goto label_19ae20;
        }
    }
    ctx->pc = 0x19AE0Cu;
    // 0x19ae0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19ae10: 0x27a90001  addiu       $t1, $sp, 0x1
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x19ae14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19AE14u;
    {
        const bool branch_taken_0x19ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE14u;
        // 0x19ae18: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae14) {
            ctx->pc = 0x19AE54u;
            goto label_19ae54;
        }
    }
    ctx->pc = 0x19AE1Cu;
    // 0x19ae1c: 0x0  nop
    ctx->pc = 0x19ae1cu;
    // NOP
label_19ae20:
    // 0x19ae20: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x19ae20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19ae24: 0x0  nop
    ctx->pc = 0x19ae24u;
    // NOP
label_19ae28:
    // 0x19ae28: 0x8a1024  and         $v0, $a0, $t2
    ctx->pc = 0x19ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x19ae2c: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x19ae2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x19ae30: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x19ae30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x19ae34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ae38: 0x2843003a  slti        $v1, $v0, 0x3A
    ctx->pc = 0x19ae38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x19ae3c: 0x24480007  addiu       $t0, $v0, 0x7
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x19ae40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AE40u;
    {
        const bool branch_taken_0x19ae40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE40u;
        // 0x19ae44: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae40) {
            ctx->pc = 0x19AE4Cu;
            goto label_19ae4c;
        }
    }
    ctx->pc = 0x19AE48u;
    // 0x19ae48: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x19ae48u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
label_19ae4c:
    // 0x19ae4c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AE4Cu;
    {
        const bool branch_taken_0x19ae4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE4Cu;
        // 0x19ae50: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae4c) {
            ctx->pc = 0x19AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae28;
        }
    }
    ctx->pc = 0x19AE54u;
label_19ae54:
    // 0x19ae54: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x19ae54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae58: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x19ae58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae5c: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19AE5Cu;
    {
        const bool branch_taken_0x19ae5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE5Cu;
        // 0x19ae60: 0x11d2023  subu        $a0, $t0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae5c) {
            ctx->pc = 0x19AED8u;
            goto label_19aed8;
        }
    }
    ctx->pc = 0x19AE64u;
    // 0x19ae64: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19ae64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ae68: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19AE68u;
    {
        const bool branch_taken_0x19ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE68u;
        // 0x19ae6c: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae68) {
            ctx->pc = 0x19AEDCu;
            goto label_19aedc;
        }
    }
    ctx->pc = 0x19AE70u;
label_19ae70:
    // 0x19ae70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ae74: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19ae74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ae78: 0x0  nop
    ctx->pc = 0x19ae78u;
    // NOP
    // 0x19ae7c: 0x0  nop
    ctx->pc = 0x19ae7cu;
    // NOP
    // 0x19ae80: 0x0  nop
    ctx->pc = 0x19ae80u;
    // NOP
    // 0x19ae84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AE84u;
    {
        const bool branch_taken_0x19ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE84u;
        // 0x19ae88: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae84) {
            ctx->pc = 0x19AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE8Cu;
    // 0x19ae8c: 0x1109002e  beq         $t0, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE8Cu;
        // 0x19ae90: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AF48u;
            goto label_19af48;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19ae98: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19ae9c: 0x0  nop
    ctx->pc = 0x19ae9cu;
    // NOP
label_19aea0:
    // 0x19aea0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19aea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19aea4: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19aea8: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AEA8u;
    {
        const bool branch_taken_0x19aea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA8u;
        // 0x19aeac: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea8) {
            ctx->pc = 0x19AEB8u;
            goto label_19aeb8;
        }
    }
    ctx->pc = 0x19AEB0u;
    // 0x19aeb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AEB0u;
    {
        const bool branch_taken_0x19aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEB0u;
        // 0x19aeb4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aeb0) {
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AEB8u;
label_19aeb8:
    // 0x19aeb8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19aeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_19aebc:
    // 0x19aebc: 0x0  nop
    ctx->pc = 0x19aebcu;
    // NOP
    // 0x19aec0: 0x0  nop
    ctx->pc = 0x19aec0u;
    // NOP
    // 0x19aec4: 0x1509fff6  bne         $t0, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AEC4u;
    {
        const bool branch_taken_0x19aec4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEC4u;
        // 0x19aec8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aec4) {
            ctx->pc = 0x19AEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aea0;
        }
    }
    ctx->pc = 0x19AECCu;
    // 0x19aecc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19AECCu;
    {
        const bool branch_taken_0x19aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AECCu;
        // 0x19aed0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aecc) {
            ctx->pc = 0x19AF48u;
            goto label_19af48;
        }
    }
    ctx->pc = 0x19AED4u;
    // 0x19aed4: 0x0  nop
    ctx->pc = 0x19aed4u;
    // NOP
label_19aed8:
    // 0x19aed8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x19aed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_19aedc:
    // 0x19aedc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19AEDCu;
    {
        const bool branch_taken_0x19aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEDCu;
        // 0x19aee0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aedc) {
            ctx->pc = 0x19AF1Cu;
            goto label_19af1c;
        }
    }
    ctx->pc = 0x19AEE4u;
    // 0x19aee4: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19aee8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19aee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19aeec: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x19aeecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_19aef0:
    // 0x19aef0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AEF0u;
    {
        const bool branch_taken_0x19aef0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF0u;
        // 0x19aef4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aef0) {
            ctx->pc = 0x19AF00u;
            goto label_19af00;
        }
    }
    ctx->pc = 0x19AEF8u;
    // 0x19aef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AEF8u;
    {
        const bool branch_taken_0x19aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aef8) {
            ctx->pc = 0x19AF04u;
            goto label_19af04;
        }
    }
    ctx->pc = 0x19AF00u;
label_19af00:
    // 0x19af00: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19af00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_19af04:
    // 0x19af04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19af08: 0x0  nop
    ctx->pc = 0x19af08u;
    // NOP
    // 0x19af0c: 0x0  nop
    ctx->pc = 0x19af0cu;
    // NOP
    // 0x19af10: 0x0  nop
    ctx->pc = 0x19af10u;
    // NOP
    // 0x19af14: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AF14u;
    {
        const bool branch_taken_0x19af14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF14u;
        // 0x19af18: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af14) {
            ctx->pc = 0x19AEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aef0;
        }
    }
    ctx->pc = 0x19AF1Cu;
label_19af1c:
    // 0x19af1c: 0x1109000a  beq         $t0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x19AF1Cu;
    {
        const bool branch_taken_0x19af1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF1Cu;
        // 0x19af20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af1c) {
            ctx->pc = 0x19AF48u;
            goto label_19af48;
        }
    }
    ctx->pc = 0x19AF24u;
    // 0x19af24: 0x0  nop
    ctx->pc = 0x19af24u;
    // NOP
label_19af28:
    // 0x19af28: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19af2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19af2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19af30: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19af30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19af34: 0x0  nop
    ctx->pc = 0x19af34u;
    // NOP
    // 0x19af38: 0x0  nop
    ctx->pc = 0x19af38u;
    // NOP
    // 0x19af3c: 0x1509fffa  bne         $t0, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AF3Cu;
    {
        const bool branch_taken_0x19af3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF3Cu;
        // 0x19af40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af3c) {
            ctx->pc = 0x19AF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af28;
        }
    }
    ctx->pc = 0x19AF44u;
    // 0x19af44: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19af44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19af48:
    // 0x19af48: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF48u;
        // 0x19af4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF50u;
}
