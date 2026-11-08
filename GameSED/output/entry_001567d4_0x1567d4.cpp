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

// Function: entry_001567d4
// Address: 0x1567d4 - 0x1567d8
void entry_001567d4_0x1567d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001567d4_0x1567d4");
#endif

    ctx->pc = 0x1567d4u;

    // 0x1567d4: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1567d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1567d8u;
}
