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

// Function: entry_0013f264
// Address: 0x13f264 - 0x13f26c
void entry_0013f264_0x13f264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f264_0x13f264");
#endif

    ctx->pc = 0x13f264u;

    // 0x13f264: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13f26cu;
}
