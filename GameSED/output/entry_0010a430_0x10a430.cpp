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

// Function: entry_0010a430
// Address: 0x10a430 - 0x10a478
void entry_0010a430_0x10a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a430_0x10a430");
#endif

    ctx->pc = 0x10a430u;

    // 0x10a430: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x10a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x10a434: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x10a434u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a438: 0xdc490038  ld          $t1, 0x38($v0)
    ctx->pc = 0x10a438u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10a43c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x10a43cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a440: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x10a440u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10a444: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x10a444u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10a448: 0xdc470028  ld          $a3, 0x28($v0)
    ctx->pc = 0x10a448u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a44c: 0xdc480030  ld          $t0, 0x30($v0)
    ctx->pc = 0x10a44cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10a450: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x10a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x10a454: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x10a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x10a458: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x10a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x10a45c: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x10a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x10a460: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x10a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x10a464: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x10a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x10a468: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x10a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x10a46c: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x10a46cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10a470: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x10a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x10a474: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x10a474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x10a478u;
}
