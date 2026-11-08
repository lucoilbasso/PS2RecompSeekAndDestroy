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

// Function: entry_001d29d8
// Address: 0x1d29d8 - 0x1d2a10
void entry_001d29d8_0x1d29d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d29d8_0x1d29d8");
#endif

    switch (ctx->pc) {
        case 0x1d29f8u: goto label_1d29f8;
        default: break;
    }

    ctx->pc = 0x1d29d8u;

    // 0x1d29d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d29d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d29dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d29e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d29e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1d29e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29ec: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1d29ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29f0: 0xc074bf2  jal         func_1D2FC8
    ctx->pc = 0x1D29F0u;
    SET_GPR_U32(ctx, 31, 0x1D29F8u);
    ctx->pc = 0x1D29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29F0u;
    // 0x1d29f4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FC8u, 0x1D29F0u, 0x1D29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29F8u;
label_1d29f8:
    // 0x1d29f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d29f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29fc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1d2a00: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2A00u;
    {
        const bool branch_taken_0x1d2a00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A00u;
        // 0x1d2a04: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a00) {
            ctx->pc = 0x1D2A10u;
            return;
        }
    }
    ctx->pc = 0x1D2A08u;
    // 0x1d2a08: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2A08u;
    {
        const bool branch_taken_0x1d2a08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A08u;
        // 0x1d2a0c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a08) {
            ctx->pc = 0x1D2A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D2A10u;
}
