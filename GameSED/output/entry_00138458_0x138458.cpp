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

// Function: entry_00138458
// Address: 0x138458 - 0x13845c
void entry_00138458_0x138458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138458_0x138458");
#endif

    ctx->pc = 0x138458u;

    // 0x138458: 0xaf888a1c  sw          $t0, -0x75E4($gp)
    ctx->pc = 0x138458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 8));
    ctx->pc = 0x13845cu;
}
