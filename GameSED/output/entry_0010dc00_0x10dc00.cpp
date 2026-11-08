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

// Function: entry_0010dc00
// Address: 0x10dc00 - 0x10dc30
void entry_0010dc00_0x10dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc00_0x10dc00");
#endif

    switch (ctx->pc) {
        case 0x10dc08u: goto label_10dc08;
        default: break;
    }

    ctx->pc = 0x10dc00u;

    // 0x10dc00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DC00u;
    SET_GPR_U32(ctx, 31, 0x10DC08u);
    ctx->pc = 0x10DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC00u;
    // 0x10dc04: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DC00u, 0x10DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC08u;
label_10dc08:
    // 0x10dc08: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x10dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x10dc0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10dc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc10: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10dc14: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x10dc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10dc18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DC18u;
    {
        const bool branch_taken_0x10dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC18u;
        // 0x10dc1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc18) {
            ctx->pc = 0x10DC58u;
            return;
        }
    }
    ctx->pc = 0x10DC20u;
    // 0x10dc20: 0x8e890040  lw          $t1, 0x40($s4)
    ctx->pc = 0x10dc20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x10dc24: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x10dc24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc28: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc2c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x10dc30u;
}
