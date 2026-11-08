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

// Function: entry_001a9fbc
// Address: 0x1a9fbc - 0x1a9fc0
void entry_001a9fbc_0x1a9fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fbc_0x1a9fbc");
#endif

    ctx->pc = 0x1a9fbcu;

    // 0x1a9fbc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1a9fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    ctx->pc = 0x1a9fc0u;
}
