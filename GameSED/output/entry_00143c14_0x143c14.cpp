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

// Function: entry_00143c14
// Address: 0x143c14 - 0x143c18
void entry_00143c14_0x143c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c14_0x143c14");
#endif

    ctx->pc = 0x143c14u;

    // 0x143c14: 0x37de504d  ori         $fp, $fp, 0x504D
    ctx->pc = 0x143c14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)20557);
    ctx->pc = 0x143c18u;
}
