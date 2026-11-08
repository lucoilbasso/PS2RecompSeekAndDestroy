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

// Function: entry_0012df04
// Address: 0x12df04 - 0x12df08
void entry_0012df04_0x12df04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012df04_0x12df04");
#endif

    ctx->pc = 0x12df04u;

    // 0x12df04: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x12df04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    ctx->pc = 0x12df08u;
}
