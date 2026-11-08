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

// Function: entry_00188b18
// Address: 0x188b18 - 0x188b1c
void entry_00188b18_0x188b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b18_0x188b18");
#endif

    ctx->pc = 0x188b18u;

    // 0x188b18: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x188b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    ctx->pc = 0x188b1cu;
}
