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

// Function: entry_001403fc
// Address: 0x1403fc - 0x14042c
void entry_001403fc_0x1403fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001403fc_0x1403fc");
#endif

    switch (ctx->pc) {
        case 0x140404u: goto label_140404;
        case 0x140414u: goto label_140414;
        default: break;
    }

    ctx->pc = 0x1403fcu;

    // 0x1403fc: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x1403FCu;
    SET_GPR_U32(ctx, 31, 0x140404u);
    ctx->pc = 0x140400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1403FCu;
    // 0x140400: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1403FCu, 0x140404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140404u;
label_140404:
    // 0x140404: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140404u;
    {
        const bool branch_taken_0x140404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140404) {
            ctx->pc = 0x140434u;
            return;
        }
    }
    ctx->pc = 0x14040Cu;
    // 0x14040c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14040Cu;
    SET_GPR_U32(ctx, 31, 0x140414u);
    ctx->pc = 0x140410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14040Cu;
    // 0x140410: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14040Cu, 0x140414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140414u;
label_140414:
    // 0x140414: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140414u;
    {
        const bool branch_taken_0x140414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140414u;
        // 0x140418: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140414) {
            ctx->pc = 0x140434u;
            return;
        }
    }
    ctx->pc = 0x14041Cu;
    // 0x14041c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x140420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x140424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140424u;
    {
        const bool branch_taken_0x140424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140424) {
            ctx->pc = 0x140434u;
            return;
        }
    }
    ctx->pc = 0x14042Cu;
}
