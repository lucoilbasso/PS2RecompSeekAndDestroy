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

// Function: entry_0010a478
// Address: 0x10a478 - 0x10a47c
void entry_0010a478_0x10a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a478_0x10a478");
#endif

    ctx->pc = 0x10a478u;

    // 0x10a478: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x10a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x10a47cu;
}
