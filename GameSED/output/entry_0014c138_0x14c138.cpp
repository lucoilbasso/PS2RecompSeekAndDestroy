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

// Function: entry_0014c138
// Address: 0x14c138 - 0x14c160
void entry_0014c138_0x14c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c138_0x14c138");
#endif

    switch (ctx->pc) {
        case 0x14c158u: goto label_14c158;
        default: break;
    }

    ctx->pc = 0x14c138u;

label_14c138:
    // 0x14c138: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_14c13c:
    if (ctx->pc == 0x14C13Cu) {
        ctx->pc = 0x14C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C138u;
        // 0x14c13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C140u;
        goto label_14c140;
    }
    ctx->pc = 0x14C138u;
    {
        const bool branch_taken_0x14c138 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C138u;
        // 0x14c13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c138) {
            ctx->pc = 0x14C110u;
            return;
        }
    }
    ctx->pc = 0x14C140u;
label_14c140:
    // 0x14c140: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14c144:
    // 0x14c144: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14c148:
    // 0x14c148: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c14c:
    // 0x14c14c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c150:
    // 0x14c150: 0x60f809  jalr        $v1
label_14c154:
    if (ctx->pc == 0x14C154u) {
        ctx->pc = 0x14C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C150u;
        // 0x14c154: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C158u;
        goto label_14c158;
    }
    ctx->pc = 0x14C150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C158u);
        ctx->pc = 0x14C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C150u;
        // 0x14c154: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C150u, 0x14C158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C158u;
label_14c158:
    // 0x14c158: 0x10000034  b           . + 4 + (0x34 << 2)
label_14c15c:
    if (ctx->pc == 0x14C15Cu) {
        ctx->pc = 0x14C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C158u;
        // 0x14c15c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C160u;
        goto label_fallthrough_0x14c158;
    }
    ctx->pc = 0x14C158u;
    {
        const bool branch_taken_0x14c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C158u;
        // 0x14c15c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c158) {
            ctx->pc = 0x14C22Cu;
            return;
        }
    }
label_fallthrough_0x14c158:
    ctx->pc = 0x14C160u;
}
