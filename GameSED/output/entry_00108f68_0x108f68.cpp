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

// Function: entry_00108f68
// Address: 0x108f68 - 0x108f80
void entry_00108f68_0x108f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f68_0x108f68");
#endif

    switch (ctx->pc) {
        case 0x108f78u: goto label_108f78;
        default: break;
    }

    ctx->pc = 0x108f68u;

    // 0x108f68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x108f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108f70: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108F70u;
    SET_GPR_U32(ctx, 31, 0x108F78u);
    ctx->pc = 0x108F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F70u;
    // 0x108f74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108F70u, 0x108F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F78u;
label_108f78:
    // 0x108f78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108F78u;
    SET_GPR_U32(ctx, 31, 0x108F80u);
    ctx->pc = 0x108F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F78u;
    // 0x108f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108F78u, 0x108F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F80u;
}
