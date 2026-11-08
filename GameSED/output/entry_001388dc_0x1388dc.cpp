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

// Function: entry_001388dc
// Address: 0x1388dc - 0x1388e0
void entry_001388dc_0x1388dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388dc_0x1388dc");
#endif

    ctx->pc = 0x1388dcu;

    // 0x1388dc: 0xc4800408  lwc1        $f0, 0x408($a0)
    ctx->pc = 0x1388dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1388e0u;
}
