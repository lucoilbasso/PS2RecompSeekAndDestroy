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

// Function: entry_00160310
// Address: 0x160310 - 0x160340
void entry_00160310_0x160310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160310_0x160310");
#endif

    switch (ctx->pc) {
        case 0x16033cu: goto label_16033c;
        default: break;
    }

    ctx->pc = 0x160310u;

label_160310:
    // 0x160310: 0x14a0002d  bnez        $a1, . + 4 + (0x2D << 2)
label_160314:
    if (ctx->pc == 0x160314u) {
        ctx->pc = 0x160314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160310u;
        // 0x160314: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160318u;
        goto label_160318;
    }
    ctx->pc = 0x160310u;
    {
        const bool branch_taken_0x160310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x160314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160310u;
        // 0x160314: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160310) {
            ctx->pc = 0x1603C8u;
            return;
        }
    }
    ctx->pc = 0x160318u;
label_160318:
    // 0x160318: 0x8e060f30  lw          $a2, 0xF30($s0)
    ctx->pc = 0x160318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3888)));
label_16031c:
    // 0x16031c: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
label_160320:
    if (ctx->pc == 0x160320u) {
        ctx->pc = 0x160320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16031Cu;
        // 0x160320: 0x8e060f34  lw          $a2, 0xF34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160324u;
        goto label_160324;
    }
    ctx->pc = 0x16031Cu;
    {
        const bool branch_taken_0x16031c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16031c) {
            ctx->pc = 0x160320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16031Cu;
            // 0x160320: 0x8e060f34  lw          $a2, 0xF34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160340u;
            return;
        }
    }
    ctx->pc = 0x160324u;
label_160324:
    // 0x160324: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160328:
    // 0x160328: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16032c:
    // 0x16032c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160330:
    // 0x160330: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160334:
    // 0x160334: 0x60f809  jalr        $v1
label_160338:
    if (ctx->pc == 0x160338u) {
        ctx->pc = 0x160338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160334u;
        // 0x160338: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16033Cu;
        goto label_16033c;
    }
    ctx->pc = 0x160334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16033Cu);
        ctx->pc = 0x160338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160334u;
        // 0x160338: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160334u, 0x16033Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16033Cu;
label_16033c:
    // 0x16033c: 0x8e060f34  lw          $a2, 0xF34($s0)
    ctx->pc = 0x16033cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
    ctx->pc = 0x160340u;
}
