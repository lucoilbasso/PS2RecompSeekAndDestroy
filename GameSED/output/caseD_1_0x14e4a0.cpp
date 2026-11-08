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

// Function: caseD_1
// Address: 0x14e4a0 - 0x14e4f0
void caseD_1_0x14e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14e4a0");
#endif

    switch (ctx->pc) {
        case 0x14e4b4u: goto label_14e4b4;
        case 0x14e4c4u: goto label_14e4c4;
        case 0x14e4d8u: goto label_14e4d8;
        default: break;
    }

    ctx->pc = 0x14e4a0u;

    // 0x14e4a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4a4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x14e4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4ac: 0xc0557d0  jal         func_155F40
    ctx->pc = 0x14E4ACu;
    SET_GPR_U32(ctx, 31, 0x14E4B4u);
    ctx->pc = 0x14E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4ACu;
    // 0x14e4b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E4ACu, 0x14E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4B4u;
label_14e4b4:
    // 0x14e4b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4bc: 0xc05371a  jal         func_14DC68
    ctx->pc = 0x14E4BCu;
    SET_GPR_U32(ctx, 31, 0x14E4C4u);
    ctx->pc = 0x14E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4BCu;
    // 0x14e4c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC68u, 0x14E4BCu, 0x14E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4C4u;
label_14e4c4:
    // 0x14e4c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4c8: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14e4cc: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
    // 0x14e4d0: 0xc05ac44  jal         func_16B110
    ctx->pc = 0x14E4D0u;
    SET_GPR_U32(ctx, 31, 0x14E4D8u);
    ctx->pc = 0x14E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4D0u;
    // 0x14e4d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E4D0u, 0x14E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4D8u;
label_14e4d8:
    // 0x14e4d8: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x14e4dc: 0x10800143  beqz        $a0, . + 4 + (0x143 << 2)
    ctx->pc = 0x14E4DCu;
    {
        const bool branch_taken_0x14e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4DCu;
        // 0x14e4e0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4dc) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E4E4u;
    // 0x14e4e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14E4E4u;
    {
        const bool branch_taken_0x14e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4E4u;
        // 0x14e4e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4e4) {
            ctx->pc = 0x14E544u;
            return;
        }
    }
    ctx->pc = 0x14E4ECu;
    // 0x14e4ec: 0x0  nop
    ctx->pc = 0x14e4ecu;
    // NOP
    ctx->pc = 0x14e4f0u;
}
