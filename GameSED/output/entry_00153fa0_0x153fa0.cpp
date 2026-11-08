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

// Function: entry_00153fa0
// Address: 0x153fa0 - 0x153fa4
void entry_00153fa0_0x153fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153fa0_0x153fa0");
#endif

    ctx->pc = 0x153fa0u;

    // 0x153fa0: 0xc4a24004  lwc1        $f2, 0x4004($a1)
    ctx->pc = 0x153fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x153fa4u;
}
