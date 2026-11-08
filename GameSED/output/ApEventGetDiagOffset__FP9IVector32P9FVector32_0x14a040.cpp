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

// Function: ApEventGetDiagOffset__FP9IVector32P9FVector32
// Address: 0x14a040 - 0x14a13c
void ApEventGetDiagOffset__FP9IVector32P9FVector32_0x14a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventGetDiagOffset__FP9IVector32P9FVector32_0x14a040");
#endif

    ctx->pc = 0x14a040u;

    // 0x14a040: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a048: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x14a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a04c: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x14a050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14a054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14a058: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14a05c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14a05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14a060: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x14a060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14a064: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14a064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a068: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a06c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14a06cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14a070: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x14A070u;
    {
        const bool branch_taken_0x14a070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a070) {
            ctx->pc = 0x14A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A070u;
            // 0x14a074: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A090u;
            goto label_14a090;
        }
    }
    ctx->pc = 0x14A078u;
    // 0x14a078: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14a078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14a07c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14a080: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a084: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14a084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14a088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14a088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14a08c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x14a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a090:
    // 0x14a090: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x14a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x14a094: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a09c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14a09cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14a0a0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x14a0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x14a0a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a0a8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14a0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14a0ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14a0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14a0b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14a0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14a0b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14a0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14a0b8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14a0b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a0bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a0c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14a0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14a0c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14A0C4u;
    {
        const bool branch_taken_0x14a0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C4u;
        // 0x14a0c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c4) {
            ctx->pc = 0x14A0E0u;
            goto label_14a0e0;
        }
    }
    ctx->pc = 0x14A0CCu;
    // 0x14a0cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14a0ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14a0d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14a0d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a0d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14a0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14a0dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14a0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14a0e0:
    // 0x14a0e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a0e4: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x14a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x14a0e8: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a0ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a0f0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x14a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x14a0f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a0f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a0fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14a0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14a100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a104: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14a104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14a108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14a108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a10c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a10cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14a110: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x14a110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14a114: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14A114u;
    {
        const bool branch_taken_0x14a114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A114u;
        // 0x14a118: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a114) {
            ctx->pc = 0x14A130u;
            goto label_14a130;
        }
    }
    ctx->pc = 0x14A11Cu;
    // 0x14a11c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a120: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14a124: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14a124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14a128: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x14a128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14a12c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x14a12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_14a130:
    // 0x14a130: 0x30a27fff  andi        $v0, $a1, 0x7FFF
    ctx->pc = 0x14a130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x14a134: 0x3e00008  jr          $ra
    ctx->pc = 0x14A134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A134u;
        // 0x14a138: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A13Cu;
}
