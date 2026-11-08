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

// Function: entry_0015a920
// Address: 0x15a920 - 0x15a928
void entry_0015a920_0x15a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a920_0x15a920");
#endif

    ctx->pc = 0x15a920u;

    // 0x15a920: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a924: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x15a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->pc = 0x15a928u;
}
