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

// Function: BMotionMomentMoveSetup__FP5BcObjP11BMotionCtrlfff
// Address: 0x1a4c40 - 0x1a4d50
void BMotionMomentMoveSetup__FP5BcObjP11BMotionCtrlfff_0x1a4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionMomentMoveSetup__FP5BcObjP11BMotionCtrlfff_0x1a4c40");
#endif

    switch (ctx->pc) {
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        case 0x1a4c88u: goto label_1a4c88;
        case 0x1a4c8cu: goto label_1a4c8c;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4c98u: goto label_1a4c98;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4ca0u: goto label_1a4ca0;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cacu: goto label_1a4cac;
        case 0x1a4cb0u: goto label_1a4cb0;
        case 0x1a4cb4u: goto label_1a4cb4;
        case 0x1a4cb8u: goto label_1a4cb8;
        case 0x1a4cbcu: goto label_1a4cbc;
        case 0x1a4cc0u: goto label_1a4cc0;
        case 0x1a4cc4u: goto label_1a4cc4;
        case 0x1a4cc8u: goto label_1a4cc8;
        case 0x1a4cccu: goto label_1a4ccc;
        case 0x1a4cd0u: goto label_1a4cd0;
        case 0x1a4cd4u: goto label_1a4cd4;
        case 0x1a4cd8u: goto label_1a4cd8;
        case 0x1a4cdcu: goto label_1a4cdc;
        case 0x1a4ce0u: goto label_1a4ce0;
        case 0x1a4ce4u: goto label_1a4ce4;
        case 0x1a4ce8u: goto label_1a4ce8;
        case 0x1a4cecu: goto label_1a4cec;
        case 0x1a4cf0u: goto label_1a4cf0;
        case 0x1a4cf4u: goto label_1a4cf4;
        case 0x1a4cf8u: goto label_1a4cf8;
        case 0x1a4cfcu: goto label_1a4cfc;
        case 0x1a4d00u: goto label_1a4d00;
        case 0x1a4d04u: goto label_1a4d04;
        case 0x1a4d08u: goto label_1a4d08;
        case 0x1a4d0cu: goto label_1a4d0c;
        case 0x1a4d10u: goto label_1a4d10;
        case 0x1a4d14u: goto label_1a4d14;
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d1cu: goto label_1a4d1c;
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d24u: goto label_1a4d24;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4d30u: goto label_1a4d30;
        case 0x1a4d34u: goto label_1a4d34;
        case 0x1a4d38u: goto label_1a4d38;
        case 0x1a4d3cu: goto label_1a4d3c;
        case 0x1a4d40u: goto label_1a4d40;
        case 0x1a4d44u: goto label_1a4d44;
        case 0x1a4d48u: goto label_1a4d48;
        case 0x1a4d4cu: goto label_1a4d4c;
        default: break;
    }

    ctx->pc = 0x1a4c40u;

label_1a4c40:
    // 0x1a4c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a4c44:
    // 0x1a4c44: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a4c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a4c48:
    // 0x1a4c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4c4c:
    // 0x1a4c4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c50:
    // 0x1a4c50: 0x24c62788  addiu       $a2, $a2, 0x2788
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10120));
label_1a4c54:
    // 0x1a4c54: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4c58:
    // 0x1a4c58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c5c:
    // 0x1a4c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c60:
    // 0x1a4c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4c64:
    // 0x1a4c64: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1a4c64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a4c68:
    // 0x1a4c68: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1a4c68u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_1a4c6c:
    // 0x1a4c6c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1a4c6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a4c70:
    // 0x1a4c70: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1a4c70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1a4c74:
    // 0x1a4c74: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4c74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a4c78:
    // 0x1a4c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a4c7c:
    // 0x1a4c7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a4c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a4c80:
    // 0x1a4c80: 0xc068866  jal         func_1A2198
