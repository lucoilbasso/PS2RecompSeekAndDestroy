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

// Function: entry_00164840
// Address: 0x164840 - 0x164854
void entry_00164840_0x164840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164840_0x164840");
#endif

    switch (ctx->pc) {
        case 0x164850u: goto label_164850;
        default: break;
    }

    ctx->pc = 0x164840u;

    // 0x164840: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x164840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x164844: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x164848: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x164848u;
    SET_GPR_U32(ctx, 31, 0x164850u);
    ctx->pc = 0x16484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164848u;
    // 0x16484c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x164848u, 0x164850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164850u;
label_164850:
    // 0x164850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164854u;
}
