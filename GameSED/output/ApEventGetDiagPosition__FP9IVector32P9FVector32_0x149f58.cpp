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

// Function: ApEventGetDiagPosition__FP9IVector32P9FVector32
// Address: 0x149f58 - 0x14a03c
void ApEventGetDiagPosition__FP9IVector32P9FVector32_0x149f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventGetDiagPosition__FP9IVector32P9FVector32_0x149f58");
#endif

    ctx->pc = 0x149f58u;

    // 0x149f58: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149f60: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x149f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f64: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149f68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149f6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149f70: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149f70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149f74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149f78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149f7c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x149F7Cu;
    {
        const bool branch_taken_0x149f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149f7c) {
            ctx->pc = 0x149F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F7Cu;
            // 0x149f80: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F9Cu;
            goto label_149f9c;
        }
    }
    ctx->pc = 0x149F84u;
    // 0x149f84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149f84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149f88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149f8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149f8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149f90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149f94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149f98: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x149f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149f9c:
    // 0x149f9c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149fa0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149fa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149fa8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149fac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149facu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149fb0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149fb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149fbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149fc0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149fc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149fc8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x149FC8u;
    {
        const bool branch_taken_0x149fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FC8u;
        // 0x149fcc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fc8) {
            ctx->pc = 0x149FE4u;
            goto label_149fe4;
        }
    }
    ctx->pc = 0x149FD0u;
    // 0x149fd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149fd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149fd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149fdc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149fe4:
    // 0x149fe4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x149fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149fe8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x149fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149fec: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149ff0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149ff4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149ff8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149ffc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a000: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a004: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14a004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a008: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a00c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x14a00cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14a010: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14A010u;
    {
        const bool branch_taken_0x14a010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A010u;
        // 0x14a014: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a010) {
            ctx->pc = 0x14A02Cu;
            goto label_14a02c;
        }
    }
    ctx->pc = 0x14A018u;
    // 0x14a018: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14a018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14a01c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14a020: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a024: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x14a024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14a028: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x14a028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_14a02c:
    // 0x14a02c: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x14a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x14a030: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14a034: 0x3e00008  jr          $ra
    ctx->pc = 0x14A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A034u;
        // 0x14a038: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A03Cu;
}
