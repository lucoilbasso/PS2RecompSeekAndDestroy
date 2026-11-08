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

// Function: entry_0010639c
// Address: 0x10639c - 0x1063a4
void entry_0010639c_0x10639c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010639c_0x10639c");
#endif

    ctx->pc = 0x10639cu;

    // 0x10639c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x10639cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x1063a0: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x1063a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x1063a4u;
}
