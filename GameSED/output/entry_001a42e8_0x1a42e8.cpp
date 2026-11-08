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

// Function: entry_001a42e8
// Address: 0x1a42e8 - 0x1a42ec
void entry_001a42e8_0x1a42e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a42e8_0x1a42e8");
#endif

    ctx->pc = 0x1a42e8u;

    // 0x1a42e8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1a42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x1a42ecu;
}
