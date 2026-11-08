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

// Function: entry_0018b7f0
// Address: 0x18b7f0 - 0x18b7f4
void entry_0018b7f0_0x18b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7f0_0x18b7f0");
#endif

    ctx->pc = 0x18b7f0u;

    // 0x18b7f0: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x18b7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    ctx->pc = 0x18b7f4u;
}
