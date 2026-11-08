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

// Function: entry_001806d4
// Address: 0x1806d4 - 0x1806d8
void entry_001806d4_0x1806d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001806d4_0x1806d4");
#endif

    ctx->pc = 0x1806d4u;

    // 0x1806d4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1806d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x1806d8u;
}
