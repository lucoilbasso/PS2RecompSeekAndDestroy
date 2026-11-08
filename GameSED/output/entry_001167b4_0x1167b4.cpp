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

// Function: entry_001167b4
// Address: 0x1167b4 - 0x1167e8
void entry_001167b4_0x1167b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001167b4_0x1167b4");
#endif

    switch (ctx->pc) {
        case 0x1167bcu: goto label_1167bc;
        case 0x1167ccu: goto label_1167cc;
        case 0x1167e0u: goto label_1167e0;
        default: break;
    }

    ctx->pc = 0x1167b4u;

    // 0x1167b4: 0xc041794  jal         func_105E50
    ctx->pc = 0x1167B4u;
    SET_GPR_U32(ctx, 31, 0x1167BCu);
    ctx->pc = 0x1167B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167B4u;
    // 0x1167b8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x1167B4u, 0x1167BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167BCu;
label_1167bc:
    // 0x1167bc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1167bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1167c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1167c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167c4: 0xc041882  jal         func_106208
    ctx->pc = 0x1167C4u;
    SET_GPR_U32(ctx, 31, 0x1167CCu);
    ctx->pc = 0x1167C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167C4u;
    // 0x1167c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1167C4u, 0x1167CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167CCu;
label_1167cc:
    // 0x1167cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1167ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1167d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1167d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1167d4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1167d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1167d8: 0xc041882  jal         func_106208
    ctx->pc = 0x1167D8u;
    SET_GPR_U32(ctx, 31, 0x1167E0u);
    ctx->pc = 0x1167DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167D8u;
    // 0x1167dc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1167D8u, 0x1167E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167E0u;
label_1167e0:
    // 0x1167e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1167e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1167e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1167e8u;
}
