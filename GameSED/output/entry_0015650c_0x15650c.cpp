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

// Function: entry_0015650c
// Address: 0x15650c - 0x156538
void entry_0015650c_0x15650c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015650c_0x15650c");
#endif

    switch (ctx->pc) {
        case 0x156524u: goto label_156524;
        default: break;
    }

    ctx->pc = 0x15650cu;

    // 0x15650c: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x15650cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x156510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156514: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x156514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156518: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x156518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x15651c: 0xc055a5e  jal         func_156978
    ctx->pc = 0x15651Cu;
    SET_GPR_U32(ctx, 31, 0x156524u);
    ctx->pc = 0x156520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15651Cu;
    // 0x156520: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156978u, 0x15651Cu, 0x156524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156524u;
label_156524:
    // 0x156524: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x156524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x156528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15652c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156530: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x156530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x156534: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x156534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x156538u;
}
