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

// Function: Cmd_OBJ_PUT_Entry__FP15BsSCDEntControl
// Address: 0x106da8 - 0x106f00
void Cmd_OBJ_PUT_Entry__FP15BsSCDEntControl_0x106da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_PUT_Entry__FP15BsSCDEntControl_0x106da8");
#endif

    switch (ctx->pc) {
        case 0x106da8u: goto label_106da8;
        case 0x106dacu: goto label_106dac;
        case 0x106db0u: goto label_106db0;
        case 0x106db4u: goto label_106db4;
        case 0x106db8u: goto label_106db8;
        case 0x106dbcu: goto label_106dbc;
        case 0x106dc0u: goto label_106dc0;
        case 0x106dc4u: goto label_106dc4;
        case 0x106dc8u: goto label_106dc8;
        case 0x106dccu: goto label_106dcc;
        case 0x106dd0u: goto label_106dd0;
        case 0x106dd4u: goto label_106dd4;
        case 0x106dd8u: goto label_106dd8;
        case 0x106ddcu: goto label_106ddc;
        case 0x106de0u: goto label_106de0;
        case 0x106de4u: goto label_106de4;
        case 0x106de8u: goto label_106de8;
        case 0x106decu: goto label_106dec;
        case 0x106df0u: goto label_106df0;
        case 0x106df4u: goto label_106df4;
        case 0x106df8u: goto label_106df8;
        case 0x106dfcu: goto label_106dfc;
        case 0x106e00u: goto label_106e00;
        case 0x106e04u: goto label_106e04;
        case 0x106e08u: goto label_106e08;
        case 0x106e0cu: goto label_106e0c;
        case 0x106e10u: goto label_106e10;
        case 0x106e14u: goto label_106e14;
        case 0x106e18u: goto label_106e18;
        case 0x106e1cu: goto label_106e1c;
        case 0x106e20u: goto label_106e20;
        case 0x106e24u: goto label_106e24;
        case 0x106e28u: goto label_106e28;
        case 0x106e2cu: goto label_106e2c;
        case 0x106e30u: goto label_106e30;
        case 0x106e34u: goto label_106e34;
        case 0x106e38u: goto label_106e38;
        case 0x106e3cu: goto label_106e3c;
        case 0x106e40u: goto label_106e40;
        case 0x106e44u: goto label_106e44;
        case 0x106e48u: goto label_106e48;
        case 0x106e4cu: goto label_106e4c;
        case 0x106e50u: goto label_106e50;
        case 0x106e54u: goto label_106e54;
        case 0x106e58u: goto label_106e58;
        case 0x106e5cu: goto label_106e5c;
        case 0x106e60u: goto label_106e60;
        case 0x106e64u: goto label_106e64;
        case 0x106e68u: goto label_106e68;
        case 0x106e6cu: goto label_106e6c;
        case 0x106e70u: goto label_106e70;
        case 0x106e74u: goto label_106e74;
        case 0x106e78u: goto label_106e78;
        case 0x106e7cu: goto label_106e7c;
        case 0x106e80u: goto label_106e80;
        case 0x106e84u: goto label_106e84;
        case 0x106e88u: goto label_106e88;
        case 0x106e8cu: goto label_106e8c;
        case 0x106e90u: goto label_106e90;
        case 0x106e94u: goto label_106e94;
        case 0x106e98u: goto label_106e98;
        case 0x106e9cu: goto label_106e9c;
        case 0x106ea0u: goto label_106ea0;
        case 0x106ea4u: goto label_106ea4;
        case 0x106ea8u: goto label_106ea8;
        case 0x106eacu: goto label_106eac;
        case 0x106eb0u: goto label_106eb0;
        case 0x106eb4u: goto label_106eb4;
        case 0x106eb8u: goto label_106eb8;
        case 0x106ebcu: goto label_106ebc;
        case 0x106ec0u: goto label_106ec0;
        case 0x106ec4u: goto label_106ec4;
        case 0x106ec8u: goto label_106ec8;
        case 0x106eccu: goto label_106ecc;
        case 0x106ed0u: goto label_106ed0;
        case 0x106ed4u: goto label_106ed4;
        case 0x106ed8u: goto label_106ed8;
        case 0x106edcu: goto label_106edc;
        case 0x106ee0u: goto label_106ee0;
        case 0x106ee4u: goto label_106ee4;
        case 0x106ee8u: goto label_106ee8;
        case 0x106eecu: goto label_106eec;
        case 0x106ef0u: goto label_106ef0;
        case 0x106ef4u: goto label_106ef4;
        case 0x106ef8u: goto label_106ef8;
        case 0x106efcu: goto label_106efc;
        default: break;
    }

    ctx->pc = 0x106da8u;

