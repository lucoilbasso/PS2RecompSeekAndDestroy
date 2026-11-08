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

// Function: entry_0017efd4
// Address: 0x17efd4 - 0x17efd8
void entry_0017efd4_0x17efd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017efd4_0x17efd4");
#endif

    ctx->pc = 0x17efd4u;

    // 0x17efd4: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x17efd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    ctx->pc = 0x17efd8u;
}
