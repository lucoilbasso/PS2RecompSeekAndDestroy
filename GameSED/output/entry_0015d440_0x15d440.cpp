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

// Function: entry_0015d440
// Address: 0x15d440 - 0x15d4a0
void entry_0015d440_0x15d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d440_0x15d440");
#endif

    switch (ctx->pc) {
        case 0x15d468u: goto label_15d468;
        case 0x15d494u: goto label_15d494;
        default: break;
    }

    ctx->pc = 0x15d440u;

label_15d440:
    // 0x15d440: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15d444:
    // 0x15d444: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d448:
    // 0x15d448: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15d44c:
    // 0x15d44c: 0xacc3012c  sw          $v1, 0x12C($a2)
    ctx->pc = 0x15d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 300), GPR_U32(ctx, 3));
label_15d450:
    // 0x15d450: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_15d454:
    // 0x15d454: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15d458:
    // 0x15d458: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d45c:
    // 0x15d45c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d460:
    // 0x15d460: 0x60f809  jalr        $v1
label_15d464:
    if (ctx->pc == 0x15D464u) {
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D468u;
        goto label_15d468;
    }
    ctx->pc = 0x15D460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D468u);
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D460u, 0x15D468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D468u;
label_15d468:
    // 0x15d468: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x15d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d46c:
    // 0x15d46c: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x15d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_15d470:
    // 0x15d470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d474:
    // 0x15d474: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x15d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_15d478:
    // 0x15d478: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x15d478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15d47c:
    // 0x15d47c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d480:
    // 0x15d480: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15d484:
    // 0x15d484: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d488:
    // 0x15d488: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d48c:
    // 0x15d48c: 0x60f809  jalr        $v1
label_15d490:
    if (ctx->pc == 0x15D490u) {
        ctx->pc = 0x15D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D48Cu;
        // 0x15d490: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D494u;
        goto label_15d494;
    }
    ctx->pc = 0x15D48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D494u);
        ctx->pc = 0x15D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D48Cu;
        // 0x15d490: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D48Cu, 0x15D494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D494u;
label_15d494:
    // 0x15d494: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x15d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d498:
    // 0x15d498: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x15d498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_15d49c:
    // 0x15d49c: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x15d49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->pc = 0x15d4a0u;
}
