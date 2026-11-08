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

// Function: entry_001a0a70
// Address: 0x1a0a70 - 0x1a0a90
void entry_001a0a70_0x1a0a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a70_0x1a0a70");
#endif

    switch (ctx->pc) {
        case 0x1a0a88u: goto label_1a0a88;
        default: break;
    }

    ctx->pc = 0x1a0a70u;

    // 0x1a0a70: 0x54e20007  bnel        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0A70u;
    {
        const bool branch_taken_0x1a0a70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a70) {
            ctx->pc = 0x1A0A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A70u;
            // 0x1a0a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A90u;
            return;
        }
    }
    ctx->pc = 0x1A0A78u;
    // 0x1a0a78: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0a7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a0a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a80: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x1A0A80u;
    SET_GPR_U32(ctx, 31, 0x1A0A88u);
    ctx->pc = 0x1A0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A80u;
    // 0x1a0a84: 0x24849090  addiu       $a0, $a0, -0x6F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x1A0A80u, 0x1A0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A88u;
label_1a0a88:
    // 0x1a0a88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0A88u;
    {
        const bool branch_taken_0x1a0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A88u;
        // 0x1a0a8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a88) {
            ctx->pc = 0x1A0AC0u;
            return;
        }
    }
    ctx->pc = 0x1A0A90u;
}
