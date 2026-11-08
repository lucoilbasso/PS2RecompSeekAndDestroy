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

// Function: entry_0015fb28
// Address: 0x15fb28 - 0x15fb50
void entry_0015fb28_0x15fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fb28_0x15fb28");
#endif

    switch (ctx->pc) {
        case 0x15fb34u: goto label_15fb34;
        default: break;
    }

    ctx->pc = 0x15fb28u;

    // 0x15fb28: 0x52823  negu        $a1, $a1
    ctx->pc = 0x15fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x15fb2c: 0xc06135e  jal         func_184D78
    ctx->pc = 0x15FB2Cu;
    SET_GPR_U32(ctx, 31, 0x15FB34u);
    ctx->pc = 0x15FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB2Cu;
    // 0x15fb30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D78u, 0x15FB2Cu, 0x15FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB34u;
label_15fb34:
    // 0x15fb34: 0x8e620fbc  lw          $v0, 0xFBC($s3)
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x15fb38: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x15fb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x15fb3c: 0x544000e3  bnel        $v0, $zero, . + 4 + (0xE3 << 2)
    ctx->pc = 0x15FB3Cu;
    {
        const bool branch_taken_0x15fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fb3c) {
            ctx->pc = 0x15FB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FB3Cu;
            // 0x15fb40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FB44u;
    // 0x15fb44: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x15FB44u;
    {
        const bool branch_taken_0x15fb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb44) {
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FB4Cu;
    // 0x15fb4c: 0x0  nop
    ctx->pc = 0x15fb4cu;
    // NOP
    ctx->pc = 0x15fb50u;
}
