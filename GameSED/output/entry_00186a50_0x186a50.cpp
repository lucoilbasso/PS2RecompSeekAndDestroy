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

// Function: entry_00186a50
// Address: 0x186a50 - 0x186a5c
void entry_00186a50_0x186a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186a50_0x186a50");
#endif

    ctx->pc = 0x186a50u;

    // 0x186a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186a58: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x186a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x186a5cu;
}
