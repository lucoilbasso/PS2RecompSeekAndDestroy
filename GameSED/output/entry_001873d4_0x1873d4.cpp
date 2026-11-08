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

// Function: entry_001873d4
// Address: 0x1873d4 - 0x1873d8
void entry_001873d4_0x1873d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873d4_0x1873d4");
#endif

    ctx->pc = 0x1873d4u;

    // 0x1873d4: 0xe48d01b4  swc1        $f13, 0x1B4($a0)
    ctx->pc = 0x1873d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    ctx->pc = 0x1873d8u;
}
