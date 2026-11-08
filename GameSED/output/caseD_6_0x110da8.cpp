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

// Function: caseD_6
// Address: 0x110da8 - 0x110dc8
void caseD_6_0x110da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x110da8");
#endif

    switch (ctx->pc) {
        case 0x110db4u: goto label_110db4;
        default: break;
    }

    ctx->pc = 0x110da8u;

    // 0x110da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110DACu;
    SET_GPR_U32(ctx, 31, 0x110DB4u);
    ctx->pc = 0x110DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DACu;
    // 0x110db0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110DACu, 0x110DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DB4u;
label_110db4:
    // 0x110db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110db8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110dbc: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x110DBCu;
    {
        const bool branch_taken_0x110dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DBCu;
        // 0x110dc0: 0x8c503630  lw          $s0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dbc) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110DC4u;
    // 0x110dc4: 0x0  nop
    ctx->pc = 0x110dc4u;
    // NOP
    ctx->pc = 0x110dc8u;
}
