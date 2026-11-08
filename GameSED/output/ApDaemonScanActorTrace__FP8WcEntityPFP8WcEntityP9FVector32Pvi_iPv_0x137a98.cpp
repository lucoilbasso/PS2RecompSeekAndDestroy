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

// Function: ApDaemonScanActorTrace__FP8WcEntityPFP8WcEntityP9FVector32Pvi_iPv
// Address: 0x137a98 - 0x137ba0
void ApDaemonScanActorTrace__FP8WcEntityPFP8WcEntityP9FVector32Pvi_iPv_0x137a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanActorTrace__FP8WcEntityPFP8WcEntityP9FVector32Pvi_iPv_0x137a98");
#endif

    switch (ctx->pc) {
        case 0x137a98u: goto label_137a98;
        case 0x137a9cu: goto label_137a9c;
        case 0x137aa0u: goto label_137aa0;
        case 0x137aa4u: goto label_137aa4;
        case 0x137aa8u: goto label_137aa8;
        case 0x137aacu: goto label_137aac;
        case 0x137ab0u: goto label_137ab0;
        case 0x137ab4u: goto label_137ab4;
        case 0x137ab8u: goto label_137ab8;
        case 0x137abcu: goto label_137abc;
        case 0x137ac0u: goto label_137ac0;
        case 0x137ac4u: goto label_137ac4;
        case 0x137ac8u: goto label_137ac8;
        case 0x137accu: goto label_137acc;
        case 0x137ad0u: goto label_137ad0;
        case 0x137ad4u: goto label_137ad4;
        case 0x137ad8u: goto label_137ad8;
        case 0x137adcu: goto label_137adc;
        case 0x137ae0u: goto label_137ae0;
        case 0x137ae4u: goto label_137ae4;
        case 0x137ae8u: goto label_137ae8;
        case 0x137aecu: goto label_137aec;
        case 0x137af0u: goto label_137af0;
        case 0x137af4u: goto label_137af4;
        case 0x137af8u: goto label_137af8;
        case 0x137afcu: goto label_137afc;
        case 0x137b00u: goto label_137b00;
        case 0x137b04u: goto label_137b04;
        case 0x137b08u: goto label_137b08;
        case 0x137b0cu: goto label_137b0c;
        case 0x137b10u: goto label_137b10;
        case 0x137b14u: goto label_137b14;
        case 0x137b18u: goto label_137b18;
        case 0x137b1cu: goto label_137b1c;
        case 0x137b20u: goto label_137b20;
        case 0x137b24u: goto label_137b24;
        case 0x137b28u: goto label_137b28;
        case 0x137b2cu: goto label_137b2c;
        case 0x137b30u: goto label_137b30;
        case 0x137b34u: goto label_137b34;
        case 0x137b38u: goto label_137b38;
        case 0x137b3cu: goto label_137b3c;
        case 0x137b40u: goto label_137b40;
        case 0x137b44u: goto label_137b44;
        case 0x137b48u: goto label_137b48;
        case 0x137b4cu: goto label_137b4c;
        case 0x137b50u: goto label_137b50;
        case 0x137b54u: goto label_137b54;
        case 0x137b58u: goto label_137b58;
        case 0x137b5cu: goto label_137b5c;
        case 0x137b60u: goto label_137b60;
        case 0x137b64u: goto label_137b64;
        case 0x137b68u: goto label_137b68;
        case 0x137b6cu: goto label_137b6c;
        case 0x137b70u: goto label_137b70;
        case 0x137b74u: goto label_137b74;
        case 0x137b78u: goto label_137b78;
        case 0x137b7cu: goto label_137b7c;
        case 0x137b80u: goto label_137b80;
        case 0x137b84u: goto label_137b84;
        case 0x137b88u: goto label_137b88;
        case 0x137b8cu: goto label_137b8c;
        case 0x137b90u: goto label_137b90;
        case 0x137b94u: goto label_137b94;
        case 0x137b98u: goto label_137b98;
        case 0x137b9cu: goto label_137b9c;
        default: break;
    }

    ctx->pc = 0x137a98u;

