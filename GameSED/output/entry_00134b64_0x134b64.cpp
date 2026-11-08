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

// Function: entry_00134b64
// Address: 0x134b64 - 0x134b9c
void entry_00134b64_0x134b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b64_0x134b64");
#endif

    switch (ctx->pc) {
        case 0x134b78u: goto label_134b78;
        case 0x134b94u: goto label_134b94;
        default: break;
    }

    ctx->pc = 0x134b64u;

    // 0x134b64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b68: 0x5071000c  beql        $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x134B68u;
    {
        const bool branch_taken_0x134b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134b68) {
            ctx->pc = 0x134B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B68u;
            // 0x134b6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B9Cu;
            return;
        }
    }
    ctx->pc = 0x134B70u;
    // 0x134b70: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134B70u;
    SET_GPR_U32(ctx, 31, 0x134B78u);
    ctx->pc = 0x134B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B70u;
    // 0x134b74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134B70u, 0x134B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B78u;
label_134b78:
    // 0x134b78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b7c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b84: 0x50710005  beql        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134B84u;
    {
        const bool branch_taken_0x134b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134b84) {
            ctx->pc = 0x134B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B84u;
            // 0x134b88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B9Cu;
            return;
        }
    }
    ctx->pc = 0x134B8Cu;
    // 0x134b8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134B8Cu;
    SET_GPR_U32(ctx, 31, 0x134B94u);
    ctx->pc = 0x134B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B8Cu;
    // 0x134b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134B8Cu, 0x134B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B94u;
label_134b94:
    // 0x134b94: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134b9cu;
}
