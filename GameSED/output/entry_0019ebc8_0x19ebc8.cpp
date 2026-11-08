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

// Function: entry_0019ebc8
// Address: 0x19ebc8 - 0x19ebcc
void entry_0019ebc8_0x19ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ebc8_0x19ebc8");
#endif

    ctx->pc = 0x19ebc8u;

    // 0x19ebc8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x19ebc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    ctx->pc = 0x19ebccu;
}
