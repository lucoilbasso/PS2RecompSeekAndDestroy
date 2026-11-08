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

// Function: entry_001c75c8
// Address: 0x1c75c8 - 0x1c7670
void entry_001c75c8_0x1c75c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c75c8_0x1c75c8");
#endif

    switch (ctx->pc) {
        case 0x1c75dcu: goto label_1c75dc;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c7610u: goto label_1c7610;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7658u: goto label_1c7658;
        default: break;
    }

    ctx->pc = 0x1c75c8u;

    // 0x1c75c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c75c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75cc: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x1c75ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1c75d0: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1c75d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1c75d4: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C75D4u;
    SET_GPR_U32(ctx, 31, 0x1C75DCu);
    ctx->pc = 0x1C75D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75D4u;
    // 0x1c75d8: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C75D4u, 0x1C75DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75DCu;
label_1c75dc:
    // 0x1c75dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c75dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c75e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c75e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e8: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C75E8u;
    SET_GPR_U32(ctx, 31, 0x1C75F0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C75E8u, 0x1C75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75F0u;
label_1c75f0:
    // 0x1c75f0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C75F0u;
    {
        const bool branch_taken_0x1c75f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75F0u;
        // 0x1c75f4: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f0) {
            ctx->pc = 0x1C7670u;
            return;
        }
    }
    ctx->pc = 0x1C75F8u;
    // 0x1c75f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c75f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75fc: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1c7600: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c7600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c7604: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1c7604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1c7608: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7608u;
    SET_GPR_U32(ctx, 31, 0x1C7610u);
    ctx->pc = 0x1C760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7608u;
    // 0x1c760c: 0xafa30250  sw          $v1, 0x250($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7608u, 0x1C7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7610u;
label_1c7610:
    // 0x1c7610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7614: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7614u;
    SET_GPR_U32(ctx, 31, 0x1C761Cu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7614u, 0x1C761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C761Cu;
label_1c761c:
    // 0x1c761c: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C761Cu;
    SET_GPR_U32(ctx, 31, 0x1C7624u);
    ctx->pc = 0x1C7620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C761Cu;
    // 0x1c7620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C761Cu, 0x1C7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7624u;
label_1c7624:
    // 0x1c7624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7628: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c762c: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c762cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7634: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7634u;
    SET_GPR_U32(ctx, 31, 0x1C763Cu);
    ctx->pc = 0x1C7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7634u;
    // 0x1c7638: 0x3a28821  addu        $s1, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7634u, 0x1C763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C763Cu;
label_1c763c:
    // 0x1c763c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7644: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7644u;
    SET_GPR_U32(ctx, 31, 0x1C764Cu);
    ctx->pc = 0x1C7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7644u;
    // 0x1c7648: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7644u, 0x1C764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764Cu;
label_1c764c:
    // 0x1c764c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7650: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7650u;
    SET_GPR_U32(ctx, 31, 0x1C7658u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7650u, 0x1C7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7658u;
label_1c7658:
    // 0x1c7658: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1c7658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c765c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c765cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c7660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7664: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7664u;
    {
        const bool branch_taken_0x1c7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7664u;
        // 0x1c7668: 0x3a38021  addu        $s0, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7664) {
            ctx->pc = 0x1C767Cu;
            return;
        }
    }
    ctx->pc = 0x1C766Cu;
    // 0x1c766c: 0x0  nop
    ctx->pc = 0x1c766cu;
    // NOP
    ctx->pc = 0x1c7670u;
}
