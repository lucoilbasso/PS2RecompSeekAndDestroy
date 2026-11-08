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

// Function: entry_001cccec
// Address: 0x1cccec - 0x1cccf0
void entry_001cccec_0x1cccec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cccec_0x1cccec");
#endif

    ctx->pc = 0x1cccecu;

    // 0x1cccec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1cccecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1cccf0u;
}
