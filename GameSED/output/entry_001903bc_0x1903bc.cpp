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

// Function: entry_001903bc
// Address: 0x1903bc - 0x1903c0
void entry_001903bc_0x1903bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001903bc_0x1903bc");
#endif

    ctx->pc = 0x1903bcu;

    // 0x1903bc: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1903bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1903c0u;
}
