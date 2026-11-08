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

// Function: entry_001419e4
// Address: 0x1419e4 - 0x1419e8
void entry_001419e4_0x1419e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001419e4_0x1419e4");
#endif

    ctx->pc = 0x1419e4u;

    // 0x1419e4: 0xe6000204  swc1        $f0, 0x204($s0)
    ctx->pc = 0x1419e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
    ctx->pc = 0x1419e8u;
}
