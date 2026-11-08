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

// Function: ApH_Point2Point__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork
// Address: 0x157db8 - 0x157ed8
void ApH_Point2Point__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x157db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApH_Point2Point__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x157db8");
#endif

    switch (ctx->pc) {
        case 0x157db8u: goto label_157db8;
        case 0x157dbcu: goto label_157dbc;
        case 0x157dc0u: goto label_157dc0;
        case 0x157dc4u: goto label_157dc4;
        case 0x157dc8u: goto label_157dc8;
        case 0x157dccu: goto label_157dcc;
        case 0x157dd0u: goto label_157dd0;
        case 0x157dd4u: goto label_157dd4;
        case 0x157dd8u: goto label_157dd8;
        case 0x157ddcu: goto label_157ddc;
        case 0x157de0u: goto label_157de0;
        case 0x157de4u: goto label_157de4;
        case 0x157de8u: goto label_157de8;
        case 0x157decu: goto label_157dec;
        case 0x157df0u: goto label_157df0;
        case 0x157df4u: goto label_157df4;
        case 0x157df8u: goto label_157df8;
        case 0x157dfcu: goto label_157dfc;
        case 0x157e00u: goto label_157e00;
        case 0x157e04u: goto label_157e04;
        case 0x157e08u: goto label_157e08;
        case 0x157e0cu: goto label_157e0c;
        case 0x157e10u: goto label_157e10;
        case 0x157e14u: goto label_157e14;
        case 0x157e18u: goto label_157e18;
        case 0x157e1cu: goto label_157e1c;
        case 0x157e20u: goto label_157e20;
        case 0x157e24u: goto label_157e24;
        case 0x157e28u: goto label_157e28;
        case 0x157e2cu: goto label_157e2c;
        case 0x157e30u: goto label_157e30;
        case 0x157e34u: goto label_157e34;
        case 0x157e38u: goto label_157e38;
        case 0x157e3cu: goto label_157e3c;
        case 0x157e40u: goto label_157e40;
        case 0x157e44u: goto label_157e44;
        case 0x157e48u: goto label_157e48;
        case 0x157e4cu: goto label_157e4c;
        case 0x157e50u: goto label_157e50;
        case 0x157e54u: goto label_157e54;
        case 0x157e58u: goto label_157e58;
        case 0x157e5cu: goto label_157e5c;
        case 0x157e60u: goto label_157e60;
        case 0x157e64u: goto label_157e64;
        case 0x157e68u: goto label_157e68;
        case 0x157e6cu: goto label_157e6c;
        case 0x157e70u: goto label_157e70;
        case 0x157e74u: goto label_157e74;
        case 0x157e78u: goto label_157e78;
        case 0x157e7cu: goto label_157e7c;
        case 0x157e80u: goto label_157e80;
        case 0x157e84u: goto label_157e84;
        case 0x157e88u: goto label_157e88;
        case 0x157e8cu: goto label_157e8c;
        case 0x157e90u: goto label_157e90;
        case 0x157e94u: goto label_157e94;
        case 0x157e98u: goto label_157e98;
        case 0x157e9cu: goto label_157e9c;
        case 0x157ea0u: goto label_157ea0;
        case 0x157ea4u: goto label_157ea4;
        case 0x157ea8u: goto label_157ea8;
        case 0x157eacu: goto label_157eac;
        case 0x157eb0u: goto label_157eb0;
        case 0x157eb4u: goto label_157eb4;
        case 0x157eb8u: goto label_157eb8;
        case 0x157ebcu: goto label_157ebc;
        case 0x157ec0u: goto label_157ec0;
        case 0x157ec4u: goto label_157ec4;
        case 0x157ec8u: goto label_157ec8;
        case 0x157eccu: goto label_157ecc;
        case 0x157ed0u: goto label_157ed0;
        case 0x157ed4u: goto label_157ed4;
        default: break;
    }

    ctx->pc = 0x157db8u;

