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

// Function: entry_00192770
// Address: 0x192770 - 0x1927c0
void entry_00192770_0x192770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192770_0x192770");
#endif

    ctx->pc = 0x192770u;

    // 0x192770: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x192770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x192774: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x192778: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x192778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19277c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x192780: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192784: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x192784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x192788: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19278c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x19278cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192790: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x192790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x192794: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x192794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x192798: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x192798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19279c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x19279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1927a0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1927a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1927a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1927a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1927a8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1927a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1927ac: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1927acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1927b0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1927b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1927b4: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1927b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1927b8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1927b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1927bc: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1927bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    ctx->pc = 0x1927c0u;
}
