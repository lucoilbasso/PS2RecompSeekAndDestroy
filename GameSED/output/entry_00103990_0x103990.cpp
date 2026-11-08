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

// Function: entry_00103990
// Address: 0x103990 - 0x1039c8
void entry_00103990_0x103990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103990_0x103990");
#endif

    ctx->pc = 0x103990u;

    // 0x103990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103998: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x10399c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10399cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1039a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1039a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1039a4: 0x24c61c28  addiu       $a2, $a2, 0x1C28
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7208));
    // 0x1039a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1039a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1039ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1039acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1039b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1039b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1039b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1039b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1039b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1039b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1039bc: 0x8041606  j           func_105818
    ctx->pc = 0x1039BCu;
    ctx->pc = 0x1039C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039BCu;
    // 0x1039c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105818u;
    ApSCDEntError__FP15BsSCDEntControliPci_0x105818(rdram, ctx, runtime); return;
    ctx->pc = 0x1039C4u;
    // 0x1039c4: 0x0  nop
    ctx->pc = 0x1039c4u;
    // NOP
    ctx->pc = 0x1039c8u;
}
