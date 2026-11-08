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

// Function: entry_00182f34
// Address: 0x182f34 - 0x182f44
void entry_00182f34_0x182f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182f34_0x182f34");
#endif

    ctx->pc = 0x182f34u;

    // 0x182f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182f3c: 0x8060216  j           func_180858
    ctx->pc = 0x182F3Cu;
    ctx->pc = 0x182F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F3Cu;
    // 0x182f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    ps2___WHitpolySearchPBDPoint__FP15WHitpolyPackageP9FVector32fT1ib_0x180858(rdram, ctx, runtime); return;
    ctx->pc = 0x182F44u;
}