label_106da8:
    // 0x106da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_106dac:
    // 0x106dac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x106dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106db0:
    // 0x106db0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x106db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_106db4:
    // 0x106db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106db8:
    // 0x106db8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x106db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_106dbc:
    // 0x106dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106dc0:
    // 0x106dc0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x106dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_106dc4:
    // 0x106dc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x106dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106dc8:
    // 0x106dc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_106dcc:
    // 0x106dcc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x106dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_106dd0:
    // 0x106dd0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x106dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_106dd4:
    // 0x106dd4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_106dd8:
    // 0x106dd8: 0x8c520044  lw          $s2, 0x44($v0)
    ctx->pc = 0x106dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_106ddc:
    // 0x106ddc: 0xc04110c  jal         func_104430
label_106de0:
    if (ctx->pc == 0x106DE0u) {
        ctx->pc = 0x106DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DDCu;
        // 0x106de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DE4u;
        goto label_106de4;
    }
    ctx->pc = 0x106DDCu;
    SET_GPR_U32(ctx, 31, 0x106DE4u);
    ctx->pc = 0x106DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DDCu;
    // 0x106de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106DDCu, 0x106DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DE4u;
label_106de4:
    // 0x106de4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x106de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106de8:
    // 0x106de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x106de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106dec:
    // 0x106dec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x106decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_106df0:
    // 0x106df0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_106df4:
    if (ctx->pc == 0x106DF4u) {
        ctx->pc = 0x106DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DF0u;
        // 0x106df4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106DF8u;
        goto label_106df8;
    }
    ctx->pc = 0x106DF0u;
    {
        const bool branch_taken_0x106df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106df0) {
            ctx->pc = 0x106DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106DF0u;
            // 0x106df4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E10u;
            goto label_106e10;
        }
    }
    ctx->pc = 0x106DF8u;
label_106df8:
    // 0x106df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106dfc:
    // 0x106dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106e00:
    // 0x106e00: 0xc04110c  jal         func_104430
label_106e04:
    if (ctx->pc == 0x106E04u) {
        ctx->pc = 0x106E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E00u;
        // 0x106e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E08u;
        goto label_106e08;
    }
    ctx->pc = 0x106E00u;
    SET_GPR_U32(ctx, 31, 0x106E08u);
    ctx->pc = 0x106E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E00u;
    // 0x106e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106E00u, 0x106E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E08u;
label_106e08:
    // 0x106e08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x106e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106e0c:
    // 0x106e0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x106e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106e10:
    // 0x106e10: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x106e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_106e14:
    // 0x106e14: 0x1453000e  bne         $v0, $s3, . + 4 + (0xE << 2)
label_106e18:
    if (ctx->pc == 0x106E18u) {
        ctx->pc = 0x106E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E14u;
        // 0x106e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E1Cu;
        goto label_106e1c;
    }
    ctx->pc = 0x106E14u;
    {
        const bool branch_taken_0x106e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x106E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E14u;
        // 0x106e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e14) {
            ctx->pc = 0x106E50u;
            goto label_106e50;
        }
    }
    ctx->pc = 0x106E1Cu;
