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

// Function: entry_0011f3fc
// Address: 0x11f3fc - 0x11f400
void entry_0011f3fc_0x11f3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3fc_0x11f3fc");
#endif

    ctx->pc = 0x11f3fcu;

    // 0x11f3fc: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x11f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    ctx->pc = 0x11f400u;
}
