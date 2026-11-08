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

// Function: entry_001567cc
// Address: 0x1567cc - 0x1567d0
void entry_001567cc_0x1567cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001567cc_0x1567cc");
#endif

    ctx->pc = 0x1567ccu;

    // 0x1567cc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x1567ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1567d0u;
}
