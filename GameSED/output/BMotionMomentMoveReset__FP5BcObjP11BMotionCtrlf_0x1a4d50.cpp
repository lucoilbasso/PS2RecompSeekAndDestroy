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

// Function: BMotionMomentMoveReset__FP5BcObjP11BMotionCtrlf
// Address: 0x1a4d50 - 0x1a4e58
void BMotionMomentMoveReset__FP5BcObjP11BMotionCtrlf_0x1a4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionMomentMoveReset__FP5BcObjP11BMotionCtrlf_0x1a4d50");
#endif

    switch (ctx->pc) {
        case 0x1a4d50u: goto label_1a4d50;
        case 0x1a4d54u: goto label_1a4d54;
        case 0x1a4d58u: goto label_1a4d58;
        case 0x1a4d5cu: goto label_1a4d5c;
        case 0x1a4d60u: goto label_1a4d60;
        case 0x1a4d64u: goto label_1a4d64;
        case 0x1a4d68u: goto label_1a4d68;
        case 0x1a4d6cu: goto label_1a4d6c;
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d74u: goto label_1a4d74;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d7cu: goto label_1a4d7c;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d84u: goto label_1a4d84;
        case 0x1a4d88u: goto label_1a4d88;
        case 0x1a4d8cu: goto label_1a4d8c;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4d94u: goto label_1a4d94;
        case 0x1a4d98u: goto label_1a4d98;
        case 0x1a4d9cu: goto label_1a4d9c;
        case 0x1a4da0u: goto label_1a4da0;
        case 0x1a4da4u: goto label_1a4da4;
        case 0x1a4da8u: goto label_1a4da8;
        case 0x1a4dacu: goto label_1a4dac;
        case 0x1a4db0u: goto label_1a4db0;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4db8u: goto label_1a4db8;
        case 0x1a4dbcu: goto label_1a4dbc;
        case 0x1a4dc0u: goto label_1a4dc0;
        case 0x1a4dc4u: goto label_1a4dc4;
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4dccu: goto label_1a4dcc;
        case 0x1a4dd0u: goto label_1a4dd0;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4dd8u: goto label_1a4dd8;
        case 0x1a4ddcu: goto label_1a4ddc;
        case 0x1a4de0u: goto label_1a4de0;
        case 0x1a4de4u: goto label_1a4de4;
        case 0x1a4de8u: goto label_1a4de8;
        case 0x1a4decu: goto label_1a4dec;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4df4u: goto label_1a4df4;
        case 0x1a4df8u: goto label_1a4df8;
        case 0x1a4dfcu: goto label_1a4dfc;
        case 0x1a4e00u: goto label_1a4e00;
        case 0x1a4e04u: goto label_1a4e04;
        case 0x1a4e08u: goto label_1a4e08;
        case 0x1a4e0cu: goto label_1a4e0c;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        default: break;
    }

    ctx->pc = 0x1a4d50u;

label_1a4d50:
    // 0x1a4d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a4d54:
    // 0x1a4d54: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a4d58:
    // 0x1a4d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4d5c:
    // 0x1a4d5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d60:
    // 0x1a4d60: 0x24c62788  addiu       $a2, $a2, 0x2788
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10120));
label_1a4d64:
    // 0x1a4d64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4d68:
    // 0x1a4d68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d6c:
    // 0x1a4d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d70:
    // 0x1a4d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4d74:
    // 0x1a4d74: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a4d78:
    // 0x1a4d78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a4d7c:
    // 0x1a4d7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a4d80:
    // 0x1a4d80: 0xc068866  jal         func_1A2198
label_1a4d84:
    if (ctx->pc == 0x1A4D84u) {
        ctx->pc = 0x1A4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D80u;
        // 0x1a4d84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D88u;
        goto label_1a4d88;
    }
    ctx->pc = 0x1A4D80u;
    SET_GPR_U32(ctx, 31, 0x1A4D88u);
    ctx->pc = 0x1A4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D80u;
    // 0x1a4d84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4D80u, 0x1A4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D88u;
label_1a4d88:
    // 0x1a4d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d8c:
    // 0x1a4d8c: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_1a4d90:
    // 0x1a4d90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1a4d94:
    if (ctx->pc == 0x1A4D94u) {
        ctx->pc = 0x1A4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D90u;
        // 0x1a4d94: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D98u;
        goto label_1a4d98;
    }
    ctx->pc = 0x1A4D90u;
    {
        const bool branch_taken_0x1a4d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d90) {
            ctx->pc = 0x1A4D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D90u;
            // 0x1a4d94: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4DB0u;
            goto label_1a4db0;
        }
    }
    ctx->pc = 0x1A4D98u;
label_1a4d98:
    // 0x1a4d98: 0xc780864c  lwc1        $f0, -0x79B4($gp)
    ctx->pc = 0x1a4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4d9c:
    // 0x1a4d9c: 0xc7818650  lwc1        $f1, -0x79B0($gp)
    ctx->pc = 0x1a4d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4da0:
    // 0x1a4da0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1a4da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a4da4:
    // 0x1a4da4: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1a4da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a4da8:
    // 0x1a4da8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a4dac:
    // 0x1a4dac: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a4db0:
    // 0x1a4db0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4db4:
    // 0x1a4db4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4db8:
    if (ctx->pc == 0x1A4DB8u) {
        ctx->pc = 0x1A4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DB4u;
        // 0x1a4db8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DBCu;
        goto label_1a4dbc;
    }
    ctx->pc = 0x1A4DB4u;
    {
        const bool branch_taken_0x1a4db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DB4u;
        // 0x1a4db8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4db4) {
            ctx->pc = 0x1A4DD8u;
            goto label_1a4dd8;
        }
    }
    ctx->pc = 0x1A4DBCu;
