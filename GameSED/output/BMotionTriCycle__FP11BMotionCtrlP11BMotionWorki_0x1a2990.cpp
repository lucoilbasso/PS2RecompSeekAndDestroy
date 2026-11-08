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

// Function: BMotionTriCycle__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a2990 - 0x1a2afc
void BMotionTriCycle__FP11BMotionCtrlP11BMotionWorki_0x1a2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionTriCycle__FP11BMotionCtrlP11BMotionWorki_0x1a2990");
#endif

    switch (ctx->pc) {
        case 0x1a2990u: goto label_1a2990;
        case 0x1a2994u: goto label_1a2994;
        case 0x1a2998u: goto label_1a2998;
        case 0x1a299cu: goto label_1a299c;
        case 0x1a29a0u: goto label_1a29a0;
        case 0x1a29a4u: goto label_1a29a4;
        case 0x1a29a8u: goto label_1a29a8;
        case 0x1a29acu: goto label_1a29ac;
        case 0x1a29b0u: goto label_1a29b0;
        case 0x1a29b4u: goto label_1a29b4;
        case 0x1a29b8u: goto label_1a29b8;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29c0u: goto label_1a29c0;
        case 0x1a29c4u: goto label_1a29c4;
        case 0x1a29c8u: goto label_1a29c8;
        case 0x1a29ccu: goto label_1a29cc;
        case 0x1a29d0u: goto label_1a29d0;
        case 0x1a29d4u: goto label_1a29d4;
        case 0x1a29d8u: goto label_1a29d8;
        case 0x1a29dcu: goto label_1a29dc;
        case 0x1a29e0u: goto label_1a29e0;
        case 0x1a29e4u: goto label_1a29e4;
        case 0x1a29e8u: goto label_1a29e8;
        case 0x1a29ecu: goto label_1a29ec;
        case 0x1a29f0u: goto label_1a29f0;
        case 0x1a29f4u: goto label_1a29f4;
        case 0x1a29f8u: goto label_1a29f8;
        case 0x1a29fcu: goto label_1a29fc;
        case 0x1a2a00u: goto label_1a2a00;
        case 0x1a2a04u: goto label_1a2a04;
        case 0x1a2a08u: goto label_1a2a08;
        case 0x1a2a0cu: goto label_1a2a0c;
        case 0x1a2a10u: goto label_1a2a10;
        case 0x1a2a14u: goto label_1a2a14;
        case 0x1a2a18u: goto label_1a2a18;
        case 0x1a2a1cu: goto label_1a2a1c;
        case 0x1a2a20u: goto label_1a2a20;
        case 0x1a2a24u: goto label_1a2a24;
        case 0x1a2a28u: goto label_1a2a28;
        case 0x1a2a2cu: goto label_1a2a2c;
        case 0x1a2a30u: goto label_1a2a30;
        case 0x1a2a34u: goto label_1a2a34;
        case 0x1a2a38u: goto label_1a2a38;
        case 0x1a2a3cu: goto label_1a2a3c;
        case 0x1a2a40u: goto label_1a2a40;
        case 0x1a2a44u: goto label_1a2a44;
        case 0x1a2a48u: goto label_1a2a48;
        case 0x1a2a4cu: goto label_1a2a4c;
        case 0x1a2a50u: goto label_1a2a50;
        case 0x1a2a54u: goto label_1a2a54;
        case 0x1a2a58u: goto label_1a2a58;
        case 0x1a2a5cu: goto label_1a2a5c;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a64u: goto label_1a2a64;
        case 0x1a2a68u: goto label_1a2a68;
        case 0x1a2a6cu: goto label_1a2a6c;
        case 0x1a2a70u: goto label_1a2a70;
        case 0x1a2a74u: goto label_1a2a74;
        case 0x1a2a78u: goto label_1a2a78;
        case 0x1a2a7cu: goto label_1a2a7c;
        case 0x1a2a80u: goto label_1a2a80;
        case 0x1a2a84u: goto label_1a2a84;
        case 0x1a2a88u: goto label_1a2a88;
        case 0x1a2a8cu: goto label_1a2a8c;
        case 0x1a2a90u: goto label_1a2a90;
        case 0x1a2a94u: goto label_1a2a94;
        case 0x1a2a98u: goto label_1a2a98;
        case 0x1a2a9cu: goto label_1a2a9c;
        case 0x1a2aa0u: goto label_1a2aa0;
        case 0x1a2aa4u: goto label_1a2aa4;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2ab0u: goto label_1a2ab0;
        case 0x1a2ab4u: goto label_1a2ab4;
        case 0x1a2ab8u: goto label_1a2ab8;
        case 0x1a2abcu: goto label_1a2abc;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac4u: goto label_1a2ac4;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2accu: goto label_1a2acc;
        case 0x1a2ad0u: goto label_1a2ad0;
        case 0x1a2ad4u: goto label_1a2ad4;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2adcu: goto label_1a2adc;
        case 0x1a2ae0u: goto label_1a2ae0;
        case 0x1a2ae4u: goto label_1a2ae4;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2aecu: goto label_1a2aec;
        case 0x1a2af0u: goto label_1a2af0;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2af8u: goto label_1a2af8;
        default: break;
    }

    ctx->pc = 0x1a2990u;

