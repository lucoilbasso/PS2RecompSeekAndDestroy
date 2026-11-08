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

// Function: entry_001aa100
// Address: 0x1aa100 - 0x1aa104
void entry_001aa100_0x1aa100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa100_0x1aa100");
#endif

    ctx->pc = 0x1aa100u;

    // 0x1aa100: 0xe48c0028  swc1        $f12, 0x28($a0)
    ctx->pc = 0x1aa100u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    ctx->pc = 0x1aa104u;
}
