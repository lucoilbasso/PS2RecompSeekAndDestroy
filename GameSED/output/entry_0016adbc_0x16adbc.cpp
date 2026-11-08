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

// Function: entry_0016adbc
// Address: 0x16adbc - 0x16adc0
void entry_0016adbc_0x16adbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016adbc_0x16adbc");
#endif

    ctx->pc = 0x16adbcu;

    // 0x16adbc: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x16adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
    ctx->pc = 0x16adc0u;
}
