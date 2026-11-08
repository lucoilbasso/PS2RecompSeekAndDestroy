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

// Function: entry_00161218
// Address: 0x161218 - 0x161230
void entry_00161218_0x161218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161218_0x161218");
#endif

    ctx->pc = 0x161218u;

    // 0x161218: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x16121c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16121cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161220: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x161220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x161224: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x161224u;
    {
        const bool branch_taken_0x161224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161224u;
        // 0x161228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161224) {
            ctx->pc = 0x16146Cu;
            return;
        }
    }
    ctx->pc = 0x16122Cu;
    // 0x16122c: 0x0  nop
    ctx->pc = 0x16122cu;
    // NOP
    ctx->pc = 0x161230u;
}
