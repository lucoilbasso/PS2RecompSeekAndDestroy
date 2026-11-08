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

// Function: ApEventInDiagAreaCMD__FP15BsSCDEntControlP7WcActor
// Address: 0x149d28 - 0x149f30
void ApEventInDiagAreaCMD__FP15BsSCDEntControlP7WcActor_0x149d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventInDiagAreaCMD__FP15BsSCDEntControlP7WcActor_0x149d28");
#endif

    switch (ctx->pc) {
        case 0x149e38u: goto label_149e38;
        default: break;
    }

    ctx->pc = 0x149d28u;

    // 0x149d28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x149d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x149d2c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149d30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149d34: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x149d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x149d38: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x149d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x149d3c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149d40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149d44: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x149d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149d4c: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x149d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x149d50: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x149d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149d58: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149d5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149d5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149d60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149d64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149D64u;
    {
        const bool branch_taken_0x149d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D64u;
        // 0x149d68: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d64) {
            ctx->pc = 0x149D80u;
            goto label_149d80;
        }
    }
    ctx->pc = 0x149D6Cu;
    // 0x149d6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149d70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149d74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149d78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149d7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149d80:
    // 0x149d80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x149d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149d84: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149d88: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149d90: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149d94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149d94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149d98: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149d9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149da0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x149da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149da8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149dac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149db0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149db4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149DB4u;
    {
        const bool branch_taken_0x149db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149db4) {
            ctx->pc = 0x149DD0u;
            goto label_149dd0;
        }
    }
    ctx->pc = 0x149DBCu;
    // 0x149dbc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149dc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149dc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149dc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149dd0:
    // 0x149dd0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149dd8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149ddc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x149ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149de0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149de4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149de8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149df0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x149df0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x149df4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149df8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149dfc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149e00: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x149E00u;
    {
        const bool branch_taken_0x149e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E00u;
        // 0x149e04: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e00) {
            ctx->pc = 0x149E20u;
            goto label_149e20;
        }
    }
    ctx->pc = 0x149E08u;
    // 0x149e08: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149e0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149e10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149e14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149e18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149e1c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_149e20:
    // 0x149e20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149e24: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149e28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149e2c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x149e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x149e30: 0xc05250a  jal         func_149428
    ctx->pc = 0x149E30u;
    SET_GPR_U32(ctx, 31, 0x149E38u);
    ctx->pc = 0x149E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E30u;
    // 0x149e34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149E30u, 0x149E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E38u;
label_149e38:
    // 0x149e38: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x149e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x149e3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149E3Cu;
    {
        const bool branch_taken_0x149e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E3Cu;
        // 0x149e40: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e3c) {
            ctx->pc = 0x149E60u;
            goto label_149e60;
        }
    }
    ctx->pc = 0x149E44u;
    // 0x149e44: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x149e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x149e48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149E48u;
    {
        const bool branch_taken_0x149e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E48u;
        // 0x149e4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e48) {
            ctx->pc = 0x149E60u;
            goto label_149e60;
        }
    }
    ctx->pc = 0x149E50u;
    // 0x149e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149e54: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x149e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149e58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_149e60:
    // 0x149e60: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x149e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x149e64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x149E64u;
    {
        const bool branch_taken_0x149e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E64u;
        // 0x149e68: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e64) {
            ctx->pc = 0x149EB8u;
            goto label_149eb8;
        }
    }
    ctx->pc = 0x149E6Cu;
    // 0x149e6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149e70: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149e74: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x149E74u;
    {
        const bool branch_taken_0x149e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E74u;
        // 0x149e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e74) {
            ctx->pc = 0x149F1Cu;
            goto label_149f1c;
        }
    }
    ctx->pc = 0x149E7Cu;
    // 0x149e7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x149e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149e80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149e84: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x149E84u;
    {
        const bool branch_taken_0x149e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E84u;
        // 0x149e88: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e84) {
            ctx->pc = 0x149F20u;
            goto label_149f20;
        }
    }
    ctx->pc = 0x149E8Cu;
    // 0x149e8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x149e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149e90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149e98: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149E98u;
    {
        const bool branch_taken_0x149e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E98u;
        // 0x149e9c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e98) {
            ctx->pc = 0x149F24u;
            goto label_149f24;
        }
    }
    ctx->pc = 0x149EA0u;
    // 0x149ea0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149ea4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ea8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x149EA8u;
    {
        const bool branch_taken_0x149ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ea8) {
            ctx->pc = 0x149EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EA8u;
            // 0x149eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F20u;
            goto label_149f20;
        }
    }
    ctx->pc = 0x149EB0u;
    // 0x149eb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x149EB0u;
    {
        const bool branch_taken_0x149eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EB0u;
        // 0x149eb4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149eb0) {
            ctx->pc = 0x149F24u;
            goto label_149f24;
        }
    }
    ctx->pc = 0x149EB8u;
label_149eb8:
    // 0x149eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149ebc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149ec0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x149EC0u;
    {
        const bool branch_taken_0x149ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EC0u;
        // 0x149ec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ec0) {
            ctx->pc = 0x149F1Cu;
            goto label_149f1c;
        }
    }
    ctx->pc = 0x149EC8u;
    // 0x149ec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149ecc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ed0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x149ED0u;
    {
        const bool branch_taken_0x149ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149ED0u;
        // 0x149ed4: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ed0) {
            ctx->pc = 0x149F20u;
            goto label_149f20;
        }
    }
    ctx->pc = 0x149ED8u;
    // 0x149ed8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x149edc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x149edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x149ee0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149ee4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x149EE4u;
    {
        const bool branch_taken_0x149ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EE4u;
        // 0x149ee8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ee4) {
            ctx->pc = 0x149F24u;
            goto label_149f24;
        }
    }
    ctx->pc = 0x149EECu;
    // 0x149eec: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x149ef0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ef4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x149EF4u;
    {
        const bool branch_taken_0x149ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EF4u;
        // 0x149ef8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ef4) {
            ctx->pc = 0x149F24u;
            goto label_149f24;
        }
    }
    ctx->pc = 0x149EFCu;
    // 0x149efc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149f00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149f08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149F08u;
    {
        const bool branch_taken_0x149f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F08u;
        // 0x149f0c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f08) {
            ctx->pc = 0x149F24u;
            goto label_149f24;
        }
    }
    ctx->pc = 0x149F10u;
    // 0x149f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149f14: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149f18: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x149f18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_149f1c:
    // 0x149f1c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x149f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_149f20:
    // 0x149f20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x149f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149f24:
    // 0x149f24: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x149f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x149f28: 0x3e00008  jr          $ra
    ctx->pc = 0x149F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F28u;
        // 0x149f2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149F30u;
}
