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

// Function: entry_001475d0
// Address: 0x1475d0 - 0x147608
void entry_001475d0_0x1475d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001475d0_0x1475d0");
#endif

    ctx->pc = 0x1475d0u;

label_1475d0:
    // 0x1475d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1475d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1475d8: 0xaca20378  sw          $v0, 0x378($a1)
    ctx->pc = 0x1475d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 888), GPR_U32(ctx, 2));
    // 0x1475dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1475e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1475e4: 0xaca3037c  sw          $v1, 0x37C($a1)
    ctx->pc = 0x1475e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 892), GPR_U32(ctx, 3));
    // 0x1475e8: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1475E8u;
    {
        const bool branch_taken_0x1475e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1475ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475E8u;
        // 0x1475ec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475e8) {
            ctx->pc = 0x1475D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1475d0;
        }
    }
    ctx->pc = 0x1475F0u;
    // 0x1475f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1475f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1475f4: 0x262503b0  addiu       $a1, $s1, 0x3B0
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x1475f8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1475fc: 0xae2303ac  sw          $v1, 0x3AC($s1)
    ctx->pc = 0x1475fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 3));
    // 0x147600: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x147600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x147604: 0xae2203a8  sw          $v0, 0x3A8($s1)
    ctx->pc = 0x147604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 2));
    ctx->pc = 0x147608u;
}
