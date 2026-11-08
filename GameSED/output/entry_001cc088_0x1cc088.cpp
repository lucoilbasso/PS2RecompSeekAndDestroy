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

// Function: entry_001cc088
// Address: 0x1cc088 - 0x1cc0a4
void entry_001cc088_0x1cc088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc088_0x1cc088");
#endif

    ctx->pc = 0x1cc088u;

label_1cc088:
    // 0x1cc088: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1cc08c:
    // 0x1cc08c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cc090:
    // 0x1cc090: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1cc094:
    // 0x1cc094: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc098:
    // 0x1cc098: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc09c:
    // 0x1cc09c: 0x40f809  jalr        $v0
label_1cc0a0:
    if (ctx->pc == 0x1CC0A0u) {
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0A4u;
        goto label_fallthrough_0x1cc09c;
    }
    ctx->pc = 0x1CC09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC0A4u);
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC09Cu, 0x1CC0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1cc09c:
    ctx->pc = 0x1CC0A4u;
}
