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

// Function: ApVwEntSetWorkPosParam__FP15BsSCDEntControl
// Address: 0x1119e0 - 0x111b34
void ApVwEntSetWorkPosParam__FP15BsSCDEntControl_0x1119e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntSetWorkPosParam__FP15BsSCDEntControl_0x1119e0");
#endif

    switch (ctx->pc) {
        case 0x111a04u: goto label_111a04;
        case 0x111a10u: goto label_111a10;
        case 0x111ab0u: goto label_111ab0;
        case 0x111ac0u: goto label_111ac0;
        case 0x111ad8u: goto label_111ad8;
        case 0x111ae8u: goto label_111ae8;
        case 0x111af8u: goto label_111af8;
        case 0x111b10u: goto label_111b10;
        case 0x111b14u: goto label_111b14;
        case 0x111b18u: goto label_111b18;
        case 0x111b1cu: goto label_111b1c;
        default: break;
    }

    ctx->pc = 0x1119e0u;

    // 0x1119e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1119e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1119e4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1119e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1119e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1119e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1119ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1119ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1119f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1119f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1119f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1119f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1119f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1119fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1119FCu;
    SET_GPR_U32(ctx, 31, 0x111A04u);
    ctx->pc = 0x111A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119FCu;
    // 0x111a00: 0x8c52b830  lw          $s2, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1119FCu, 0x111A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A04u;
label_111a04:
    // 0x111a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a08: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111A08u;
    SET_GPR_U32(ctx, 31, 0x111A10u);
    ctx->pc = 0x111A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A08u;
    // 0x111a0c: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111A08u, 0x111A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A10u;
label_111a10:
    // 0x111a10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x111a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111a14: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x111a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x111a18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x111a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x111a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x111a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x111a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x111a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x111a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x111a2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x111a30: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x111A30u;
    {
        const bool branch_taken_0x111a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x111A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A30u;
        // 0x111a34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a30) {
            ctx->pc = 0x111A70u;
            goto label_111a70;
        }
    }
    ctx->pc = 0x111A38u;
    // 0x111a38: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x111a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x111a3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111A3Cu;
    {
        const bool branch_taken_0x111a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A3Cu;
        // 0x111a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a3c) {
            ctx->pc = 0x111A58u;
            goto label_111a58;
        }
    }
    ctx->pc = 0x111A44u;
    // 0x111a44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x111A44u;
    {
        const bool branch_taken_0x111a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A44u;
        // 0x111a48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a44) {
            ctx->pc = 0x111A68u;
            goto label_111a68;
        }
    }
    ctx->pc = 0x111A4Cu;
    // 0x111a4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111A4Cu;
    {
        const bool branch_taken_0x111a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A4Cu;
        // 0x111a50: 0x2442fffa  addiu       $v0, $v0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a4c) {
            ctx->pc = 0x111A84u;
            goto label_111a84;
        }
    }
    ctx->pc = 0x111A54u;
    // 0x111a54: 0x0  nop
    ctx->pc = 0x111a54u;
    // NOP
label_111a58:
    // 0x111a58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111A58u;
    {
        const bool branch_taken_0x111a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a58) {
            ctx->pc = 0x111A78u;
            goto label_111a78;
        }
    }
    ctx->pc = 0x111A60u;
    // 0x111a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111A60u;
    {
        const bool branch_taken_0x111a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A60u;
        // 0x111a64: 0x2442fffa  addiu       $v0, $v0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a60) {
            ctx->pc = 0x111A84u;
            goto label_111a84;
        }
    }
    ctx->pc = 0x111A68u;
label_111a68:
    // 0x111a68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111A68u;
    {
        const bool branch_taken_0x111a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A68u;
        // 0x111a6c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a68) {
            ctx->pc = 0x111A7Cu;
            goto label_111a7c;
        }
    }
    ctx->pc = 0x111A70u;
label_111a70:
    // 0x111a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111A70u;
    {
        const bool branch_taken_0x111a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A70u;
        // 0x111a74: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a70) {
            ctx->pc = 0x111A7Cu;
            goto label_111a7c;
        }
    }
    ctx->pc = 0x111A78u;
