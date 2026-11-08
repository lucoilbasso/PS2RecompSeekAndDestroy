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

// Function: entry_0014a8e0
// Address: 0x14a8e0 - 0x14a908
void entry_0014a8e0_0x14a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a8e0_0x14a8e0");
#endif

    switch (ctx->pc) {
        case 0x14a904u: goto label_14a904;
        default: break;
    }

    ctx->pc = 0x14a8e0u;

label_14a8e0:
    // 0x14a8e0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_14a8e4:
    // 0x14a8e4: 0x52620008  beql        $s3, $v0, . + 4 + (0x8 << 2)
label_14a8e8:
    if (ctx->pc == 0x14A8E8u) {
        ctx->pc = 0x14A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8E4u;
        // 0x14a8e8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8ECu;
        goto label_14a8ec;
    }
    ctx->pc = 0x14A8E4u;
    {
        const bool branch_taken_0x14a8e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a8e4) {
            ctx->pc = 0x14A8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A8E4u;
            // 0x14a8e8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A908u;
            return;
        }
    }
    ctx->pc = 0x14A8ECu;
label_14a8ec:
    // 0x14a8ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14a8f0:
    // 0x14a8f0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14a8f4:
    // 0x14a8f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a8f8:
    // 0x14a8f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a8fc:
    // 0x14a8fc: 0x60f809  jalr        $v1
label_14a900:
    if (ctx->pc == 0x14A900u) {
        ctx->pc = 0x14A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8FCu;
        // 0x14a900: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A904u;
        goto label_14a904;
    }
    ctx->pc = 0x14A8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A904u);
        ctx->pc = 0x14A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8FCu;
        // 0x14a900: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8FCu, 0x14A904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A904u;
label_14a904:
    // 0x14a904: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x14a904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x14a908u;
}
