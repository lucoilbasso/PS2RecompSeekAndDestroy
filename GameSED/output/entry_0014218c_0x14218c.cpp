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

// Function: entry_0014218c
// Address: 0x14218c - 0x142194
void entry_0014218c_0x14218c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014218c_0x14218c");
#endif

    ctx->pc = 0x14218cu;

    // 0x14218c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14218cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142190: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x142190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x142194u;
}