label_157db8:
    // 0x157db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_157dbc:
    // 0x157dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_157dc0:
    // 0x157dc0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x157dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_157dc4:
    // 0x157dc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_157dc8:
    // 0x157dc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157dcc:
    // 0x157dcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_157dd0:
    // 0x157dd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x157dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_157dd4:
    // 0x157dd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x157dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_157dd8:
    // 0x157dd8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x157dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_157ddc:
    // 0x157ddc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_157de0:
    // 0x157de0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157de4:
    // 0x157de4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157de8:
    // 0x157de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157dec:
    // 0x157dec: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x157decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157df0:
    // 0x157df0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x157df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_157df4:
    // 0x157df4: 0xe6000470  swc1        $f0, 0x470($s0)
    ctx->pc = 0x157df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1136), bits); }
label_157df8:
    // 0x157df8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x157df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157dfc:
    // 0x157dfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x157dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_157e00:
    // 0x157e00: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x157e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_157e04:
    // 0x157e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_157e08:
    if (ctx->pc == 0x157E08u) {
        ctx->pc = 0x157E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E04u;
        // 0x157e08: 0xe6010474  swc1        $f1, 0x474($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E0Cu;
        goto label_157e0c;
    }
    ctx->pc = 0x157E04u;
    {
        const bool branch_taken_0x157e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E04u;
        // 0x157e08: 0xe6010474  swc1        $f1, 0x474($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e04) {
            ctx->pc = 0x157E20u;
            goto label_157e20;
        }
    }
    ctx->pc = 0x157E0Cu;
label_157e0c:
    // 0x157e0c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_157e10:
    // 0x157e10: 0xc055fb6  jal         func_157ED8
label_157e14:
    if (ctx->pc == 0x157E14u) {
        ctx->pc = 0x157E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E10u;
        // 0x157e14: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E18u;
        goto label_157e18;
    }
    ctx->pc = 0x157E10u;
    SET_GPR_U32(ctx, 31, 0x157E18u);
    ctx->pc = 0x157E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E10u;
    // 0x157e14: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E10u, 0x157E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E18u;
label_157e18:
    // 0x157e18: 0x1000001e  b           . + 4 + (0x1E << 2)
label_157e1c:
    if (ctx->pc == 0x157E1Cu) {
        ctx->pc = 0x157E20u;
        goto label_157e20;
    }
    ctx->pc = 0x157E18u;
    {
        const bool branch_taken_0x157e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e18) {
            ctx->pc = 0x157E94u;
            goto label_157e94;
        }
    }
    ctx->pc = 0x157E20u;
label_157e20:
    // 0x157e20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x157e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_157e24:
    // 0x157e24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_157e28:
    if (ctx->pc == 0x157E28u) {
        ctx->pc = 0x157E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E24u;
        // 0x157e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E2Cu;
        goto label_157e2c;
    }
    ctx->pc = 0x157E24u;
    {
        const bool branch_taken_0x157e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E24u;
        // 0x157e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e24) {
            ctx->pc = 0x157E80u;
            goto label_157e80;
        }
    }
    ctx->pc = 0x157E2Cu;
label_157e2c:
    // 0x157e2c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_157e30:
    // 0x157e30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157e34:
    // 0x157e34: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157e38:
    // 0x157e38: 0xc055fb6  jal         func_157ED8
label_157e3c:
    if (ctx->pc == 0x157E3Cu) {
        ctx->pc = 0x157E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E38u;
        // 0x157e3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E40u;
        goto label_157e40;
    }
    ctx->pc = 0x157E38u;
    SET_GPR_U32(ctx, 31, 0x157E40u);
    ctx->pc = 0x157E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E38u;
    // 0x157e3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E38u, 0x157E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E40u;
label_157e40:
    // 0x157e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157e44:
    // 0x157e44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157e48:
    // 0x157e48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157e4c:
    // 0x157e4c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_157e50:
    if (ctx->pc == 0x157E50u) {
        ctx->pc = 0x157E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E4Cu;
        // 0x157e50: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E54u;
        goto label_157e54;
    }
    ctx->pc = 0x157E4Cu;
    {
        const bool branch_taken_0x157e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E4Cu;
        // 0x157e50: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e4c) {
            ctx->pc = 0x157E9Cu;
            goto label_157e9c;
        }
    }
    ctx->pc = 0x157E54u;
label_157e54:
    // 0x157e54: 0xc055fb6  jal         func_157ED8
