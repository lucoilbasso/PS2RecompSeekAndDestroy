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

// Function: entry_001a7254
// Address: 0x1a7254 - 0x1a7258
void entry_001a7254_0x1a7254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7254_0x1a7254");
#endif

    ctx->pc = 0x1a7254u;

    // 0x1a7254: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->pc = 0x1a7258u;
}
