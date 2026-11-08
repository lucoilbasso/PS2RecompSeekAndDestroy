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

// Function: entry_0013c810
// Address: 0x13c810 - 0x13c83c
void entry_0013c810_0x13c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c810_0x13c810");
#endif

    ctx->pc = 0x13c810u;

label_13c810:
    // 0x13c810: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13c810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13c814:
    // 0x13c814: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x13c814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_13c818:
    // 0x13c818: 0x8cc6020c  lw          $a2, 0x20C($a2)
    ctx->pc = 0x13c818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_13c81c:
    // 0x13c81c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13c820:
    if (ctx->pc == 0x13C820u) {
        ctx->pc = 0x13C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C81Cu;
        // 0x13c820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C824u;
        goto label_13c824;
    }
    ctx->pc = 0x13C81Cu;
    {
        const bool branch_taken_0x13c81c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C81Cu;
        // 0x13c820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c81c) {
            ctx->pc = 0x13C83Cu;
            return;
        }
    }
    ctx->pc = 0x13C824u;
label_13c824:
    // 0x13c824: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c828:
    // 0x13c828: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c82c:
    // 0x13c82c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c830:
    // 0x13c830: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c834:
    // 0x13c834: 0x60f809  jalr        $v1
label_13c838:
    if (ctx->pc == 0x13C838u) {
        ctx->pc = 0x13C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C834u;
        // 0x13c838: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C83Cu;
        goto label_fallthrough_0x13c834;
    }
    ctx->pc = 0x13C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C83Cu);
        ctx->pc = 0x13C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C834u;
        // 0x13c838: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C834u, 0x13C83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13c834:
    ctx->pc = 0x13C83Cu;
}
