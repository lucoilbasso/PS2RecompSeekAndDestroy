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

// Function: entry_0013bb20
// Address: 0x13bb20 - 0x13bb24
void entry_0013bb20_0x13bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb20_0x13bb20");
#endif

    ctx->pc = 0x13bb20u;

    // 0x13bb20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x13bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    ctx->pc = 0x13bb24u;
}
