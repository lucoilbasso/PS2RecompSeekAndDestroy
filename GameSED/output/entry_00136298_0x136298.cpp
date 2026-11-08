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

// Function: entry_00136298
// Address: 0x136298 - 0x1362b4
void entry_00136298_0x136298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136298_0x136298");
#endif

    switch (ctx->pc) {
        case 0x1362a0u: goto label_1362a0;
        default: break;
    }

    ctx->pc = 0x136298u;

    // 0x136298: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136298u;
    SET_GPR_U32(ctx, 31, 0x1362A0u);
    ctx->pc = 0x13629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136298u;
    // 0x13629c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136298u, 0x1362A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362A0u;
label_1362a0:
    // 0x1362a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1362a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1362A4u;
    {
        const bool branch_taken_0x1362a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1362A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362A4u;
        // 0x1362a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362a4) {
            ctx->pc = 0x1362B4u;
            return;
        }
    }
    ctx->pc = 0x1362ACu;
    // 0x1362ac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1362acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1362b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1362b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1362b4u;
}
