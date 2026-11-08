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

// Function: entry_00171fd8
// Address: 0x171fd8 - 0x171fdc
void entry_00171fd8_0x171fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171fd8_0x171fd8");
#endif

    ctx->pc = 0x171fd8u;

    // 0x171fd8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x171fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    ctx->pc = 0x171fdcu;
}
