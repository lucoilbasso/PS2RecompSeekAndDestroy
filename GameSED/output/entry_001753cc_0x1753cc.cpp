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

// Function: entry_001753cc
// Address: 0x1753cc - 0x1753f0
void entry_001753cc_0x1753cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001753cc_0x1753cc");
#endif

    ctx->pc = 0x1753ccu;

    // 0x1753cc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1753ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1753d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1753d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1753d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1753d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1753d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1753dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1753e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1753e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1753e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1753e8: 0x806bd20  j           func_1AF480
    ctx->pc = 0x1753E8u;
    ctx->pc = 0x1753ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753E8u;
    // 0x1753ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    SignalSema_0x1af480(rdram, ctx, runtime); return;
    ctx->pc = 0x1753F0u;
}
