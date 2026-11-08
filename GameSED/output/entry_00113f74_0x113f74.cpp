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

// Function: entry_00113f74
// Address: 0x113f74 - 0x113fb0
void entry_00113f74_0x113f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f74_0x113f74");
#endif

    switch (ctx->pc) {
        case 0x113f84u: goto label_113f84;
        case 0x113f90u: goto label_113f90;
        case 0x113facu: goto label_113fac;
        default: break;
    }

    ctx->pc = 0x113f74u;

    // 0x113f74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x113f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x113f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113f7c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x113F7Cu;
    SET_GPR_U32(ctx, 31, 0x113F84u);
    ctx->pc = 0x113F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F7Cu;
    // 0x113f80: 0x3c128000  lui         $s2, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x113F7Cu, 0x113F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F84u;
label_113f84:
    // 0x113f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113F88u;
    SET_GPR_U32(ctx, 31, 0x113F90u);
    ctx->pc = 0x113F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F88u;
    // 0x113f8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113F88u, 0x113F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F90u;
label_113f90:
    // 0x113f90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x113f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x113f98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x113f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113f9c: 0x10720004  beq         $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x113F9Cu;
    {
        const bool branch_taken_0x113f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x113FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F9Cu;
        // 0x113fa0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f9c) {
            ctx->pc = 0x113FB0u;
            return;
        }
    }
    ctx->pc = 0x113FA4u;
    // 0x113fa4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113FA4u;
    SET_GPR_U32(ctx, 31, 0x113FACu);
    ctx->pc = 0x113FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FA4u;
    // 0x113fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113FA4u, 0x113FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FACu;
label_113fac:
    // 0x113fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x113facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113fb0u;
}
