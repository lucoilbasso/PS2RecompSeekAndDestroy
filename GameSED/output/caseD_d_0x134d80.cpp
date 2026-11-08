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

// Function: caseD_d
// Address: 0x134d80 - 0x134de8
void caseD_d_0x134d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x134d80");
#endif

    switch (ctx->pc) {
        case 0x134d94u: goto label_134d94;
        case 0x134da0u: goto label_134da0;
        case 0x134db0u: goto label_134db0;
        case 0x134dc0u: goto label_134dc0;
        case 0x134dccu: goto label_134dcc;
        case 0x134de0u: goto label_134de0;
        default: break;
    }

    ctx->pc = 0x134d80u;

    // 0x134d80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x134d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134d84: 0x54820018  bnel        $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x134D84u;
    {
        const bool branch_taken_0x134d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134d84) {
            ctx->pc = 0x134D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134D84u;
            // 0x134d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134DE8u;
            return;
        }
    }
    ctx->pc = 0x134D8Cu;
    // 0x134d8c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x134D8Cu;
    SET_GPR_U32(ctx, 31, 0x134D94u);
    ctx->pc = 0x134D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D8Cu;
    // 0x134d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x134D8Cu, 0x134D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D94u;
label_134d94:
    // 0x134d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d98: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x134D98u;
    SET_GPR_U32(ctx, 31, 0x134DA0u);
    ctx->pc = 0x134D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D98u;
    // 0x134d9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x134D98u, 0x134DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DA0u;
label_134da0:
    // 0x134da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134da8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x134DA8u;
    SET_GPR_U32(ctx, 31, 0x134DB0u);
    ctx->pc = 0x134DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DA8u;
    // 0x134dac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x134DA8u, 0x134DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DB0u;
label_134db0:
    // 0x134db0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134db8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x134DB8u;
    SET_GPR_U32(ctx, 31, 0x134DC0u);
    ctx->pc = 0x134DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DB8u;
    // 0x134dbc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x134DB8u, 0x134DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DC0u;
label_134dc0:
    // 0x134dc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dc4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134DC4u;
    SET_GPR_U32(ctx, 31, 0x134DCCu);
    ctx->pc = 0x134DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DC4u;
    // 0x134dc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134DC4u, 0x134DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DCCu;
label_134dcc:
    // 0x134dcc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x134dccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x134dd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dd8: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x134DD8u;
    SET_GPR_U32(ctx, 31, 0x134DE0u);
    ctx->pc = 0x134DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DD8u;
    // 0x134ddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A6A0u, 0x134DD8u, 0x134DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DE0u;
label_134de0:
    // 0x134de0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x134DE0u;
    {
        const bool branch_taken_0x134de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DE0u;
        // 0x134de4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134de0) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134DE8u;
}
