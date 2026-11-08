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

// Function: entry_00171d18
// Address: 0x171d18 - 0x171d1c
void entry_00171d18_0x171d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d18_0x171d18");
#endif

    ctx->pc = 0x171d18u;

    // 0x171d18: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x171d18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x171d1cu;
}
