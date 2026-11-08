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

// Function: BMotionLoopCycle__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a2b00 - 0x1a2cb8
void BMotionLoopCycle__FP11BMotionCtrlP11BMotionWorki_0x1a2b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionLoopCycle__FP11BMotionCtrlP11BMotionWorki_0x1a2b00");
#endif

    switch (ctx->pc) {
        case 0x1a2b00u: goto label_1a2b00;
        case 0x1a2b04u: goto label_1a2b04;
        case 0x1a2b08u: goto label_1a2b08;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b10u: goto label_1a2b10;
        case 0x1a2b14u: goto label_1a2b14;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b1cu: goto label_1a2b1c;
        case 0x1a2b20u: goto label_1a2b20;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b2cu: goto label_1a2b2c;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2b34u: goto label_1a2b34;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b3cu: goto label_1a2b3c;
        case 0x1a2b40u: goto label_1a2b40;
        case 0x1a2b44u: goto label_1a2b44;
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        case 0x1a2ca0u: goto label_1a2ca0;
        case 0x1a2ca4u: goto label_1a2ca4;
        case 0x1a2ca8u: goto label_1a2ca8;
        case 0x1a2cacu: goto label_1a2cac;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cb4u: goto label_1a2cb4;
        default: break;
    }

    ctx->pc = 0x1a2b00u;

label_1a2b00:
    // 0x1a2b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2b04:
    // 0x1a2b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2b08:
    // 0x1a2b08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a2b0c:
    // 0x1a2b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b10:
    // 0x1a2b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a2b14:
    // 0x1a2b14: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a2b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a2b18:
    // 0x1a2b18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a2b1c:
    // 0x1a2b1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2b20:
    if (ctx->pc == 0x1A2B20u) {
        ctx->pc = 0x1A2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B1Cu;
        // 0x1a2b20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B24u;
        goto label_1a2b24;
    }
    ctx->pc = 0x1A2B1Cu;
    {
        const bool branch_taken_0x1a2b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B1Cu;
        // 0x1a2b20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b1c) {
            ctx->pc = 0x1A2B38u;
            goto label_1a2b38;
        }
    }
    ctx->pc = 0x1A2B24u;
label_1a2b24:
    // 0x1a2b24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a2b28:
    // 0x1a2b28: 0x40f809  jalr        $v0
label_1a2b2c:
    if (ctx->pc == 0x1A2B2Cu) {
        ctx->pc = 0x1A2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B28u;
        // 0x1a2b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B30u;
        goto label_1a2b30;
    }
    ctx->pc = 0x1A2B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2B30u);
        ctx->pc = 0x1A2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B28u;
        // 0x1a2b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B28u, 0x1A2B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2B30u;
label_1a2b30:
    // 0x1a2b30: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2b34:
    if (ctx->pc == 0x1A2B34u) {
        ctx->pc = 0x1A2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B30u;
        // 0x1a2b34: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B38u;
        goto label_1a2b38;
    }
    ctx->pc = 0x1A2B30u;
    {
        const bool branch_taken_0x1a2b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B30u;
        // 0x1a2b34: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b30) {
            ctx->pc = 0x1A2B68u;
            goto label_1a2b68;
        }
    }
    ctx->pc = 0x1A2B38u;
label_1a2b38:
    // 0x1a2b38: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a2b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a2b3c:
    // 0x1a2b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2b40:
    if (ctx->pc == 0x1A2B40u) {
        ctx->pc = 0x1A2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B3Cu;
        // 0x1a2b40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B44u;
        goto label_1a2b44;
    }
    ctx->pc = 0x1A2B3Cu;
    {
        const bool branch_taken_0x1a2b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B3Cu;
        // 0x1a2b40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b3c) {
            ctx->pc = 0x1A2B50u;
            goto label_1a2b50;
        }
    }
    ctx->pc = 0x1A2B44u;
label_1a2b44:
    // 0x1a2b44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a2b48:
    // 0x1a2b48: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2b4c:
    if (ctx->pc == 0x1A2B4Cu) {
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B48u;
        // 0x1a2b4c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B50u;
        goto label_1a2b50;
    }
    ctx->pc = 0x1A2B48u;
    {
        const bool branch_taken_0x1a2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B48u;
        // 0x1a2b4c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b48) {
            ctx->pc = 0x1A2B64u;
            goto label_1a2b64;
        }
    }
    ctx->pc = 0x1A2B50u;
