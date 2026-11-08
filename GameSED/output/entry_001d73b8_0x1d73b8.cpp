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

// Function: entry_001d73b8
// Address: 0x1d73b8 - 0x1d73f0
void entry_001d73b8_0x1d73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d73b8_0x1d73b8");
#endif

    ctx->pc = 0x1d73b8u;

label_1d73b8:
    // 0x1d73b8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1d73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d73bc:
    // 0x1d73bc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d73c0:
    // 0x1d73c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d73c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d73c4:
    // 0x1d73c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d73c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d73c8:
    // 0x1d73c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d73cc:
    // 0x1d73cc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d73d0:
    if (ctx->pc == 0x1D73D0u) {
        ctx->pc = 0x1D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73CCu;
        // 0x1d73d0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73D4u;
        goto label_1d73d4;
    }
    ctx->pc = 0x1D73CCu;
    {
        const bool branch_taken_0x1d73cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73CCu;
        // 0x1d73d0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73cc) {
            ctx->pc = 0x1D73F0u;
            return;
        }
    }
    ctx->pc = 0x1D73D4u;
label_1d73d4:
    // 0x1d73d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d73d8:
    // 0x1d73d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d73d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d73dc:
    // 0x1d73dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d73e0:
    // 0x1d73e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d73e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d73e4:
    // 0x1d73e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d73e8:
    // 0x1d73e8: 0x60f809  jalr        $v1
label_1d73ec:
    if (ctx->pc == 0x1D73ECu) {
        ctx->pc = 0x1D73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E8u;
        // 0x1d73ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73F0u;
        goto label_fallthrough_0x1d73e8;
    }
    ctx->pc = 0x1D73E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D73F0u);
        ctx->pc = 0x1D73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E8u;
        // 0x1d73ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73E8u, 0x1D73F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d73e8:
    ctx->pc = 0x1D73F0u;
}
