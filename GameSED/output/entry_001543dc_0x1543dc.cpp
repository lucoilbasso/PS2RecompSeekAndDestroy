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

// Function: entry_001543dc
// Address: 0x1543dc - 0x154410
void entry_001543dc_0x1543dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001543dc_0x1543dc");
#endif

    switch (ctx->pc) {
        case 0x154408u: goto label_154408;
        default: break;
    }

    ctx->pc = 0x1543dcu;

label_1543dc:
    // 0x1543dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1543e0:
    if (ctx->pc == 0x1543E0u) {
        ctx->pc = 0x1543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543DCu;
        // 0x1543e0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543E4u;
        goto label_1543e4;
    }
    ctx->pc = 0x1543DCu;
    {
        const bool branch_taken_0x1543dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543DCu;
        // 0x1543e0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543dc) {
            ctx->pc = 0x154410u;
            return;
        }
    }
    ctx->pc = 0x1543E4u;
label_1543e4:
    // 0x1543e4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1543e8:
    // 0x1543e8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1543ec:
    if (ctx->pc == 0x1543ECu) {
        ctx->pc = 0x1543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543E8u;
        // 0x1543ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543F0u;
        goto label_1543f0;
    }
    ctx->pc = 0x1543E8u;
    {
        const bool branch_taken_0x1543e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543E8u;
        // 0x1543ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543e8) {
            ctx->pc = 0x154410u;
            return;
        }
    }
    ctx->pc = 0x1543F0u;
label_1543f0:
    // 0x1543f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1543f4:
    // 0x1543f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1543f8:
    // 0x1543f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1543fc:
    // 0x1543fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154400:
    // 0x154400: 0x60f809  jalr        $v1
label_154404:
    if (ctx->pc == 0x154404u) {
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154400u;
        // 0x154404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154408u;
        goto label_154408;
    }
    ctx->pc = 0x154400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154408u);
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154400u;
        // 0x154404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154400u, 0x154408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154408u;
label_154408:
    // 0x154408: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x154408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15440c:
    // 0x15440c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x154410u;
}
