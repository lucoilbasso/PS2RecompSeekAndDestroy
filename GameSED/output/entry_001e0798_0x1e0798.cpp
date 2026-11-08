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

// Function: entry_001e0798
// Address: 0x1e0798 - 0x1e07f8
void entry_001e0798_0x1e0798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0798_0x1e0798");
#endif

    switch (ctx->pc) {
        case 0x1e07d4u: goto label_1e07d4;
        default: break;
    }

    ctx->pc = 0x1e0798u;

label_1e0798:
    // 0x1e0798: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x1e0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1e079c:
    // 0x1e079c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e079cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e07a0:
    // 0x1e07a0: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x1e07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
label_1e07a4:
    // 0x1e07a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1e07a8:
    // 0x1e07a8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_1e07ac:
    if (ctx->pc == 0x1E07ACu) {
        ctx->pc = 0x1E07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A8u;
        // 0x1e07ac: 0xae5101b0  sw          $s1, 0x1B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07B0u;
        goto label_1e07b0;
    }
    ctx->pc = 0x1E07A8u;
    {
        const bool branch_taken_0x1e07a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A8u;
        // 0x1e07ac: 0xae5101b0  sw          $s1, 0x1B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07a8) {
            ctx->pc = 0x1E07F8u;
            return;
        }
    }
    ctx->pc = 0x1E07B0u;
label_1e07b0:
    // 0x1e07b0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1e07b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e07b4:
    // 0x1e07b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e07b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e07b8:
    // 0x1e07b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e07b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e07bc:
    // 0x1e07bc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1e07c0:
    // 0x1e07c0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1e07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1e07c4:
    // 0x1e07c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e07c8:
    // 0x1e07c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e07cc:
    // 0x1e07cc: 0x60f809  jalr        $v1
label_1e07d0:
    if (ctx->pc == 0x1E07D0u) {
        ctx->pc = 0x1E07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07CCu;
        // 0x1e07d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07D4u;
        goto label_1e07d4;
    }
    ctx->pc = 0x1E07CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E07D4u);
        ctx->pc = 0x1E07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07CCu;
        // 0x1e07d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07CCu, 0x1E07D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E07D4u;
label_1e07d4:
    // 0x1e07d4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1e07d8:
    if (ctx->pc == 0x1E07D8u) {
        ctx->pc = 0x1E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D4u;
        // 0x1e07d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07DCu;
        goto label_1e07dc;
    }
    ctx->pc = 0x1E07D4u;
    {
        const bool branch_taken_0x1e07d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D4u;
        // 0x1e07d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07d4) {
            ctx->pc = 0x1E07F8u;
            return;
        }
    }
    ctx->pc = 0x1E07DCu;
label_1e07dc:
    // 0x1e07dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e07e0:
    // 0x1e07e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e07e4:
    // 0x1e07e4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1e07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1e07e8:
    // 0x1e07e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e07ec:
    // 0x1e07ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e07f0:
    // 0x1e07f0: 0x60f809  jalr        $v1
label_1e07f4:
    if (ctx->pc == 0x1E07F4u) {
        ctx->pc = 0x1E07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F0u;
        // 0x1e07f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07F8u;
        goto label_fallthrough_0x1e07f0;
    }
    ctx->pc = 0x1E07F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E07F8u);
        ctx->pc = 0x1E07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F0u;
        // 0x1e07f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07F0u, 0x1E07F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e07f0:
    ctx->pc = 0x1E07F8u;
}
