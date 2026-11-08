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

// Function: AimingTurretProc__7ApcTankP9FVector32
// Address: 0x14f9b8 - 0x14fb20
void AimingTurretProc__7ApcTankP9FVector32_0x14f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AimingTurretProc__7ApcTankP9FVector32_0x14f9b8");
#endif

    switch (ctx->pc) {
        case 0x14fa18u: goto label_14fa18;
        case 0x14fa28u: goto label_14fa28;
        case 0x14fa88u: goto label_14fa88;
        case 0x14fab4u: goto label_14fab4;
        case 0x14fac4u: goto label_14fac4;
        case 0x14fad8u: goto label_14fad8;
        default: break;
    }

    ctx->pc = 0x14f9b8u;

    // 0x14f9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f9bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9c4: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F9C4u;
    {
        const bool branch_taken_0x14f9c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9C4u;
        // 0x14f9c8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9c4) {
            ctx->pc = 0x14FA20u;
            goto label_14fa20;
        }
    }
    ctx->pc = 0x14F9CCu;
    // 0x14f9cc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x14f9d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14F9D0u;
    {
        const bool branch_taken_0x14f9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f9d0) {
            ctx->pc = 0x14FA10u;
            goto label_14fa10;
        }
    }
    ctx->pc = 0x14F9D8u;
    // 0x14f9d8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f9dc: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x14f9e0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f9e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14f9e8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x14f9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14f9ec: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x14f9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x14f9f0: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x14F9F0u;
    {
        const bool branch_taken_0x14f9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9F0u;
        // 0x14f9f4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9f0) {
            ctx->pc = 0x14FB10u;
            goto label_14fb10;
        }
    }
    ctx->pc = 0x14F9F8u;
    // 0x14f9f8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x14f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x14f9fc: 0xae0007f0  sw          $zero, 0x7F0($s0)
    ctx->pc = 0x14f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 0));
    // 0x14fa00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14fa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14fa04: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x14FA04u;
    {
        const bool branch_taken_0x14fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA04u;
        // 0x14fa08: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa04) {
            ctx->pc = 0x14FB10u;
            goto label_14fb10;
        }
    }
    ctx->pc = 0x14FA0Cu;
    // 0x14fa0c: 0x0  nop
    ctx->pc = 0x14fa0cu;
    // NOP
label_14fa10:
    // 0x14fa10: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FA10u;
    SET_GPR_U32(ctx, 31, 0x14FA18u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FA10u, 0x14FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA18u;
label_14fa18:
    // 0x14fa18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA18u;
    {
        const bool branch_taken_0x14fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA18u;
        // 0x14fa1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa18) {
            ctx->pc = 0x14FA2Cu;
            goto label_14fa2c;
        }
    }
    ctx->pc = 0x14FA20u;
label_14fa20:
    // 0x14fa20: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FA20u;
    SET_GPR_U32(ctx, 31, 0x14FA28u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FA20u, 0x14FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA28u;
label_14fa28:
    // 0x14fa28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14fa2c:
    // 0x14fa2c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14fa30: 0x8c620c0c  lw          $v0, 0xC0C($v1)
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3084)));
    // 0x14fa34: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA34u;
    {
        const bool branch_taken_0x14fa34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA34u;
        // 0x14fa38: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa34) {
            ctx->pc = 0x14FA48u;
            goto label_14fa48;
        }
    }
    ctx->pc = 0x14FA3Cu;
    // 0x14fa3c: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14fa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FA40u;
    {
        const bool branch_taken_0x14fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA40u;
        // 0x14fa44: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa40) {
            ctx->pc = 0x14FA4Cu;
            goto label_14fa4c;
        }
    }
    ctx->pc = 0x14FA48u;
