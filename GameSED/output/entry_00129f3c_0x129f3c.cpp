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

// Function: entry_00129f3c
// Address: 0x129f3c - 0x129f40
void entry_00129f3c_0x129f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f3c_0x129f3c");
#endif

    ctx->pc = 0x129f3cu;

    // 0x129f3c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x129f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    ctx->pc = 0x129f40u;
}
