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

// Function: WModelSetExtraModelingData__FP7WcModelP12WModelHeader
// Address: 0x17eb38 - 0x17ef14
void WModelSetExtraModelingData__FP7WcModelP12WModelHeader_0x17eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelSetExtraModelingData__FP7WcModelP12WModelHeader_0x17eb38");
#endif

    switch (ctx->pc) {
        case 0x17eb90u: goto label_17eb90;
        case 0x17eba8u: goto label_17eba8;
        case 0x17ec08u: goto label_17ec08;
        case 0x17ec78u: goto label_17ec78;
        case 0x17ecd4u: goto label_17ecd4;
        case 0x17ed04u: goto label_17ed04;
        case 0x17ed6cu: goto label_17ed6c;
        case 0x17edd0u: goto label_17edd0;
        case 0x17ee30u: goto label_17ee30;
        case 0x17ee80u: goto label_17ee80;
        case 0x17eec8u: goto label_17eec8;
        case 0x17eed8u: goto label_17eed8;
        default: break;
    }

    ctx->pc = 0x17eb38u;

    // 0x17eb38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17eb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17eb3c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x17eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x17eb40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17eb44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17eb44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb48: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17eb4c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x17eb4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eb54: 0x34424250  ori         $v0, $v0, 0x4250
    ctx->pc = 0x17eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16976);
    // 0x17eb58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17eb5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17eb60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17eb64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17eb68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17eb6c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17eb70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17eb74: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17eb74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17eb78: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17eb7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EB7Cu;
    {
        const bool branch_taken_0x17eb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB7Cu;
        // 0x17eb80: 0x8ef50004  lw          $s5, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb7c) {
            ctx->pc = 0x17EB90u;
            goto label_17eb90;
        }
    }
    ctx->pc = 0x17EB84u;
    // 0x17eb84: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17eb88: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17EB88u;
    SET_GPR_U32(ctx, 31, 0x17EB90u);
    ctx->pc = 0x17EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB88u;
    // 0x17eb8c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17EB88u, 0x17EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB90u;
label_17eb90:
    // 0x17eb90: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x17eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x17eb94: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EB94u;
    {
        const bool branch_taken_0x17eb94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB94u;
        // 0x17eb98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb94) {
            ctx->pc = 0x17EBA0u;
            goto label_17eba0;
        }
    }
    ctx->pc = 0x17EB9Cu;
    // 0x17eb9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17eba0:
    // 0x17eba0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17EBA0u;
    SET_GPR_U32(ctx, 31, 0x17EBA8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17EBA0u, 0x17EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBA8u;
label_17eba8:
    // 0x17eba8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EBA8u;
    {
        const bool branch_taken_0x17eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBA8u;
        // 0x17ebac: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba8) {
            ctx->pc = 0x17EBF0u;
            goto label_17ebf0;
        }
    }
    ctx->pc = 0x17EBB0u;
    // 0x17ebb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ebb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ebb8: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ebbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ebc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ebc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ebc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ebc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ebc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ebc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ebcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ebccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ebd0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ebd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ebd4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ebd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ebd8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ebd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ebdc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ebdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ebe0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ebe4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ebe8: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EBE8u;
    ctx->pc = 0x17EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBE8u;
    // 0x17ebec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EBF0u;
label_17ebf0:
    // 0x17ebf0: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x17ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x17ebf4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EBF4u;
    {
        const bool branch_taken_0x17ebf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBF4u;
        // 0x17ebf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebf4) {
            ctx->pc = 0x17EC00u;
            goto label_17ec00;
        }
    }
    ctx->pc = 0x17EBFCu;
    // 0x17ebfc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ec00:
    // 0x17ec00: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17EC00u;
    SET_GPR_U32(ctx, 31, 0x17EC08u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17EC00u, 0x17EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC08u;
label_17ec08:
    // 0x17ec08: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EC08u;
    {
        const bool branch_taken_0x17ec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC08u;
        // 0x17ec0c: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec08) {
            ctx->pc = 0x17EC50u;
            goto label_17ec50;
        }
    }
    ctx->pc = 0x17EC10u;
    // 0x17ec10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ec14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec18: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ec1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ec20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ec20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ec24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ec28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ec28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ec2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ec2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ec30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ec30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ec34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ec34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ec38: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ec38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ec3c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ec3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ec40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ec44: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ec48: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EC48u;
    ctx->pc = 0x17EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC48u;
    // 0x17ec4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EC50u;
label_17ec50:
    // 0x17ec50: 0xae550020  sw          $s5, 0x20($s2)
    ctx->pc = 0x17ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 21));
    // 0x17ec54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17ec54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec58: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x17ec58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17ec5c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x17ec5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec60: 0x1aa00022  blez        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x17EC60u;
    {
        const bool branch_taken_0x17ec60 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC60u;
        // 0x17ec64: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec60) {
            ctx->pc = 0x17ECECu;
            goto label_17ecec;
        }
    }
    ctx->pc = 0x17EC68u;
    // 0x17ec68: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17ec68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17ec6c: 0x26f40008  addiu       $s4, $s7, 0x8
    ctx->pc = 0x17ec6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x17ec70: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x17ec70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec74: 0x0  nop
    ctx->pc = 0x17ec74u;
    // NOP
