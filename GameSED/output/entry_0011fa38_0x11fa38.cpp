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

// Function: entry_0011fa38
// Address: 0x11fa38 - 0x11fa40
void entry_0011fa38_0x11fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa38_0x11fa38");
#endif

    ctx->pc = 0x11fa38u;

    // 0x11fa38: 0xc7808088  lwc1        $f0, -0x7F78($gp)
    ctx->pc = 0x11fa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11fa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x11fa40u;
}
