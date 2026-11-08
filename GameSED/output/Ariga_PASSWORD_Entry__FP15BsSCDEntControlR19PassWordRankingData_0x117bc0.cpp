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

// Function: Ariga_PASSWORD_Entry__FP15BsSCDEntControlR19PassWordRankingData
// Address: 0x117bc0 - 0x117d78
void Ariga_PASSWORD_Entry__FP15BsSCDEntControlR19PassWordRankingData_0x117bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ariga_PASSWORD_Entry__FP15BsSCDEntControlR19PassWordRankingData_0x117bc0");
#endif

    switch (ctx->pc) {
        case 0x117bf8u: goto label_117bf8;
        case 0x117c28u: goto label_117c28;
        case 0x117c68u: goto label_117c68;
        case 0x117d30u: goto label_117d30;
        default: break;
    }

    ctx->pc = 0x117bc0u;

    // 0x117bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117bc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117bc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x117bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x117bcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bd0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x117bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x117bd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x117bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bd8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x117bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bdc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117be0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x117be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x117be4: 0x2603000b  addiu       $v1, $s0, 0xB
    ctx->pc = 0x117be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x117be8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x117be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bec: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x117becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bf0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x117bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x117bf4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x117bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_117bf8:
    // 0x117bf8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x117bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x117bfc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x117bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x117c00: 0x0  nop
    ctx->pc = 0x117c00u;
    // NOP
    // 0x117c04: 0x0  nop
    ctx->pc = 0x117c04u;
    // NOP
    // 0x117c08: 0x0  nop
    ctx->pc = 0x117c08u;
    // NOP
    // 0x117c0c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117C0Cu;
    {
        const bool branch_taken_0x117c0c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x117C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C0Cu;
        // 0x117c10: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c0c) {
            ctx->pc = 0x117BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117bf8;
        }
    }
    ctx->pc = 0x117C14u;
    // 0x117c14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117c18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x117c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c1c: 0xa0e20005  sb          $v0, 0x5($a3)
    ctx->pc = 0x117c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x117c20: 0xc045e0e  jal         func_117838
    ctx->pc = 0x117C20u;
    SET_GPR_U32(ctx, 31, 0x117C28u);
    ctx->pc = 0x117C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C20u;
    // 0x117c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117838u, 0x117C20u, 0x117C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C28u;
label_117c28:
    // 0x117c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117c2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x117c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c30: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x117c30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x117c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x117c38: 0x318300f0  andi        $v1, $t4, 0xF0
    ctx->pc = 0x117c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)240);
    // 0x117c3c: 0x52280  sll         $a0, $a1, 10
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x117c40: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x117c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x117c44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x117c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x117c48: 0x27ab0012  addiu       $t3, $sp, 0x12
    ctx->pc = 0x117c48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x117c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117c50: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x117c50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x117c54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x117c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x117c58: 0x30aa000f  andi        $t2, $a1, 0xF
    ctx->pc = 0x117c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x117c5c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x117c5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117c60: 0x26080007  addiu       $t0, $s0, 0x7
    ctx->pc = 0x117c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x117c64: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x117c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_117c68:
    // 0x117c68: 0x10cd000d  beq         $a2, $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x117C68u;
    {
        const bool branch_taken_0x117c68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        ctx->pc = 0x117C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C68u;
        // 0x117c6c: 0x24c2fffe  addiu       $v0, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c68) {
            ctx->pc = 0x117CA0u;
            goto label_117ca0;
        }
    }
    ctx->pc = 0x117C70u;
    // 0x117c70: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x117c70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x117c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117c78: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x117c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x117c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117c80: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x117c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x117c84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117c88: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x117c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117c8c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x117c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x117c90: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x117c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x117c94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x117c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x117c98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x117C98u;
    {
        const bool branch_taken_0x117c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C98u;
        // 0x117c9c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c98) {
            ctx->pc = 0x117CACu;
            goto label_117cac;
        }
    }
    ctx->pc = 0x117CA0u;
label_117ca0:
    // 0x117ca0: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x117ca0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x117ca4: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x117ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x117ca8: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x117ca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_117cac:
    // 0x117cac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x117cb0: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x117cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117cb4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x117CB4u;
    {
        const bool branch_taken_0x117cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CB4u;
        // 0x117cb8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cb4) {
            ctx->pc = 0x117C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117c68;
        }
    }
    ctx->pc = 0x117CBCu;
    // 0x117cbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117cc0: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x117cc4: 0x93a70008  lbu         $a3, 0x8($sp)
    ctx->pc = 0x117cc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117cc8: 0x308600f0  andi        $a2, $a0, 0xF0
    ctx->pc = 0x117cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x117ccc: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x117cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x117cd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x117cd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117cd8: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x117cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x117cdc: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x117cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x117ce0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x117ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x117ce4: 0x3185000f  andi        $a1, $t4, 0xF
    ctx->pc = 0x117ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x117ce8: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x117ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x117cec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x117cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x117cf0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x117cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x117cf4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x117cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x117cf8: 0x23402  srl         $a2, $v0, 16
    ctx->pc = 0x117cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x117cfc: 0x24602  srl         $t0, $v0, 24
    ctx->pc = 0x117cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x117d00: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x117d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x117d04: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x117d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x117d08: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x117d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x117d0c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x117d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x117d10: 0x260b0007  addiu       $t3, $s0, 0x7
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x117d14: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x117d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x117d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d1c: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x117d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x117d20: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x117d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x117d24: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x117d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x117d28: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x117d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x117d2c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x117d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_117d30:
    // 0x117d30: 0x1662021  addu        $a0, $t3, $a2
    ctx->pc = 0x117d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x117d34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x117d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x117d38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x117d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117d3c: 0x28c50005  slti        $a1, $a2, 0x5
    ctx->pc = 0x117d3cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x117d40: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x117d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x117d44: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x117d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x117d48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x117d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x117d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117d50: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x117d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x117d54: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x117D54u;
    {
        const bool branch_taken_0x117d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x117D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D54u;
        // 0x117d58: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d54) {
            ctx->pc = 0x117D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117d30;
        }
    }
    ctx->pc = 0x117D5Cu;
    // 0x117d5c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x117d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117d60: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x117d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x117d64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x117d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x117d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117d6c: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x117d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x117d70: 0x3e00008  jr          $ra
    ctx->pc = 0x117D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D70u;
        // 0x117d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D78u;
}
