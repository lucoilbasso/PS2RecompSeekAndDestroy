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

// Function: entry_00136cac
// Address: 0x136cac - 0x136cd0
void entry_00136cac_0x136cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136cac_0x136cac");
#endif

    switch (ctx->pc) {
        case 0x136cc8u: goto label_136cc8;
        default: break;
    }

    ctx->pc = 0x136cacu;

    // 0x136cac: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x136CACu;
    {
        const bool branch_taken_0x136cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136cac) {
            ctx->pc = 0x136CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136CACu;
            // 0x136cb0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136D14u;
            return;
        }
    }
    ctx->pc = 0x136CB4u;
    // 0x136cb4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x136cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x136cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cbc: 0x24a56790  addiu       $a1, $a1, 0x6790
    ctx->pc = 0x136cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26512));
    // 0x136cc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x136CC0u;
    SET_GPR_U32(ctx, 31, 0x136CC8u);
    ctx->pc = 0x136CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC0u;
    // 0x136cc4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x136CC0u, 0x136CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x136CC8u;
    {
        const bool branch_taken_0x136cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC8u;
        // 0x136ccc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cc8) {
            ctx->pc = 0x136D14u;
            return;
        }
    }
    ctx->pc = 0x136CD0u;
}
