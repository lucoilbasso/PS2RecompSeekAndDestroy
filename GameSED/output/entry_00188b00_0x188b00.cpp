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

// Function: entry_00188b00
// Address: 0x188b00 - 0x188b04
void entry_00188b00_0x188b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b00_0x188b00");
#endif

    ctx->pc = 0x188b00u;

    // 0x188b00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x188b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    ctx->pc = 0x188b04u;
}