label_17ec78:
    // 0x17ec78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ec7c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17ec80: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x17ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x17ec84: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x17ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17ec88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17ec8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17ec90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17ec94: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x17ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ec98: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x17ec98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x17ec9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca0: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x17eca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17eca4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17eca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca8: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x17eca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x17ecac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecb0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17ecb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17ecb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17ecb8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17ecbc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17ecc0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17ecc4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17ecc8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17eccc: 0xc05fd96  jal         func_17F658
    ctx->pc = 0x17ECCCu;
    SET_GPR_U32(ctx, 31, 0x17ECD4u);
    ctx->pc = 0x17ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECCCu;
    // 0x17ecd0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F658u, 0x17ECCCu, 0x17ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECD4u;
label_17ecd4:
    // 0x17ecd4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17ecd8: 0x96630014  lhu         $v1, 0x14($s3)
    ctx->pc = 0x17ecd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x17ecdc: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x17ecdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x17ece0: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x17ece0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x17ece4: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x17ECE4u;
    {
        const bool branch_taken_0x17ece4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECE4u;
        // 0x17ece8: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ece4) {
            ctx->pc = 0x17EC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ec78;
        }
    }
    ctx->pc = 0x17ECECu;
label_17ecec:
    // 0x17ecec: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x17ecf0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17ECF0u;
    {
        const bool branch_taken_0x17ecf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECF0u;
        // 0x17ecf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecf0) {
            ctx->pc = 0x17ECFCu;
            goto label_17ecfc;
        }
    }
    ctx->pc = 0x17ECF8u;
    // 0x17ecf8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ecfc:
    // 0x17ecfc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17ECFCu;
    SET_GPR_U32(ctx, 31, 0x17ED04u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17ECFCu, 0x17ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED04u;
label_17ed04:
    // 0x17ed04: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED04u;
    {
        const bool branch_taken_0x17ed04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED04u;
        // 0x17ed08: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed04) {
            ctx->pc = 0x17ED50u;
            goto label_17ed50;
        }
    }
    ctx->pc = 0x17ED0Cu;
    // 0x17ed0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ed10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed14: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ed18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ed1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ed1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ed20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ed24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ed24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ed28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ed28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ed2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ed2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ed30: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ed30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ed34: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ed34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ed38: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ed38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ed3c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ed40: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ed44: 0x8068186  j           func_1A0618
    ctx->pc = 0x17ED44u;
    ctx->pc = 0x17ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED44u;
    // 0x17ed48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17ED4Cu;
    // 0x17ed4c: 0x0  nop
    ctx->pc = 0x17ed4cu;
    // NOP
label_17ed50:
    // 0x17ed50: 0x12c00031  beqz        $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x17ED50u;
    {
        const bool branch_taken_0x17ed50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED50u;
        // 0x17ed54: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed50) {
            ctx->pc = 0x17EE18u;
            goto label_17ee18;
        }
    }
    ctx->pc = 0x17ED58u;
    // 0x17ed58: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17ED58u;
    {
        const bool branch_taken_0x17ed58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED58u;
        // 0x17ed5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed58) {
            ctx->pc = 0x17ED64u;
            goto label_17ed64;
        }
    }
    ctx->pc = 0x17ED60u;
    // 0x17ed60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17ed64:
    // 0x17ed64: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17ED64u;
    SET_GPR_U32(ctx, 31, 0x17ED6Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17ED64u, 0x17ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED6Cu;
label_17ed6c:
    // 0x17ed6c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED6Cu;
    {
        const bool branch_taken_0x17ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED6Cu;
        // 0x17ed70: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed6c) {
            ctx->pc = 0x17EDB8u;
            goto label_17edb8;
        }
    }
    ctx->pc = 0x17ED74u;
    // 0x17ed74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ed78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed7c: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ed80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ed84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ed84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ed88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ed8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ed8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ed90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ed90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ed94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ed94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ed98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17ed98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ed9c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ed9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17eda0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17eda0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17eda4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17eda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17eda8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17edac: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EDACu;
    ctx->pc = 0x17EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDACu;
    // 0x17edb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EDB4u;
    // 0x17edb4: 0x0  nop
    ctx->pc = 0x17edb4u;
    // NOP
