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

// Function: entry_001a99c8
// Address: 0x1a99c8 - 0x1a99cc
void entry_001a99c8_0x1a99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a99c8_0x1a99c8");
#endif

    ctx->pc = 0x1a99c8u;

    // 0x1a99c8: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x1a99c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    ctx->pc = 0x1a99ccu;
}
