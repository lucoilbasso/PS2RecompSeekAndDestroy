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

// Function: entry_001a0888
// Address: 0x1a0888 - 0x1a0928
void entry_001a0888_0x1a0888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0888_0x1a0888");
#endif

    switch (ctx->pc) {
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08ccu: goto label_1a08cc;
        case 0x1a08d8u: goto label_1a08d8;
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a0900u: goto label_1a0900;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a0914u: goto label_1a0914;
        case 0x1a0924u: goto label_1a0924;
        default: break;
    }

    ctx->pc = 0x1a0888u;

    // 0x1a0888: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A0888u;
    {
        const bool branch_taken_0x1a0888 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0888u;
        // 0x1a088c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0888) {
            ctx->pc = 0x1A0948u;
            return;
        }
    }
    ctx->pc = 0x1A0890u;
    // 0x1a0890: 0x56020025  bnel        $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A0890u;
    {
        const bool branch_taken_0x1a0890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0890) {
            ctx->pc = 0x1A0894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0890u;
            // 0x1a0894: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0928u;
            return;
        }
    }
    ctx->pc = 0x1A0898u;
    // 0x1a0898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a089c: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A089Cu;
    SET_GPR_U32(ctx, 31, 0x1A08A4u);
    ctx->pc = 0x1A08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A089Cu;
    // 0x1a08a0: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A089Cu, 0x1A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08A4u;
label_1a08a4:
    // 0x1a08a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08a8: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A08A8u;
    SET_GPR_U32(ctx, 31, 0x1A08B0u);
    ctx->pc = 0x1A08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08A8u;
    // 0x1a08ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A08A8u, 0x1A08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08B0u;
label_1a08b0:
    // 0x1a08b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a08b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08b4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a08b8: 0x8c451134  lw          $a1, 0x1134($v0)
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281134u));
    // 0x1a08bc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a08c0: 0x24848fd8  addiu       $a0, $a0, -0x7028
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938584));
    // 0x1a08c4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08C4u;
    SET_GPR_U32(ctx, 31, 0x1A08CCu);
    ctx->pc = 0x1A08C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08C4u;
    // 0x1a08c8: 0x26108fe8  addiu       $s0, $s0, -0x7018 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08C4u, 0x1A08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08CCu;
label_1a08cc:
    // 0x1a08cc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a08d0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08D0u;
    SET_GPR_U32(ctx, 31, 0x1A08D8u);
    ctx->pc = 0x1A08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08D0u;
    // 0x1a08d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08D0u, 0x1A08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08D8u;
label_1a08d8:
    // 0x1a08d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08dc: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1a08dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a08e0: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1a08e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1a08e4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08E4u;
    SET_GPR_U32(ctx, 31, 0x1A08ECu);
    ctx->pc = 0x1A08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08E4u;
    // 0x1a08e8: 0x26108ff8  addiu       $s0, $s0, -0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08E4u, 0x1A08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08ECu;
label_1a08ec:
    // 0x1a08ec: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A08ECu;
    SET_GPR_U32(ctx, 31, 0x1A08F4u);
    ctx->pc = 0x1A08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08ECu;
    // 0x1a08f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A08ECu, 0x1A08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08F4u;
label_1a08f4:
    // 0x1a08f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a08f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08f8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08F8u;
    SET_GPR_U32(ctx, 31, 0x1A0900u);
    ctx->pc = 0x1A08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08F8u;
    // 0x1a08fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08F8u, 0x1A0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0900u;
label_1a0900:
    // 0x1a0900: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x1A0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0900u;
    // 0x1a0904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A0900u, 0x1A0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0908u;
label_1a0908:
    // 0x1a0908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a090c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A090Cu;
    SET_GPR_U32(ctx, 31, 0x1A0914u);
    ctx->pc = 0x1A0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A090Cu;
    // 0x1a0910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A090Cu, 0x1A0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0914u;
label_1a0914:
    // 0x1a0914: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0918: 0x8f858e0c  lw          $a1, -0x71F4($gp)
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938124)));
    // 0x1a091c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A091Cu;
    SET_GPR_U32(ctx, 31, 0x1A0924u);
    ctx->pc = 0x1A0920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A091Cu;
    // 0x1a0920: 0x24849008  addiu       $a0, $a0, -0x6FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A091Cu, 0x1A0924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0924u;
label_1a0924:
    // 0x1a0924: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x1a0928u;
}
