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

// Function: entry_0019f73c
// Address: 0x19f73c - 0x19f744
void entry_0019f73c_0x19f73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f73c_0x19f73c");
#endif

    ctx->pc = 0x19f73cu;

    // 0x19f73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f740: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19f740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19f744u;
}
