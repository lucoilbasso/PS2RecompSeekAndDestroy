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

// Function: entry_00120338
// Address: 0x120338 - 0x12033c
void entry_00120338_0x120338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120338_0x120338");
#endif

    ctx->pc = 0x120338u;

    // 0x120338: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x120338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    ctx->pc = 0x12033cu;
}
