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

// Function: entry_001d5a64
// Address: 0x1d5a64 - 0x1d5a8c
void entry_001d5a64_0x1d5a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a64_0x1d5a64");
#endif

    switch (ctx->pc) {
        case 0x1d5a7cu: goto label_1d5a7c;
        default: break;
    }

    ctx->pc = 0x1d5a64u;

    // 0x1d5a64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5A64u;
    {
        const bool branch_taken_0x1d5a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A64u;
        // 0x1d5a68: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a64) {
            ctx->pc = 0x1D5A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D5A6Cu;
    // 0x1d5a6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a74: 0xc0755ea  jal         func_1D57A8
    ctx->pc = 0x1D5A74u;
    SET_GPR_U32(ctx, 31, 0x1D5A7Cu);
    ctx->pc = 0x1D5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A74u;
    // 0x1d5a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57A8u, 0x1D5A74u, 0x1D5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A7Cu;
label_1d5a7c:
    // 0x1d5a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a84: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D5A84u;
    SET_GPR_U32(ctx, 31, 0x1D5A8Cu);
    ctx->pc = 0x1D5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A84u;
    // 0x1d5a88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D5A84u, 0x1D5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A8Cu;
}
