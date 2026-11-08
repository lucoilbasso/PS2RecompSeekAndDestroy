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

// Function: entry_0016b6dc
// Address: 0x16b6dc - 0x16b6e0
void entry_0016b6dc_0x16b6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b6dc_0x16b6dc");
#endif

    ctx->pc = 0x16b6dcu;

    // 0x16b6dc: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x16b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    ctx->pc = 0x16b6e0u;
}
