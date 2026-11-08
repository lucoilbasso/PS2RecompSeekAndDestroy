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

// Function: entry_001707b0
// Address: 0x1707b0 - 0x170834
void entry_001707b0_0x1707b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001707b0_0x1707b0");
#endif

    switch (ctx->pc) {
        case 0x1707bcu: goto label_1707bc;
        case 0x1707d4u: goto label_1707d4;
        case 0x1707e4u: goto label_1707e4;
        case 0x170804u: goto label_170804;
        case 0x170810u: goto label_170810;
        case 0x170828u: goto label_170828;
        default: break;
    }

    ctx->pc = 0x1707b0u;

label_1707b0:
    // 0x1707b0: 0x26441438  addiu       $a0, $s2, 0x1438
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5176));
    // 0x1707b4: 0xc05d308  jal         func_174C20
    ctx->pc = 0x1707B4u;
    SET_GPR_U32(ctx, 31, 0x1707BCu);
    ctx->pc = 0x1707B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707B4u;
    // 0x1707b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C20u, 0x1707B4u, 0x1707BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707BCu;
label_1707bc:
    // 0x1707bc: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1707BCu;
    {
        const bool branch_taken_0x1707bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707BCu;
        // 0x1707c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707bc) {
            ctx->pc = 0x1707B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1707b0;
        }
    }
    ctx->pc = 0x1707C4u;
    // 0x1707c4: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1707c8: 0x24a54a00  addiu       $a1, $a1, 0x4A00
    ctx->pc = 0x1707c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18944));
    // 0x1707cc: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x1707CCu;
    SET_GPR_U32(ctx, 31, 0x1707D4u);
    ctx->pc = 0x1707D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707CCu;
    // 0x1707d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x1707CCu, 0x1707D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707D4u;
label_1707d4:
    // 0x1707d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1707d8: 0x26901368  addiu       $s0, $s4, 0x1368
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4968));
    // 0x1707dc: 0xc06bfea  jal         func_1AFFA8
    ctx->pc = 0x1707DCu;
    SET_GPR_U32(ctx, 31, 0x1707E4u);
    ctx->pc = 0x1707E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707DCu;
    // 0x1707e0: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFA8u, 0x1707DCu, 0x1707E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707E4u;
label_1707e4:
    // 0x1707e4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1707e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1707e8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1707e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1707ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1707ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1707f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1707f0u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1707f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1707f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1707f8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1707f8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x1707fc: 0xc06af3e  jal         func_1ABCF8
    ctx->pc = 0x1707FCu;
    SET_GPR_U32(ctx, 31, 0x170804u);
    ctx->pc = 0x1ABCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCF8u, 0x1707FCu, 0x170804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170804u;
label_170804:
    // 0x170804: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x170808: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x170808u;
    SET_GPR_U32(ctx, 31, 0x170810u);
    ctx->pc = 0x17080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170808u;
    // 0x17080c: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC30u, 0x170808u, 0x170810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x170810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x170814: 0x24a54b88  addiu       $a1, $a1, 0x4B88
    ctx->pc = 0x170814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19336));
    // 0x170818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17081c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170820: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x170820u;
    SET_GPR_U32(ctx, 31, 0x170828u);
    ctx->pc = 0x170824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170820u;
    // 0x170824: 0xff8291a8  sd          $v0, -0x6E58($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294939048), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x170820u, 0x170828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170828u;
label_170828:
    // 0x170828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17082c: 0xc06bfea  jal         func_1AFFA8
    ctx->pc = 0x17082Cu;
    SET_GPR_U32(ctx, 31, 0x170834u);
    ctx->pc = 0x170830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17082Cu;
    // 0x170830: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFA8u, 0x17082Cu, 0x170834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170834u;
}
