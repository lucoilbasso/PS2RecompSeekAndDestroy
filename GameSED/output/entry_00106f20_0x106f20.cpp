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

// Function: entry_00106f20
// Address: 0x106f20 - 0x106f58
void entry_00106f20_0x106f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f20_0x106f20");
#endif

    switch (ctx->pc) {
        case 0x106f3cu: goto label_106f3c;
        default: break;
    }

    ctx->pc = 0x106f20u;

    // 0x106f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106f24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x106f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x106f28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x106f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x106f2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106f30: 0x8c530044  lw          $s3, 0x44($v0)
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x106f34: 0xc04110c  jal         func_104430
    ctx->pc = 0x106F34u;
    SET_GPR_U32(ctx, 31, 0x106F3Cu);
    ctx->pc = 0x106F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F34u;
    // 0x106f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106F34u, 0x106F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F3Cu;
label_106f3c:
    // 0x106f3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x106f40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x106f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x106f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x106f48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106F48u;
    {
        const bool branch_taken_0x106f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F48u;
        // 0x106f4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f48) {
            ctx->pc = 0x106F58u;
            return;
        }
    }
    ctx->pc = 0x106F50u;
    // 0x106f50: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106F50u;
    {
        const bool branch_taken_0x106f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106f50) {
            ctx->pc = 0x106F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106F50u;
            // 0x106f54: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F70u;
            return;
        }
    }
    ctx->pc = 0x106F58u;
}
