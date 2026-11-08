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

// Function: entry_0012c2a8
// Address: 0x12c2a8 - 0x12c2ac
void entry_0012c2a8_0x12c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c2a8_0x12c2a8");
#endif

    ctx->pc = 0x12c2a8u;

    // 0x12c2a8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x12c2acu;
}
