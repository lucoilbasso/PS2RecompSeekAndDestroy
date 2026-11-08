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

// Function: entry_001bf4d4
// Address: 0x1bf4d4 - 0x1bf4d8
void entry_001bf4d4_0x1bf4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf4d4_0x1bf4d4");
#endif

    ctx->pc = 0x1bf4d4u;

    // 0x1bf4d4: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1bf4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->pc = 0x1bf4d8u;
}
