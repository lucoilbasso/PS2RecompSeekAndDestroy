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

// Function: entry_001a0a90
// Address: 0x1a0a90 - 0x1a0ab0
void entry_001a0a90_0x1a0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a90_0x1a0a90");
#endif

    switch (ctx->pc) {
        case 0x1a0aa8u: goto label_1a0aa8;
        default: break;
    }

    ctx->pc = 0x1a0a90u;

    // 0x1a0a90: 0x54e20007  bnel        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0A90u;
    {
        const bool branch_taken_0x1a0a90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a90) {
            ctx->pc = 0x1A0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A90u;
            // 0x1a0a94: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0AB0u;
            return;
        }
    }
    ctx->pc = 0x1A0A98u;
    // 0x1a0a98: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0a9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a0a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0aa0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0AA0u;
    SET_GPR_U32(ctx, 31, 0x1A0AA8u);
    ctx->pc = 0x1A0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AA0u;
    // 0x1a0aa4: 0x248490a8  addiu       $a0, $a0, -0x6F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0AA0u, 0x1A0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AA8u;
label_1a0aa8:
    // 0x1a0aa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0AA8u;
    {
        const bool branch_taken_0x1a0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AA8u;
        // 0x1a0aac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0aa8) {
            ctx->pc = 0x1A0AC0u;
            return;
        }
    }
    ctx->pc = 0x1A0AB0u;
}
