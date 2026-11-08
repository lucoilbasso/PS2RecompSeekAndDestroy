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

// Function: entry_0010d1f8
// Address: 0x10d1f8 - 0x10d234
void entry_0010d1f8_0x10d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d1f8_0x10d1f8");
#endif

    switch (ctx->pc) {
        case 0x10d208u: goto label_10d208;
        default: break;
    }

    ctx->pc = 0x10d1f8u;

    // 0x10d1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d200: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10D200u;
    SET_GPR_U32(ctx, 31, 0x10D208u);
    ctx->pc = 0x10D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D200u;
    // 0x10d204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10D200u, 0x10D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D208u;
label_10d208:
    // 0x10d208: 0xc7838054  lwc1        $f3, -0x7FAC($gp)
    ctx->pc = 0x10d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10d20c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x10d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d210: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10d210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10d214: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x10d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d218: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x10d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10d21c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x10d21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x10d220: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x10d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d224: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10d224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d22c: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x10d22cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x10d230: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x10d230u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    ctx->pc = 0x10d234u;
}
