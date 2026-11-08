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

// Function: entry_00101e8c
// Address: 0x101e8c - 0x101ea8
void entry_00101e8c_0x101e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e8c_0x101e8c");
#endif

    switch (ctx->pc) {
        case 0x101e94u: goto label_101e94;
        default: break;
    }

    ctx->pc = 0x101e8cu;

    // 0x101e8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101E8Cu;
    SET_GPR_U32(ctx, 31, 0x101E94u);
    ctx->pc = 0x101E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E8Cu;
    // 0x101e90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101E8Cu, 0x101E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E94u;
label_101e94:
    // 0x101e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e98: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x101e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x101e9c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x101E9Cu;
    {
        const bool branch_taken_0x101e9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E9Cu;
        // 0x101ea0: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e9c) {
            ctx->pc = 0x101EA8u;
            return;
        }
    }
    ctx->pc = 0x101EA4u;
    // 0x101ea4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x101ea8u;
}
