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

// Function: entry_00188b14
// Address: 0x188b14 - 0x188b18
void entry_00188b14_0x188b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b14_0x188b14");
#endif

    ctx->pc = 0x188b14u;

    // 0x188b14: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x188b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    ctx->pc = 0x188b18u;
}
