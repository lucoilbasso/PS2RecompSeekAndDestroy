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

// Function: entry_0010136c
// Address: 0x10136c - 0x1013a0
void entry_0010136c_0x10136c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010136c_0x10136c");
#endif

    ctx->pc = 0x10136cu;

    // 0x10136c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101370: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10137c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10137cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x101380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10138c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101394: 0x804039c  j           func_100E70
    ctx->pc = 0x101394u;
    ctx->pc = 0x101398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101394u;
    // 0x101398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    ImagePageInfoAlloc__9ApcObjRscii_0x100e70(rdram, ctx, runtime); return;
    ctx->pc = 0x10139Cu;
    // 0x10139c: 0x0  nop
    ctx->pc = 0x10139cu;
    // NOP
    ctx->pc = 0x1013a0u;
}
