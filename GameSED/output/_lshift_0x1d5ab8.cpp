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

// Function: _lshift
// Address: 0x1d5ab8 - 0x1d5c10
void _lshift_0x1d5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lshift_0x1d5ab8");
#endif

    switch (ctx->pc) {
        case 0x1d5b08u: goto label_1d5b08;
        case 0x1d5b2cu: goto label_1d5b2c;
        case 0x1d5b40u: goto label_1d5b40;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5be8u: goto label_1d5be8;
        default: break;
    }

    ctx->pc = 0x1d5ab8u;

    // 0x1d5ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ac0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d5ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5ac8: 0x108943  sra         $s1, $s0, 5
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 5));
    // 0x1d5acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5ad0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5ad4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ad8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d5adc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d5adcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ae0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5ae8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d5aec: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d5af0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5af4: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x1d5af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5af8: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1d5af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d5afc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5AFCu;
    {
        const bool branch_taken_0x1d5afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AFCu;
        // 0x1d5b00: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5afc) {
            ctx->pc = 0x1D5B24u;
            goto label_1d5b24;
        }
    }
    ctx->pc = 0x1D5B04u;
    // 0x1d5b04: 0x0  nop
    ctx->pc = 0x1d5b04u;
    // NOP
label_1d5b08:
    // 0x1d5b08: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1d5b0c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1d5b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d5b10: 0x0  nop
    ctx->pc = 0x1d5b10u;
    // NOP
    // 0x1d5b14: 0x0  nop
    ctx->pc = 0x1d5b14u;
    // NOP
    // 0x1d5b18: 0x0  nop
    ctx->pc = 0x1d5b18u;
    // NOP
    // 0x1d5b1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5B1Cu;
    {
        const bool branch_taken_0x1d5b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B1Cu;
        // 0x1d5b20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b1c) {
            ctx->pc = 0x1D5B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b08;
        }
    }
    ctx->pc = 0x1D5B24u;
label_1d5b24:
    // 0x1d5b24: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5B24u;
    SET_GPR_U32(ctx, 31, 0x1D5B2Cu);
    ctx->pc = 0x1D5B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B24u;
    // 0x1d5b28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5B24u, 0x1D5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B2Cu;
label_1d5b2c:
    // 0x1d5b2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d5b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b30: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5B30u;
    {
        const bool branch_taken_0x1d5b30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B30u;
        // 0x1d5b34: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b30) {
            ctx->pc = 0x1D5B5Cu;
            goto label_1d5b5c;
        }
    }
    ctx->pc = 0x1D5B38u;
    // 0x1d5b38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b3c: 0x0  nop
    ctx->pc = 0x1d5b3cu;
    // NOP
label_1d5b40:
    // 0x1d5b40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5b44: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1d5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1d5b48: 0x0  nop
    ctx->pc = 0x1d5b48u;
    // NOP
    // 0x1d5b4c: 0x0  nop
    ctx->pc = 0x1d5b4cu;
    // NOP
    // 0x1d5b50: 0x0  nop
    ctx->pc = 0x1d5b50u;
    // NOP
    // 0x1d5b54: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5B54u;
    {
        const bool branch_taken_0x1d5b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B54u;
        // 0x1d5b58: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b54) {
            ctx->pc = 0x1D5B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b40;
        }
    }
    ctx->pc = 0x1D5B5Cu;
label_1d5b5c:
    // 0x1d5b5c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d5b60: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1d5b64: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x1d5b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1d5b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5b6c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5B6Cu;
    {
        const bool branch_taken_0x1d5b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B6Cu;
        // 0x1d5b70: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b6c) {
            ctx->pc = 0x1D5BB8u;
            goto label_1d5bb8;
        }
    }
    ctx->pc = 0x1D5B74u;
    // 0x1d5b74: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d5b78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d5b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b7c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x1d5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d5b80:
    // 0x1d5b80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5b84: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x1d5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x1d5b88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5b8c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1d5b90: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5b94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5b98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d5b9c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1d5b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d5ba0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5BA0u;
    {
        const bool branch_taken_0x1d5ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA0u;
        // 0x1d5ba4: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ba0) {
            ctx->pc = 0x1D5B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b80;
        }
    }
    ctx->pc = 0x1D5BA8u;
    // 0x1d5ba8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5BA8u;
    {
        const bool branch_taken_0x1d5ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA8u;
        // 0x1d5bac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ba8) {
            ctx->pc = 0x1D5BD4u;
            goto label_1d5bd4;
        }
    }
    ctx->pc = 0x1D5BB0u;
    // 0x1d5bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5BB0u;
    {
        const bool branch_taken_0x1d5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BB0u;
        // 0x1d5bb4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bb0) {
            ctx->pc = 0x1D5BD4u;
            goto label_1d5bd4;
        }
    }
    ctx->pc = 0x1D5BB8u;
label_1d5bb8:
    // 0x1d5bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5bbc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d5bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d5bc0: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x1d5bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d5bc4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1d5bc8: 0x0  nop
    ctx->pc = 0x1d5bc8u;
    // NOP
    // 0x1d5bcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5BCCu;
    {
        const bool branch_taken_0x1d5bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BCCu;
        // 0x1d5bd0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bcc) {
            ctx->pc = 0x1D5BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bb8;
        }
    }
    ctx->pc = 0x1D5BD4u;
label_1d5bd4:
    // 0x1d5bd4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d5bd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bdc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1d5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x1d5be0: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D5BE0u;
    SET_GPR_U32(ctx, 31, 0x1D5BE8u);
    ctx->pc = 0x1D5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BE0u;
    // 0x1d5be4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D5BE0u, 0x1D5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BE8u;
label_1d5be8:
    // 0x1d5be8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d5be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5bf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5bf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5bfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5bfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5c00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d5c00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5c04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C08u;
        // 0x1d5c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C10u;
}
