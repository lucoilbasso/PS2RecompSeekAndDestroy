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

// Function: entry_00169978
// Address: 0x169978 - 0x16997c
void entry_00169978_0x169978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169978_0x169978");
#endif

    ctx->pc = 0x169978u;

    // 0x169978: 0xac620134  sw          $v0, 0x134($v1)
    ctx->pc = 0x169978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
    ctx->pc = 0x16997cu;
}
