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

// Function: entry_00151070
// Address: 0x151070 - 0x151074
void entry_00151070_0x151070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151070_0x151070");
#endif

    ctx->pc = 0x151070u;

    // 0x151070: 0xc6050348  lwc1        $f5, 0x348($s0)
    ctx->pc = 0x151070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    ctx->pc = 0x151074u;
}
