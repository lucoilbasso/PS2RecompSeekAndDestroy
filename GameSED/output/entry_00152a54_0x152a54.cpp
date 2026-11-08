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

// Function: entry_00152a54
// Address: 0x152a54 - 0x152a5c
void entry_00152a54_0x152a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152a54_0x152a54");
#endif

    ctx->pc = 0x152a54u;

    // 0x152a54: 0x8e770004  lw          $s7, 0x4($s3)
    ctx->pc = 0x152a54u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x152a58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152a58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x152a5cu;
}
