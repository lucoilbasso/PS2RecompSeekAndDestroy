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

// Function: entry_00178b50
// Address: 0x178b50 - 0x178b78
void entry_00178b50_0x178b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178b50_0x178b50");
#endif

    ctx->pc = 0x178b50u;

    // 0x178b50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178b64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178b68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x178b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178b6c: 0x805e09a  j           func_178268
    ctx->pc = 0x178B6Cu;
    ctx->pc = 0x178B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B6Cu;
    // 0x178b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178268u;
    CdCacheAdd__7WcCdManPc_0x178268(rdram, ctx, runtime); return;
    ctx->pc = 0x178B74u;
    // 0x178b74: 0x0  nop
    ctx->pc = 0x178b74u;
    // NOP
    ctx->pc = 0x178b78u;
}
