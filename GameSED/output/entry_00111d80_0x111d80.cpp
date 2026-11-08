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

// Function: entry_00111d80
// Address: 0x111d80 - 0x111d84
void entry_00111d80_0x111d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d80_0x111d80");
#endif

    ctx->pc = 0x111d80u;

    // 0x111d80: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x111d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    ctx->pc = 0x111d84u;
}
