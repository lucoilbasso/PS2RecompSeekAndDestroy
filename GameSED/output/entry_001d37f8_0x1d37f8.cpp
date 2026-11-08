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

// Function: entry_001d37f8
// Address: 0x1d37f8 - 0x1d3898
void entry_001d37f8_0x1d37f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d37f8_0x1d37f8");
#endif

    switch (ctx->pc) {
        case 0x1d3804u: goto label_1d3804;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d384cu: goto label_1d384c;
        case 0x1d385cu: goto label_1d385c;
        case 0x1d3878u: goto label_1d3878;
        case 0x1d3888u: goto label_1d3888;
        default: break;
    }

    ctx->pc = 0x1d37f8u;

    // 0x1d37f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d37f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37fc: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D37FCu;
    SET_GPR_U32(ctx, 31, 0x1D3804u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D37FCu, 0x1D3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3804u;
label_1d3804:
    // 0x1d3804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3808: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3808u;
    SET_GPR_U32(ctx, 31, 0x1D3810u);
    ctx->pc = 0x1D380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3808u;
    // 0x1d380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3808u, 0x1D3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3810u;
label_1d3810:
    // 0x1d3810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3818: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3818u;
    SET_GPR_U32(ctx, 31, 0x1D3820u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3818u, 0x1D3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3820u;
label_1d3820:
    // 0x1d3820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3824: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1d3824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d3828: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d3828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d382c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3830: 0x16640023  bne         $s3, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D3830u;
    {
        const bool branch_taken_0x1d3830 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3830u;
        // 0x1d3834: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3830) {
            ctx->pc = 0x1D38C0u;
            return;
        }
    }
    ctx->pc = 0x1D3838u;
    // 0x1d3838: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1d3838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1d383c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d383cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d3840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3844: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D3844u;
    SET_GPR_U32(ctx, 31, 0x1D384Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D3844u, 0x1D384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D384Cu;
label_1d384c:
    // 0x1d384c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3854: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3854u;
    SET_GPR_U32(ctx, 31, 0x1D385Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3854u, 0x1D385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D385Cu;
label_1d385c:
    // 0x1d385c: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1D385Cu;
    {
        const bool branch_taken_0x1d385c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D385Cu;
        // 0x1d3860: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d385c) {
            ctx->pc = 0x1D3A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D3864u;
    // 0x1d3864: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1d3864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1d3868: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d3868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d386c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3870: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3870u;
    SET_GPR_U32(ctx, 31, 0x1D3878u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3870u, 0x1D3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3878u;
label_1d3878:
    // 0x1d3878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d387c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3880: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3880u;
    SET_GPR_U32(ctx, 31, 0x1D3888u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3880u, 0x1D3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3888u;
label_1d3888:
    // 0x1d3888: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3888u;
    {
        const bool branch_taken_0x1d3888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3888u;
        // 0x1d388c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3888) {
            ctx->pc = 0x1D38E0u;
            return;
        }
    }
    ctx->pc = 0x1D3890u;
    // 0x1d3890: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d3894: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->pc = 0x1d3898u;
}
