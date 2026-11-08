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
// Address: 0x178ea8 - 0x178ec0
void caseD_4_0x178ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x178ea8");
#endif

    switch (ctx->pc) {
        case 0x178eb4u: goto label_178eb4;
        default: break;
    }

    ctx->pc = 0x178ea8u;

    // 0x178ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178eac: 0xc05e3c2  jal         func_178F08
    ctx->pc = 0x178EACu;
    SET_GPR_U32(ctx, 31, 0x178EB4u);
    ctx->pc = 0x178EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EACu;
    // 0x178eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F08u, 0x178EACu, 0x178EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EB4u;
label_178eb4:
    // 0x178eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178EB4u;
    {
        const bool branch_taken_0x178eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EB4u;
        // 0x178eb8: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178eb4) {
            ctx->pc = 0x178ED0u;
            return;
        }
    }
    ctx->pc = 0x178EBCu;
    // 0x178ebc: 0x0  nop
    ctx->pc = 0x178ebcu;
    // NOP
    ctx->pc = 0x178ec0u;
}
