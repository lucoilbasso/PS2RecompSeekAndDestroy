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

// Function: entry_0015af70
// Address: 0x15af70 - 0x15af90
void entry_0015af70_0x15af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af70_0x15af70");
#endif

    switch (ctx->pc) {
        case 0x15af84u: goto label_15af84;
        default: break;
    }

    ctx->pc = 0x15af70u;

label_15af70:
    // 0x15af70: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15af74:
    // 0x15af74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15af78:
    // 0x15af78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15af78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15af7c:
    // 0x15af7c: 0x60f809  jalr        $v1
label_15af80:
    if (ctx->pc == 0x15AF80u) {
        ctx->pc = 0x15AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF7Cu;
        // 0x15af80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF84u;
        goto label_15af84;
    }
    ctx->pc = 0x15AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AF84u);
        ctx->pc = 0x15AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF7Cu;
        // 0x15af80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF7Cu, 0x15AF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF84u;
label_15af84:
    // 0x15af84: 0x1000000b  b           . + 4 + (0xB << 2)
label_15af88:
    if (ctx->pc == 0x15AF88u) {
        ctx->pc = 0x15AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF84u;
        // 0x15af88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF8Cu;
        goto label_15af8c;
    }
    ctx->pc = 0x15AF84u;
    {
        const bool branch_taken_0x15af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF84u;
        // 0x15af88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af84) {
            ctx->pc = 0x15AFB4u;
            return;
        }
    }
    ctx->pc = 0x15AF8Cu;
label_15af8c:
    // 0x15af8c: 0x0  nop
    ctx->pc = 0x15af8cu;
    // NOP
    ctx->pc = 0x15af90u;
}
