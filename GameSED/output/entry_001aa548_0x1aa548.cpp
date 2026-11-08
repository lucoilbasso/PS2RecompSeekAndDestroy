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

// Function: entry_001aa548
// Address: 0x1aa548 - 0x1aa568
void entry_001aa548_0x1aa548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa548_0x1aa548");
#endif

    switch (ctx->pc) {
        case 0x1aa550u: goto label_1aa550;
        case 0x1aa55cu: goto label_1aa55c;
        default: break;
    }

    ctx->pc = 0x1aa548u;

    // 0x1aa548: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x1AA548u;
    SET_GPR_U32(ctx, 31, 0x1AA550u);
    ctx->pc = 0x1AA54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA548u;
    // 0x1aa54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x1AA548u, 0x1AA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA550u;
label_1aa550:
    // 0x1aa550: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x1aa554: 0xc073d48  jal         func_1CF520
    ctx->pc = 0x1AA554u;
    SET_GPR_U32(ctx, 31, 0x1AA55Cu);
    ctx->pc = 0x1AA558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA554u;
    // 0x1aa558: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF520u, 0x1AA554u, 0x1AA55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA55Cu;
label_1aa55c:
    // 0x1aa55c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x1aa55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x1aa560: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x1aa560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x1aa564: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1aa564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1aa568u;
}
