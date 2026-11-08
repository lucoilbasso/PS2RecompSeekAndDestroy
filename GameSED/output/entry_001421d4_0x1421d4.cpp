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

// Function: entry_001421d4
// Address: 0x1421d4 - 0x1421dc
void entry_001421d4_0x1421d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001421d4_0x1421d4");
#endif

    ctx->pc = 0x1421d4u;

    // 0x1421d4: 0x0  nop
    ctx->pc = 0x1421d4u;
    // NOP
    // 0x1421d8: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x1421d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    ctx->pc = 0x1421dcu;
}
