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

// Function: entry_001bd330
// Address: 0x1bd330 - 0x1bd360
void entry_001bd330_0x1bd330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd330_0x1bd330");
#endif

    switch (ctx->pc) {
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd350u: goto label_1bd350;
        default: break;
    }

    ctx->pc = 0x1bd330u;

    // 0x1bd330: 0x16350013  bne         $s1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD330u;
    {
        const bool branch_taken_0x1bd330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD330u;
        // 0x1bd334: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd330) {
            ctx->pc = 0x1BD380u;
            return;
        }
    }
    ctx->pc = 0x1BD338u;
    // 0x1bd338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd33c: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD33Cu;
    SET_GPR_U32(ctx, 31, 0x1BD344u);
    ctx->pc = 0x1BD340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD33Cu;
    // 0x1bd340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD33Cu, 0x1BD344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD344u;
label_1bd344:
    // 0x1bd344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd348: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD348u;
    SET_GPR_U32(ctx, 31, 0x1BD350u);
    ctx->pc = 0x1BD34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD348u;
    // 0x1bd34c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD348u, 0x1BD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD350u;
label_1bd350:
    // 0x1bd350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd354: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD354u;
    {
        const bool branch_taken_0x1bd354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD354u;
        // 0x1bd358: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd354) {
            ctx->pc = 0x1BD380u;
            return;
        }
    }
    ctx->pc = 0x1BD35Cu;
    // 0x1bd35c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bd360u;
}
