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

// Function: entry_0013010c
// Address: 0x13010c - 0x130110
void entry_0013010c_0x13010c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013010c_0x13010c");
#endif

    ctx->pc = 0x13010cu;

    // 0x13010c: 0xa6330066  sh          $s3, 0x66($s1)
    ctx->pc = 0x13010cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 19));
    ctx->pc = 0x130110u;
}
