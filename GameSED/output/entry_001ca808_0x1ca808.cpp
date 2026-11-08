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

// Function: entry_001ca808
// Address: 0x1ca808 - 0x1ca844
void entry_001ca808_0x1ca808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca808_0x1ca808");
#endif

    ctx->pc = 0x1ca808u;

label_1ca808:
    // 0x1ca808: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1ca80c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1ca80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1ca810: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1ca814: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1ca814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1ca818: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1ca81c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ca81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ca820: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1ca820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ca824: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x1ca824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x1ca828: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA828u;
    {
        const bool branch_taken_0x1ca828 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA828u;
        // 0x1ca82c: 0x25adfffc  addiu       $t5, $t5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca828) {
            ctx->pc = 0x1CA844u;
            return;
        }
    }
    ctx->pc = 0x1CA830u;
    // 0x1ca830: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1ca834: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca838: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x1ca838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1ca83c: 0x5c40fff2  bgtzl       $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CA83Cu;
    {
        const bool branch_taken_0x1ca83c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ca83c) {
            ctx->pc = 0x1CA840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA83Cu;
            // 0x1ca840: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca808;
        }
    }
    ctx->pc = 0x1CA844u;
}