label_1a2990:
    // 0x1a2990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2994:
    // 0x1a2994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2998:
    // 0x1a2998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a299c:
    // 0x1a299c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a29a0:
    // 0x1a29a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a29a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a29a4:
    // 0x1a29a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a29a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a29a8:
    // 0x1a29a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a29ac:
    // 0x1a29ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a29b0:
    // 0x1a29b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a29b4:
    if (ctx->pc == 0x1A29B4u) {
        ctx->pc = 0x1A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29B0u;
        // 0x1a29b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29B8u;
        goto label_1a29b8;
    }
    ctx->pc = 0x1A29B0u;
    {
        const bool branch_taken_0x1a29b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29B0u;
        // 0x1a29b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29b0) {
            ctx->pc = 0x1A29D0u;
            goto label_1a29d0;
        }
    }
    ctx->pc = 0x1A29B8u;
label_1a29b8:
    // 0x1a29b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a29b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a29bc:
    // 0x1a29bc: 0x40f809  jalr        $v0
label_1a29c0:
    if (ctx->pc == 0x1A29C0u) {
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29C4u;
        goto label_1a29c4;
    }
    ctx->pc = 0x1A29BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A29C4u);
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A29BCu, 0x1A29C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A29C4u;
label_1a29c4:
    // 0x1a29c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a29c8:
    if (ctx->pc == 0x1A29C8u) {
        ctx->pc = 0x1A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29C4u;
        // 0x1a29c8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29CCu;
        goto label_1a29cc;
    }
    ctx->pc = 0x1A29C4u;
    {
        const bool branch_taken_0x1a29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29C4u;
        // 0x1a29c8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29c4) {
            ctx->pc = 0x1A29FCu;
            goto label_1a29fc;
        }
    }
    ctx->pc = 0x1A29CCu;
label_1a29cc:
    // 0x1a29cc: 0x0  nop
    ctx->pc = 0x1a29ccu;
    // NOP
label_1a29d0:
    // 0x1a29d0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a29d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a29d4:
    // 0x1a29d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a29d8:
    if (ctx->pc == 0x1A29D8u) {
        ctx->pc = 0x1A29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29D4u;
        // 0x1a29d8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29DCu;
        goto label_1a29dc;
    }
    ctx->pc = 0x1A29D4u;
    {
        const bool branch_taken_0x1a29d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29D4u;
        // 0x1a29d8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29d4) {
            ctx->pc = 0x1A29E8u;
            goto label_1a29e8;
        }
    }
    ctx->pc = 0x1A29DCu;
