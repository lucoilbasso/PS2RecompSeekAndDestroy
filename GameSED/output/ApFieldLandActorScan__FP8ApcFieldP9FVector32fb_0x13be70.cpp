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

// Function: ApFieldLandActorScan__FP8ApcFieldP9FVector32fb
// Address: 0x13be70 - 0x13bfd0
void ApFieldLandActorScan__FP8ApcFieldP9FVector32fb_0x13be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldLandActorScan__FP8ApcFieldP9FVector32fb_0x13be70");
#endif

    switch (ctx->pc) {
        case 0x13bec8u: goto label_13bec8;
        case 0x13bf00u: goto label_13bf00;
        case 0x13bf58u: goto label_13bf58;
        case 0x13bf68u: goto label_13bf68;
        case 0x13bf8cu: goto label_13bf8c;
        default: break;
    }

    ctx->pc = 0x13be70u;

    // 0x13be70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13be74: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x13be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x13be78: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x13be78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be7c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x13be7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x13be80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13be80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be84: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x13be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x13be88: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13be88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be8c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x13be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x13be90: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x13be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x13be94: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x13be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x13be98: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x13be9c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x13be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x13bea0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13bea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13bea4: 0x8e9201fc  lw          $s2, 0x1FC($s4)
    ctx->pc = 0x13bea4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 508)));
    // 0x13bea8: 0xaf809138  sw          $zero, -0x6EC8($gp)
    ctx->pc = 0x13bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 0));
    // 0x13beac: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13beacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13beb0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13beb4: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x13BEB4u;
    {
        const bool branch_taken_0x13beb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEB4u;
        // 0x13beb8: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13beb4) {
            ctx->pc = 0x13BF9Cu;
            goto label_13bf9c;
        }
    }
    ctx->pc = 0x13BEBCu;
    // 0x13bebc: 0x3c170004  lui         $s7, 0x4
    ctx->pc = 0x13bebcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4 << 16));
    // 0x13bec0: 0x24160946  addiu       $s6, $zero, 0x946
    ctx->pc = 0x13bec0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x13bec4: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x13bec4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_13bec8:
    // 0x13bec8: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BEC8u;
    {
        const bool branch_taken_0x13bec8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEC8u;
        // 0x13becc: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bec8) {
            ctx->pc = 0x13BEE0u;
            goto label_13bee0;
        }
    }
    ctx->pc = 0x13BED0u;
    // 0x13bed0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bed4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x13bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x13bed8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13BED8u;
    {
        const bool branch_taken_0x13bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bed8) {
            ctx->pc = 0x13BF94u;
            goto label_13bf94;
        }
    }
    ctx->pc = 0x13BEE0u;
