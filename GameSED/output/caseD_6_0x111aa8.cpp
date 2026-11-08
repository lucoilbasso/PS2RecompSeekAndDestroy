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
// Address: 0x111aa8 - 0x111ab8
void caseD_6_0x111aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x111aa8");
#endif

    switch (ctx->pc) {
        case 0x111ab0u: goto label_111ab0;
        default: break;
    }

    ctx->pc = 0x111aa8u;

    // 0x111aa8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x111AA8u;
    SET_GPR_U32(ctx, 31, 0x111AB0u);
    ctx->pc = 0x111AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AA8u;
    // 0x111aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x111AA8u, 0x111AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AB0u;
label_111ab0:
    // 0x111ab0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x111AB0u;
    {
        const bool branch_taken_0x111ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB0u;
        // 0x111ab4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ab0) {
            ctx->pc = 0x111B1Cu;
            return;
        }
    }
    ctx->pc = 0x111AB8u;
}
