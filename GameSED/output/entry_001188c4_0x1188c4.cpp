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

// Function: entry_001188c4
// Address: 0x1188c4 - 0x1188c8
void entry_001188c4_0x1188c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001188c4_0x1188c4");
#endif

    ctx->pc = 0x1188c4u;

    // 0x1188c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1188c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    ctx->pc = 0x1188c8u;
}