label_1a29dc:
    // 0x1a29dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a29e0:
    // 0x1a29e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a29e4:
    if (ctx->pc == 0x1A29E4u) {
        ctx->pc = 0x1A29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29E0u;
        // 0x1a29e4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29E8u;
        goto label_1a29e8;
    }
    ctx->pc = 0x1A29E0u;
    {
        const bool branch_taken_0x1a29e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29E0u;
        // 0x1a29e4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29e0) {
            ctx->pc = 0x1A29FCu;
            goto label_1a29fc;
        }
    }
    ctx->pc = 0x1A29E8u;
label_1a29e8:
    // 0x1a29e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a29ec:
    // 0x1a29ec: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a29f0:
    // 0x1a29f0: 0xc068186  jal         func_1A0618
label_1a29f4:
    if (ctx->pc == 0x1A29F4u) {
        ctx->pc = 0x1A29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29F0u;
        // 0x1a29f4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29F8u;
        goto label_1a29f8;
    }
    ctx->pc = 0x1A29F0u;
    SET_GPR_U32(ctx, 31, 0x1A29F8u);
    ctx->pc = 0x1A29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29F0u;
    // 0x1a29f4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A29F0u, 0x1A29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29F8u;
label_1a29f8:
    // 0x1a29f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a29f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a29fc:
    // 0x1a29fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2a00:
    // 0x1a2a00: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_1a2a04:
    if (ctx->pc == 0x1A2A04u) {
        ctx->pc = 0x1A2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A00u;
        // 0x1a2a04: 0x8602001a  lh          $v0, 0x1A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A08u;
        goto label_1a2a08;
    }
    ctx->pc = 0x1A2A00u;
    {
        const bool branch_taken_0x1a2a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a00) {
            ctx->pc = 0x1A2A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2A00u;
            // 0x1a2a04: 0x8602001a  lh          $v0, 0x1A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2A40u;
            goto label_1a2a40;
        }
    }
    ctx->pc = 0x1A2A08u;
label_1a2a08:
    // 0x1a2a08: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1a2a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2a0c:
    // 0x1a2a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2a10:
    // 0x1a2a10: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2a14:
    // 0x1a2a14: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x1a2a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_1a2a18:
    // 0x1a2a18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a2a1c:
    // 0x1a2a1c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a2a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a2a20:
    // 0x1a2a20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a2a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1a2a24:
    // 0x1a2a24: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a2a24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_1a2a28:
    // 0x1a2a28: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a2a2c:
    // 0x1a2a2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1a2a30:
    // 0x1a2a30: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a2a30u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a2a34:
    // 0x1a2a34: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2a38:
    if (ctx->pc == 0x1A2A38u) {
        ctx->pc = 0x1A2A3Cu;
        goto label_1a2a3c;
    }
    ctx->pc = 0x1A2A34u;
    {
        const bool branch_taken_0x1a2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a34) {
            ctx->pc = 0x1A2A6Cu;
            goto label_1a2a6c;
        }
    }
    ctx->pc = 0x1A2A3Cu;
label_1a2a3c:
    // 0x1a2a3c: 0x0  nop
    ctx->pc = 0x1a2a3cu;
    // NOP
label_1a2a40:
    // 0x1a2a40: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_1a2a44:
    if (ctx->pc == 0x1A2A44u) {
        ctx->pc = 0x1A2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A40u;
        // 0x1a2a44: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A48u;
        goto label_1a2a48;
    }
    ctx->pc = 0x1A2A40u;
    {
        const bool branch_taken_0x1a2a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2a40) {
            ctx->pc = 0x1A2A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2A40u;
            // 0x1a2a44: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2A9Cu;
            goto label_1a2a9c;
        }
    }
    ctx->pc = 0x1A2A48u;
