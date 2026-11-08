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

// Function: entry_001572c8
// Address: 0x1572c8 - 0x1572f0
void entry_001572c8_0x1572c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001572c8_0x1572c8");
#endif

    switch (ctx->pc) {
        case 0x1572d0u: goto label_1572d0;
        case 0x1572dcu: goto label_1572dc;
        case 0x1572ecu: goto label_1572ec;
        default: break;
    }

    ctx->pc = 0x1572c8u;

    // 0x1572c8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1572C8u;
    SET_GPR_U32(ctx, 31, 0x1572D0u);
    ctx->pc = 0x1572CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572C8u;
    // 0x1572cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1572C8u, 0x1572D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572D0u;
label_1572d0:
    // 0x1572d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1572d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572d4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1572D4u;
    SET_GPR_U32(ctx, 31, 0x1572DCu);
    ctx->pc = 0x1572D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572D4u;
    // 0x1572d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1572D4u, 0x1572DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572DCu;
label_1572dc:
    // 0x1572dc: 0x8e450260  lw          $a1, 0x260($s2)
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1572e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1572e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572e4: 0xc0533e4  jal         func_14CF90
    ctx->pc = 0x1572E4u;
    SET_GPR_U32(ctx, 31, 0x1572ECu);
    ctx->pc = 0x1572E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572E4u;
    // 0x1572e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x1572E4u, 0x1572ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572ECu;
label_1572ec:
    // 0x1572ec: 0x96420238  lhu         $v0, 0x238($s2)
    ctx->pc = 0x1572ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 568)));
    ctx->pc = 0x1572f0u;
}
