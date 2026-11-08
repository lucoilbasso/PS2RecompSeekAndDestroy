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

// Function: entry_001746bc
// Address: 0x1746bc - 0x1746c0
void entry_001746bc_0x1746bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001746bc_0x1746bc");
#endif

    ctx->pc = 0x1746bcu;

    // 0x1746bc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1746bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    ctx->pc = 0x1746c0u;
}
