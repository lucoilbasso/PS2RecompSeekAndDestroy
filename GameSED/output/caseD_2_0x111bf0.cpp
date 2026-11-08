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
// Address: 0x111bf0 - 0x111c08
void caseD_2_0x111bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x111bf0");
#endif

    switch (ctx->pc) {
        case 0x111bfcu: goto label_111bfc;
        default: break;
    }

    ctx->pc = 0x111bf0u;

    // 0x111bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111bf4: 0xc0527d6  jal         func_149F58
    ctx->pc = 0x111BF4u;
    SET_GPR_U32(ctx, 31, 0x111BFCu);
    ctx->pc = 0x111BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BF4u;
    // 0x111bf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F58u, 0x111BF4u, 0x111BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BFCu;
label_111bfc:
    // 0x111bfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x111BFCu;
    {
        const bool branch_taken_0x111bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BFCu;
        // 0x111c00: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bfc) {
            ctx->pc = 0x111C30u;
            return;
        }
    }
    ctx->pc = 0x111C04u;
    // 0x111c04: 0x0  nop
    ctx->pc = 0x111c04u;
    // NOP
    ctx->pc = 0x111c08u;
}
