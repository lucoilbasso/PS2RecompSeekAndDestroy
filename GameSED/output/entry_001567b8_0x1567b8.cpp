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

// Function: entry_001567b8
// Address: 0x1567b8 - 0x1567bc
void entry_001567b8_0x1567b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001567b8_0x1567b8");
#endif

    ctx->pc = 0x1567b8u;

    // 0x1567b8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x1567b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1567bcu;
}
