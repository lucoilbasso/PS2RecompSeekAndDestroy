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

// Function: entry_0019fc2c
// Address: 0x19fc2c - 0x19fc68
void entry_0019fc2c_0x19fc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc2c_0x19fc2c");
#endif

    switch (ctx->pc) {
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc5cu: goto label_19fc5c;
        default: break;
    }

    ctx->pc = 0x19fc2cu;

    // 0x19fc2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19fc30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fc34: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19FC34u;
    SET_GPR_U32(ctx, 31, 0x19FC3Cu);
    ctx->pc = 0x19FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC34u;
    // 0x19fc38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19FC34u, 0x19FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC3Cu;
label_19fc3c:
    // 0x19fc3c: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x19FC3Cu;
    {
        const bool branch_taken_0x19fc3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC3Cu;
        // 0x19fc40: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc3c) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FC44u;
    // 0x19fc44: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x19fc44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x19fc48: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FC48u;
    {
        const bool branch_taken_0x19fc48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC48u;
        // 0x19fc4c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc48) {
            ctx->pc = 0x19FC68u;
            return;
        }
    }
    ctx->pc = 0x19FC50u;
    // 0x19fc50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19fc50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc54: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x19FC54u;
    SET_GPR_U32(ctx, 31, 0x19FC5Cu);
    ctx->pc = 0x19FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC54u;
    // 0x19fc58: 0x248487c8  addiu       $a0, $a0, -0x7838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x19FC54u, 0x19FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC5Cu;
label_19fc5c:
    // 0x19fc5c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x19FC5Cu;
    {
        const bool branch_taken_0x19fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC5Cu;
        // 0x19fc60: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc5c) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FC64u;
    // 0x19fc64: 0x0  nop
    ctx->pc = 0x19fc64u;
    // NOP
    ctx->pc = 0x19fc68u;
}
