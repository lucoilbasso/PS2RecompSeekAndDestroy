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

// Function: entry_001c7158
// Address: 0x1c7158 - 0x1c71d8
void entry_001c7158_0x1c7158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7158_0x1c7158");
#endif

    switch (ctx->pc) {
        case 0x1c716cu: goto label_1c716c;
        case 0x1c7178u: goto label_1c7178;
        case 0x1c7180u: goto label_1c7180;
        case 0x1c7198u: goto label_1c7198;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71ccu: goto label_1c71cc;
        default: break;
    }

    ctx->pc = 0x1c7158u;

label_1c7158:
    // 0x1c7158: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1c7158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1c715c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c715cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c7160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7164: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7164u;
    SET_GPR_U32(ctx, 31, 0x1C716Cu);
    ctx->pc = 0x1C7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7164u;
    // 0x1c7168: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7164u, 0x1C716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C716Cu;
label_1c716c:
    // 0x1c716c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7170: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7170u;
    SET_GPR_U32(ctx, 31, 0x1C7178u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7170u, 0x1C7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7178u;
label_1c7178:
    // 0x1c7178: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C7178u;
    SET_GPR_U32(ctx, 31, 0x1C7180u);
    ctx->pc = 0x1C717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7178u;
    // 0x1c717c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C7178u, 0x1C7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7180u;
label_1c7180:
    // 0x1c7180: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x1c7180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1c7184: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c7184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c7188: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c718c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7190: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7190u;
    SET_GPR_U32(ctx, 31, 0x1C7198u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7190u, 0x1C7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7198u;
label_1c7198:
    // 0x1c7198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c719c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c719cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71a0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C71A0u;
    SET_GPR_U32(ctx, 31, 0x1C71A8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C71A0u, 0x1C71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71A8u;
label_1c71a8:
    // 0x1c71a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c71a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71ac: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C71ACu;
    SET_GPR_U32(ctx, 31, 0x1C71B4u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C71ACu, 0x1C71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71B4u;
label_1c71b4:
    // 0x1c71b4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c71b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1c71bc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c71c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c71c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71c4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C71C4u;
    SET_GPR_U32(ctx, 31, 0x1C71CCu);
    ctx->pc = 0x1C71C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71C4u;
    // 0x1c71c8: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C71C4u, 0x1C71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71CCu;
label_1c71cc:
    // 0x1c71cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c71ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71d0: 0x1e00ffe1  bgtz        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C71D0u;
    {
        const bool branch_taken_0x1c71d0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1c71d0) {
            ctx->pc = 0x1C7158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7158;
        }
    }
    ctx->pc = 0x1C71D8u;
}
