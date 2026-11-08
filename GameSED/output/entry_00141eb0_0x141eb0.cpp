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

// Function: entry_00141eb0
// Address: 0x141eb0 - 0x141eb4
void entry_00141eb0_0x141eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141eb0_0x141eb0");
#endif

    ctx->pc = 0x141eb0u;

    // 0x141eb0: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x141eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    ctx->pc = 0x141eb4u;
}
