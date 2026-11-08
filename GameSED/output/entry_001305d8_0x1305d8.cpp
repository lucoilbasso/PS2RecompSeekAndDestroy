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

// Function: entry_001305d8
// Address: 0x1305d8 - 0x1305dc
void entry_001305d8_0x1305d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001305d8_0x1305d8");
#endif

    ctx->pc = 0x1305d8u;

    // 0x1305d8: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1305d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    ctx->pc = 0x1305dcu;
}
