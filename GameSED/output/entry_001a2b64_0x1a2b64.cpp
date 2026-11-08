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

// Function: entry_001a2b64
// Address: 0x1a2b64 - 0x1a2b68
void entry_001a2b64_0x1a2b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2b64_0x1a2b64");
#endif

    ctx->pc = 0x1a2b64u;

    // 0x1a2b64: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x1a2b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x1a2b68u;
}
