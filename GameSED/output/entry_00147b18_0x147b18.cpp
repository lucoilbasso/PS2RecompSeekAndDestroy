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

// Function: entry_00147b18
// Address: 0x147b18 - 0x147b1c
void entry_00147b18_0x147b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b18_0x147b18");
#endif

    ctx->pc = 0x147b18u;

    // 0x147b18: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x147b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x147b1cu;
}
