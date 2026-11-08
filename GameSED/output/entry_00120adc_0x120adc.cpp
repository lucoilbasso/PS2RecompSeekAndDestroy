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

// Function: entry_00120adc
// Address: 0x120adc - 0x120ae0
void entry_00120adc_0x120adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120adc_0x120adc");
#endif

    ctx->pc = 0x120adcu;

    // 0x120adc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x120adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x120ae0u;
}
