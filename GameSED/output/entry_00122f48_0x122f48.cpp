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

// Function: entry_00122f48
// Address: 0x122f48 - 0x122f4c
void entry_00122f48_0x122f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f48_0x122f48");
#endif

    ctx->pc = 0x122f48u;

    // 0x122f48: 0xa640002e  sh          $zero, 0x2E($s2)
    ctx->pc = 0x122f48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x122f4cu;
}
