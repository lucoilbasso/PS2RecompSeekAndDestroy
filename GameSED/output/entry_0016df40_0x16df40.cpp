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

// Function: entry_0016df40
// Address: 0x16df40 - 0x16dfbc
void entry_0016df40_0x16df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016df40_0x16df40");
#endif

    switch (ctx->pc) {
        case 0x16dfacu: goto label_16dfac;
        case 0x16dfb8u: goto label_16dfb8;
        default: break;
    }

    ctx->pc = 0x16df40u;

    // 0x16df40: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16df40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16df44: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x16DF44u;
    {
        const bool branch_taken_0x16df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16df44) {
            ctx->pc = 0x16DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DF44u;
            // 0x16df48: 0xc64c02f4  lwc1        $f12, 0x2F4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DFBCu;
            return;
        }
    }
    ctx->pc = 0x16DF4Cu;
    // 0x16df4c: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x16df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x16df50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x16df54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16df54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16df58: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x16df58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x16df5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16df5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16df60: 0xc78384c8  lwc1        $f3, -0x7B38($gp)
    ctx->pc = 0x16df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16df64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16df64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16df68: 0xc78484cc  lwc1        $f4, -0x7B34($gp)
    ctx->pc = 0x16df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16df6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16df6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16df70: 0xc78284d0  lwc1        $f2, -0x7B30($gp)
    ctx->pc = 0x16df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16df74: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x16df78: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x16df7c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16df7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16df80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16df84: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x16df84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x16df88: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16df88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16df8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16df8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16df90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16df90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16df94: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16df94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16df98: 0xe4620030  swc1        $f2, 0x30($v1)
    ctx->pc = 0x16df98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x16df9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16df9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16dfa0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x16dfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x16dfa4: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DFA4u;
    SET_GPR_U32(ctx, 31, 0x16DFACu);
    ctx->pc = 0x16DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFA4u;
    // 0x16dfa8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DFA4u, 0x16DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFACu;
label_16dfac:
    // 0x16dfac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfb0: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DFB0u;
    SET_GPR_U32(ctx, 31, 0x16DFB8u);
    ctx->pc = 0x16DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFB0u;
    // 0x16dfb4: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DFB0u, 0x16DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFB8u;
label_16dfb8:
    // 0x16dfb8: 0xc64c02f4  lwc1        $f12, 0x2F4($s2)
    ctx->pc = 0x16dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x16dfbcu;
}
