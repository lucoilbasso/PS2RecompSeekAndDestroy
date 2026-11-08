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

// Function: entry_001d0fb0
// Address: 0x1d0fb0 - 0x1d0fbc
void entry_001d0fb0_0x1d0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0fb0_0x1d0fb0");
#endif

    ctx->pc = 0x1d0fb0u;

    // 0x1d0fb0: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1d0fb4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d0fb8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1d0fbcu;
}
