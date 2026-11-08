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

// Function: entry_00134e44
// Address: 0x134e44 - 0x134e48
void entry_00134e44_0x134e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e44_0x134e44");
#endif

    ctx->pc = 0x134e44u;

    // 0x134e44: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x134e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x134e48u;
}
