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

// Function: caseD_7
// Address: 0x111ab8 - 0x111ad0
void caseD_7_0x111ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x111ab8");
#endif

    switch (ctx->pc) {
        case 0x111ac0u: goto label_111ac0;
        default: break;
    }

    ctx->pc = 0x111ab8u;

    // 0x111ab8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x111AB8u;
    SET_GPR_U32(ctx, 31, 0x111AC0u);
    ctx->pc = 0x111ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AB8u;
    // 0x111abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x111AB8u, 0x111AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AC0u;
label_111ac0:
    // 0x111ac0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x111ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111ac4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x111AC4u;
    {
        const bool branch_taken_0x111ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AC4u;
        // 0x111ac8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ac4) {
            ctx->pc = 0x111B18u;
            return;
        }
    }
    ctx->pc = 0x111ACCu;
    // 0x111acc: 0x0  nop
    ctx->pc = 0x111accu;
    // NOP
    ctx->pc = 0x111ad0u;
}
