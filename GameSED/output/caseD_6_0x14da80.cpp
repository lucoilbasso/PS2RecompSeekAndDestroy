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

// Function: caseD_6
// Address: 0x14da80 - 0x14dad0
void caseD_6_0x14da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x14da80");
#endif

    switch (ctx->pc) {
        case 0x14da8cu: goto label_14da8c;
        case 0x14daa4u: goto label_14daa4;
        case 0x14dabcu: goto label_14dabc;
        default: break;
    }

    ctx->pc = 0x14da80u;

    // 0x14da80: 0xc79481c8  lwc1        $f20, -0x7E38($gp)
    ctx->pc = 0x14da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14da84: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DA84u;
    SET_GPR_U32(ctx, 31, 0x14DA8Cu);
    ctx->pc = 0x14DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA84u;
    // 0x14da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DA84u, 0x14DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA8Cu;
label_14da8c:
    // 0x14da8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da90: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x14da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14da94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14da94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14da98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14da98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14da9c: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DA9Cu;
    SET_GPR_U32(ctx, 31, 0x14DAA4u);
    ctx->pc = 0x14DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA9Cu;
    // 0x14daa0: 0xe6200334  swc1        $f0, 0x334($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DA9Cu, 0x14DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAA4u;
label_14daa4:
    // 0x14daa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14daa8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x14daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14daac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14daacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dab0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14dab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14dab4: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DAB4u;
    SET_GPR_U32(ctx, 31, 0x14DABCu);
    ctx->pc = 0x14DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAB4u;
    // 0x14dab8: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DAB4u, 0x14DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DABCu;
label_14dabc:
    // 0x14dabc: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x14dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14dac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dac4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14dac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14dac8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14DAC8u;
    {
        const bool branch_taken_0x14dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC8u;
        // 0x14dacc: 0xe620033c  swc1        $f0, 0x33C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dac8) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14DAD0u;
}
