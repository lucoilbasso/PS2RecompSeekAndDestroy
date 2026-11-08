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

// Function: InqSendTexPacket__8WcMulobj
// Address: 0x197bb0 - 0x197cd0
void InqSendTexPacket__8WcMulobj_0x197bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqSendTexPacket__8WcMulobj_0x197bb0");
#endif

    switch (ctx->pc) {
        case 0x197c08u: goto label_197c08;
        case 0x197c20u: goto label_197c20;
        case 0x197cacu: goto label_197cac;
        default: break;
    }

    ctx->pc = 0x197bb0u;

    // 0x197bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x197bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x197bb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x197bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x197bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x197bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x197bcc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x197bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x197bd0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x197bd4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x197bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x197bd8: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x197BD8u;
    {
        const bool branch_taken_0x197bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BD8u;
        // 0x197bdc: 0x26540200  addiu       $s4, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bd8) {
            ctx->pc = 0x197CACu;
            goto label_197cac;
        }
    }
    ctx->pc = 0x197BE0u;
    // 0x197be0: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x197be0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x197be4: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x197be8: 0x36730200  ori         $s3, $s3, 0x200
    ctx->pc = 0x197be8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)512);
    // 0x197bec: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x197becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x197bf0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x197bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bf4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x197bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x197bf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x197BF8u;
    {
        const bool branch_taken_0x197bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF8u;
        // 0x197bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf8) {
            ctx->pc = 0x197C34u;
            goto label_197c34;
        }
    }
    ctx->pc = 0x197C00u;
    // 0x197c00: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x197c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x197c04: 0x0  nop
    ctx->pc = 0x197c04u;
    // NOP
label_197c08:
    // 0x197c08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x197c0c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x197c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x197c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197c18: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x197C18u;
    SET_GPR_U32(ctx, 31, 0x197C20u);
    ctx->pc = 0x197C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C18u;
    // 0x197c1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x197C18u, 0x197C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x197c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c24: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x197c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x197c28: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x197c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197c2c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x197C2Cu;
    {
        const bool branch_taken_0x197c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c2c) {
            ctx->pc = 0x197C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197C2Cu;
            // 0x197c30: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c08;
        }
    }
    ctx->pc = 0x197C34u;
label_197c34:
    // 0x197c34: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x197c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c38: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x197c3c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x197c40: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x197c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x197c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x197c48: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197c4c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x197c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x197c50: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x197c54: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x197c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x197c58: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x197c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x197c5c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x197c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x197c60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x197c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x197c64: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x197c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x197c68: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x197c68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x197c6c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x197c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x197c70: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x197c70u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x197c74: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x197c74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x197c78: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x197c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x197c7c: 0x1131023  subu        $v0, $t0, $s3
    ctx->pc = 0x197c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x197c80: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x197c84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x197c84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x197c88: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x197c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x197c8c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x197c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x197c90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197C90u;
    {
        const bool branch_taken_0x197c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C90u;
        // 0x197c94: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c90) {
            ctx->pc = 0x197CACu;
            goto label_197cac;
        }
    }
    ctx->pc = 0x197C98u;
    // 0x197c98: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x197c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ca0: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x197ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x197ca4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x197CA4u;
    SET_GPR_U32(ctx, 31, 0x197CACu);
    ctx->pc = 0x197CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CA4u;
    // 0x197ca8: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x197CA4u, 0x197CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CACu;
label_197cac:
    // 0x197cac: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x197cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197cb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197cbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x197cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197cc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x197cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197cc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x197CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC8u;
        // 0x197ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197CD0u;
}
