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

// Function: entry_00145f68
// Address: 0x145f68 - 0x145f88
void entry_00145f68_0x145f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145f68_0x145f68");
#endif

    ctx->pc = 0x145f68u;

    // 0x145f68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x145f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145f6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x145F6Cu;
    {
        const bool branch_taken_0x145f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f6c) {
            ctx->pc = 0x145F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145F6Cu;
            // 0x145f70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F8Cu;
            return;
        }
    }
    ctx->pc = 0x145F74u;
    // 0x145f74: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f7c: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145f80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145F80u;
    SET_GPR_U32(ctx, 31, 0x145F88u);
    ctx->pc = 0x145F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F80u;
    // 0x145f84: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145F80u, 0x145F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F88u;
}
