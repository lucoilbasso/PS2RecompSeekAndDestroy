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

// Function: entry_0011138c
// Address: 0x11138c - 0x1113a4
void entry_0011138c_0x11138c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011138c_0x11138c");
#endif

    ctx->pc = 0x11138cu;

    // 0x11138c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x11138Cu;
    {
        const bool branch_taken_0x11138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11138Cu;
        // 0x111390: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11138c) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111394u;
    // 0x111394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111398: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x111398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x11139c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11139cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1113a0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1113a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1113a4u;
}