label_1a2b50:
    // 0x1a2b50: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a2b54:
    // 0x1a2b54: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a2b58:
    // 0x1a2b58: 0xc068186  jal         func_1A0618
label_1a2b5c:
    if (ctx->pc == 0x1A2B5Cu) {
        ctx->pc = 0x1A2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B58u;
        // 0x1a2b5c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B60u;
        goto label_1a2b60;
    }
    ctx->pc = 0x1A2B58u;
    SET_GPR_U32(ctx, 31, 0x1A2B60u);
    ctx->pc = 0x1A2B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B58u;
    // 0x1a2b5c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2B58u, 0x1A2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B60u;
label_1a2b60:
    // 0x1a2b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2b64:
    // 0x1a2b64: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x1a2b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2b68:
    // 0x1a2b68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1a2b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a2b6c:
    // 0x1a2b6c: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1a2b6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2b70:
    // 0x1a2b70: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1a2b74:
    if (ctx->pc == 0x1A2B74u) {
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B78u;
        goto label_1a2b78;
    }
    ctx->pc = 0x1A2B70u;
    {
        const bool branch_taken_0x1a2b70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b70) {
            ctx->pc = 0x1A2BD0u;
            goto label_1a2bd0;
        }
    }
    ctx->pc = 0x1A2B78u;
label_1a2b78:
    // 0x1a2b78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2b7c:
    // 0x1a2b7c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a2b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2b80:
    // 0x1a2b80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2b84:
    // 0x1a2b84: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a2b88:
    if (ctx->pc == 0x1A2B88u) {
        ctx->pc = 0x1A2B8Cu;
        goto label_1a2b8c;
    }
    ctx->pc = 0x1A2B84u;
    {
        const bool branch_taken_0x1a2b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2b84) {
            ctx->pc = 0x1A2BA8u;
            goto label_1a2ba8;
        }
    }
    ctx->pc = 0x1A2B8Cu;
label_1a2b8c:
    // 0x1a2b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a2b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a2b90:
    // 0x1a2b90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a2b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2b94:
    // 0x1a2b94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a2b98:
    if (ctx->pc == 0x1A2B98u) {
        ctx->pc = 0x1A2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B94u;
        // 0x1a2b98: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B9Cu;
        goto label_1a2b9c;
    }
    ctx->pc = 0x1A2B94u;
    {
        const bool branch_taken_0x1a2b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2b94) {
            ctx->pc = 0x1A2B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2B94u;
            // 0x1a2b98: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2B9Cu;
            goto label_1a2b9c;
        }
    }
    ctx->pc = 0x1A2B9Cu;
label_1a2b9c:
    // 0x1a2b9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a2ba0:
    // 0x1a2ba0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a2ba4:
    if (ctx->pc == 0x1A2BA4u) {
        ctx->pc = 0x1A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA0u;
        // 0x1a2ba4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BA8u;
        goto label_1a2ba8;
    }
    ctx->pc = 0x1A2BA0u;
    {
        const bool branch_taken_0x1a2ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA0u;
        // 0x1a2ba4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba0) {
            ctx->pc = 0x1A2BD0u;
            goto label_1a2bd0;
        }
    }
    ctx->pc = 0x1A2BA8u;
label_1a2ba8:
    // 0x1a2ba8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2bac:
    // 0x1a2bac: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1a2bb0:
    if (ctx->pc == 0x1A2BB0u) {
        ctx->pc = 0x1A2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BACu;
        // 0x1a2bb0: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BB4u;
        goto label_1a2bb4;
    }
    ctx->pc = 0x1A2BACu;
    {
        const bool branch_taken_0x1a2bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bac) {
            ctx->pc = 0x1A2BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BACu;
            // 0x1a2bb0: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BD0u;
            goto label_1a2bd0;
        }
    }
    ctx->pc = 0x1A2BB4u;
label_1a2bb4:
    // 0x1a2bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a2bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a2bb8:
    // 0x1a2bb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2bb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a2bbc:
    // 0x1a2bbc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a2bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2bc0:
    // 0x1a2bc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a2bc4:
    if (ctx->pc == 0x1A2BC4u) {
        ctx->pc = 0x1A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BC0u;
        // 0x1a2bc4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BC8u;
        goto label_1a2bc8;
    }
    ctx->pc = 0x1A2BC0u;
    {
        const bool branch_taken_0x1a2bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bc0) {
            ctx->pc = 0x1A2BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BC0u;
            // 0x1a2bc4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BC8u;
            goto label_1a2bc8;
        }
    }
    ctx->pc = 0x1A2BC8u;
