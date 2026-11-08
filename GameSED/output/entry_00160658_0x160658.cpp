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

// Function: entry_00160658
// Address: 0x160658 - 0x160678
void entry_00160658_0x160658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160658_0x160658");
#endif

    ctx->pc = 0x160658u;

    // 0x160658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16066c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160670: 0x8057a12  j           func_15E848
    ctx->pc = 0x160670u;
    ctx->pc = 0x160674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160670u;
    // 0x160674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E848u;
    BossDamageVisible__8ApcPanelb_0x15e848(rdram, ctx, runtime); return;
    ctx->pc = 0x160678u;
}
