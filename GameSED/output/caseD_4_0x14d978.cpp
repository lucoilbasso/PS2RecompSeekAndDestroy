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

// Function: caseD_4
// Address: 0x14d978 - 0x14d9c8
void caseD_4_0x14d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14d978");
#endif

    switch (ctx->pc) {
        case 0x14d984u: goto label_14d984;
        case 0x14d99cu: goto label_14d99c;
        case 0x14d9b4u: goto label_14d9b4;
        default: break;
    }

    ctx->pc = 0x14d978u;

    // 0x14d978: 0xc79481c0  lwc1        $f20, -0x7E40($gp)
    ctx->pc = 0x14d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d97c: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D97Cu;
    SET_GPR_U32(ctx, 31, 0x14D984u);
    ctx->pc = 0x14D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D97Cu;
    // 0x14d980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D97Cu, 0x14D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D984u;
label_14d984:
    // 0x14d984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d988: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x14d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d98c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d990: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14d990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14d994: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D994u;
    SET_GPR_U32(ctx, 31, 0x14D99Cu);
    ctx->pc = 0x14D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D994u;
    // 0x14d998: 0xe6200314  swc1        $f0, 0x314($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 788), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D994u, 0x14D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D99Cu;
label_14d99c:
    // 0x14d99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9a0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x14d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14d9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14d9ac: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D9ACu;
    SET_GPR_U32(ctx, 31, 0x14D9B4u);
    ctx->pc = 0x14D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9ACu;
    // 0x14d9b0: 0xe6200318  swc1        $f0, 0x318($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 792), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D9ACu, 0x14D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9B4u;
label_14d9b4:
    // 0x14d9b4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x14d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14d9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14d9c0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x14D9C0u;
    {
        const bool branch_taken_0x14d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9C0u;
        // 0x14d9c4: 0xe620031c  swc1        $f0, 0x31C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 796), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9c0) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14D9C8u;
}