label_137a98:
    // 0x137a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_137a9c:
    // 0x137a9c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_137aa0:
    // 0x137aa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x137aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_137aa4:
    // 0x137aa4: 0x2452bc50  addiu       $s2, $v0, -0x43B0
    ctx->pc = 0x137aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
label_137aa8:
    // 0x137aa8: 0x8e420400  lw          $v0, 0x400($s2)
    ctx->pc = 0x137aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
label_137aac:
    // 0x137aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_137ab0:
    // 0x137ab0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x137ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137ab4:
    // 0x137ab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x137ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_137ab8:
    // 0x137ab8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x137ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137abc:
    // 0x137abc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x137abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_137ac0:
    // 0x137ac0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x137ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_137ac4:
    // 0x137ac4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x137ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_137ac8:
    // 0x137ac8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x137ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_137acc:
    // 0x137acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_137ad0:
    // 0x137ad0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x137ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_137ad4:
    // 0x137ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_137ad8:
    // 0x137ad8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_137adc:
    if (ctx->pc == 0x137ADCu) {
        ctx->pc = 0x137ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AD8u;
        // 0x137adc: 0x26450200  addiu       $a1, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137AE0u;
        goto label_137ae0;
    }
    ctx->pc = 0x137AD8u;
    {
        const bool branch_taken_0x137ad8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AD8u;
        // 0x137adc: 0x26450200  addiu       $a1, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ad8) {
            ctx->pc = 0x137B04u;
            goto label_137b04;
        }
    }
    ctx->pc = 0x137AE0u;
label_137ae0:
    // 0x137ae0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_137ae4:
    // 0x137ae4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_137ae8:
    // 0x137ae8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x137ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_137aec:
    // 0x137aec: 0x8e440400  lw          $a0, 0x400($s2)
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
label_137af0:
    // 0x137af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137af4:
    // 0x137af4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x137af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_137af8:
    // 0x137af8: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x137af8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_137afc:
    // 0x137afc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_137b00:
    if (ctx->pc == 0x137B00u) {
        ctx->pc = 0x137B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AFCu;
        // 0x137b00: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B04u;
        goto label_137b04;
    }
    ctx->pc = 0x137AFCu;
    {
        const bool branch_taken_0x137afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AFCu;
        // 0x137b00: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137afc) {
            ctx->pc = 0x137AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ae0;
        }
    }
    ctx->pc = 0x137B04u;
label_137b04:
    // 0x137b04: 0x26420300  addiu       $v0, $s2, 0x300
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
label_137b08:
    // 0x137b08: 0x8e470400  lw          $a3, 0x400($s2)
    ctx->pc = 0x137b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
label_137b0c:
    // 0x137b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137b10:
    // 0x137b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x137b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137b14:
    // 0x137b14: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x137b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_137b18:
    // 0x137b18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137b1c:
    // 0x137b1c: 0xc061468  jal         func_1851A0
label_137b20:
    if (ctx->pc == 0x137B20u) {
        ctx->pc = 0x137B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B1Cu;
        // 0x137b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B24u;
        goto label_137b24;
    }
    ctx->pc = 0x137B1Cu;
    SET_GPR_U32(ctx, 31, 0x137B24u);
    ctx->pc = 0x137B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B1Cu;
    // 0x137b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x137B1Cu, 0x137B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B24u;
label_137b24:
    // 0x137b24: 0x10000003  b           . + 4 + (0x3 << 2)
label_137b28:
    if (ctx->pc == 0x137B28u) {
        ctx->pc = 0x137B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B24u;
        // 0x137b28: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B2Cu;
        goto label_137b2c;
    }
    ctx->pc = 0x137B24u;
    {
        const bool branch_taken_0x137b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B24u;
        // 0x137b28: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b24) {
            ctx->pc = 0x137B34u;
            goto label_137b34;
        }
    }
    ctx->pc = 0x137B2Cu;
