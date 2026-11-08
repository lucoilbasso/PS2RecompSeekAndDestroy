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

// Function: entry_0014aab4
// Address: 0x14aab4 - 0x14aad0
void entry_0014aab4_0x14aab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aab4_0x14aab4");
#endif

    switch (ctx->pc) {
        case 0x14aac0u: goto label_14aac0;
        default: break;
    }

    ctx->pc = 0x14aab4u;

    // 0x14aab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aab8: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x14AAB8u;
    SET_GPR_U32(ctx, 31, 0x14AAC0u);
    ctx->pc = 0x14AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAB8u;
    // 0x14aabc: 0x24843580  addiu       $a0, $a0, 0x3580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x14AAB8u, 0x14AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAC0u;
label_14aac0:
    // 0x14aac0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x14aac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aac8: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x14AAC8u;
    SET_GPR_U32(ctx, 31, 0x14AAD0u);
    ctx->pc = 0x14AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAC8u;
    // 0x14aacc: 0x24843598  addiu       $a0, $a0, 0x3598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x14AAC8u, 0x14AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAD0u;
}
