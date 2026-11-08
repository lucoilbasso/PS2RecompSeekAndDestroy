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

// Function: entry_0016984c
// Address: 0x16984c - 0x16987c
void entry_0016984c_0x16984c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016984c_0x16984c");
#endif

    ctx->pc = 0x16984cu;

label_16984c:
    // 0x16984c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_169850:
    if (ctx->pc == 0x169850u) {
        ctx->pc = 0x169850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16984Cu;
        // 0x169850: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169854u;
        goto label_169854;
    }
    ctx->pc = 0x16984Cu;
    {
        const bool branch_taken_0x16984c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16984Cu;
        // 0x169850: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16984c) {
            ctx->pc = 0x16987Cu;
            return;
        }
    }
    ctx->pc = 0x169854u;
label_169854:
    // 0x169854: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x169854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_169858:
    // 0x169858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16985c:
    // 0x16985c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_169860:
    // 0x169860: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x169860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_169864:
    // 0x169864: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x169864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_169868:
    // 0x169868: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x169868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16986c:
    // 0x16986c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16986cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_169870:
    // 0x169870: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x169870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_169874:
    // 0x169874: 0x60f809  jalr        $v1
label_169878:
    if (ctx->pc == 0x169878u) {
        ctx->pc = 0x169878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169874u;
        // 0x169878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16987Cu;
        goto label_fallthrough_0x169874;
    }
    ctx->pc = 0x169874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16987Cu);
        ctx->pc = 0x169878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169874u;
        // 0x169878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169874u, 0x16987Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x169874:
    ctx->pc = 0x16987Cu;
}
