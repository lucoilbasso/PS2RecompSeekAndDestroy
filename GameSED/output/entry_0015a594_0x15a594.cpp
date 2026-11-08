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

// Function: entry_0015a594
// Address: 0x15a594 - 0x15a5c8
void entry_0015a594_0x15a594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a594_0x15a594");
#endif

    ctx->pc = 0x15a594u;

label_15a594:
    // 0x15a594: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15a594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_15a598:
    // 0x15a598: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_15a59c:
    if (ctx->pc == 0x15A59Cu) {
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5A0u;
        goto label_15a5a0;
    }
    ctx->pc = 0x15A598u;
    {
        const bool branch_taken_0x15a598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a598) {
            ctx->pc = 0x15A814u;
            return;
        }
    }
    ctx->pc = 0x15A5A0u;
label_15a5a0:
    // 0x15a5a0: 0x267000a0  addiu       $s0, $s3, 0xA0
    ctx->pc = 0x15a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_15a5a4:
    // 0x15a5a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a5a8:
    // 0x15a5a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a5ac:
    if (ctx->pc == 0x15A5ACu) {
        ctx->pc = 0x15A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A8u;
        // 0x15a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5B0u;
        goto label_15a5b0;
    }
    ctx->pc = 0x15A5A8u;
    {
        const bool branch_taken_0x15a5a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A8u;
        // 0x15a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5a8) {
            ctx->pc = 0x15A5C8u;
            return;
        }
    }
    ctx->pc = 0x15A5B0u;
label_15a5b0:
    // 0x15a5b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a5b4:
    // 0x15a5b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a5b8:
    // 0x15a5b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a5bc:
    // 0x15a5bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a5c0:
    // 0x15a5c0: 0x60f809  jalr        $v1
label_15a5c4:
    if (ctx->pc == 0x15A5C4u) {
        ctx->pc = 0x15A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5C0u;
        // 0x15a5c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5C8u;
        goto label_fallthrough_0x15a5c0;
    }
    ctx->pc = 0x15A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A5C8u);
        ctx->pc = 0x15A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5C0u;
        // 0x15a5c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A5C0u, 0x15A5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a5c0:
    ctx->pc = 0x15A5C8u;
}
