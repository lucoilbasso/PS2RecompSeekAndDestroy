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

// Function: entry_00105a4c
// Address: 0x105a4c - 0x105a70
void entry_00105a4c_0x105a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105a4c_0x105a4c");
#endif

    ctx->pc = 0x105a4cu;

    // 0x105a4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x105a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x105a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105a64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105a68: 0x806a19a  j           func_1A8668
    ctx->pc = 0x105A68u;
    ctx->pc = 0x105A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A68u;
    // 0x105a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    BSCDEntInqEntryPtr__FP5BcObjPUii_0x1a8668(rdram, ctx, runtime); return;
    ctx->pc = 0x105A70u;
}
