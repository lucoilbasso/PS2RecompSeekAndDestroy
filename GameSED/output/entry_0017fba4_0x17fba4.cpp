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

// Function: entry_0017fba4
// Address: 0x17fba4 - 0x17fba8
void entry_0017fba4_0x17fba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fba4_0x17fba4");
#endif

    ctx->pc = 0x17fba4u;

    // 0x17fba4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x17fba8u;
}
