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

// Function: entry_001a53e8
// Address: 0x1a53e8 - 0x1a53ec
void entry_001a53e8_0x1a53e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a53e8_0x1a53e8");
#endif

    ctx->pc = 0x1a53e8u;

    // 0x1a53e8: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x1a53e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->pc = 0x1a53ecu;
}
