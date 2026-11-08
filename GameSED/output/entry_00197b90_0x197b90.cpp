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

// Function: entry_00197b90
// Address: 0x197b90 - 0x197b94
void entry_00197b90_0x197b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b90_0x197b90");
#endif

    ctx->pc = 0x197b90u;

    // 0x197b90: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x197b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x197b94u;
}
