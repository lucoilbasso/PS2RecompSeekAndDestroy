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

// Function: entry_00146e0c
// Address: 0x146e0c - 0x146e10
void entry_00146e0c_0x146e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146e0c_0x146e0c");
#endif

    ctx->pc = 0x146e0cu;

    // 0x146e0c: 0xc4e1fff8  lwc1        $f1, -0x8($a3)
    ctx->pc = 0x146e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x146e10u;
}
