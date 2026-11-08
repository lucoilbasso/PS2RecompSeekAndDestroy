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

// Function: entry_001b0aec
// Address: 0x1b0aec - 0x1b0af0
void entry_001b0aec_0x1b0aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0aec_0x1b0aec");
#endif

    ctx->pc = 0x1b0aecu;

    // 0x1b0aec: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1b0aecu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    ctx->pc = 0x1b0af0u;
}