label_1a4c84:
    if (ctx->pc == 0x1A4C84u) {
        ctx->pc = 0x1A4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C80u;
        // 0x1a4c84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C88u;
        goto label_1a4c88;
    }
    ctx->pc = 0x1A4C80u;
    SET_GPR_U32(ctx, 31, 0x1A4C88u);
    ctx->pc = 0x1A4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C80u;
    // 0x1a4c84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4C80u, 0x1A4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C88u;
label_1a4c88:
    // 0x1a4c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c8c:
    // 0x1a4c8c: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_1a4c90:
    // 0x1a4c90: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a4c94:
    if (ctx->pc == 0x1A4C94u) {
        ctx->pc = 0x1A4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C90u;
        // 0x1a4c94: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C98u;
        goto label_1a4c98;
    }
    ctx->pc = 0x1A4C90u;
    {
        const bool branch_taken_0x1a4c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c90) {
            ctx->pc = 0x1A4C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4C90u;
            // 0x1a4c94: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C98u;
            goto label_1a4c98;
        }
    }
    ctx->pc = 0x1A4C98u;
label_1a4c98:
    // 0x1a4c98: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a4c9c:
    // 0x1a4c9c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1a4c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a4ca0:
    // 0x1a4ca0: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x1a4ca0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a4ca4:
    // 0x1a4ca4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4ca8:
    // 0x1a4ca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a4cac:
    if (ctx->pc == 0x1A4CACu) {
        ctx->pc = 0x1A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA8u;
        // 0x1a4cac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CB0u;
        goto label_1a4cb0;
    }
    ctx->pc = 0x1A4CA8u;
    {
        const bool branch_taken_0x1a4ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA8u;
        // 0x1a4cac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ca8) {
            ctx->pc = 0x1A4CC8u;
            goto label_1a4cc8;
        }
    }
    ctx->pc = 0x1A4CB0u;
label_1a4cb0:
    // 0x1a4cb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4cb4:
    // 0x1a4cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4cb8:
    // 0x1a4cb8: 0x40f809  jalr        $v0
label_1a4cbc:
    if (ctx->pc == 0x1A4CBCu) {
        ctx->pc = 0x1A4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CB8u;
        // 0x1a4cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CC0u;
        goto label_1a4cc0;
    }
    ctx->pc = 0x1A4CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4CC0u);
        ctx->pc = 0x1A4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CB8u;
        // 0x1a4cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4CB8u, 0x1A4CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4CC0u;
label_1a4cc0:
    // 0x1a4cc0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a4cc4:
    if (ctx->pc == 0x1A4CC4u) {
        ctx->pc = 0x1A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC0u;
        // 0x1a4cc4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CC8u;
        goto label_1a4cc8;
    }
    ctx->pc = 0x1A4CC0u;
    {
        const bool branch_taken_0x1a4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC0u;
        // 0x1a4cc4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cc0) {
            ctx->pc = 0x1A4CF4u;
            goto label_1a4cf4;
        }
    }
    ctx->pc = 0x1A4CC8u;
label_1a4cc8:
    // 0x1a4cc8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4ccc:
    // 0x1a4ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a4cd0:
    if (ctx->pc == 0x1A4CD0u) {
        ctx->pc = 0x1A4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CCCu;
        // 0x1a4cd0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CD4u;
        goto label_1a4cd4;
    }
    ctx->pc = 0x1A4CCCu;
    {
        const bool branch_taken_0x1a4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CCCu;
        // 0x1a4cd0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ccc) {
            ctx->pc = 0x1A4CE0u;
            goto label_1a4ce0;
        }
    }
    ctx->pc = 0x1A4CD4u;
label_1a4cd4:
    // 0x1a4cd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4cd8:
    // 0x1a4cd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4cdc:
    if (ctx->pc == 0x1A4CDCu) {
        ctx->pc = 0x1A4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CD8u;
        // 0x1a4cdc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CE0u;
        goto label_1a4ce0;
    }
    ctx->pc = 0x1A4CD8u;
    {
        const bool branch_taken_0x1a4cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CD8u;
        // 0x1a4cdc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cd8) {
            ctx->pc = 0x1A4CF4u;
            goto label_1a4cf4;
        }
    }
    ctx->pc = 0x1A4CE0u;
