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

// Function: entry_0012d220
// Address: 0x12d220 - 0x12d234
void entry_0012d220_0x12d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d220_0x12d220");
#endif

    ctx->pc = 0x12d220u;

    // 0x12d220: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D220u;
    {
        const bool branch_taken_0x12d220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d220) {
            ctx->pc = 0x12D224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D220u;
            // 0x12d224: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D234u;
            return;
        }
    }
    ctx->pc = 0x12D228u;
    // 0x12d228: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x12d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x12d22c: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x12d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x12d230: 0x8c82015c  lw          $v0, 0x15C($a0)
    ctx->pc = 0x12d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    ctx->pc = 0x12d234u;
}
