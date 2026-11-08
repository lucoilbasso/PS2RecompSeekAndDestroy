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

// Function: Val_Conv2Bin__FiPcib
// Address: 0x19af50 - 0x19b098
void Val_Conv2Bin__FiPcib_0x19af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Conv2Bin__FiPcib_0x19af50");
#endif

    switch (ctx->pc) {
        case 0x19af80u: goto label_19af80;
        case 0x19afb8u: goto label_19afb8;
        case 0x19afe8u: goto label_19afe8;
        case 0x19b038u: goto label_19b038;
        case 0x19b070u: goto label_19b070;
        default: break;
    }

    ctx->pc = 0x19af50u;

    // 0x19af50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19af50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19af54: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19af58: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x19af58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x19af5c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AF5Cu;
    {
        const bool branch_taken_0x19af5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF5Cu;
        // 0x19af60: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af5c) {
            ctx->pc = 0x19AF78u;
            goto label_19af78;
        }
    }
    ctx->pc = 0x19AF64u;
    // 0x19af64: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19af68: 0x27a30001  addiu       $v1, $sp, 0x1
    ctx->pc = 0x19af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x19af6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF6Cu;
        // 0x19af70: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19AF9Cu;
            goto label_19af9c;
        }
    }
    ctx->pc = 0x19AF74u;
    // 0x19af74: 0x0  nop
    ctx->pc = 0x19af74u;
    // NOP
label_19af78:
    // 0x19af78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19af78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af7c: 0x0  nop
    ctx->pc = 0x19af7cu;
    // NOP
label_19af80:
    // 0x19af80: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x19af84: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x19af84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x19af88: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x19af88u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x19af8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19af90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19af90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19af94: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AF94u;
    {
        const bool branch_taken_0x19af94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF94u;
        // 0x19af98: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af94) {
            ctx->pc = 0x19AF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af80;
        }
    }
    ctx->pc = 0x19AF9Cu;
label_19af9c:
    // 0x19af9c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa0: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x19afa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa4: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19AFA4u;
    {
        const bool branch_taken_0x19afa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA4u;
        // 0x19afa8: 0x11d2023  subu        $a0, $t0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa4) {
            ctx->pc = 0x19B020u;
            goto label_19b020;
        }
    }
    ctx->pc = 0x19AFACu;
    // 0x19afac: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19afb0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19AFB0u;
    {
        const bool branch_taken_0x19afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFB0u;
        // 0x19afb4: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afb0) {
            ctx->pc = 0x19B024u;
            goto label_19b024;
        }
    }
    ctx->pc = 0x19AFB8u;
label_19afb8:
    // 0x19afb8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19afbc: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19afbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19afc0: 0x0  nop
    ctx->pc = 0x19afc0u;
    // NOP
    // 0x19afc4: 0x0  nop
    ctx->pc = 0x19afc4u;
    // NOP
    // 0x19afc8: 0x0  nop
    ctx->pc = 0x19afc8u;
    // NOP
    // 0x19afcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AFCCu;
    {
        const bool branch_taken_0x19afcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFCCu;
        // 0x19afd0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afcc) {
            ctx->pc = 0x19AFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19afb8;
        }
    }
    ctx->pc = 0x19AFD4u;
    // 0x19afd4: 0x1109002e  beq         $t0, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AFD4u;
    {
        const bool branch_taken_0x19afd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFD4u;
        // 0x19afd8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afd4) {
            ctx->pc = 0x19B090u;
            goto label_19b090;
        }
    }
    ctx->pc = 0x19AFDCu;
    // 0x19afdc: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19afe0: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x19afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19afe4: 0x0  nop
    ctx->pc = 0x19afe4u;
    // NOP
