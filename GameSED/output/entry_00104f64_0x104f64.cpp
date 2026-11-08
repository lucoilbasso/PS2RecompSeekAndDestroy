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

// Function: entry_00104f64
// Address: 0x104f64 - 0x104f68
void entry_00104f64_0x104f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f64_0x104f64");
#endif

    ctx->pc = 0x104f64u;

    // 0x104f64: 0xaf919194  sw          $s1, -0x6E6C($gp)
    ctx->pc = 0x104f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939028), GPR_U32(ctx, 17));
    ctx->pc = 0x104f68u;
}
