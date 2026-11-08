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

// Function: entry_001603c8
// Address: 0x1603c8 - 0x1603ec
void entry_001603c8_0x1603c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001603c8_0x1603c8");
#endif

    ctx->pc = 0x1603c8u;

label_1603c8:
    // 0x1603c8: 0x8e060f30  lw          $a2, 0xF30($s0)
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3888)));
label_1603cc:
    // 0x1603cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1603d0:
    if (ctx->pc == 0x1603D0u) {
        ctx->pc = 0x1603D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603CCu;
        // 0x1603d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603D4u;
        goto label_1603d4;
    }
    ctx->pc = 0x1603CCu;
    {
        const bool branch_taken_0x1603cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603CCu;
        // 0x1603d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603cc) {
            ctx->pc = 0x1603ECu;
            return;
        }
    }
    ctx->pc = 0x1603D4u;
label_1603d4:
    // 0x1603d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1603d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1603d8:
    // 0x1603d8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1603d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1603dc:
    // 0x1603dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1603dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1603e0:
    // 0x1603e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1603e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1603e4:
    // 0x1603e4: 0x60f809  jalr        $v1
label_1603e8:
    if (ctx->pc == 0x1603E8u) {
        ctx->pc = 0x1603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E4u;
        // 0x1603e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603ECu;
        goto label_fallthrough_0x1603e4;
    }
    ctx->pc = 0x1603E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1603ECu);
        ctx->pc = 0x1603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E4u;
        // 0x1603e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603E4u, 0x1603ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1603e4:
    ctx->pc = 0x1603ECu;
}
