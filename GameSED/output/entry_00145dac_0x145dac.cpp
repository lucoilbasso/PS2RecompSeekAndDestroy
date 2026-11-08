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

// Function: entry_00145dac
// Address: 0x145dac - 0x145db0
void entry_00145dac_0x145dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145dac_0x145dac");
#endif

    ctx->pc = 0x145dacu;

    // 0x145dac: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x145dacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x145db0u;
}
