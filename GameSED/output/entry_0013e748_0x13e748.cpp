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

// Function: entry_0013e748
// Address: 0x13e748 - 0x13e76c
void entry_0013e748_0x13e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e748_0x13e748");
#endif

    ctx->pc = 0x13e748u;

    // 0x13e748: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x13e748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13e74c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x13e74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13e750: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x13e750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e754: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x13e754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13e758: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x13e758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x13e75c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x13e75cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13e760: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x13e760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x13e764: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x13e764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13e768: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x13e768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    ctx->pc = 0x13e76cu;
}