label_19afe8:
    // 0x19afe8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19afe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19afec: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19aff0: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AFF0u;
    {
        const bool branch_taken_0x19aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF0u;
        // 0x19aff4: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff0) {
            ctx->pc = 0x19B000u;
            goto label_19b000;
        }
    }
    ctx->pc = 0x19AFF8u;
    // 0x19aff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AFF8u;
    {
        const bool branch_taken_0x19aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff8) {
            ctx->pc = 0x19B004u;
            goto label_19b004;
        }
    }
    ctx->pc = 0x19B000u;
label_19b000:
    // 0x19b000: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19b000u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_19b004:
    // 0x19b004: 0x0  nop
    ctx->pc = 0x19b004u;
    // NOP
    // 0x19b008: 0x0  nop
    ctx->pc = 0x19b008u;
    // NOP
    // 0x19b00c: 0x1509fff6  bne         $t0, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19afe8;
        }
    }
    ctx->pc = 0x19B014u;
    // 0x19b014: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19B014u;
    {
        const bool branch_taken_0x19b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B014u;
        // 0x19b018: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b014) {
            ctx->pc = 0x19B090u;
            goto label_19b090;
        }
    }
    ctx->pc = 0x19B01Cu;
    // 0x19b01c: 0x0  nop
    ctx->pc = 0x19b01cu;
    // NOP
label_19b020:
    // 0x19b020: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x19b020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_19b024:
    // 0x19b024: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B024u;
    {
        const bool branch_taken_0x19b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B024u;
        // 0x19b028: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b024) {
            ctx->pc = 0x19B064u;
            goto label_19b064;
        }
    }
    ctx->pc = 0x19B02Cu;
    // 0x19b02c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19b030: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b034: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_19b038:
    // 0x19b038: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B038u;
    {
        const bool branch_taken_0x19b038 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B038u;
        // 0x19b03c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b038) {
            ctx->pc = 0x19B048u;
            goto label_19b048;
        }
    }
    ctx->pc = 0x19B040u;
    // 0x19b040: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B040u;
    {
        const bool branch_taken_0x19b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B040u;
        // 0x19b044: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b040) {
            ctx->pc = 0x19B04Cu;
            goto label_19b04c;
        }
    }
    ctx->pc = 0x19B048u;
label_19b048:
    // 0x19b048: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19b048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_19b04c:
    // 0x19b04c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19b050: 0x0  nop
    ctx->pc = 0x19b050u;
    // NOP
    // 0x19b054: 0x0  nop
    ctx->pc = 0x19b054u;
    // NOP
    // 0x19b058: 0x0  nop
    ctx->pc = 0x19b058u;
    // NOP
    // 0x19b05c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19B05Cu;
    {
        const bool branch_taken_0x19b05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B05Cu;
        // 0x19b060: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b05c) {
            ctx->pc = 0x19B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b038;
        }
    }
    ctx->pc = 0x19B064u;
label_19b064:
    // 0x19b064: 0x1109000a  beq         $t0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x19B064u;
    {
        const bool branch_taken_0x19b064 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B064u;
        // 0x19b068: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b064) {
            ctx->pc = 0x19B090u;
            goto label_19b090;
        }
    }
    ctx->pc = 0x19B06Cu;
    // 0x19b06c: 0x0  nop
    ctx->pc = 0x19b06cu;
    // NOP
label_19b070:
    // 0x19b070: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b074: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19b074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b078: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19b078u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b07c: 0x0  nop
    ctx->pc = 0x19b07cu;
    // NOP
    // 0x19b080: 0x0  nop
    ctx->pc = 0x19b080u;
    // NOP
    // 0x19b084: 0x1509fffa  bne         $t0, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B084u;
    {
        const bool branch_taken_0x19b084 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B084u;
        // 0x19b088: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b084) {
            ctx->pc = 0x19B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b070;
        }
    }
    ctx->pc = 0x19B08Cu;
    // 0x19b08c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19b08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b090:
    // 0x19b090: 0x3e00008  jr          $ra
    ctx->pc = 0x19B090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B090u;
        // 0x19b094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B098u;
}
