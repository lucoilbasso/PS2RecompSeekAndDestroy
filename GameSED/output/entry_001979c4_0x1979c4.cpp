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

// Function: entry_001979c4
// Address: 0x1979c4 - 0x1979c8
void entry_001979c4_0x1979c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001979c4_0x1979c4");
#endif

    ctx->pc = 0x1979c4u;

    // 0x1979c4: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1979c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    ctx->pc = 0x1979c8u;
}
