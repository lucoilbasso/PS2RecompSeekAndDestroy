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

// Function: entry_001b9658
// Address: 0x1b9658 - 0x1b96a0
void entry_001b9658_0x1b9658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9658_0x1b9658");
#endif

    switch (ctx->pc) {
        case 0x1b9694u: goto label_1b9694;
        default: break;
    }

    ctx->pc = 0x1b9658u;

label_1b9658:
    // 0x1b9658: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b965c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b9660: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b9660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9664: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b9668: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1b9668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b966c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b966cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9670: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9670u;
    {
        const bool branch_taken_0x1b9670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9670) {
            ctx->pc = 0x1B9658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9658;
        }
    }
    ctx->pc = 0x1B9678u;
    // 0x1b9678: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b9678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b967c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b9680: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1b9680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1b9684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9688: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1b9688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1b968c: 0xc06e238  jal         func_1B88E0
    ctx->pc = 0x1B968Cu;
    SET_GPR_U32(ctx, 31, 0x1B9694u);
    ctx->pc = 0x1B9690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B968Cu;
    // 0x1b9690: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B88E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B88E0u, 0x1B968Cu, 0x1B9694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9694u;
label_1b9694:
    // 0x1b9694: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b9694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b9698: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1b9698u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1b969c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b969cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b96a0u;
}
