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

// Function: caseD_8
// Address: 0x111ad0 - 0x111ae0
void caseD_8_0x111ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x111ad0");
#endif

    switch (ctx->pc) {
        case 0x111ad8u: goto label_111ad8;
        default: break;
    }

    ctx->pc = 0x111ad0u;

    // 0x111ad0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x111AD0u;
    SET_GPR_U32(ctx, 31, 0x111AD8u);
    ctx->pc = 0x111AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AD0u;
    // 0x111ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x111AD0u, 0x111AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AD8u;
label_111ad8:
    // 0x111ad8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x111AD8u;
    {
        const bool branch_taken_0x111ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD8u;
        // 0x111adc: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ad8) {
            ctx->pc = 0x111B14u;
            return;
        }
    }
    ctx->pc = 0x111AE0u;
}
