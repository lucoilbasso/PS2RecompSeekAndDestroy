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

// Function: entry_00102860
// Address: 0x102860 - 0x102884
void entry_00102860_0x102860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102860_0x102860");
#endif

    ctx->pc = 0x102860u;

label_102860:
    // 0x102860: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102864:
    // 0x102864: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102868:
    if (ctx->pc == 0x102868u) {
        ctx->pc = 0x102868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102864u;
        // 0x102868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10286Cu;
        goto label_10286c;
    }
    ctx->pc = 0x102864u;
    {
        const bool branch_taken_0x102864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102864u;
        // 0x102868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102864) {
            ctx->pc = 0x102884u;
            return;
        }
    }
    ctx->pc = 0x10286Cu;
label_10286c:
    // 0x10286c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102870:
    // 0x102870: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102874:
    // 0x102874: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102878:
    // 0x102878: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10287c:
    // 0x10287c: 0x60f809  jalr        $v1
label_102880:
    if (ctx->pc == 0x102880u) {
        ctx->pc = 0x102880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10287Cu;
        // 0x102880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102884u;
        goto label_fallthrough_0x10287c;
    }
    ctx->pc = 0x10287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102884u);
        ctx->pc = 0x102880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10287Cu;
        // 0x102880: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10287Cu, 0x102884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10287c:
    ctx->pc = 0x102884u;
}
