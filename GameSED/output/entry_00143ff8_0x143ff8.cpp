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

// Function: entry_00143ff8
// Address: 0x143ff8 - 0x144028
void entry_00143ff8_0x143ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ff8_0x143ff8");
#endif

    ctx->pc = 0x143ff8u;

label_143ff8:
    // 0x143ff8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x143ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_143ffc:
    // 0x143ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_144000:
    // 0x144000: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144004:
    // 0x144004: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_144008:
    if (ctx->pc == 0x144008u) {
        ctx->pc = 0x144008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144004u;
        // 0x144008: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14400Cu;
        goto label_14400c;
    }
    ctx->pc = 0x144004u;
    {
        const bool branch_taken_0x144004 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x144008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144004u;
        // 0x144008: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144004) {
            ctx->pc = 0x144028u;
            return;
        }
    }
    ctx->pc = 0x14400Cu;
label_14400c:
    // 0x14400c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_144010:
    // 0x144010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144014:
    // 0x144014: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x144014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_144018:
    // 0x144018: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14401c:
    // 0x14401c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_144020:
    // 0x144020: 0x60f809  jalr        $v1
label_144024:
    if (ctx->pc == 0x144024u) {
        ctx->pc = 0x144024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144020u;
        // 0x144024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144028u;
        goto label_fallthrough_0x144020;
    }
    ctx->pc = 0x144020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144028u);
        ctx->pc = 0x144024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144020u;
        // 0x144024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144020u, 0x144028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x144020:
    ctx->pc = 0x144028u;
}
