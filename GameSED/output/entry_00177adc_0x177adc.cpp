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

// Function: entry_00177adc
// Address: 0x177adc - 0x177ae0
void entry_00177adc_0x177adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177adc_0x177adc");
#endif

    ctx->pc = 0x177adcu;

    // 0x177adc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x177adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x177ae0u;
}
