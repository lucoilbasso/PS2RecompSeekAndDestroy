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

// Function: entry_001aa0b8
// Address: 0x1aa0b8 - 0x1aa0bc
void entry_001aa0b8_0x1aa0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0b8_0x1aa0b8");
#endif

    ctx->pc = 0x1aa0b8u;

    // 0x1aa0b8: 0xe48c0048  swc1        $f12, 0x48($a0)
    ctx->pc = 0x1aa0b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    ctx->pc = 0x1aa0bcu;
}
