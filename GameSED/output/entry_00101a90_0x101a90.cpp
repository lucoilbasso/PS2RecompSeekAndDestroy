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

// Function: entry_00101a90
// Address: 0x101a90 - 0x101a94
void entry_00101a90_0x101a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a90_0x101a90");
#endif

    ctx->pc = 0x101a90u;

    // 0x101a90: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x101a90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    ctx->pc = 0x101a94u;
}
