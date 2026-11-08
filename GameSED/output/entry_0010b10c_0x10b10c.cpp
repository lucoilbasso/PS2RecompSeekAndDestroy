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

// Function: entry_0010b10c
// Address: 0x10b10c - 0x10b12c
void entry_0010b10c_0x10b10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b10c_0x10b10c");
#endif

    ctx->pc = 0x10b10cu;

    // 0x10b10c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x10b10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10b110: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10b110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b114: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x10b114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10b118: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x10b118u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b11c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x10b11cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x10b120: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x10b120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b124: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x10b124u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x10b128: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10b128u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x10b12cu;
}