label_13bee0:
    // 0x13bee0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13bee4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bee8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x13BEE8u;
    {
        const bool branch_taken_0x13bee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bee8) {
            ctx->pc = 0x13BF94u;
            goto label_13bf94;
        }
    }
    ctx->pc = 0x13BEF0u;
    // 0x13bef0: 0x8e820204  lw          $v0, 0x204($s4)
    ctx->pc = 0x13bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 516)));
    // 0x13bef4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13BEF4u;
    {
        const bool branch_taken_0x13bef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bef4) {
            ctx->pc = 0x13BEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BEF4u;
            // 0x13bef8: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF20u;
            goto label_13bf20;
        }
    }
    ctx->pc = 0x13BEFCu;
    // 0x13befc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13bf00:
    // 0x13bf00: 0x0  nop
    ctx->pc = 0x13bf00u;
    // NOP
    // 0x13bf04: 0x0  nop
    ctx->pc = 0x13bf04u;
    // NOP
    // 0x13bf08: 0x0  nop
    ctx->pc = 0x13bf08u;
    // NOP
    // 0x13bf0c: 0x0  nop
    ctx->pc = 0x13bf0cu;
    // NOP
    // 0x13bf10: 0x0  nop
    ctx->pc = 0x13bf10u;
    // NOP
    // 0x13bf14: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13BF14u;
    {
        const bool branch_taken_0x13bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf14) {
            ctx->pc = 0x13BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF14u;
            // 0x13bf18: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bf00;
        }
    }
    ctx->pc = 0x13BF1Cu;
    // 0x13bf1c: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x13bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_13bf20:
    // 0x13bf20: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x13bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bf24: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x13bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x13bf28: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x13bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bf2c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x13bf2cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x13bf30: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13bf34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bf38: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13bf3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13bf3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x13bf40: 0x1456000f  bne         $v0, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x13BF40u;
    {
        const bool branch_taken_0x13bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x13BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF40u;
        // 0x13bf44: 0xe6610014  swc1        $f1, 0x14($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf40) {
            ctx->pc = 0x13BF80u;
            goto label_13bf80;
        }
    }
    ctx->pc = 0x13BF48u;
    // 0x13bf48: 0x8cb001b0  lw          $s0, 0x1B0($a1)
    ctx->pc = 0x13bf48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x13bf4c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BF4Cu;
    {
        const bool branch_taken_0x13bf4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf4c) {
            ctx->pc = 0x13BF94u;
            goto label_13bf94;
        }
    }
    ctx->pc = 0x13BF54u;
    // 0x13bf54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13bf58:
    // 0x13bf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13bf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf60: 0xc04eff4  jal         func_13BFD0
    ctx->pc = 0x13BF60u;
    SET_GPR_U32(ctx, 31, 0x13BF68u);
    ctx->pc = 0x13BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF60u;
    // 0x13bf64: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFD0u, 0x13BF60u, 0x13BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF68u;
label_13bf68:
    // 0x13bf68: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13BF68u;
    {
        const bool branch_taken_0x13bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf68) {
            ctx->pc = 0x13BF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF68u;
            // 0x13bf6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BFA4u;
            goto label_13bfa4;
        }
    }
    ctx->pc = 0x13BF70u;
    // 0x13bf70: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13BF70u;
    {
        const bool branch_taken_0x13bf70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf70) {
            ctx->pc = 0x13BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF70u;
            // 0x13bf74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bf58;
        }
    }
    ctx->pc = 0x13BF78u;
    // 0x13bf78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13BF78u;
    {
        const bool branch_taken_0x13bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf78) {
            ctx->pc = 0x13BF94u;
            goto label_13bf94;
        }
    }
    ctx->pc = 0x13BF80u;
label_13bf80:
    // 0x13bf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf84: 0xc04eff4  jal         func_13BFD0
    ctx->pc = 0x13BF84u;
    SET_GPR_U32(ctx, 31, 0x13BF8Cu);
    ctx->pc = 0x13BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF84u;
    // 0x13bf88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFD0u, 0x13BF84u, 0x13BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF8Cu;
label_13bf8c:
    // 0x13bf8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BF8Cu;
    {
        const bool branch_taken_0x13bf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF8Cu;
        // 0x13bf90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf8c) {
            ctx->pc = 0x13BFA4u;
            goto label_13bfa4;
        }
    }
    ctx->pc = 0x13BF94u;
label_13bf94:
    // 0x13bf94: 0x5640ffcc  bnel        $s2, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x13BF94u;
    {
        const bool branch_taken_0x13bf94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf94) {
            ctx->pc = 0x13BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF94u;
            // 0x13bf98: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bec8;
        }
    }
    ctx->pc = 0x13BF9Cu;
label_13bf9c:
    // 0x13bf9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13bf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13bfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bfa4:
    // 0x13bfa4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13bfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bfa8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x13bfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13bfac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x13bfacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bfb0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x13bfb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13bfb4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13bfb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bfb8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x13bfb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13bfbc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13bfbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bfc0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x13bfc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13bfc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFC8u;
        // 0x13bfcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BFD0u;
}
