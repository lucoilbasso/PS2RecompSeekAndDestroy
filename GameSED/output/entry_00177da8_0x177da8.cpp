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

// Function: entry_00177da8
// Address: 0x177da8 - 0x177dac
void entry_00177da8_0x177da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177da8_0x177da8");
#endif

    ctx->pc = 0x177da8u;

    // 0x177da8: 0x90820013  lbu         $v0, 0x13($a0)
    ctx->pc = 0x177da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    ctx->pc = 0x177dacu;
}
