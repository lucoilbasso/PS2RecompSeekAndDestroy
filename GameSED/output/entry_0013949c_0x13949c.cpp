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

// Function: entry_0013949c
// Address: 0x13949c - 0x1394a4
void entry_0013949c_0x13949c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013949c_0x13949c");
#endif

    ctx->pc = 0x13949cu;

    // 0x13949c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13949cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1394a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1394a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1394a4u;
}
