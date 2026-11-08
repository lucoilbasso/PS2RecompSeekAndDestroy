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

// Function: entry_0019a8ec
// Address: 0x19a8ec - 0x19a8f4
void entry_0019a8ec_0x19a8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a8ec_0x19a8ec");
#endif

    ctx->pc = 0x19a8ecu;

    // 0x19a8ec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19a8ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a8f0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x19a8f4u;
}
