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

// Function: entry_0018027c
// Address: 0x18027c - 0x180280
void entry_0018027c_0x18027c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018027c_0x18027c");
#endif

    ctx->pc = 0x18027cu;

    // 0x18027c: 0xa5d00000  sh          $s0, 0x0($t6)
    ctx->pc = 0x18027cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x180280u;
}