label_111a78:
    // 0x111a78: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_111a7c:
    // 0x111a7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a80: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x111a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_111a84:
    // 0x111a84: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x111a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x111a88: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x111A88u;
    {
        const bool branch_taken_0x111a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111a88) {
            ctx->pc = 0x111A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A88u;
            // 0x111a8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111B20u;
            goto label_111b20;
        }
    }
    ctx->pc = 0x111A90u;
    // 0x111a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111a94: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x111a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x111a98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111a9c: 0x8c634040  lw          $v1, 0x4040($v1)
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16448)));
    // 0x111aa0: 0x600008  jr          $v1
    ctx->pc = 0x111AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111AA8u: goto label_111aa8;
            case 0x111AB8u: goto label_111ab8;
            case 0x111AD0u: goto label_111ad0;
            case 0x111AE0u: goto label_111ae0;
            case 0x111AF0u: goto label_111af0;
            case 0x111B08u: goto label_111b08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111AA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111AA8u;
label_111aa8:
    // 0x111aa8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x111AA8u;
    SET_GPR_U32(ctx, 31, 0x111AB0u);
    ctx->pc = 0x111AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AA8u;
    // 0x111aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x111AA8u, 0x111AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AB0u;
label_111ab0:
    // 0x111ab0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x111AB0u;
    {
        const bool branch_taken_0x111ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB0u;
        // 0x111ab4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ab0) {
            ctx->pc = 0x111B1Cu;
            goto label_111b1c;
        }
    }
    ctx->pc = 0x111AB8u;
label_111ab8:
    // 0x111ab8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x111AB8u;
    SET_GPR_U32(ctx, 31, 0x111AC0u);
    ctx->pc = 0x111ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AB8u;
    // 0x111abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x111AB8u, 0x111AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AC0u;
label_111ac0:
    // 0x111ac0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x111ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111ac4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x111AC4u;
    {
        const bool branch_taken_0x111ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AC4u;
        // 0x111ac8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ac4) {
            ctx->pc = 0x111B18u;
            goto label_111b18;
        }
    }
    ctx->pc = 0x111ACCu;
    // 0x111acc: 0x0  nop
    ctx->pc = 0x111accu;
    // NOP
label_111ad0:
    // 0x111ad0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x111AD0u;
    SET_GPR_U32(ctx, 31, 0x111AD8u);
    ctx->pc = 0x111AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AD0u;
    // 0x111ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x111AD0u, 0x111AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AD8u;
label_111ad8:
    // 0x111ad8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x111AD8u;
    {
        const bool branch_taken_0x111ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD8u;
        // 0x111adc: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ad8) {
            ctx->pc = 0x111B14u;
            goto label_111b14;
        }
    }
    ctx->pc = 0x111AE0u;
label_111ae0:
    // 0x111ae0: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x111AE0u;
    SET_GPR_U32(ctx, 31, 0x111AE8u);
    ctx->pc = 0x111AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AE0u;
    // 0x111ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x111AE0u, 0x111AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AE8u;
label_111ae8:
    // 0x111ae8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x111AE8u;
    {
        const bool branch_taken_0x111ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AE8u;
        // 0x111aec: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ae8) {
            ctx->pc = 0x111B1Cu;
            goto label_111b1c;
        }
    }
    ctx->pc = 0x111AF0u;
label_111af0:
    // 0x111af0: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x111AF0u;
    SET_GPR_U32(ctx, 31, 0x111AF8u);
    ctx->pc = 0x111AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AF0u;
    // 0x111af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x111AF0u, 0x111AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AF8u;
label_111af8:
    // 0x111af8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x111af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111afc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111AFCu;
    {
        const bool branch_taken_0x111afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AFCu;
        // 0x111b00: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111afc) {
            ctx->pc = 0x111B18u;
            goto label_111b18;
        }
    }
    ctx->pc = 0x111B04u;
    // 0x111b04: 0x0  nop
    ctx->pc = 0x111b04u;
    // NOP
label_111b08:
    // 0x111b08: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x111B08u;
    SET_GPR_U32(ctx, 31, 0x111B10u);
    ctx->pc = 0x111B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B08u;
    // 0x111b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x111B08u, 0x111B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B10u;
label_111b10:
    // 0x111b10: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x111b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_111b14:
    // 0x111b14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x111b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_111b18:
    // 0x111b18: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x111b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_111b1c:
    // 0x111b1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111b20:
    // 0x111b20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111b24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111b28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x111b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x111B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B2Cu;
        // 0x111b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111B34u;
}
