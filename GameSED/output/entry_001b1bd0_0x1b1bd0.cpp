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

// Function: entry_001b1bd0
// Address: 0x1b1bd0 - 0x1b1bf8
void entry_001b1bd0_0x1b1bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1bd0_0x1b1bd0");
#endif

    ctx->pc = 0x1b1bd0u;

    // 0x1b1bd0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b1bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1bd4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1b1bd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1bd8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b1bd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1bdc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b1bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1be0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b1be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1be4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1be8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1bf0: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1B1BF0u;
    ctx->pc = 0x1B1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BF0u;
    // 0x1b1bf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1BF8u;
}
