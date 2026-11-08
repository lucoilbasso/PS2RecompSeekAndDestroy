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

// Function: entry_00129f38
// Address: 0x129f38 - 0x129f3c
void entry_00129f38_0x129f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f38_0x129f38");
#endif

    ctx->pc = 0x129f38u;

    // 0x129f38: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x129f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->pc = 0x129f3cu;
}
