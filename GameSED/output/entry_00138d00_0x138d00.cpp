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

// Function: entry_00138d00
// Address: 0x138d00 - 0x138d04
void entry_00138d00_0x138d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d00_0x138d00");
#endif

    ctx->pc = 0x138d00u;

    // 0x138d00: 0xaca300d4  sw          $v1, 0xD4($a1)
    ctx->pc = 0x138d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 3));
    ctx->pc = 0x138d04u;
}