label_1a2bc8:
    // 0x1a2bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a2bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a2bcc:
    // 0x1a2bcc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a2bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a2bd0:
    // 0x1a2bd0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1a2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2bd4:
    // 0x1a2bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2bd8:
    // 0x1a2bd8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2bdc:
    // 0x1a2bdc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1a2bdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2be0:
    // 0x1a2be0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1a2be4:
    if (ctx->pc == 0x1A2BE4u) {
        ctx->pc = 0x1A2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BE0u;
        // 0x1a2be4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BE8u;
        goto label_1a2be8;
    }
    ctx->pc = 0x1A2BE0u;
    {
        const bool branch_taken_0x1a2be0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BE0u;
        // 0x1a2be4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2be0) {
            ctx->pc = 0x1A2C34u;
            goto label_1a2c34;
        }
    }
    ctx->pc = 0x1A2BE8u;
label_1a2be8:
    // 0x1a2be8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1a2bec:
    // 0x1a2bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2bf0:
    // 0x1a2bf0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1a2bf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2bf4:
    // 0x1a2bf4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1a2bf8:
    if (ctx->pc == 0x1A2BF8u) {
        ctx->pc = 0x1A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF4u;
        // 0x1a2bf8: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BFCu;
        goto label_1a2bfc;
    }
    ctx->pc = 0x1A2BF4u;
    {
        const bool branch_taken_0x1a2bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bf4) {
            ctx->pc = 0x1A2BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BF4u;
            // 0x1a2bf8: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C1Cu;
            goto label_1a2c1c;
        }
    }
    ctx->pc = 0x1A2BFCu;
label_1a2bfc:
    // 0x1a2bfc: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a2c00:
    // 0x1a2c00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a2c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a2c04:
    // 0x1a2c04: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a2c08:
    // 0x1a2c08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a2c0c:
    // 0x1a2c0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1a2c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a2c10:
    // 0x1a2c10: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a2c14:
    if (ctx->pc == 0x1A2C14u) {
        ctx->pc = 0x1A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C10u;
        // 0x1a2c14: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C18u;
        goto label_1a2c18;
    }
    ctx->pc = 0x1A2C10u;
    {
        const bool branch_taken_0x1a2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C10u;
        // 0x1a2c14: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c10) {
            ctx->pc = 0x1A2C38u;
            goto label_1a2c38;
        }
    }
    ctx->pc = 0x1A2C18u;
label_1a2c18:
    // 0x1a2c18: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a2c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2c1c:
    // 0x1a2c1c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1a2c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2c20:
    // 0x1a2c20: 0x0  nop
    ctx->pc = 0x1a2c20u;
    // NOP
label_1a2c24:
    // 0x1a2c24: 0x0  nop
    ctx->pc = 0x1a2c24u;
    // NOP
label_1a2c28:
    // 0x1a2c28: 0x0  nop
    ctx->pc = 0x1a2c28u;
    // NOP
label_1a2c2c:
    // 0x1a2c2c: 0x4503fffa  bc1tl       . + 4 + (-0x6 << 2)
label_1a2c30:
    if (ctx->pc == 0x1A2C30u) {
        ctx->pc = 0x1A2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C2Cu;
        // 0x1a2c30: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C34u;
        goto label_1a2c34;
    }
    ctx->pc = 0x1A2C2Cu;
    {
        const bool branch_taken_0x1a2c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2c2c) {
            ctx->pc = 0x1A2C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C2Cu;
            // 0x1a2c30: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2c18;
        }
    }
    ctx->pc = 0x1A2C34u;
label_1a2c34:
    // 0x1a2c34: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a2c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c38:
    // 0x1a2c38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a2c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a2c3c:
    // 0x1a2c3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2c40:
    // 0x1a2c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a2c44:
    if (ctx->pc == 0x1A2C44u) {
        ctx->pc = 0x1A2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C40u;
        // 0x1a2c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C48u;
        goto label_1a2c48;
    }
    ctx->pc = 0x1A2C40u;
    {
        const bool branch_taken_0x1a2c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C40u;
        // 0x1a2c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c40) {
            ctx->pc = 0x1A2C58u;
            goto label_1a2c58;
        }
    }
    ctx->pc = 0x1A2C48u;
