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

// Function: entry_0013c244
// Address: 0x13c244 - 0x13c248
void entry_0013c244_0x13c244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c244_0x13c244");
#endif

    ctx->pc = 0x13c244u;

    // 0x13c244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x13c248u;
}
