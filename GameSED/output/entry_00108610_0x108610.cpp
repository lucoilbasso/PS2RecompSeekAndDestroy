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

// Function: entry_00108610
// Address: 0x108610 - 0x108628
void entry_00108610_0x108610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108610_0x108610");
#endif

    ctx->pc = 0x108610u;

    // 0x108610: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
    // 0x108614: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x108614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108618: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x108618u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x10861c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10861Cu;
    {
        const bool branch_taken_0x10861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10861Cu;
        // 0x108620: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10861c) {
            ctx->pc = 0x1086C4u;
            return;
        }
    }
    ctx->pc = 0x108624u;
    // 0x108624: 0x0  nop
    ctx->pc = 0x108624u;
    // NOP
    ctx->pc = 0x108628u;
}
