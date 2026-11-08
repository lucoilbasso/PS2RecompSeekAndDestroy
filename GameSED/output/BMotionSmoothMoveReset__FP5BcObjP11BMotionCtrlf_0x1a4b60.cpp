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

// Function: BMotionSmoothMoveReset__FP5BcObjP11BMotionCtrlf
// Address: 0x1a4b60 - 0x1a4c3c
void BMotionSmoothMoveReset__FP5BcObjP11BMotionCtrlf_0x1a4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSmoothMoveReset__FP5BcObjP11BMotionCtrlf_0x1a4b60");
#endif

    switch (ctx->pc) {
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        default: break;
    }

    ctx->pc = 0x1a4b60u;

label_1a4b60:
    // 0x1a4b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4b64:
    // 0x1a4b64: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a4b68:
    // 0x1a4b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4b6c:
    // 0x1a4b6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b70:
    // 0x1a4b70: 0x24c625b8  addiu       $a2, $a2, 0x25B8
    ctx->pc = 0x1a4b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9656));
label_1a4b74:
    // 0x1a4b74: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a4b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a4b78:
    // 0x1a4b78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b7c:
    // 0x1a4b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b80:
    // 0x1a4b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4b84:
    // 0x1a4b84: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a4b88:
    // 0x1a4b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4b8c:
    // 0x1a4b8c: 0xc068866  jal         func_1A2198
label_1a4b90:
    if (ctx->pc == 0x1A4B90u) {
        ctx->pc = 0x1A4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B8Cu;
        // 0x1a4b90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B94u;
        goto label_1a4b94;
    }
    ctx->pc = 0x1A4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B94u);
    ctx->pc = 0x1A4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B8Cu;
    // 0x1a4b90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4B8Cu, 0x1A4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B94u;
label_1a4b94:
    // 0x1a4b94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b98:
    // 0x1a4b98: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_1a4b9c:
    // 0x1a4b9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a4ba0:
    if (ctx->pc == 0x1A4BA0u) {
        ctx->pc = 0x1A4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B9Cu;
        // 0x1a4ba0: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BA4u;
        goto label_1a4ba4;
    }
    ctx->pc = 0x1A4B9Cu;
    {
        const bool branch_taken_0x1a4b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b9c) {
            ctx->pc = 0x1A4BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4B9Cu;
            // 0x1a4ba0: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4BB0u;
            goto label_1a4bb0;
        }
    }
    ctx->pc = 0x1A4BA4u;
label_1a4ba4:
    // 0x1a4ba4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a4ba8:
    // 0x1a4ba8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a4bac:
    // 0x1a4bac: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4bacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a4bb0:
    // 0x1a4bb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4bb4:
    // 0x1a4bb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4bb8:
    if (ctx->pc == 0x1A4BB8u) {
        ctx->pc = 0x1A4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB4u;
        // 0x1a4bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BBCu;
        goto label_1a4bbc;
    }
    ctx->pc = 0x1A4BB4u;
    {
        const bool branch_taken_0x1a4bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB4u;
        // 0x1a4bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bb4) {
            ctx->pc = 0x1A4BD0u;
            goto label_1a4bd0;
        }
    }
    ctx->pc = 0x1A4BBCu;
label_1a4bbc:
    // 0x1a4bbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4bc0:
    // 0x1a4bc0: 0x40f809  jalr        $v0
label_1a4bc4:
    if (ctx->pc == 0x1A4BC4u) {
        ctx->pc = 0x1A4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC0u;
        // 0x1a4bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BC8u;
        goto label_1a4bc8;
    }
    ctx->pc = 0x1A4BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4BC8u);
        ctx->pc = 0x1A4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC0u;
        // 0x1a4bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BC0u, 0x1A4BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BC8u;
label_1a4bc8:
    // 0x1a4bc8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a4bcc:
    if (ctx->pc == 0x1A4BCCu) {
        ctx->pc = 0x1A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC8u;
        // 0x1a4bcc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BD0u;
        goto label_1a4bd0;
    }
    ctx->pc = 0x1A4BC8u;
    {
        const bool branch_taken_0x1a4bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC8u;
        // 0x1a4bcc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bc8) {
            ctx->pc = 0x1A4BFCu;
            goto label_1a4bfc;
        }
    }
    ctx->pc = 0x1A4BD0u;
