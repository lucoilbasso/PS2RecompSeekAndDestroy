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

// Function: entry_001556fc
// Address: 0x1556fc - 0x155718
void entry_001556fc_0x1556fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556fc_0x1556fc");
#endif

    switch (ctx->pc) {
        case 0x155708u: goto label_155708;
        default: break;
    }

    ctx->pc = 0x1556fcu;

    // 0x1556fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1556fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155700: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x155700u;
    SET_GPR_U32(ctx, 31, 0x155708u);
    ctx->pc = 0x155704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155700u;
    // 0x155704: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x155700u, 0x155708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155708u;
label_155708:
    // 0x155708: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x15570c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155710: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x155710u;
    SET_GPR_U32(ctx, 31, 0x155718u);
    ctx->pc = 0x155714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155710u;
    // 0x155714: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x155710u, 0x155718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155718u;
}