label_106e1c:
    // 0x106e1c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x106e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_106e20:
    // 0x106e20: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_106e24:
    // 0x106e24: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x106e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_106e28:
    // 0x106e28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x106e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106e2c:
    // 0x106e2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x106e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_106e30:
    // 0x106e30: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_106e34:
    // 0x106e34: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x106e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_106e38:
    // 0x106e38: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_106e3c:
    // 0x106e3c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x106e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_106e40:
    // 0x106e40: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_106e44:
    // 0x106e44: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x106e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
label_106e48:
    // 0x106e48: 0x10000010  b           . + 4 + (0x10 << 2)
label_106e4c:
    if (ctx->pc == 0x106E4Cu) {
        ctx->pc = 0x106E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E48u;
        // 0x106e4c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E50u;
        goto label_106e50;
    }
    ctx->pc = 0x106E48u;
    {
        const bool branch_taken_0x106e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E48u;
        // 0x106e4c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e48) {
            ctx->pc = 0x106E8Cu;
            goto label_106e8c;
        }
    }
    ctx->pc = 0x106E50u;
label_106e50:
    // 0x106e50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x106e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_106e54:
    // 0x106e54: 0xc06a2fe  jal         func_1A8BF8
label_106e58:
    if (ctx->pc == 0x106E58u) {
        ctx->pc = 0x106E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E54u;
        // 0x106e58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E5Cu;
        goto label_106e5c;
    }
    ctx->pc = 0x106E54u;
    SET_GPR_U32(ctx, 31, 0x106E5Cu);
    ctx->pc = 0x106E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E54u;
    // 0x106e58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x106E54u, 0x106E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E5Cu;
label_106e5c:
    // 0x106e5c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x106e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_106e60:
    // 0x106e60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_106e64:
    // 0x106e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106e68:
    // 0x106e68: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
label_106e6c:
    if (ctx->pc == 0x106E6Cu) {
        ctx->pc = 0x106E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E68u;
        // 0x106e6c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E70u;
        goto label_106e70;
    }
    ctx->pc = 0x106E68u;
    {
        const bool branch_taken_0x106e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x106e68) {
            ctx->pc = 0x106E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E68u;
            // 0x106e6c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E80u;
            goto label_106e80;
        }
    }
    ctx->pc = 0x106E70u;
label_106e70:
    // 0x106e70: 0xc06a26e  jal         func_1A89B8
label_106e74:
    if (ctx->pc == 0x106E74u) {
        ctx->pc = 0x106E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E70u;
        // 0x106e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E78u;
        goto label_106e78;
    }
    ctx->pc = 0x106E70u;
    SET_GPR_U32(ctx, 31, 0x106E78u);
    ctx->pc = 0x106E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E70u;
    // 0x106e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106E70u, 0x106E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E78u;
label_106e78:
    // 0x106e78: 0x10000003  b           . + 4 + (0x3 << 2)
label_106e7c:
    if (ctx->pc == 0x106E7Cu) {
        ctx->pc = 0x106E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E78u;
        // 0x106e7c: 0xae22012c  sw          $v0, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E80u;
        goto label_106e80;
    }
    ctx->pc = 0x106E78u;
    {
        const bool branch_taken_0x106e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E78u;
        // 0x106e7c: 0xae22012c  sw          $v0, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e78) {
            ctx->pc = 0x106E88u;
            goto label_106e88;
        }
    }
    ctx->pc = 0x106E80u;
label_106e80:
    // 0x106e80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_106e84:
    if (ctx->pc == 0x106E84u) {
        ctx->pc = 0x106E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E80u;
        // 0x106e84: 0xae33012c  sw          $s3, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E88u;
        goto label_106e88;
    }
    ctx->pc = 0x106E80u;
    {
        const bool branch_taken_0x106e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106e80) {
            ctx->pc = 0x106E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E80u;
            // 0x106e84: 0xae33012c  sw          $s3, 0x12C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E88u;
            goto label_106e88;
        }
    }
    ctx->pc = 0x106E88u;
