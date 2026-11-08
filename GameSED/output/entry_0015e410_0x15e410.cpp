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

// Function: entry_0015e410
// Address: 0x15e410 - 0x15e440
void entry_0015e410_0x15e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e410_0x15e410");
#endif

    ctx->pc = 0x15e410u;

label_15e410:
    // 0x15e410: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x15e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15e414:
    // 0x15e414: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e418:
    // 0x15e418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e41c:
    // 0x15e41c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e420:
    if (ctx->pc == 0x15E420u) {
        ctx->pc = 0x15E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E41Cu;
        // 0x15e420: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E424u;
        goto label_15e424;
    }
    ctx->pc = 0x15E41Cu;
    {
        const bool branch_taken_0x15e41c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E41Cu;
        // 0x15e420: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e41c) {
            ctx->pc = 0x15E440u;
            return;
        }
    }
    ctx->pc = 0x15E424u;
label_15e424:
    // 0x15e424: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e428:
    // 0x15e428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e42c:
    // 0x15e42c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e430:
    // 0x15e430: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e434:
    // 0x15e434: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e438:
    // 0x15e438: 0x60f809  jalr        $v1
label_15e43c:
    if (ctx->pc == 0x15E43Cu) {
        ctx->pc = 0x15E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E438u;
        // 0x15e43c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E440u;
        goto label_fallthrough_0x15e438;
    }
    ctx->pc = 0x15E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E440u);
        ctx->pc = 0x15E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E438u;
        // 0x15e43c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E438u, 0x15E440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e438:
    ctx->pc = 0x15E440u;
}
