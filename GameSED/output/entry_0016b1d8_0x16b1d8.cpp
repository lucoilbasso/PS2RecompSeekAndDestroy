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

// Function: entry_0016b1d8
// Address: 0x16b1d8 - 0x16b1dc
void entry_0016b1d8_0x16b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b1d8_0x16b1d8");
#endif

    ctx->pc = 0x16b1d8u;

    // 0x16b1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x16b1dcu;
}
