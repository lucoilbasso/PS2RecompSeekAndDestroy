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

// Function: entry_0011127c
// Address: 0x11127c - 0x111290
void entry_0011127c_0x11127c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011127c_0x11127c");
#endif

    ctx->pc = 0x11127cu;

    // 0x11127c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x11127cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111280: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111280u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111284: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x111284u;
    {
        const bool branch_taken_0x111284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111284) {
            ctx->pc = 0x1113A4u;
            return;
        }
    }
    ctx->pc = 0x11128Cu;
    // 0x11128c: 0x0  nop
    ctx->pc = 0x11128cu;
    // NOP
    ctx->pc = 0x111290u;
}
