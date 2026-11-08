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

// Function: entry_00179f40
// Address: 0x179f40 - 0x179f44
void entry_00179f40_0x179f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f40_0x179f40");
#endif

    ctx->pc = 0x179f40u;

    // 0x179f40: 0x24934040  addiu       $s3, $a0, 0x4040
    ctx->pc = 0x179f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    ctx->pc = 0x179f44u;
}
