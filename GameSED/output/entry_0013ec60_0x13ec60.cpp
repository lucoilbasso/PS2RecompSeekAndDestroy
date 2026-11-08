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

// Function: entry_0013ec60
// Address: 0x13ec60 - 0x13ec98
void entry_0013ec60_0x13ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ec60_0x13ec60");
#endif

    ctx->pc = 0x13ec60u;

label_13ec60:
    // 0x13ec60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13ec64:
    // 0x13ec64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ec68:
    // 0x13ec68: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13ec6c:
    // 0x13ec6c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13ec70:
    if (ctx->pc == 0x13EC70u) {
        ctx->pc = 0x13EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC6Cu;
        // 0x13ec70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC74u;
        goto label_13ec74;
    }
    ctx->pc = 0x13EC6Cu;
    {
        const bool branch_taken_0x13ec6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC6Cu;
        // 0x13ec70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec6c) {
            ctx->pc = 0x13EC98u;
            return;
        }
    }
    ctx->pc = 0x13EC74u;
label_13ec74:
    // 0x13ec74: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13ec78:
    // 0x13ec78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13ec7c:
    if (ctx->pc == 0x13EC7Cu) {
        ctx->pc = 0x13EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC78u;
        // 0x13ec7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC80u;
        goto label_13ec80;
    }
    ctx->pc = 0x13EC78u;
    {
        const bool branch_taken_0x13ec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC78u;
        // 0x13ec7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec78) {
            ctx->pc = 0x13EC98u;
            return;
        }
    }
    ctx->pc = 0x13EC80u;
label_13ec80:
    // 0x13ec80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13ec84:
    // 0x13ec84: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13ec88:
    // 0x13ec88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13ec88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13ec8c:
    // 0x13ec8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13ec90:
    // 0x13ec90: 0x60f809  jalr        $v1
label_13ec94:
    if (ctx->pc == 0x13EC94u) {
        ctx->pc = 0x13EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC90u;
        // 0x13ec94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC98u;
        goto label_fallthrough_0x13ec90;
    }
    ctx->pc = 0x13EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13EC98u);
        ctx->pc = 0x13EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC90u;
        // 0x13ec94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC90u, 0x13EC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13ec90:
    ctx->pc = 0x13EC98u;
}
