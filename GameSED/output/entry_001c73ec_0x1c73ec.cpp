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

// Function: entry_001c73ec
// Address: 0x1c73ec - 0x1c7420
void entry_001c73ec_0x1c73ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c73ec_0x1c73ec");
#endif

    switch (ctx->pc) {
        case 0x1c73fcu: goto label_1c73fc;
        default: break;
    }

    ctx->pc = 0x1c73ecu;

    // 0x1c73ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c73ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c73f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C73F4u;
    SET_GPR_U32(ctx, 31, 0x1C73FCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C73F4u, 0x1C73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73FCu;
label_1c73fc:
    // 0x1c73fc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C73FCu;
    {
        const bool branch_taken_0x1c73fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73FCu;
        // 0x1c7400: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73fc) {
            ctx->pc = 0x1C7560u;
            return;
        }
    }
    ctx->pc = 0x1C7404u;
    // 0x1c7404: 0x26d2ffff  addiu       $s2, $s6, -0x1
    ctx->pc = 0x1c7404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c7408: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1c7408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c740c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C740Cu;
    {
        const bool branch_taken_0x1c740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C740Cu;
        // 0x1c7410: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c740c) {
            ctx->pc = 0x1C743Cu;
            return;
        }
    }
    ctx->pc = 0x1C7414u;
    // 0x1c7414: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1c7414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c7418: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1c7418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c741c: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->pc = 0x1c7420u;
}
