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

// Function: entry_0015565c
// Address: 0x15565c - 0x155688
void entry_0015565c_0x15565c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015565c_0x15565c");
#endif

    ctx->pc = 0x15565cu;

    // 0x15565c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155664: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x155664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x155668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15566c: 0xae4208a0  sw          $v0, 0x8A0($s2)
    ctx->pc = 0x15566cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
    // 0x155670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x155678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15567c: 0x804171a  j           func_105C68
    ctx->pc = 0x15567Cu;
    ctx->pc = 0x155680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15567Cu;
    // 0x155680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x155684u;
    // 0x155684: 0x0  nop
    ctx->pc = 0x155684u;
    // NOP
    ctx->pc = 0x155688u;
}
