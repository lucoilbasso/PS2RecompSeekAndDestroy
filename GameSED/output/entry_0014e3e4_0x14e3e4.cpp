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

// Function: entry_0014e3e4
// Address: 0x14e3e4 - 0x14e3e8
void entry_0014e3e4_0x14e3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e3e4_0x14e3e4");
#endif

    ctx->pc = 0x14e3e4u;

    // 0x14e3e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14e3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x14e3e8u;
}