label_1a2a48:
    // 0x1a2a48: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_1a2a4c:
    // 0x1a2a4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2a50:
    // 0x1a2a50: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1a2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2a54:
    // 0x1a2a54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1a2a58:
    // 0x1a2a58: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a2a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a2a5c:
    // 0x1a2a5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1a2a60:
    // 0x1a2a60: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x1a2a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1a2a64:
    // 0x1a2a64: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a2a64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a2a68:
    // 0x1a2a68: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x1a2a68u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_1a2a6c:
    // 0x1a2a6c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a2a70:
    // 0x1a2a70: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a2a74:
    // 0x1a2a74: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1a2a74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a2a78:
    // 0x1a2a78: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1a2a7c:
    // 0x1a2a7c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a2a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1a2a80:
    // 0x1a2a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2a84:
    // 0x1a2a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2a88:
    // 0x1a2a88: 0x0  nop
    ctx->pc = 0x1a2a88u;
    // NOP
label_1a2a8c:
    // 0x1a2a8c: 0x0  nop
    ctx->pc = 0x1a2a8cu;
    // NOP
label_1a2a90:
    // 0x1a2a90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a2a90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a2a94:
    // 0x1a2a94: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1a2a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1a2a98:
    // 0x1a2a98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2a9c:
    // 0x1a2a9c: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1a2aa0:
    // 0x1a2aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a2aa4:
    // 0x1a2aa4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1a2aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a2aa8:
    // 0x1a2aa8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1a2aac:
    if (ctx->pc == 0x1A2AACu) {
        ctx->pc = 0x1A2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AA8u;
        // 0x1a2aac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AB0u;
        goto label_1a2ab0;
    }
    ctx->pc = 0x1A2AA8u;
    {
        const bool branch_taken_0x1a2aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AA8u;
        // 0x1a2aac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2aa8) {
            ctx->pc = 0x1A2AB4u;
            goto label_1a2ab4;
        }
    }
    ctx->pc = 0x1A2AB0u;
label_1a2ab0:
    // 0x1a2ab0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1a2ab4:
    // 0x1a2ab4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2ab8:
    // 0x1a2ab8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_1a2abc:
    if (ctx->pc == 0x1A2ABCu) {
        ctx->pc = 0x1A2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB8u;
        // 0x1a2abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AC0u;
        goto label_1a2ac0;
    }
    ctx->pc = 0x1A2AB8u;
    {
        const bool branch_taken_0x1a2ab8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB8u;
        // 0x1a2abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ab8) {
            ctx->pc = 0x1A2AE0u;
            goto label_1a2ae0;
        }
    }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2ac4:
    // 0x1a2ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ac8:
    // 0x1a2ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2acc:
    // 0x1a2acc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a2accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ad0:
    // 0x1a2ad0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2ad4:
    // 0x1a2ad4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a2ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a2ad8:
    // 0x1a2ad8: 0x80688f4  j           func_1A23D0
label_1a2adc:
    if (ctx->pc == 0x1A2ADCu) {
        ctx->pc = 0x1A2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AD8u;
        // 0x1a2adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AE0u;
        goto label_1a2ae0;
    }
    ctx->pc = 0x1A2AD8u;
    ctx->pc = 0x1A2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AD8u;
    // 0x1a2adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23D0u;
    BMotionLinerMove__FP11BMotionCtrlP11BMotionWorki_0x1a23d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A2AE0u;
label_1a2ae0:
    // 0x1a2ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2ae4:
    // 0x1a2ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2ae8:
    // 0x1a2ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2aec:
    // 0x1a2aec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2af0:
    // 0x1a2af0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a2af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a2af4:
    // 0x1a2af4: 0x3e00008  jr          $ra
label_1a2af8:
    if (ctx->pc == 0x1A2AF8u) {
        ctx->pc = 0x1A2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AF4u;
        // 0x1a2af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AFCu;
        goto label_fallthrough_0x1a2af4;
    }
    ctx->pc = 0x1A2AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AF4u;
        // 0x1a2af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2af4:
    ctx->pc = 0x1A2AFCu;
}
