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

// Function: caseD_9
// Address: 0x111ae0 - 0x111af0
void caseD_9_0x111ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x111ae0");
#endif

    switch (ctx->pc) {
        case 0x111ae8u: goto label_111ae8;
        default: break;
    }

    ctx->pc = 0x111ae0u;

    // 0x111ae0: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x111AE0u;
    SET_GPR_U32(ctx, 31, 0x111AE8u);
    ctx->pc = 0x111AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AE0u;
    // 0x111ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x111AE0u, 0x111AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AE8u;
label_111ae8:
    // 0x111ae8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x111AE8u;
    {
        const bool branch_taken_0x111ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AE8u;
        // 0x111aec: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ae8) {
            ctx->pc = 0x111B1Cu;
            return;
        }
    }
    ctx->pc = 0x111AF0u;
}
