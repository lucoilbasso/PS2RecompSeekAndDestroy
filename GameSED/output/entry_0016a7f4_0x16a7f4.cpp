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

// Function: entry_0016a7f4
// Address: 0x16a7f4 - 0x16a81c
void entry_0016a7f4_0x16a7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a7f4_0x16a7f4");
#endif

    ctx->pc = 0x16a7f4u;

label_16a7f4:
    // 0x16a7f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a7f8:
    // 0x16a7f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_16a7fc:
    if (ctx->pc == 0x16A7FCu) {
        ctx->pc = 0x16A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7F8u;
        // 0x16a7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A800u;
        goto label_16a800;
    }
    ctx->pc = 0x16A7F8u;
    {
        const bool branch_taken_0x16a7f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7F8u;
        // 0x16a7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7f8) {
            ctx->pc = 0x16A81Cu;
            return;
        }
    }
    ctx->pc = 0x16A800u;
label_16a800:
    // 0x16a800: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a804:
    // 0x16a804: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a808:
    // 0x16a808: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a80c:
    // 0x16a80c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a810:
    // 0x16a810: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a814:
    // 0x16a814: 0x60f809  jalr        $v1
label_16a818:
    if (ctx->pc == 0x16A818u) {
        ctx->pc = 0x16A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A814u;
        // 0x16a818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A81Cu;
        goto label_fallthrough_0x16a814;
    }
    ctx->pc = 0x16A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A81Cu);
        ctx->pc = 0x16A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A814u;
        // 0x16a818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A814u, 0x16A81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16a814:
    ctx->pc = 0x16A81Cu;
}
