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

// Function: entry_0019ea04
// Address: 0x19ea04 - 0x19ea08
void entry_0019ea04_0x19ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea04_0x19ea04");
#endif

    ctx->pc = 0x19ea04u;

    // 0x19ea04: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x19ea08u;
}
