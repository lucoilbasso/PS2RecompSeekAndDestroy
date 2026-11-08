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

// Function: entry_0011e210
// Address: 0x11e210 - 0x11e234
void entry_0011e210_0x11e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e210_0x11e210");
#endif

    ctx->pc = 0x11e210u;

    // 0x11e210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e214: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11e218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e21c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11e220: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e228: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e22c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E22Cu;
    {
        const bool branch_taken_0x11e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e22c) {
            ctx->pc = 0x11E1F8u;
            return;
        }
    }
    ctx->pc = 0x11E234u;
}
