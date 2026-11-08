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

// Function: entry_0019a6bc
// Address: 0x19a6bc - 0x19a6c0
void entry_0019a6bc_0x19a6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6bc_0x19a6bc");
#endif

    ctx->pc = 0x19a6bcu;

    // 0x19a6bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19a6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->pc = 0x19a6c0u;
}
