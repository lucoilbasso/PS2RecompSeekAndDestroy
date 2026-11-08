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

// Function: entry_0018775c
// Address: 0x18775c - 0x18777c
void entry_0018775c_0x18775c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018775c_0x18775c");
#endif

    switch (ctx->pc) {
        case 0x18776cu: goto label_18776c;
        default: break;
    }

    ctx->pc = 0x18775cu;

    // 0x18775c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x187760: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187764: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x187764u;
    SET_GPR_U32(ctx, 31, 0x18776Cu);
    ctx->pc = 0x187768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187764u;
    // 0x187768: 0x248415f8  addiu       $a0, $a0, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x187764u, 0x18776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18776Cu;
label_18776c:
    // 0x18776c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x187770: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187774: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x187774u;
    SET_GPR_U32(ctx, 31, 0x18777Cu);
    ctx->pc = 0x187778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187774u;
    // 0x187778: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x187774u, 0x18777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18777Cu;
}
