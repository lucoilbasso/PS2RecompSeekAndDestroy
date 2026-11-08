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

// Function: entry_00152d38
// Address: 0x152d38 - 0x152d3c
void entry_00152d38_0x152d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152d38_0x152d38");
#endif

    ctx->pc = 0x152d38u;

    // 0x152d38: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x152d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x152d3cu;
}
