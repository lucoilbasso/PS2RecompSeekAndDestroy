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

// Function: entry_001420cc
// Address: 0x1420cc - 0x1420d4
void entry_001420cc_0x1420cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420cc_0x1420cc");
#endif

    ctx->pc = 0x1420ccu;

    // 0x1420cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1420ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1420d0: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x1420d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x1420d4u;
}
