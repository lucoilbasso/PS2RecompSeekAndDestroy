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

// Function: entry_00112328
// Address: 0x112328 - 0x112340
void entry_00112328_0x112328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112328_0x112328");
#endif

    ctx->pc = 0x112328u;

    // 0x112328: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x112328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x11232c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11232cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112330: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x112330u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x112334: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x112334u;
    {
        const bool branch_taken_0x112334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112334) {
            ctx->pc = 0x1123F8u;
            return;
        }
    }
    ctx->pc = 0x11233Cu;
    // 0x11233c: 0x0  nop
    ctx->pc = 0x11233cu;
    // NOP
    ctx->pc = 0x112340u;
}
