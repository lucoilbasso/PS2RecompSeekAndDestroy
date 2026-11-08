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

// Function: entry_00188b08
// Address: 0x188b08 - 0x188b0c
void entry_00188b08_0x188b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b08_0x188b08");
#endif

    ctx->pc = 0x188b08u;

    // 0x188b08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x188b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    ctx->pc = 0x188b0cu;
}
