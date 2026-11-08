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

// Function: entry_001406d8
// Address: 0x1406d8 - 0x1406dc
void entry_001406d8_0x1406d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001406d8_0x1406d8");
#endif

    ctx->pc = 0x1406d8u;

    // 0x1406d8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1406d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    ctx->pc = 0x1406dcu;
}
