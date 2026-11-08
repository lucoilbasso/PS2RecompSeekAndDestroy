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

// Function: entry_0010d064
// Address: 0x10d064 - 0x10d0a0
void entry_0010d064_0x10d064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d064_0x10d064");
#endif

    switch (ctx->pc) {
        case 0x10d080u: goto label_10d080;
        default: break;
    }

    ctx->pc = 0x10d064u;

    // 0x10d064: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10d068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d06c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10d070: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d074: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x10d074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d078: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D078u;
    SET_GPR_U32(ctx, 31, 0x10D080u);
    ctx->pc = 0x10D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D078u;
    // 0x10d07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D078u, 0x10D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D080u;
label_10d080:
    // 0x10d080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d084: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d088: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x10d088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d08c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D08Cu;
    {
        const bool branch_taken_0x10d08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D08Cu;
        // 0x10d090: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d08c) {
            ctx->pc = 0x10D0A0u;
            return;
        }
    }
    ctx->pc = 0x10D094u;
    // 0x10d094: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10D094u;
    {
        const bool branch_taken_0x10d094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D094u;
        // 0x10d098: 0x8c720164  lw          $s2, 0x164($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d094) {
            ctx->pc = 0x10D0D0u;
            return;
        }
    }
    ctx->pc = 0x10D09Cu;
    // 0x10d09c: 0x0  nop
    ctx->pc = 0x10d09cu;
    // NOP
    ctx->pc = 0x10d0a0u;
}
