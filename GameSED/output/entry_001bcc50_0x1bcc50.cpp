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

// Function: entry_001bcc50
// Address: 0x1bcc50 - 0x1bcc6c
void entry_001bcc50_0x1bcc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcc50_0x1bcc50");
#endif

    switch (ctx->pc) {
        case 0x1bcc60u: goto label_1bcc60;
        default: break;
    }

    ctx->pc = 0x1bcc50u;

    // 0x1bcc50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCC50u;
    {
        const bool branch_taken_0x1bcc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC50u;
        // 0x1bcc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc50) {
            ctx->pc = 0x1BCC6Cu;
            return;
        }
    }
    ctx->pc = 0x1BCC58u;
    // 0x1bcc58: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x1BCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC58u;
    // 0x1bcc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCC58u, 0x1BCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC60u;
label_1bcc60:
    // 0x1bcc60: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1bcc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1bcc64: 0x1043ff87  beq         $v0, $v1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1BCC64u;
    {
        const bool branch_taken_0x1bcc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC64u;
        // 0x1bcc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc64) {
            ctx->pc = 0x1BCA84u;
            return;
        }
    }
    ctx->pc = 0x1BCC6Cu;
}