label_14fa48:
    // 0x14fa48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fa4c:
    // 0x14fa4c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x14FA4Cu;
    {
        const bool branch_taken_0x14fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa4c) {
            ctx->pc = 0x14FA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FA4Cu;
            // 0x14fa50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            goto label_14fb14;
        }
    }
    ctx->pc = 0x14FA54u;
    // 0x14fa54: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14fa58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FA58u;
    {
        const bool branch_taken_0x14fa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA58u;
        // 0x14fa5c: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa58) {
            ctx->pc = 0x14FA78u;
            goto label_14fa78;
        }
    }
    ctx->pc = 0x14FA60u;
    // 0x14fa60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14fa64: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14fa68: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14fa6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14FA6Cu;
    {
        const bool branch_taken_0x14fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA6Cu;
        // 0x14fa70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa6c) {
            ctx->pc = 0x14FA7Cu;
            goto label_14fa7c;
        }
    }
    ctx->pc = 0x14FA74u;
    // 0x14fa74: 0x0  nop
    ctx->pc = 0x14fa74u;
    // NOP
label_14fa78:
    // 0x14fa78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fa78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fa7c:
    // 0x14fa7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fa80: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x14FA80u;
    SET_GPR_U32(ctx, 31, 0x14FA88u);
    ctx->pc = 0x14FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA80u;
    // 0x14fa84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x14FA80u, 0x14FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA88u;
label_14fa88:
    // 0x14fa88: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x14fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fa8c: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x14fa8cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x14fa90: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x14fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14fa94: 0x46006845  abs.s       $f1, $f13
    ctx->pc = 0x14fa94u;
    ctx->f[1] = FPU_ABS_S(ctx->f[13]);
    // 0x14fa98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14fa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fa9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14fa9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14faa0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x14faa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14faa4: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x14FAA4u;
    {
        const bool branch_taken_0x14faa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14faa4) {
            ctx->pc = 0x14FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FAA4u;
            // 0x14faa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            goto label_14fb14;
        }
    }
    ctx->pc = 0x14FAACu;
    // 0x14faac: 0xc067a02  jal         func_19E808
    ctx->pc = 0x14FAACu;
    SET_GPR_U32(ctx, 31, 0x14FAB4u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x14FAACu, 0x14FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAB4u;
label_14fab4:
    // 0x14fab4: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x14fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14fab8: 0x8e060310  lw          $a2, 0x310($s0)
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x14fabc: 0xc058562  jal         func_161588
    ctx->pc = 0x14FABCu;
    SET_GPR_U32(ctx, 31, 0x14FAC4u);
    ctx->pc = 0x14FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FABCu;
    // 0x14fac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x14FABCu, 0x14FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAC4u;
label_14fac4:
    // 0x14fac4: 0x8e04076c  lw          $a0, 0x76C($s0)
    ctx->pc = 0x14fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x14fac8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FAC8u;
    {
        const bool branch_taken_0x14fac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fac8) {
            ctx->pc = 0x14FACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FAC8u;
            // 0x14facc: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FADCu;
            goto label_14fadc;
        }
    }
    ctx->pc = 0x14FAD0u;
    // 0x14fad0: 0xc061944  jal         func_186510
    ctx->pc = 0x14FAD0u;
    SET_GPR_U32(ctx, 31, 0x14FAD8u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x14FAD0u, 0x14FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAD8u;
label_14fad8:
    // 0x14fad8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_14fadc:
    // 0x14fadc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14fae0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14fae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14fae4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14FAE4u;
    {
        const bool branch_taken_0x14fae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fae4) {
            ctx->pc = 0x14FAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FAE4u;
            // 0x14fae8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            goto label_14fb14;
        }
    }
    ctx->pc = 0x14FAECu;
    // 0x14faec: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x14faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14faf0: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x14faf4: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x14faf4u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x14faf8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14fafc: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x14fafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14fb00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB00u;
    {
        const bool branch_taken_0x14fb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fb00) {
            ctx->pc = 0x14FB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB00u;
            // 0x14fb04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            goto label_14fb14;
        }
    }
    ctx->pc = 0x14FB08u;
    // 0x14fb08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fb0c: 0xae020850  sw          $v0, 0x850($s0)
    ctx->pc = 0x14fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
label_14fb10:
    // 0x14fb10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14fb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14fb14:
    // 0x14fb14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14fb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fb18: 0x3e00008  jr          $ra
    ctx->pc = 0x14FB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB18u;
        // 0x14fb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FB20u;
}
