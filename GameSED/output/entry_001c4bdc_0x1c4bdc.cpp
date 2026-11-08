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

// Function: entry_001c4bdc
// Address: 0x1c4bdc - 0x1c4be0
void entry_001c4bdc_0x1c4bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4bdc_0x1c4bdc");
#endif

    ctx->pc = 0x1c4bdcu;

    // 0x1c4bdc: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x1c4bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    ctx->pc = 0x1c4be0u;
}