label_106e88:
    // 0x106e88: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x106e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_106e8c:
    // 0x106e8c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_106e90:
    if (ctx->pc == 0x106E90u) {
        ctx->pc = 0x106E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E8Cu;
        // 0x106e90: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E94u;
        goto label_106e94;
    }
    ctx->pc = 0x106E8Cu;
    {
        const bool branch_taken_0x106e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106e8c) {
            ctx->pc = 0x106E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E8Cu;
            // 0x106e90: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106ED0u;
            goto label_106ed0;
        }
    }
    ctx->pc = 0x106E94u;
label_106e94:
    // 0x106e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106e98:
    // 0x106e98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x106e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_106e9c:
    // 0x106e9c: 0xc04112e  jal         func_1044B8
label_106ea0:
    if (ctx->pc == 0x106EA0u) {
        ctx->pc = 0x106EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E9Cu;
        // 0x106ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EA4u;
        goto label_106ea4;
    }
    ctx->pc = 0x106E9Cu;
    SET_GPR_U32(ctx, 31, 0x106EA4u);
    ctx->pc = 0x106EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E9Cu;
    // 0x106ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x106E9Cu, 0x106EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EA4u;
label_106ea4:
    // 0x106ea4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x106ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_106ea8:
    // 0x106ea8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x106ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106eac:
    // 0x106eac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x106eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_106eb0:
    // 0x106eb0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_106eb4:
    // 0x106eb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x106eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_106eb8:
    // 0x106eb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_106ebc:
    // 0x106ebc: 0x60f809  jalr        $v1
label_106ec0:
    if (ctx->pc == 0x106EC0u) {
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EC4u;
        goto label_106ec4;
    }
    ctx->pc = 0x106EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106EC4u);
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EBCu, 0x106EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106EC4u;
label_106ec4:
    // 0x106ec4: 0x10000007  b           . + 4 + (0x7 << 2)
label_106ec8:
    if (ctx->pc == 0x106EC8u) {
        ctx->pc = 0x106EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EC4u;
        // 0x106ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106ECCu;
        goto label_106ecc;
    }
    ctx->pc = 0x106EC4u;
    {
        const bool branch_taken_0x106ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EC4u;
        // 0x106ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ec4) {
            ctx->pc = 0x106EE4u;
            goto label_106ee4;
        }
    }
    ctx->pc = 0x106ECCu;
label_106ecc:
    // 0x106ecc: 0x0  nop
    ctx->pc = 0x106eccu;
    // NOP
label_106ed0:
    // 0x106ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106ed4:
    // 0x106ed4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x106ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_106ed8:
    // 0x106ed8: 0xc061344  jal         func_184D10
label_106edc:
    if (ctx->pc == 0x106EDCu) {
        ctx->pc = 0x106EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ED8u;
        // 0x106edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EE0u;
        goto label_106ee0;
    }
    ctx->pc = 0x106ED8u;
    SET_GPR_U32(ctx, 31, 0x106EE0u);
    ctx->pc = 0x106EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106ED8u;
    // 0x106edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x106ED8u, 0x106EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EE0u;
label_106ee0:
    // 0x106ee0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106ee4:
    // 0x106ee4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x106ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_106ee8:
    // 0x106ee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106eec:
    // 0x106eec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x106eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_106ef0:
    // 0x106ef0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x106ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106ef4:
    // 0x106ef4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x106ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_106ef8:
    // 0x106ef8: 0x3e00008  jr          $ra
label_106efc:
    if (ctx->pc == 0x106EFCu) {
        ctx->pc = 0x106EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EF8u;
        // 0x106efc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F00u;
        goto label_fallthrough_0x106ef8;
    }
    ctx->pc = 0x106EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EF8u;
        // 0x106efc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106ef8:
    ctx->pc = 0x106F00u;
}
