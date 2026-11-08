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

// Function: entry_001114c4
// Address: 0x1114c4 - 0x1114f8
void entry_001114c4_0x1114c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001114c4_0x1114c4");
#endif

    switch (ctx->pc) {
        case 0x1114d8u: goto label_1114d8;
        case 0x1114f0u: goto label_1114f0;
        default: break;
    }

    ctx->pc = 0x1114c4u;

    // 0x1114c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1114C4u;
    {
        const bool branch_taken_0x1114c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114C4u;
        // 0x1114c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114c4) {
            ctx->pc = 0x111508u;
            return;
        }
    }
    ctx->pc = 0x1114CCu;
    // 0x1114cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1114ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1114d0: 0xc04425e  jal         func_110978
    ctx->pc = 0x1114D0u;
    SET_GPR_U32(ctx, 31, 0x1114D8u);
    ctx->pc = 0x1114D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114D0u;
    // 0x1114d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x1114D0u, 0x1114D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114D8u;
label_1114d8:
    // 0x1114d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1114D8u;
    {
        const bool branch_taken_0x1114d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114D8u;
        // 0x1114dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114d8) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1114E0u;
    // 0x1114e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1114e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1114e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e8: 0xc0442a8  jal         func_110AA0
    ctx->pc = 0x1114E8u;
    SET_GPR_U32(ctx, 31, 0x1114F0u);
    ctx->pc = 0x1114ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E8u;
    // 0x1114ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AA0u, 0x1114E8u, 0x1114F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114F0u;
label_1114f0:
    // 0x1114f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1114F0u;
    {
        const bool branch_taken_0x1114f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114F0u;
        // 0x1114f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114f0) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1114F8u;
}
