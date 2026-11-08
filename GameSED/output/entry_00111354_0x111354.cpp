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

// Function: entry_00111354
// Address: 0x111354 - 0x111368
void entry_00111354_0x111354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111354_0x111354");
#endif

    ctx->pc = 0x111354u;

    // 0x111354: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x111354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111358: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111358u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x11135c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11135Cu;
    {
        const bool branch_taken_0x11135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11135c) {
            ctx->pc = 0x1113A4u;
            return;
        }
    }
    ctx->pc = 0x111364u;
    // 0x111364: 0x0  nop
    ctx->pc = 0x111364u;
    // NOP
    ctx->pc = 0x111368u;
}
