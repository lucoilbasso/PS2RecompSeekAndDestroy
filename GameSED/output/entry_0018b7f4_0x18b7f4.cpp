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

// Function: entry_0018b7f4
// Address: 0x18b7f4 - 0x18b7f8
void entry_0018b7f4_0x18b7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7f4_0x18b7f4");
#endif

    ctx->pc = 0x18b7f4u;

    // 0x18b7f4: 0xe4610068  swc1        $f1, 0x68($v1)
    ctx->pc = 0x18b7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    ctx->pc = 0x18b7f8u;
}