label_1a2c48:
    // 0x1a2c48: 0x40f809  jalr        $v0
label_1a2c4c:
    if (ctx->pc == 0x1A2C4Cu) {
        ctx->pc = 0x1A2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C48u;
        // 0x1a2c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C50u;
        goto label_1a2c50;
    }
    ctx->pc = 0x1A2C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2C50u);
        ctx->pc = 0x1A2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C48u;
        // 0x1a2c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C48u, 0x1A2C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2C50u;
label_1a2c50:
    // 0x1a2c50: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2c54:
    if (ctx->pc == 0x1A2C54u) {
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C58u;
        goto label_1a2c58;
    }
    ctx->pc = 0x1A2C50u;
    {
        const bool branch_taken_0x1a2c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c50) {
            ctx->pc = 0x1A2C88u;
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2C58u;
label_1a2c58:
    // 0x1a2c58: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a2c5c:
    // 0x1a2c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2c60:
    if (ctx->pc == 0x1A2C60u) {
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C64u;
        goto label_1a2c64;
    }
    ctx->pc = 0x1A2C5Cu;
    {
        const bool branch_taken_0x1a2c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c5c) {
            ctx->pc = 0x1A2C78u;
            goto label_1a2c78;
        }
    }
    ctx->pc = 0x1A2C64u;
label_1a2c64:
    // 0x1a2c64: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a2c68:
    // 0x1a2c68: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a2c68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a2c6c:
    // 0x1a2c6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2c70:
    if (ctx->pc == 0x1A2C70u) {
        ctx->pc = 0x1A2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C6Cu;
        // 0x1a2c70: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C74u;
        goto label_1a2c74;
    }
    ctx->pc = 0x1A2C6Cu;
    {
        const bool branch_taken_0x1a2c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C6Cu;
        // 0x1a2c70: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c6c) {
            ctx->pc = 0x1A2C88u;
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2C74u;
label_1a2c74:
    // 0x1a2c74: 0x0  nop
    ctx->pc = 0x1a2c74u;
    // NOP
label_1a2c78:
    // 0x1a2c78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2c7c:
    // 0x1a2c7c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a2c80:
    // 0x1a2c80: 0xc068186  jal         func_1A0618
label_1a2c84:
    if (ctx->pc == 0x1A2C84u) {
        ctx->pc = 0x1A2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C80u;
        // 0x1a2c84: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C88u;
        goto label_1a2c88;
    }
    ctx->pc = 0x1A2C80u;
    SET_GPR_U32(ctx, 31, 0x1A2C88u);
    ctx->pc = 0x1A2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C80u;
    // 0x1a2c84: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2C80u, 0x1A2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C88u;
label_1a2c88:
    // 0x1a2c88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2c8c:
    // 0x1a2c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2c90:
    if (ctx->pc == 0x1A2C90u) {
        ctx->pc = 0x1A2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C8Cu;
        // 0x1a2c90: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C94u;
        goto label_1a2c94;
    }
    ctx->pc = 0x1A2C8Cu;
    {
        const bool branch_taken_0x1a2c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C8Cu;
        // 0x1a2c90: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c8c) {
            ctx->pc = 0x1A2CA0u;
            goto label_1a2ca0;
        }
    }
    ctx->pc = 0x1A2C94u;
label_1a2c94:
    // 0x1a2c94: 0x40f809  jalr        $v0
label_1a2c98:
    if (ctx->pc == 0x1A2C98u) {
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C9Cu;
        goto label_1a2c9c;
    }
    ctx->pc = 0x1A2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2C9Cu);
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C94u, 0x1A2C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2C9Cu;
label_1a2c9c:
    // 0x1a2c9c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a2c9cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a2ca0:
    // 0x1a2ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2ca4:
    // 0x1a2ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2ca8:
    // 0x1a2ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2cac:
    // 0x1a2cac: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2cb0:
    // 0x1a2cb0: 0x3e00008  jr          $ra
label_1a2cb4:
    if (ctx->pc == 0x1A2CB4u) {
        ctx->pc = 0x1A2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB0u;
        // 0x1a2cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CB8u;
        goto label_fallthrough_0x1a2cb0;
    }
    ctx->pc = 0x1A2CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB0u;
        // 0x1a2cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2cb0:
    ctx->pc = 0x1A2CB8u;
}
