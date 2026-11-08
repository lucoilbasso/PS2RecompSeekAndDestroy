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

// Function: entry_0015a500
// Address: 0x15a500 - 0x15a524
void entry_0015a500_0x15a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a500_0x15a500");
#endif

    ctx->pc = 0x15a500u;

label_15a500:
    // 0x15a500: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15a500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a504:
    // 0x15a504: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a508:
    if (ctx->pc == 0x15A508u) {
        ctx->pc = 0x15A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A504u;
        // 0x15a508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A50Cu;
        goto label_15a50c;
    }
    ctx->pc = 0x15A504u;
    {
        const bool branch_taken_0x15a504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A504u;
        // 0x15a508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a504) {
            ctx->pc = 0x15A524u;
            return;
        }
    }
    ctx->pc = 0x15A50Cu;
label_15a50c:
    // 0x15a50c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a510:
    // 0x15a510: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a514:
    // 0x15a514: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a518:
    // 0x15a518: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a51c:
    // 0x15a51c: 0x60f809  jalr        $v1
label_15a520:
    if (ctx->pc == 0x15A520u) {
        ctx->pc = 0x15A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A51Cu;
        // 0x15a520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A524u;
        goto label_fallthrough_0x15a51c;
    }
    ctx->pc = 0x15A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A524u);
        ctx->pc = 0x15A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A51Cu;
        // 0x15a520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A51Cu, 0x15A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a51c:
    ctx->pc = 0x15A524u;
}
