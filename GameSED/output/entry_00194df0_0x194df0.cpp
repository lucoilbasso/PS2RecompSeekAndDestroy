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

// Function: entry_00194df0
// Address: 0x194df0 - 0x194df8
void entry_00194df0_0x194df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194df0_0x194df0");
#endif

    ctx->pc = 0x194df0u;

    // 0x194df0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x194df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x194df4: 0x0  nop
    ctx->pc = 0x194df4u;
    // NOP
    ctx->pc = 0x194df8u;
}
