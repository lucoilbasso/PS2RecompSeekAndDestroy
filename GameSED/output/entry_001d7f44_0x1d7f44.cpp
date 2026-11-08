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

// Function: entry_001d7f44
// Address: 0x1d7f44 - 0x1d7f48
void entry_001d7f44_0x1d7f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f44_0x1d7f44");
#endif

    ctx->pc = 0x1d7f44u;

    // 0x1d7f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d7f48u;
}
