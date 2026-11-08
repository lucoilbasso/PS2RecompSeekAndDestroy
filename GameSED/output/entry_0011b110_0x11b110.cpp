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

// Function: entry_0011b110
// Address: 0x11b110 - 0x11b118
void entry_0011b110_0x11b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b110_0x11b110");
#endif

    ctx->pc = 0x11b110u;

    // 0x11b110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x11b118u;
}