label_17edb8:
    // 0x17edb8: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x17edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x17edbc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EDBCu;
    {
        const bool branch_taken_0x17edbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDBCu;
        // 0x17edc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edbc) {
            ctx->pc = 0x17EDC8u;
            goto label_17edc8;
        }
    }
    ctx->pc = 0x17EDC4u;
    // 0x17edc4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17edc8:
    // 0x17edc8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17EDC8u;
    SET_GPR_U32(ctx, 31, 0x17EDD0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17EDC8u, 0x17EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDD0u;
label_17edd0:
    // 0x17edd0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EDD0u;
    {
        const bool branch_taken_0x17edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDD0u;
        // 0x17edd4: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edd0) {
            ctx->pc = 0x17EE18u;
            goto label_17ee18;
        }
    }
    ctx->pc = 0x17EDD8u;
    // 0x17edd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17eddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ede0: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17ede4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ede8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ede8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17edec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17edecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17edf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17edf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17edf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17edf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17edf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17edf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17edfc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17edfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee00: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17ee00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ee04: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ee04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ee08: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ee08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ee0c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ee10: 0x8068186  j           func_1A0618
    ctx->pc = 0x17EE10u;
    ctx->pc = 0x17EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE10u;
    // 0x17ee14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17EE18u;
label_17ee18:
    // 0x17ee18: 0x8e4b002c  lw          $t3, 0x2C($s2)
    ctx->pc = 0x17ee18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ee1c: 0x8e4a0030  lw          $t2, 0x30($s2)
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17ee20: 0x8e490034  lw          $t1, 0x34($s2)
    ctx->pc = 0x17ee20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x17ee24: 0x1aa00024  blez        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x17EE24u;
    {
        const bool branch_taken_0x17ee24 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE24u;
        // 0x17ee28: 0x8e500024  lw          $s0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee24) {
            ctx->pc = 0x17EEB8u;
            goto label_17eeb8;
        }
    }
    ctx->pc = 0x17EE2Cu;
    // 0x17ee2c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17ee30:
    // 0x17ee30: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x17ee30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17ee34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17ee34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee38: 0xae0a0038  sw          $t2, 0x38($s0)
    ctx->pc = 0x17ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    // 0x17ee3c: 0x94e20014  lhu         $v0, 0x14($a3)
    ctx->pc = 0x17ee3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x17ee40: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17ee44: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x17ee48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ee4c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x17ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x17ee50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17ee54: 0xaceb001c  sw          $t3, 0x1C($a3)
    ctx->pc = 0x17ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 11));
    // 0x17ee58: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x17ee58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x17ee5c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x17ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17ee60: 0xae09003c  sw          $t1, 0x3C($s0)
    ctx->pc = 0x17ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 9));
    // 0x17ee64: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x17ee64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17ee68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17ee6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17ee70: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x17EE70u;
    {
        const bool branch_taken_0x17ee70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE70u;
        // 0x17ee74: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee70) {
            ctx->pc = 0x17EEA4u;
            goto label_17eea4;
        }
    }
    ctx->pc = 0x17EE78u;
    // 0x17ee78: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x17ee78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17ee7c: 0x0  nop
    ctx->pc = 0x17ee7cu;
    // NOP
label_17ee80:
    // 0x17ee80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17ee84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17ee84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x17ee88: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x17ee88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17ee8c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17ee90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17ee94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17ee98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17ee9c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17EE9Cu;
    {
        const bool branch_taken_0x17ee9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE9Cu;
        // 0x17eea0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee9c) {
            ctx->pc = 0x17EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ee80;
        }
    }
    ctx->pc = 0x17EEA4u;
label_17eea4:
    // 0x17eea4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x17eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17eea8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17eeac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17eeb0: 0x1620ffdf  bnez        $s1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x17EEB0u;
    {
        const bool branch_taken_0x17eeb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEB0u;
        // 0x17eeb4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeb0) {
            ctx->pc = 0x17EE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ee30;
        }
    }
    ctx->pc = 0x17EEB8u;
label_17eeb8:
    // 0x17eeb8: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EEB8u;
    {
        const bool branch_taken_0x17eeb8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEB8u;
        // 0x17eebc: 0x8e500024  lw          $s0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeb8) {
            ctx->pc = 0x17EEE0u;
            goto label_17eee0;
        }
    }
    ctx->pc = 0x17EEC0u;
    // 0x17eec0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x17eec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17eec8:
    // 0x17eec8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17eec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17eecc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17eeccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17eed0: 0xc05fdc8  jal         func_17F720
    ctx->pc = 0x17EED0u;
    SET_GPR_U32(ctx, 31, 0x17EED8u);
    ctx->pc = 0x17EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EED0u;
    // 0x17eed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F720u, 0x17EED0u, 0x17EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EED8u;
label_17eed8:
    // 0x17eed8: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17EED8u;
    {
        const bool branch_taken_0x17eed8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EED8u;
        // 0x17eedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eed8) {
            ctx->pc = 0x17EEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eec8;
        }
    }
    ctx->pc = 0x17EEE0u;
label_17eee0:
    // 0x17eee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eee4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17eee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17eee8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17eee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eeec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17eeecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eef0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17eef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eef4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17eef4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17eef8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17eef8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eefc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17eefcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ef00: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17ef00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ef04: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17ef04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ef08: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF0Cu;
        // 0x17ef10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EF14u;
}
