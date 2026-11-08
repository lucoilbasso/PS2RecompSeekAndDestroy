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

// Function: entry_0014c068
// Address: 0x14c068 - 0x14c06c
void entry_0014c068_0x14c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c068_0x14c068");
#endif

    ctx->pc = 0x14c068u;

    // 0x14c068: 0xc4a14004  lwc1        $f1, 0x4004($a1)
    ctx->pc = 0x14c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x14c06cu;
}
