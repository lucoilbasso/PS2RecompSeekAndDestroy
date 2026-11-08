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

// Function: caseD_2
// Address: 0x163660 - 0x163678
void caseD_2_0x163660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x163660");
#endif

    switch (ctx->pc) {
        case 0x163668u: goto label_163668;
        default: break;
    }

    ctx->pc = 0x163660u;

    // 0x163660: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x163660u;
    SET_GPR_U32(ctx, 31, 0x163668u);
    ctx->pc = 0x163664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163660u;
    // 0x163664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163660u, 0x163668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163668u;
label_163668:
    // 0x163668: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x163668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16366c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16366cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163670: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x163670u;
    {
        const bool branch_taken_0x163670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163670u;
        // 0x163674: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163670) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x163678u;
}
