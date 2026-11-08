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

// Function: entry_0017ac70
// Address: 0x17ac70 - 0x17ac8c
void entry_0017ac70_0x17ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac70_0x17ac70");
#endif

    switch (ctx->pc) {
        case 0x17ac7cu: goto label_17ac7c;
        default: break;
    }

    ctx->pc = 0x17ac70u;

label_17ac70:
    // 0x17ac70: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17ac74: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17AC74u;
    SET_GPR_U32(ctx, 31, 0x17AC7Cu);
    ctx->pc = 0x17AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC74u;
    // 0x17ac78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17AC74u, 0x17AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC7Cu;
label_17ac7c:
    // 0x17ac7c: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17AC7Cu;
    {
        const bool branch_taken_0x17ac7c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17ac7c) {
            ctx->pc = 0x17AC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AC7Cu;
            // 0x17ac80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17AC84u;
    // 0x17ac84: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17AC84u;
    SET_GPR_U32(ctx, 31, 0x17AC8Cu);
    ctx->pc = 0x17AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC84u;
    // 0x17ac88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17AC84u, 0x17AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC8Cu;
}
