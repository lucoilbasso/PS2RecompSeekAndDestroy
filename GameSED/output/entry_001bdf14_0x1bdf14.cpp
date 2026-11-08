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

// Function: entry_001bdf14
// Address: 0x1bdf14 - 0x1bdf38
void entry_001bdf14_0x1bdf14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdf14_0x1bdf14");
#endif

    switch (ctx->pc) {
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf34u: goto label_1bdf34;
        default: break;
    }

    ctx->pc = 0x1bdf14u;

    // 0x1bdf14: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDF14u;
    SET_GPR_U32(ctx, 31, 0x1BDF1Cu);
    ctx->pc = 0x1BDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF14u;
    // 0x1bdf18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDF14u, 0x1BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF1Cu;
label_1bdf1c:
    // 0x1bdf1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF1Cu;
    {
        const bool branch_taken_0x1bdf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF1Cu;
        // 0x1bdf20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf1c) {
            ctx->pc = 0x1BDF38u;
            return;
        }
    }
    ctx->pc = 0x1BDF24u;
    // 0x1bdf24: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDF24u;
    {
        const bool branch_taken_0x1bdf24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF24u;
        // 0x1bdf28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf24) {
            ctx->pc = 0x1BDF3Cu;
            return;
        }
    }
    ctx->pc = 0x1BDF2Cu;
    // 0x1bdf2c: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF34u);
    ctx->pc = 0x1BDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF2Cu;
    // 0x1bdf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1BDF2Cu, 0x1BDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF34u;
label_1bdf34:
    // 0x1bdf34: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1bdf38u;
}
