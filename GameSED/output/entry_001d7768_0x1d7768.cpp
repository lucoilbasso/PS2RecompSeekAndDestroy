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

// Function: entry_001d7768
// Address: 0x1d7768 - 0x1d77a0
void entry_001d7768_0x1d7768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7768_0x1d7768");
#endif

    ctx->pc = 0x1d7768u;

label_1d7768:
    // 0x1d7768: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1d776c:
    // 0x1d776c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d776cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d7770:
    // 0x1d7770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d7774:
    // 0x1d7774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7778:
    // 0x1d7778: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d7778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d777c:
    // 0x1d777c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d7780:
    if (ctx->pc == 0x1D7780u) {
        ctx->pc = 0x1D7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D777Cu;
        // 0x1d7780: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7784u;
        goto label_1d7784;
    }
    ctx->pc = 0x1D777Cu;
    {
        const bool branch_taken_0x1d777c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D777Cu;
        // 0x1d7780: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d777c) {
            ctx->pc = 0x1D77A0u;
            return;
        }
    }
    ctx->pc = 0x1D7784u;
label_1d7784:
    // 0x1d7784: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7788:
    // 0x1d7788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d778c:
    // 0x1d778c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7790:
    // 0x1d7790: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7794:
    // 0x1d7794: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7798:
    // 0x1d7798: 0x60f809  jalr        $v1
label_1d779c:
    if (ctx->pc == 0x1D779Cu) {
        ctx->pc = 0x1D779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7798u;
        // 0x1d779c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77A0u;
        goto label_fallthrough_0x1d7798;
    }
    ctx->pc = 0x1D7798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D77A0u);
        ctx->pc = 0x1D779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7798u;
        // 0x1d779c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7798u, 0x1D77A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d7798:
    ctx->pc = 0x1D77A0u;
}