label_157e58:
    if (ctx->pc == 0x157E58u) {
        ctx->pc = 0x157E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E54u;
        // 0x157e58: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E5Cu;
        goto label_157e5c;
    }
    ctx->pc = 0x157E54u;
    SET_GPR_U32(ctx, 31, 0x157E5Cu);
    ctx->pc = 0x157E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E54u;
    // 0x157e58: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E54u, 0x157E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E5Cu;
label_157e5c:
    // 0x157e5c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_157e60:
    if (ctx->pc == 0x157E60u) {
        ctx->pc = 0x157E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E5Cu;
        // 0x157e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E64u;
        goto label_157e64;
    }
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E5Cu;
        // 0x157e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E9Cu;
            goto label_157e9c;
        }
    }
    ctx->pc = 0x157E64u;
label_157e64:
    // 0x157e64: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_157e68:
    // 0x157e68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157e6c:
    // 0x157e6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157e70:
    // 0x157e70: 0xc056028  jal         func_1580A0
label_157e74:
    if (ctx->pc == 0x157E74u) {
        ctx->pc = 0x157E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E70u;
        // 0x157e74: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E78u;
        goto label_157e78;
    }
    ctx->pc = 0x157E70u;
    SET_GPR_U32(ctx, 31, 0x157E78u);
    ctx->pc = 0x157E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E70u;
    // 0x157e74: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1580A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1580A0u, 0x157E70u, 0x157E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E78u;
label_157e78:
    // 0x157e78: 0x10000006  b           . + 4 + (0x6 << 2)
label_157e7c:
    if (ctx->pc == 0x157E7Cu) {
        ctx->pc = 0x157E80u;
        goto label_157e80;
    }
    ctx->pc = 0x157E78u;
    {
        const bool branch_taken_0x157e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e78) {
            ctx->pc = 0x157E94u;
            goto label_157e94;
        }
    }
    ctx->pc = 0x157E80u;
label_157e80:
    // 0x157e80: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_157e84:
    // 0x157e84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157e88:
    // 0x157e88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_157e8c:
    // 0x157e8c: 0xc055fb6  jal         func_157ED8
label_157e90:
    if (ctx->pc == 0x157E90u) {
        ctx->pc = 0x157E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E8Cu;
        // 0x157e90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E94u;
        goto label_157e94;
    }
    ctx->pc = 0x157E8Cu;
    SET_GPR_U32(ctx, 31, 0x157E94u);
    ctx->pc = 0x157E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E8Cu;
    // 0x157e90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E8Cu, 0x157E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E94u;
label_157e94:
    // 0x157e94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_157e98:
    if (ctx->pc == 0x157E98u) {
        ctx->pc = 0x157E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E94u;
        // 0x157e98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E9Cu;
        goto label_157e9c;
    }
    ctx->pc = 0x157E94u;
    {
        const bool branch_taken_0x157e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e94) {
            ctx->pc = 0x157E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157E94u;
            // 0x157e98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157EC0u;
            goto label_157ec0;
        }
    }
    ctx->pc = 0x157E9Cu;
label_157e9c:
    // 0x157e9c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x157e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_157ea0:
    // 0x157ea0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157ea4:
    // 0x157ea4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_157ea8:
    // 0x157ea8: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_157eac:
    // 0x157eac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x157eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_157eb0:
    // 0x157eb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x157eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_157eb4:
    // 0x157eb4: 0x60f809  jalr        $v1
label_157eb8:
    if (ctx->pc == 0x157EB8u) {
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB4u;
        // 0x157eb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EBCu;
        goto label_157ebc;
    }
    ctx->pc = 0x157EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157EBCu);
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB4u;
        // 0x157eb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157EB4u, 0x157EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157EBCu;
label_157ebc:
    // 0x157ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157ec0:
    // 0x157ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_157ec4:
    // 0x157ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_157ec8:
    // 0x157ec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x157ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_157ecc:
    // 0x157ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x157eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_157ed0:
    // 0x157ed0: 0x3e00008  jr          $ra
label_157ed4:
    if (ctx->pc == 0x157ED4u) {
        ctx->pc = 0x157ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ED0u;
        // 0x157ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157ED8u;
        goto label_fallthrough_0x157ed0;
    }
    ctx->pc = 0x157ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ED0u;
        // 0x157ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157ed0:
    ctx->pc = 0x157ED8u;
}
