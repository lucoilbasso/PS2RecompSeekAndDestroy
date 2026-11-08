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

// Function: entry_001d1b00
// Address: 0x1d1b00 - 0x1d1b08
void entry_001d1b00_0x1d1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b00_0x1d1b00");
#endif

    ctx->pc = 0x1d1b00u;

    // 0x1d1b00: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1d1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d1b04: 0x0  nop
    ctx->pc = 0x1d1b04u;
    // NOP
    ctx->pc = 0x1d1b08u;
}
