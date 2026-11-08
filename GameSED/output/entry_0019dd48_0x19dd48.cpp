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

// Function: entry_0019dd48
// Address: 0x19dd48 - 0x19dd4c
void entry_0019dd48_0x19dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd48_0x19dd48");
#endif

    ctx->pc = 0x19dd48u;

    // 0x19dd48: 0xe48d0008  swc1        $f13, 0x8($a0)
    ctx->pc = 0x19dd48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    ctx->pc = 0x19dd4cu;
}
