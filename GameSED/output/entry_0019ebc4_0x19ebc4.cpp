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

// Function: entry_0019ebc4
// Address: 0x19ebc4 - 0x19ebc8
void entry_0019ebc4_0x19ebc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ebc4_0x19ebc4");
#endif

    ctx->pc = 0x19ebc4u;

    // 0x19ebc4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19ebc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->pc = 0x19ebc8u;
}