label_137b2c:
    // 0x137b2c: 0x0  nop
    ctx->pc = 0x137b2cu;
    // NOP
label_137b30:
    // 0x137b30: 0x8e420400  lw          $v0, 0x400($s2)
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
label_137b34:
    // 0x137b34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x137b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_137b38:
    // 0x137b38: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_137b3c:
    if (ctx->pc == 0x137B3Cu) {
        ctx->pc = 0x137B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B38u;
        // 0x137b3c: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B40u;
        goto label_137b40;
    }
    ctx->pc = 0x137B38u;
    {
        const bool branch_taken_0x137b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b38) {
            ctx->pc = 0x137B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B38u;
            // 0x137b3c: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B64u;
            goto label_137b64;
        }
    }
    ctx->pc = 0x137B40u;
label_137b40:
    // 0x137b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x137b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137b44:
    // 0x137b44: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_137b48:
    // 0x137b48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x137b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137b4c:
    // 0x137b4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137b50:
    // 0x137b50: 0x2a0f809  jalr        $s5
label_137b54:
    if (ctx->pc == 0x137B54u) {
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B58u;
        goto label_137b58;
    }
    ctx->pc = 0x137B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x137B58u);
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B50u, 0x137B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137B58u;
label_137b58:
    // 0x137b58: 0x5040fff5  beql        $v0, $zero, . + 4 + (-0xB << 2)
label_137b5c:
    if (ctx->pc == 0x137B5Cu) {
        ctx->pc = 0x137B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B58u;
        // 0x137b5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B60u;
        goto label_137b60;
    }
    ctx->pc = 0x137B58u;
    {
        const bool branch_taken_0x137b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b58) {
            ctx->pc = 0x137B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B58u;
            // 0x137b5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137b30;
        }
    }
    ctx->pc = 0x137B60u;
label_137b60:
    // 0x137b60: 0x8e420400  lw          $v0, 0x400($s2)
    ctx->pc = 0x137b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
label_137b64:
    // 0x137b64: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_137b68:
    if (ctx->pc == 0x137B68u) {
        ctx->pc = 0x137B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B64u;
        // 0x137b68: 0x101940  sll         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B6Cu;
        goto label_137b6c;
    }
    ctx->pc = 0x137B64u;
    {
        const bool branch_taken_0x137b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x137B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B64u;
        // 0x137b68: 0x101940  sll         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b64) {
            ctx->pc = 0x137B78u;
            goto label_137b78;
        }
    }
    ctx->pc = 0x137B6Cu;
label_137b6c:
    // 0x137b6c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x137b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_137b70:
    // 0x137b70: 0x10000002  b           . + 4 + (0x2 << 2)
label_137b74:
    if (ctx->pc == 0x137B74u) {
        ctx->pc = 0x137B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B70u;
        // 0x137b74: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B78u;
        goto label_137b78;
    }
    ctx->pc = 0x137B70u;
    {
        const bool branch_taken_0x137b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B70u;
        // 0x137b74: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b70) {
            ctx->pc = 0x137B7Cu;
            goto label_137b7c;
        }
    }
    ctx->pc = 0x137B78u;
label_137b78:
    // 0x137b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137b7c:
    // 0x137b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137b80:
    // 0x137b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_137b84:
    // 0x137b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x137b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137b88:
    // 0x137b88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x137b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_137b8c:
    // 0x137b8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x137b8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_137b90:
    // 0x137b90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x137b90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_137b94:
    // 0x137b94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_137b98:
    // 0x137b98: 0x3e00008  jr          $ra
label_137b9c:
    if (ctx->pc == 0x137B9Cu) {
        ctx->pc = 0x137B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B98u;
        // 0x137b9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137BA0u;
        goto label_fallthrough_0x137b98;
    }
    ctx->pc = 0x137B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B98u;
        // 0x137b9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x137b98:
    ctx->pc = 0x137BA0u;
}
