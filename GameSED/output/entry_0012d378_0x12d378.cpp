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

// Function: entry_0012d378
// Address: 0x12d378 - 0x12d3a8
void entry_0012d378_0x12d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d378_0x12d378");
#endif

    switch (ctx->pc) {
        case 0x12d3a0u: goto label_12d3a0;
        default: break;
    }

    ctx->pc = 0x12d378u;

    // 0x12d378: 0x10520017  beq         $v0, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x12D378u;
    {
        const bool branch_taken_0x12d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x12D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D378u;
        // 0x12d37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d378) {
            ctx->pc = 0x12D3D8u;
            return;
        }
    }
    ctx->pc = 0x12D380u;
    // 0x12d380: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D380u;
    {
        const bool branch_taken_0x12d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d380) {
            ctx->pc = 0x12D384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D380u;
            // 0x12d384: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D3A8u;
            return;
        }
    }
    ctx->pc = 0x12D388u;
    // 0x12d388: 0x5054001b  beql        $v0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D388u;
    {
        const bool branch_taken_0x12d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x12d388) {
            ctx->pc = 0x12D38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D388u;
            // 0x12d38c: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D3F8u;
            return;
        }
    }
    ctx->pc = 0x12D390u;
    // 0x12d390: 0x1453001a  bne         $v0, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D390u;
    {
        const bool branch_taken_0x12d390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x12D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D390u;
        // 0x12d394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d390) {
            ctx->pc = 0x12D3FCu;
            return;
        }
    }
    ctx->pc = 0x12D398u;
    // 0x12d398: 0xc04b46c  jal         func_12D1B0
    ctx->pc = 0x12D398u;
    SET_GPR_U32(ctx, 31, 0x12D3A0u);
    ctx->pc = 0x12D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D398u;
    // 0x12d39c: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1B0u, 0x12D398u, 0x12D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3A0u;
label_12d3a0:
    // 0x12d3a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12D3A0u;
    {
        const bool branch_taken_0x12d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3a0) {
            ctx->pc = 0x12D3FCu;
            return;
        }
    }
    ctx->pc = 0x12D3A8u;
}
