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

// Function: entry_00175adc
// Address: 0x175adc - 0x175ae0
void entry_00175adc_0x175adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175adc_0x175adc");
#endif

    ctx->pc = 0x175adcu;

    // 0x175adc: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x175ae0u;
}
