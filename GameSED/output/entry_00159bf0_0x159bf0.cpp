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

// Function: entry_00159bf0
// Address: 0x159bf0 - 0x159bf4
void entry_00159bf0_0x159bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159bf0_0x159bf0");
#endif

    ctx->pc = 0x159bf0u;

    // 0x159bf0: 0xc4e10478  lwc1        $f1, 0x478($a3)
    ctx->pc = 0x159bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x159bf4u;
}
