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

// Function: entry_001918c0
// Address: 0x1918c0 - 0x1918dc
void entry_001918c0_0x1918c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001918c0_0x1918c0");
#endif

    ctx->pc = 0x1918c0u;

    // 0x1918c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1918c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1918c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1918c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1918c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1918c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1918cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1918ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1918d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1918d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1918d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1918d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1918d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1918d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x1918dcu;
}
