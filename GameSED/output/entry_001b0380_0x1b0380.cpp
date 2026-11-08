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

// Function: entry_001b0380
// Address: 0x1b0380 - 0x1b0388
void entry_001b0380_0x1b0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0380_0x1b0380");
#endif

    ctx->pc = 0x1b0380u;

    // 0x1b0380: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1b0380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1b0384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b0388u;
}
