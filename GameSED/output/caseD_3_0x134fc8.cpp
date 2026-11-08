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

// Function: caseD_3
// Address: 0x134fc8 - 0x134fe0
void caseD_3_0x134fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x134fc8");
#endif

    switch (ctx->pc) {
        case 0x134fd0u: goto label_134fd0;
        default: break;
    }

    ctx->pc = 0x134fc8u;

    // 0x134fc8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134FC8u;
    SET_GPR_U32(ctx, 31, 0x134FD0u);
    ctx->pc = 0x134FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FC8u;
    // 0x134fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134FC8u, 0x134FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FD0u;
label_134fd0:
    // 0x134fd0: 0xc781811c  lwc1        $f1, -0x7EE4($gp)
    ctx->pc = 0x134fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x134fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x134fd8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x134FD8u;
    {
        const bool branch_taken_0x134fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FD8u;
        // 0x134fdc: 0xe6000380  swc1        $f0, 0x380($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fd8) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x134FE0u;
}
