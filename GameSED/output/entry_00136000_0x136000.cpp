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

// Function: entry_00136000
// Address: 0x136000 - 0x136024
void entry_00136000_0x136000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136000_0x136000");
#endif

    switch (ctx->pc) {
        case 0x136008u: goto label_136008;
        default: break;
    }

    ctx->pc = 0x136000u;

    // 0x136000: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136000u;
    SET_GPR_U32(ctx, 31, 0x136008u);
    ctx->pc = 0x136004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136000u;
    // 0x136004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136000u, 0x136008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136008u;
label_136008:
    // 0x136008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x136008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13600c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13600cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136014: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136014u;
    {
        const bool branch_taken_0x136014 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x136018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136014u;
        // 0x136018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136014) {
            ctx->pc = 0x136024u;
            return;
        }
    }
    ctx->pc = 0x13601Cu;
    // 0x13601c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x13601cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x136020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136024u;
}
