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

// Function: entry_0016b198
// Address: 0x16b198 - 0x16b1a0
void entry_0016b198_0x16b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b198_0x16b198");
#endif

    ctx->pc = 0x16b198u;

    // 0x16b198: 0xae0401a8  sw          $a0, 0x1A8($s0)
    ctx->pc = 0x16b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
    // 0x16b19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x16b1a0u;
}
