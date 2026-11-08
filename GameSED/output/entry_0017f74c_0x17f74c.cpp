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

// Function: entry_0017f74c
// Address: 0x17f74c - 0x17f750
void entry_0017f74c_0x17f74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f74c_0x17f74c");
#endif

    ctx->pc = 0x17f74cu;

    // 0x17f74c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x17f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x17f750u;
}
