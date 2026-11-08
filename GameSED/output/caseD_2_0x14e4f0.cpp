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

// Function: caseD_2
// Address: 0x14e4f0 - 0x14e544
void caseD_2_0x14e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14e4f0");
#endif

    switch (ctx->pc) {
        case 0x14e504u: goto label_14e504;
        case 0x14e514u: goto label_14e514;
        case 0x14e528u: goto label_14e528;
        default: break;
    }

    ctx->pc = 0x14e4f0u;

    // 0x14e4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4f4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4fc: 0xc0557d0  jal         func_155F40
    ctx->pc = 0x14E4FCu;
    SET_GPR_U32(ctx, 31, 0x14E504u);
    ctx->pc = 0x14E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4FCu;
    // 0x14e500: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E4FCu, 0x14E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E504u;
label_14e504:
    // 0x14e504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e508: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e50c: 0xc05371a  jal         func_14DC68
    ctx->pc = 0x14E50Cu;
    SET_GPR_U32(ctx, 31, 0x14E514u);
    ctx->pc = 0x14E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E50Cu;
    // 0x14e510: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC68u, 0x14E50Cu, 0x14E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E514u;
label_14e514:
    // 0x14e514: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e518: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14e51c: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
    // 0x14e520: 0xc05ac44  jal         func_16B110
    ctx->pc = 0x14E520u;
    SET_GPR_U32(ctx, 31, 0x14E528u);
    ctx->pc = 0x14E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E520u;
    // 0x14e524: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E520u, 0x14E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E528u;
label_14e528:
    // 0x14e528: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x14e52c: 0x1080012f  beqz        $a0, . + 4 + (0x12F << 2)
    ctx->pc = 0x14E52Cu;
    {
        const bool branch_taken_0x14e52c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E52Cu;
        // 0x14e530: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e52c) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E534u;
    // 0x14e534: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x14e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x14e538: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x14E538u;
    {
        const bool branch_taken_0x14e538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E538u;
        // 0x14e53c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e538) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E540u;
    // 0x14e540: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14e544u;
}
