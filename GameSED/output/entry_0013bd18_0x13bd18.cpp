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

// Function: entry_0013bd18
// Address: 0x13bd18 - 0x13bd5c
void entry_0013bd18_0x13bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd18_0x13bd18");
#endif

    ctx->pc = 0x13bd18u;

    // 0x13bd18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13bd1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13bd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13bd20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13bd24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13bd28: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x13bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13bd2c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13bd30: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x13BD30u;
    {
        const bool branch_taken_0x13bd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD30u;
        // 0x13bd34: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd30) {
            ctx->pc = 0x13BE48u;
            return;
        }
    }
    ctx->pc = 0x13BD38u;
    // 0x13bd38: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x13bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x13bd3c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13BD3Cu;
    {
        const bool branch_taken_0x13bd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD3Cu;
        // 0x13bd40: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd3c) {
            ctx->pc = 0x13BD90u;
            return;
        }
    }
    ctx->pc = 0x13BD44u;
    // 0x13bd44: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13bd44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13bd48: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13bd4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BD4Cu;
    {
        const bool branch_taken_0x13bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd4c) {
            ctx->pc = 0x13BD5Cu;
            return;
        }
    }
    ctx->pc = 0x13BD54u;
    // 0x13bd54: 0xc061920  jal         func_186480
    ctx->pc = 0x13BD54u;
    SET_GPR_U32(ctx, 31, 0x13BD5Cu);
    ctx->pc = 0x13BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD54u;
    // 0x13bd58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13BD54u, 0x13BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD5Cu;
}
