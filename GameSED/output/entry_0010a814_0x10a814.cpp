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

// Function: entry_0010a814
// Address: 0x10a814 - 0x10a85c
void entry_0010a814_0x10a814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a814_0x10a814");
#endif

    ctx->pc = 0x10a814u;

    // 0x10a814: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x10a814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10a818: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x10a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x10a81c: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x10a81cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10a820: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x10a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x10a824: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x10a824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10a828: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x10a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x10a82c: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x10a82cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10a830: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x10a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x10a834: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x10a834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a838: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x10a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x10a83c: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x10a83cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x10a840: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x10a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x10a844: 0xdcc20030  ld          $v0, 0x30($a2)
    ctx->pc = 0x10a844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10a848: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x10a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x10a84c: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x10a84cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x10a850: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x10a850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x10a854: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x10a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x10a858: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x10a858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x10a85cu;
}
