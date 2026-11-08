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

// Function: entry_001914c4
// Address: 0x1914c4 - 0x1914c8
void entry_001914c4_0x1914c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001914c4_0x1914c4");
#endif

    ctx->pc = 0x1914c4u;

    // 0x1914c4: 0xe4830228  swc1        $f3, 0x228($a0)
    ctx->pc = 0x1914c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
    ctx->pc = 0x1914c8u;
}
