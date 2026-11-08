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

// Function: entry_00136d40
// Address: 0x136d40 - 0x136d48
void entry_00136d40_0x136d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d40_0x136d40");
#endif

    ctx->pc = 0x136d40u;

    // 0x136d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136d44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x136d48u;
}
