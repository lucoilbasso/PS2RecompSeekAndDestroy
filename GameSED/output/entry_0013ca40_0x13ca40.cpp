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

// Function: entry_0013ca40
// Address: 0x13ca40 - 0x13ca78
void entry_0013ca40_0x13ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca40_0x13ca40");
#endif

    ctx->pc = 0x13ca40u;

label_13ca40:
    // 0x13ca40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13ca44:
    // 0x13ca44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ca48:
    // 0x13ca48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13ca4c:
    // 0x13ca4c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13ca50:
    if (ctx->pc == 0x13CA50u) {
        ctx->pc = 0x13CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA4Cu;
        // 0x13ca50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA54u;
        goto label_13ca54;
    }
    ctx->pc = 0x13CA4Cu;
    {
        const bool branch_taken_0x13ca4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA4Cu;
        // 0x13ca50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca4c) {
            ctx->pc = 0x13CA78u;
            return;
        }
    }
    ctx->pc = 0x13CA54u;
label_13ca54:
    // 0x13ca54: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13ca58:
    // 0x13ca58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13ca5c:
    if (ctx->pc == 0x13CA5Cu) {
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA60u;
        goto label_13ca60;
    }
    ctx->pc = 0x13CA58u;
    {
        const bool branch_taken_0x13ca58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca58) {
            ctx->pc = 0x13CA78u;
            return;
        }
    }
    ctx->pc = 0x13CA60u;
label_13ca60:
    // 0x13ca60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13ca64:
    // 0x13ca64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13ca68:
    // 0x13ca68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13ca68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13ca6c:
    // 0x13ca6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13ca70:
    // 0x13ca70: 0x60f809  jalr        $v1
label_13ca74:
    if (ctx->pc == 0x13CA74u) {
        ctx->pc = 0x13CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA70u;
        // 0x13ca74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA78u;
        goto label_fallthrough_0x13ca70;
    }
    ctx->pc = 0x13CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CA78u);
        ctx->pc = 0x13CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA70u;
        // 0x13ca74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA70u, 0x13CA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13ca70:
    ctx->pc = 0x13CA78u;
}
