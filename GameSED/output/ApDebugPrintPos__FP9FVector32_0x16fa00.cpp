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

// Function: ApDebugPrintPos__FP9FVector32
// Address: 0x16fa00 - 0x16fa74
void ApDebugPrintPos__FP9FVector32_0x16fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPrintPos__FP9FVector32_0x16fa00");
#endif

    switch (ctx->pc) {
        case 0x16fa68u: goto label_16fa68;
        default: break;
    }

    ctx->pc = 0x16fa00u;

    // 0x16fa00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fa04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16fa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fa0c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x16fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x16fa10: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x16fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x16fa14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16fa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16fa18: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x16fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16fa1c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fa20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fa24: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x16fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fa28: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16fa28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16fa2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x16fa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x16fa30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x16fa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16fa34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x16fa34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16fa38: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16fa38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16fa3c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x16fa3cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x16fa40: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16fa40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x16fa44: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x16fa44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x16fa48: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16fa48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16fa4c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x16fa4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x16fa50: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16fa50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16fa54: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x16fa54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x16fa58: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16fa58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16fa5c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16fa5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16fa60: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x16FA60u;
    SET_GPR_U32(ctx, 31, 0x16FA68u);
    ctx->pc = 0x16FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA60u;
    // 0x16fa64: 0x24847578  addiu       $a0, $a0, 0x7578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x16FA60u, 0x16FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA68u;
label_16fa68:
    // 0x16fa68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA6Cu;
        // 0x16fa70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FA74u;
}
