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

// Function: entry_0017efe0
// Address: 0x17efe0 - 0x17efe4
void entry_0017efe0_0x17efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017efe0_0x17efe0");
#endif

    ctx->pc = 0x17efe0u;

    // 0x17efe0: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x17efe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    ctx->pc = 0x17efe4u;
}
