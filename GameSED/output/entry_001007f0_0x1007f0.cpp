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

// Function: entry_001007f0
// Address: 0x1007f0 - 0x100828
void entry_001007f0_0x1007f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007f0_0x1007f0");
#endif

    ctx->pc = 0x1007f0u;

label_1007f0:
    // 0x1007f0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1007f4:
    // 0x1007f4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1007f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1007f8:
    // 0x1007f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1007f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1007fc:
    // 0x1007fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_100800:
    // 0x100800: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100804:
    // 0x100804: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100808:
    if (ctx->pc == 0x100808u) {
        ctx->pc = 0x100808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100804u;
        // 0x100808: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10080Cu;
        goto label_10080c;
    }
    ctx->pc = 0x100804u;
    {
        const bool branch_taken_0x100804 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100804u;
        // 0x100808: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100804) {
            ctx->pc = 0x100828u;
            return;
        }
    }
    ctx->pc = 0x10080Cu;
label_10080c:
    // 0x10080c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100810:
    // 0x100810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100814:
    // 0x100814: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100818:
    // 0x100818: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10081c:
    // 0x10081c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100820:
    // 0x100820: 0x60f809  jalr        $v1
label_100824:
    if (ctx->pc == 0x100824u) {
        ctx->pc = 0x100824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100820u;
        // 0x100824: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100828u;
        goto label_fallthrough_0x100820;
    }
    ctx->pc = 0x100820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100828u);
        ctx->pc = 0x100824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100820u;
        // 0x100824: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100820u, 0x100828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100820:
    ctx->pc = 0x100828u;
}
