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

// Function: entry_0013f6bc
// Address: 0x13f6bc - 0x13f6e4
void entry_0013f6bc_0x13f6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6bc_0x13f6bc");
#endif

    switch (ctx->pc) {
        case 0x13f6c4u: goto label_13f6c4;
        default: break;
    }

    ctx->pc = 0x13f6bcu;

    // 0x13f6bc: 0xc050494  jal         func_141250
    ctx->pc = 0x13F6BCu;
    SET_GPR_U32(ctx, 31, 0x13F6C4u);
    ctx->pc = 0x13F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6BCu;
    // 0x13f6c0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x13F6BCu, 0x13F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6C4u;
label_13f6c4:
    // 0x13f6c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6c8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f6cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x13f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x13f6d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F6D0u;
    {
        const bool branch_taken_0x13f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6d0) {
            ctx->pc = 0x13F6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F6D0u;
            // 0x13f6d4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6E4u;
            return;
        }
    }
    ctx->pc = 0x13F6D8u;
    // 0x13f6d8: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x13f6dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x13f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x13f6e0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x13f6e4u;
}
