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

// Function: entry_0019e0d0
// Address: 0x19e0d0 - 0x19e0d8
void entry_0019e0d0_0x19e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0d0_0x19e0d0");
#endif

    ctx->pc = 0x19e0d0u;

    // 0x19e0d0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e0d4: 0xc7808614  lwc1        $f0, -0x79EC($gp)
    ctx->pc = 0x19e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x19e0d8u;
}
