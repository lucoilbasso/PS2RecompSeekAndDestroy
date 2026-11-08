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

// Function: entry_00143ea0
// Address: 0x143ea0 - 0x143ec4
void entry_00143ea0_0x143ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ea0_0x143ea0");
#endif

    ctx->pc = 0x143ea0u;

label_143ea0:
    // 0x143ea0: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x143ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_143ea4:
    // 0x143ea4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143ea8:
    if (ctx->pc == 0x143EA8u) {
        ctx->pc = 0x143EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EA4u;
        // 0x143ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EACu;
        goto label_143eac;
    }
    ctx->pc = 0x143EA4u;
    {
        const bool branch_taken_0x143ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EA4u;
        // 0x143ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ea4) {
            ctx->pc = 0x143EC4u;
            return;
        }
    }
    ctx->pc = 0x143EACu;
label_143eac:
    // 0x143eac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143eb0:
    // 0x143eb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143eb4:
    // 0x143eb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143eb8:
    // 0x143eb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143ebc:
    // 0x143ebc: 0x60f809  jalr        $v1
label_143ec0:
    if (ctx->pc == 0x143EC0u) {
        ctx->pc = 0x143EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EBCu;
        // 0x143ec0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EC4u;
        goto label_fallthrough_0x143ebc;
    }
    ctx->pc = 0x143EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143EC4u);
        ctx->pc = 0x143EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EBCu;
        // 0x143ec0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EBCu, 0x143EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143ebc:
    ctx->pc = 0x143EC4u;
}
