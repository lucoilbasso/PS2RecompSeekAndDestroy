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

// Function: entry_00141c7c
// Address: 0x141c7c - 0x141c84
void entry_00141c7c_0x141c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c7c_0x141c7c");
#endif

    ctx->pc = 0x141c7cu;

    // 0x141c7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x141c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141c80: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x141c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x141c84u;
}
