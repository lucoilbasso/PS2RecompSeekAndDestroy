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

// Function: entry_0017a334
// Address: 0x17a334 - 0x17a368
void entry_0017a334_0x17a334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a334_0x17a334");
#endif

    switch (ctx->pc) {
        case 0x17a348u: goto label_17a348;
        case 0x17a358u: goto label_17a358;
        default: break;
    }

    ctx->pc = 0x17a334u;

    // 0x17a334: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17A334u;
    {
        const bool branch_taken_0x17a334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A334u;
        // 0x17a338: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a334) {
            ctx->pc = 0x17A380u;
            return;
        }
    }
    ctx->pc = 0x17A33Cu;
    // 0x17a33c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17a340: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17A340u;
    SET_GPR_U32(ctx, 31, 0x17A348u);
    ctx->pc = 0x17A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A340u;
    // 0x17a344: 0x2484e8e0  addiu       $a0, $a0, -0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17A340u, 0x17A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A348u;
label_17a348:
    // 0x17a348: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17a348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17a34c: 0x2484e900  addiu       $a0, $a0, -0x1700
    ctx->pc = 0x17a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961408));
    // 0x17a350: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17A350u;
    SET_GPR_U32(ctx, 31, 0x17A358u);
    ctx->pc = 0x17A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A350u;
    // 0x17a354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17A350u, 0x17A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A358u;
label_17a358:
    // 0x17a358: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17a358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17a35c: 0x2484e920  addiu       $a0, $a0, -0x16E0
    ctx->pc = 0x17a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961440));
    // 0x17a360: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17A360u;
    SET_GPR_U32(ctx, 31, 0x17A368u);
    ctx->pc = 0x17A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A360u;
    // 0x17a364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17A360u, 0x17A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A368u;
}
