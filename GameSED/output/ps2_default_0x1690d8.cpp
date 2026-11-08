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

// Function: default
// Address: 0x1690d8 - 0x169108
void ps2_default_0x1690d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1690d8");
#endif

    ctx->pc = 0x1690d8u;

    // 0x1690d8: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x1690d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1690dc: 0xdfb10238  ld          $s1, 0x238($sp)
    ctx->pc = 0x1690dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1690e0: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x1690e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1690e4: 0xdfb30248  ld          $s3, 0x248($sp)
    ctx->pc = 0x1690e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1690e8: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x1690e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1690ec: 0xdfb50258  ld          $s5, 0x258($sp)
    ctx->pc = 0x1690ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1690f0: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x1690f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1690f4: 0xdfb70268  ld          $s7, 0x268($sp)
    ctx->pc = 0x1690f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1690f8: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x1690f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1690fc: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1690fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x169100: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x169100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x169104: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x169104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x169108u;
}
