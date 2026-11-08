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

// Function: entry_001838fc
// Address: 0x1838fc - 0x18392c
void entry_001838fc_0x1838fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001838fc_0x1838fc");
#endif

    ctx->pc = 0x1838fcu;

    // 0x1838fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1838fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x183900: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x183900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183904: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x183904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x183908: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x183908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x18390c: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x18390cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x183910: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x183910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x183914: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x183914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x183918: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x183918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18391c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18391cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183920: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x183920u;
    {
        const bool branch_taken_0x183920 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x183924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183920u;
        // 0x183924: 0xae040028  sw          $a0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183920) {
            ctx->pc = 0x18392Cu;
            return;
        }
    }
    ctx->pc = 0x183928u;
    // 0x183928: 0x8e270038  lw          $a3, 0x38($s1)
    ctx->pc = 0x183928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->pc = 0x18392cu;
}
