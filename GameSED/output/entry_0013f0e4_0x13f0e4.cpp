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

// Function: entry_0013f0e4
// Address: 0x13f0e4 - 0x13f0f8
void entry_0013f0e4_0x13f0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0e4_0x13f0e4");
#endif

    ctx->pc = 0x13f0e4u;

    // 0x13f0e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13f0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f0e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13f0ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13F0ECu;
    {
        const bool branch_taken_0x13f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0ECu;
        // 0x13f0f0: 0x8e8300d4  lw          $v1, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0ec) {
            ctx->pc = 0x13F11Cu;
            return;
        }
    }
    ctx->pc = 0x13F0F4u;
    // 0x13f0f4: 0x0  nop
    ctx->pc = 0x13f0f4u;
    // NOP
    ctx->pc = 0x13f0f8u;
}
