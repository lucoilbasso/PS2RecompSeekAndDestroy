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

// Function: entry_00102788
// Address: 0x102788 - 0x1027ac
void entry_00102788_0x102788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102788_0x102788");
#endif

    ctx->pc = 0x102788u;

label_102788:
    // 0x102788: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10278c:
    // 0x10278c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102790:
    if (ctx->pc == 0x102790u) {
        ctx->pc = 0x102790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10278Cu;
        // 0x102790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102794u;
        goto label_102794;
    }
    ctx->pc = 0x10278Cu;
    {
        const bool branch_taken_0x10278c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10278Cu;
        // 0x102790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10278c) {
            ctx->pc = 0x1027ACu;
            return;
        }
    }
    ctx->pc = 0x102794u;
label_102794:
    // 0x102794: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102798:
    // 0x102798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10279c:
    // 0x10279c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10279cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1027a0:
    // 0x1027a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1027a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1027a4:
    // 0x1027a4: 0x60f809  jalr        $v1
label_1027a8:
    if (ctx->pc == 0x1027A8u) {
        ctx->pc = 0x1027A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027A4u;
        // 0x1027a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027ACu;
        goto label_fallthrough_0x1027a4;
    }
    ctx->pc = 0x1027A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1027ACu);
        ctx->pc = 0x1027A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027A4u;
        // 0x1027a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1027A4u, 0x1027ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1027a4:
    ctx->pc = 0x1027ACu;
}
