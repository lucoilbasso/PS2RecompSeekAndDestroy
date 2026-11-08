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

// Function: entry_0011d36c
// Address: 0x11d36c - 0x11d3d0
void entry_0011d36c_0x11d36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d36c_0x11d36c");
#endif

    switch (ctx->pc) {
        case 0x11d378u: goto label_11d378;
        case 0x11d384u: goto label_11d384;
        case 0x11d394u: goto label_11d394;
        case 0x11d3a0u: goto label_11d3a0;
        case 0x11d3b0u: goto label_11d3b0;
        case 0x11d3bcu: goto label_11d3bc;
        case 0x11d3ccu: goto label_11d3cc;
        default: break;
    }

    ctx->pc = 0x11d36cu;

    // 0x11d36c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11d370: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D370u;
    SET_GPR_U32(ctx, 31, 0x11D378u);
    ctx->pc = 0x11D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D370u;
    // 0x11d374: 0x34148000  ori         $s4, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D370u, 0x11D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D378u;
label_11d378:
    // 0x11d378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d37c: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11D37Cu;
    SET_GPR_U32(ctx, 31, 0x11D384u);
    ctx->pc = 0x11D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D37Cu;
    // 0x11d380: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11D37Cu, 0x11D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D384u;
label_11d384:
    // 0x11d384: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D384u;
    {
        const bool branch_taken_0x11d384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D384u;
        // 0x11d388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d384) {
            ctx->pc = 0x11D3D0u;
            return;
        }
    }
    ctx->pc = 0x11D38Cu;
    // 0x11d38c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D38Cu;
    SET_GPR_U32(ctx, 31, 0x11D394u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D38Cu, 0x11D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D394u;
label_11d394:
    // 0x11d394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d398: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11D398u;
    SET_GPR_U32(ctx, 31, 0x11D3A0u);
    ctx->pc = 0x11D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D398u;
    // 0x11d39c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11D398u, 0x11D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3A0u;
label_11d3a0:
    // 0x11d3a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D3A0u;
    {
        const bool branch_taken_0x11d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3A0u;
        // 0x11d3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3a0) {
            ctx->pc = 0x11D3D0u;
            return;
        }
    }
    ctx->pc = 0x11D3A8u;
    // 0x11d3a8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D3A8u;
    SET_GPR_U32(ctx, 31, 0x11D3B0u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D3A8u, 0x11D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3B0u;
label_11d3b0:
    // 0x11d3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3b4: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11D3B4u;
    SET_GPR_U32(ctx, 31, 0x11D3BCu);
    ctx->pc = 0x11D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3B4u;
    // 0x11d3b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11D3B4u, 0x11D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3BCu;
label_11d3bc:
    // 0x11d3bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D3BCu;
    {
        const bool branch_taken_0x11d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3BCu;
        // 0x11d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3bc) {
            ctx->pc = 0x11D3D0u;
            return;
        }
    }
    ctx->pc = 0x11D3C4u;
    // 0x11d3c4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D3C4u;
    SET_GPR_U32(ctx, 31, 0x11D3CCu);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D3C4u, 0x11D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3CCu;
label_11d3cc:
    // 0x11d3cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d3ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11d3d0u;
}
