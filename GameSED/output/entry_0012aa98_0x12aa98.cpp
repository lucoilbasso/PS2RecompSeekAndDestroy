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

// Function: entry_0012aa98
// Address: 0x12aa98 - 0x12aab8
void entry_0012aa98_0x12aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa98_0x12aa98");
#endif

    ctx->pc = 0x12aa98u;

    // 0x12aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa9c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AA9Cu;
    {
        const bool branch_taken_0x12aa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12aa9c) {
            ctx->pc = 0x12AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AA9Cu;
            // 0x12aaa0: 0x8e4201a0  lw          $v0, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AAB8u;
            return;
        }
    }
    ctx->pc = 0x12AAA4u;
    // 0x12aaa4: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12aaa8: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x12aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aaac: 0x506200b1  beql        $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x12AAACu;
    {
        const bool branch_taken_0x12aaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aaac) {
            ctx->pc = 0x12AAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AAACu;
            // 0x12aab0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD74u;
            return;
        }
    }
    ctx->pc = 0x12AAB4u;
    // 0x12aab4: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x12aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    ctx->pc = 0x12aab8u;
}
