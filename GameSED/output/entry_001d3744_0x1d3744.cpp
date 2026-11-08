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

// Function: entry_001d3744
// Address: 0x1d3744 - 0x1d37d8
void entry_001d3744_0x1d3744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3744_0x1d3744");
#endif

    switch (ctx->pc) {
        case 0x1d3750u: goto label_1d3750;
        case 0x1d375cu: goto label_1d375c;
        case 0x1d376cu: goto label_1d376c;
        case 0x1d3788u: goto label_1d3788;
        case 0x1d37a4u: goto label_1d37a4;
        case 0x1d37b4u: goto label_1d37b4;
        default: break;
    }

    ctx->pc = 0x1d3744u;

    // 0x1d3744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3748: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D3748u;
    SET_GPR_U32(ctx, 31, 0x1D3750u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D3748u, 0x1D3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3750u;
label_1d3750:
    // 0x1d3750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3754: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3754u;
    SET_GPR_U32(ctx, 31, 0x1D375Cu);
    ctx->pc = 0x1D3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3754u;
    // 0x1d3758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3754u, 0x1D375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D375Cu;
label_1d375c:
    // 0x1d375c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3764: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3764u;
    SET_GPR_U32(ctx, 31, 0x1D376Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3764u, 0x1D376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D376Cu;
label_1d376c:
    // 0x1d376c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3774: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1d3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d3778: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d3778u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d377c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3780: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3780u;
    SET_GPR_U32(ctx, 31, 0x1D3788u);
    ctx->pc = 0x1D3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3780u;
    // 0x1d3784: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3780u, 0x1D3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3788u;
label_1d3788:
    // 0x1d3788: 0x4400292  bltz        $v0, . + 4 + (0x292 << 2)
    ctx->pc = 0x1D3788u;
    {
        const bool branch_taken_0x1d3788 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3788u;
        // 0x1d378c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3788) {
            ctx->pc = 0x1D41D4u;
            return;
        }
    }
    ctx->pc = 0x1D3790u;
    // 0x1d3790: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1d3790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1d3794: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d3794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d3798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d379c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D379Cu;
    SET_GPR_U32(ctx, 31, 0x1D37A4u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D379Cu, 0x1D37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37A4u;
label_1d37a4:
    // 0x1d37a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d37a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37ac: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D37ACu;
    SET_GPR_U32(ctx, 31, 0x1D37B4u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D37ACu, 0x1D37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37B4u;
label_1d37b4:
    // 0x1d37b4: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1D37B4u;
    {
        const bool branch_taken_0x1d37b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37B4u;
        // 0x1d37b8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37b4) {
            ctx->pc = 0x1D3A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D37BCu;
    // 0x1d37bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d37c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d37c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d37c4: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x1d37c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d37c8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D37C8u;
    {
        const bool branch_taken_0x1d37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37C8u;
        // 0x1d37cc: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37c8) {
            ctx->pc = 0x1D3718u;
            return;
        }
    }
    ctx->pc = 0x1D37D0u;
    // 0x1d37d0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D37D0u;
    {
        const bool branch_taken_0x1d37d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d37d0) {
            ctx->pc = 0x1D38E0u;
            return;
        }
    }
    ctx->pc = 0x1D37D8u;
}
