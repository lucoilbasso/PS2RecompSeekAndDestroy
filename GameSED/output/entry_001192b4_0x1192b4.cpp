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

// Function: entry_001192b4
// Address: 0x1192b4 - 0x1192bc
void entry_001192b4_0x1192b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192b4_0x1192b4");
#endif

    ctx->pc = 0x1192b4u;

    // 0x1192b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1192b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1192b8: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1192b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x1192bcu;
}