label_1a4dbc:
    // 0x1a4dbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4dc0:
    // 0x1a4dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dc4:
    // 0x1a4dc4: 0x40f809  jalr        $v0
label_1a4dc8:
    if (ctx->pc == 0x1A4DC8u) {
        ctx->pc = 0x1A4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DC4u;
        // 0x1a4dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DCCu;
        goto label_1a4dcc;
    }
    ctx->pc = 0x1A4DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4DCCu);
        ctx->pc = 0x1A4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DC4u;
        // 0x1a4dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DC4u, 0x1A4DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4DCCu;
label_1a4dcc:
    // 0x1a4dcc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a4dd0:
    if (ctx->pc == 0x1A4DD0u) {
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DCCu;
        // 0x1a4dd0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DD4u;
        goto label_1a4dd4;
    }
    ctx->pc = 0x1A4DCCu;
    {
        const bool branch_taken_0x1a4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DCCu;
        // 0x1a4dd0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dcc) {
            ctx->pc = 0x1A4E04u;
            goto label_1a4e04;
        }
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0x0  nop
    ctx->pc = 0x1a4dd4u;
    // NOP
label_1a4dd8:
    // 0x1a4dd8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4ddc:
    // 0x1a4ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a4de0:
    if (ctx->pc == 0x1A4DE0u) {
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DE4u;
        goto label_1a4de4;
    }
    ctx->pc = 0x1A4DDCu;
    {
        const bool branch_taken_0x1a4ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ddc) {
            ctx->pc = 0x1A4DF0u;
            goto label_1a4df0;
        }
    }
    ctx->pc = 0x1A4DE4u;
label_1a4de4:
    // 0x1a4de4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4de8:
    // 0x1a4de8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4dec:
    if (ctx->pc == 0x1A4DECu) {
        ctx->pc = 0x1A4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE8u;
        // 0x1a4dec: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DF0u;
        goto label_1a4df0;
    }
    ctx->pc = 0x1A4DE8u;
    {
        const bool branch_taken_0x1a4de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE8u;
        // 0x1a4dec: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4de8) {
            ctx->pc = 0x1A4E04u;
            goto label_1a4e04;
        }
    }
    ctx->pc = 0x1A4DF0u;
label_1a4df0:
    // 0x1a4df0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4df4:
    // 0x1a4df4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a4df8:
    // 0x1a4df8: 0xc068186  jal         func_1A0618
label_1a4dfc:
    if (ctx->pc == 0x1A4DFCu) {
        ctx->pc = 0x1A4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DF8u;
        // 0x1a4dfc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E00u;
        goto label_1a4e00;
    }
    ctx->pc = 0x1A4DF8u;
    SET_GPR_U32(ctx, 31, 0x1A4E00u);
    ctx->pc = 0x1A4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DF8u;
    // 0x1a4dfc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4DF8u, 0x1A4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E00u;
label_1a4e00:
    // 0x1a4e00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4e04:
    // 0x1a4e04: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4e08:
    // 0x1a4e08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4e08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4e0c:
    // 0x1a4e0c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1a4e10:
    if (ctx->pc == 0x1A4E10u) {
        ctx->pc = 0x1A4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E0Cu;
        // 0x1a4e10: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E14u;
        goto label_1a4e14;
    }
    ctx->pc = 0x1A4E0Cu;
    {
        const bool branch_taken_0x1a4e0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4e0c) {
            ctx->pc = 0x1A4E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E0Cu;
            // 0x1a4e10: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E28u;
            goto label_1a4e28;
        }
    }
    ctx->pc = 0x1A4E14u;
label_1a4e14:
    // 0x1a4e14: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1a4e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4e18:
    // 0x1a4e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4e1c:
    // 0x1a4e1c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4e1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4e20:
    // 0x1a4e20: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1a4e24:
    if (ctx->pc == 0x1A4E24u) {
        ctx->pc = 0x1A4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E20u;
        // 0x1a4e24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E28u;
        goto label_1a4e28;
    }
    ctx->pc = 0x1A4E20u;
    {
        const bool branch_taken_0x1a4e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4e20) {
            ctx->pc = 0x1A4E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E20u;
            // 0x1a4e24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E28u;
            goto label_1a4e28;
        }
    }
    ctx->pc = 0x1A4E28u;
label_1a4e28:
    // 0x1a4e28: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_1a4e2c:
    if (ctx->pc == 0x1A4E2Cu) {
        ctx->pc = 0x1A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E28u;
        // 0x1a4e2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E30u;
        goto label_1a4e30;
    }
    ctx->pc = 0x1A4E28u;
    {
        const bool branch_taken_0x1a4e28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e28) {
            ctx->pc = 0x1A4E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E28u;
            // 0x1a4e2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E40u;
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A4E30u;
label_1a4e30:
    // 0x1a4e30: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a4e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a4e34:
    // 0x1a4e34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a4e38:
    // 0x1a4e38: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a4e38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a4e3c:
    // 0x1a4e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4e40:
    // 0x1a4e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4e44:
    // 0x1a4e44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a4e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4e48:
    // 0x1a4e48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a4e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a4e4c:
    // 0x1a4e4c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4e50:
    // 0x1a4e50: 0x3e00008  jr          $ra
label_1a4e54:
    if (ctx->pc == 0x1A4E54u) {
        ctx->pc = 0x1A4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E50u;
        // 0x1a4e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E58u;
        goto label_fallthrough_0x1a4e50;
    }
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E50u;
        // 0x1a4e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4e50:
    ctx->pc = 0x1A4E58u;
}