label_1a4ce0:
    // 0x1a4ce0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4ce4:
    // 0x1a4ce4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a4ce8:
    // 0x1a4ce8: 0xc068186  jal         func_1A0618
label_1a4cec:
    if (ctx->pc == 0x1A4CECu) {
        ctx->pc = 0x1A4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CE8u;
        // 0x1a4cec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CF0u;
        goto label_1a4cf0;
    }
    ctx->pc = 0x1A4CE8u;
    SET_GPR_U32(ctx, 31, 0x1A4CF0u);
    ctx->pc = 0x1A4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CE8u;
    // 0x1a4cec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4CE8u, 0x1A4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CF0u;
label_1a4cf0:
    // 0x1a4cf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4cf4:
    // 0x1a4cf4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4cf8:
    // 0x1a4cf8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4cf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4cfc:
    // 0x1a4cfc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1a4d00:
    if (ctx->pc == 0x1A4D00u) {
        ctx->pc = 0x1A4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CFCu;
        // 0x1a4d00: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D04u;
        goto label_1a4d04;
    }
    ctx->pc = 0x1A4CFCu;
    {
        const bool branch_taken_0x1a4cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4cfc) {
            ctx->pc = 0x1A4D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4CFCu;
            // 0x1a4d00: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D18u;
            goto label_1a4d18;
        }
    }
    ctx->pc = 0x1A4D04u;
label_1a4d04:
    // 0x1a4d04: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1a4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4d08:
    // 0x1a4d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4d0c:
    // 0x1a4d0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4d0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4d10:
    // 0x1a4d10: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1a4d14:
    if (ctx->pc == 0x1A4D14u) {
        ctx->pc = 0x1A4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D10u;
        // 0x1a4d14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D18u;
        goto label_1a4d18;
    }
    ctx->pc = 0x1A4D10u;
    {
        const bool branch_taken_0x1a4d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4d10) {
            ctx->pc = 0x1A4D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D10u;
            // 0x1a4d14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D18u;
            goto label_1a4d18;
        }
    }
    ctx->pc = 0x1A4D18u;
label_1a4d18:
    // 0x1a4d18: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_1a4d1c:
    if (ctx->pc == 0x1A4D1Cu) {
        ctx->pc = 0x1A4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D18u;
        // 0x1a4d1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D20u;
        goto label_1a4d20;
    }
    ctx->pc = 0x1A4D18u;
    {
        const bool branch_taken_0x1a4d18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d18) {
            ctx->pc = 0x1A4D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D18u;
            // 0x1a4d1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D30u;
            goto label_1a4d30;
        }
    }
    ctx->pc = 0x1A4D20u;
label_1a4d20:
    // 0x1a4d20: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a4d20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a4d24:
    // 0x1a4d24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a4d28:
    // 0x1a4d28: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a4d28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a4d2c:
    // 0x1a4d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4d30:
    // 0x1a4d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4d34:
    // 0x1a4d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a4d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4d38:
    // 0x1a4d38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a4d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a4d3c:
    // 0x1a4d3c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1a4d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a4d40:
    // 0x1a4d40: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a4d44:
    // 0x1a4d44: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4d48:
    // 0x1a4d48: 0x3e00008  jr          $ra
label_1a4d4c:
    if (ctx->pc == 0x1A4D4Cu) {
        ctx->pc = 0x1A4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D48u;
        // 0x1a4d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D50u;
        goto label_fallthrough_0x1a4d48;
    }
    ctx->pc = 0x1A4D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D48u;
        // 0x1a4d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4d48:
    ctx->pc = 0x1A4D50u;
}
