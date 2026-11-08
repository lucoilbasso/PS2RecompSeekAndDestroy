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

// Function: entry_00101a8c
// Address: 0x101a8c - 0x101a90
void entry_00101a8c_0x101a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a8c_0x101a8c");
#endif

    ctx->pc = 0x101a8cu;

    // 0x101a8c: 0xa6440016  sh          $a0, 0x16($s2)
    ctx->pc = 0x101a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x101a90u;
}
