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

// Function: entry_0010c8e4
// Address: 0x10c8e4 - 0x10c8e8
void entry_0010c8e4_0x10c8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c8e4_0x10c8e4");
#endif

    ctx->pc = 0x10c8e4u;

    // 0x10c8e4: 0xe6020238  swc1        $f2, 0x238($s0)
    ctx->pc = 0x10c8e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
    ctx->pc = 0x10c8e8u;
}
