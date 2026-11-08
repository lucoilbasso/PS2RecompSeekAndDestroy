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

// Function: entry_001c2fdc
// Address: 0x1c2fdc - 0x1c2fe8
void entry_001c2fdc_0x1c2fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2fdc_0x1c2fdc");
#endif

    ctx->pc = 0x1c2fdcu;

    // 0x1c2fdc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2fe0: 0x8ce300e0  lw          $v1, 0xE0($a3)
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x1c2fe4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1c2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    ctx->pc = 0x1c2fe8u;
}
