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

// Function: Cmd_POLYGON_IMAGE_Entry__FP15BsSCDEntControl
// Address: 0x109bf8 - 0x109d0c
void Cmd_POLYGON_IMAGE_Entry__FP15BsSCDEntControl_0x109bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_IMAGE_Entry__FP15BsSCDEntControl_0x109bf8");
#endif

    switch (ctx->pc) {
        case 0x109c34u: goto label_109c34;
        case 0x109c5cu: goto label_109c5c;
        case 0x109c78u: goto label_109c78;
        case 0x109c88u: goto label_109c88;
        case 0x109c94u: goto label_109c94;
        case 0x109ca8u: goto label_109ca8;
        case 0x109cb8u: goto label_109cb8;
        case 0x109cc4u: goto label_109cc4;
        case 0x109cd8u: goto label_109cd8;
        default: break;
    }

    ctx->pc = 0x109bf8u;

    // 0x109bf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x109bfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109c00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x109c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x109c04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c10: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x109c14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x109c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x109c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x109c1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x109c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x109c20: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x109c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x109c24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x109c28: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x109c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x109c2c: 0xc04110c  jal         func_104430
    ctx->pc = 0x109C2Cu;
    SET_GPR_U32(ctx, 31, 0x109C34u);
    ctx->pc = 0x109C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C2Cu;
    // 0x109c30: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109C2Cu, 0x109C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C34u;
label_109c34:
    // 0x109c34: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x109c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x109c38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c3c: 0x96420158  lhu         $v0, 0x158($s2)
    ctx->pc = 0x109c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x109c40: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x109c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x109c44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C44u;
        // 0x109c48: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c44) {
            ctx->pc = 0x109C5Cu;
            goto label_109c5c;
        }
    }
    ctx->pc = 0x109C4Cu;
    // 0x109c4c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x109c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c54: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x109C54u;
    SET_GPR_U32(ctx, 31, 0x109C5Cu);
    ctx->pc = 0x109C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C54u;
    // 0x109c58: 0x24a5b000  addiu       $a1, $a1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x109C54u, 0x109C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C5Cu;
label_109c5c:
    // 0x109c5c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x109c60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x109c64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c68: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x109C68u;
    {
        const bool branch_taken_0x109c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x109C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C68u;
        // 0x109c6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c68) {
            ctx->pc = 0x109CECu;
            goto label_109cec;
        }
    }
    ctx->pc = 0x109C70u;
    // 0x109c70: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x109c70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x109c74: 0x0  nop
    ctx->pc = 0x109c74u;
    // NOP
label_109c78:
    // 0x109c78: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x109C78u;
    {
        const bool branch_taken_0x109c78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c78) {
            ctx->pc = 0x109CB0u;
            goto label_109cb0;
        }
    }
    ctx->pc = 0x109C80u;
    // 0x109c80: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x109C80u;
    SET_GPR_U32(ctx, 31, 0x109C88u);
    ctx->pc = 0x109C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C80u;
    // 0x109c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x109C80u, 0x109C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C88u;
label_109c88:
    // 0x109c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c8c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x109C8Cu;
    SET_GPR_U32(ctx, 31, 0x109C94u);
    ctx->pc = 0x109C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C8Cu;
    // 0x109c90: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x109C8Cu, 0x109C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C94u;
label_109c94:
    // 0x109c94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x109c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ca0: 0xc064104  jal         func_190410
    ctx->pc = 0x109CA0u;
    SET_GPR_U32(ctx, 31, 0x109CA8u);
    ctx->pc = 0x109CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CA0u;
    // 0x109ca4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x109CA0u, 0x109CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CA8u;
label_109ca8:
    // 0x109ca8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x109CA8u;
    {
        const bool branch_taken_0x109ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA8u;
        // 0x109cac: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ca8) {
            ctx->pc = 0x109CDCu;
            goto label_109cdc;
        }
    }
    ctx->pc = 0x109CB0u;
label_109cb0:
    // 0x109cb0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109CB0u;
    SET_GPR_U32(ctx, 31, 0x109CB8u);
    ctx->pc = 0x109CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CB0u;
    // 0x109cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109CB0u, 0x109CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CB8u;
label_109cb8:
    // 0x109cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cbc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109CBCu;
    SET_GPR_U32(ctx, 31, 0x109CC4u);
    ctx->pc = 0x109CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CBCu;
    // 0x109cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109CBCu, 0x109CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC4u;
label_109cc4:
    // 0x109cc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x109cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ccc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cd0: 0xc064112  jal         func_190448
    ctx->pc = 0x109CD0u;
    SET_GPR_U32(ctx, 31, 0x109CD8u);
    ctx->pc = 0x109CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CD0u;
    // 0x109cd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190448u, 0x109CD0u, 0x109CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CD8u;
label_109cd8:
    // 0x109cd8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_109cdc:
    // 0x109cdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109ce0: 0x1455ffe5  bne         $v0, $s5, . + 4 + (-0x1B << 2)
    ctx->pc = 0x109CE0u;
    {
        const bool branch_taken_0x109ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x109CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CE0u;
        // 0x109ce4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ce0) {
            ctx->pc = 0x109C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109c78;
        }
    }
    ctx->pc = 0x109CE8u;
    // 0x109ce8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109cec:
    // 0x109cec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109cf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109cf4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x109cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109cf8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x109cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109cfc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x109cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x109d00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109d04: 0x3e00008  jr          $ra
    ctx->pc = 0x109D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D04u;
        // 0x109d08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109D0Cu;
}