label_1a4bd0:
    // 0x1a4bd0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4bd4:
    // 0x1a4bd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a4bd8:
    if (ctx->pc == 0x1A4BD8u) {
        ctx->pc = 0x1A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD4u;
        // 0x1a4bd8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BDCu;
        goto label_1a4bdc;
    }
    ctx->pc = 0x1A4BD4u;
    {
        const bool branch_taken_0x1a4bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD4u;
        // 0x1a4bd8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bd4) {
            ctx->pc = 0x1A4BE8u;
            goto label_1a4be8;
        }
    }
    ctx->pc = 0x1A4BDCu;
label_1a4bdc:
    // 0x1a4bdc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4be0:
    // 0x1a4be0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4be4:
    if (ctx->pc == 0x1A4BE4u) {
        ctx->pc = 0x1A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE0u;
        // 0x1a4be4: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BE8u;
        goto label_1a4be8;
    }
    ctx->pc = 0x1A4BE0u;
    {
        const bool branch_taken_0x1a4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE0u;
        // 0x1a4be4: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4be0) {
            ctx->pc = 0x1A4BFCu;
            goto label_1a4bfc;
        }
    }
    ctx->pc = 0x1A4BE8u;
label_1a4be8:
    // 0x1a4be8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4bec:
    // 0x1a4bec: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a4becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a4bf0:
    // 0x1a4bf0: 0xc068186  jal         func_1A0618
label_1a4bf4:
    if (ctx->pc == 0x1A4BF4u) {
        ctx->pc = 0x1A4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BF0u;
        // 0x1a4bf4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BF8u;
        goto label_1a4bf8;
    }
    ctx->pc = 0x1A4BF0u;
    SET_GPR_U32(ctx, 31, 0x1A4BF8u);
    ctx->pc = 0x1A4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BF0u;
    // 0x1a4bf4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4BF0u, 0x1A4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4BF8u;
label_1a4bf8:
    // 0x1a4bf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4bfc:
    // 0x1a4bfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4c00:
    // 0x1a4c00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4c00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4c04:
    // 0x1a4c04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a4c08:
    if (ctx->pc == 0x1A4C08u) {
        ctx->pc = 0x1A4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C04u;
        // 0x1a4c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C0Cu;
        goto label_1a4c0c;
    }
    ctx->pc = 0x1A4C04u;
    {
        const bool branch_taken_0x1a4c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C04u;
        // 0x1a4c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c04) {
            ctx->pc = 0x1A4C10u;
            goto label_1a4c10;
        }
    }
    ctx->pc = 0x1A4C0Cu;
label_1a4c0c:
    // 0x1a4c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c10:
    // 0x1a4c10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a4c14:
    if (ctx->pc == 0x1A4C14u) {
        ctx->pc = 0x1A4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C10u;
        // 0x1a4c14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C18u;
        goto label_1a4c18;
    }
    ctx->pc = 0x1A4C10u;
    {
        const bool branch_taken_0x1a4c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c10) {
            ctx->pc = 0x1A4C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4C10u;
            // 0x1a4c14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C28u;
            goto label_1a4c28;
        }
    }
    ctx->pc = 0x1A4C18u;
label_1a4c18:
    // 0x1a4c18: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a4c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a4c1c:
    // 0x1a4c1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a4c20:
    // 0x1a4c20: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a4c20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a4c24:
    // 0x1a4c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4c28:
    // 0x1a4c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4c2c:
    // 0x1a4c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4c30:
    // 0x1a4c30: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4c34:
    // 0x1a4c34: 0x3e00008  jr          $ra
label_1a4c38:
    if (ctx->pc == 0x1A4C38u) {
        ctx->pc = 0x1A4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C34u;
        // 0x1a4c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C3Cu;
        goto label_fallthrough_0x1a4c34;
    }
    ctx->pc = 0x1A4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C34u;
        // 0x1a4c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4c34:
    ctx->pc = 0x1A4C3Cu;
}
