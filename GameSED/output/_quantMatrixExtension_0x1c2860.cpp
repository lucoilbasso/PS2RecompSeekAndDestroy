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

// Function: _quantMatrixExtension
// Address: 0x1c2860 - 0x1c2924
void _quantMatrixExtension_0x1c2860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_quantMatrixExtension_0x1c2860");
#endif

    switch (ctx->pc) {
        case 0x1c2878u: goto label_1c2878;
        case 0x1c2888u: goto label_1c2888;
        case 0x1c2894u: goto label_1c2894;
        case 0x1c289cu: goto label_1c289c;
        case 0x1c28a8u: goto label_1c28a8;
        case 0x1c28b8u: goto label_1c28b8;
        case 0x1c28c4u: goto label_1c28c4;
        case 0x1c28ccu: goto label_1c28cc;
        case 0x1c28d8u: goto label_1c28d8;
        case 0x1c28ecu: goto label_1c28ec;
        case 0x1c28f8u: goto label_1c28f8;
        default: break;
    }

    ctx->pc = 0x1c2860u;

    // 0x1c2860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c286c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c286cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2870: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2870u;
    SET_GPR_U32(ctx, 31, 0x1C2878u);
    ctx->pc = 0x1C2874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2870u;
    // 0x1c2874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2870u, 0x1C2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2878u;
label_1c2878:
    // 0x1c2878: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2878u;
    {
        const bool branch_taken_0x1c2878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2878u;
        // 0x1c287c: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2878) {
            ctx->pc = 0x1C289Cu;
            goto label_1c289c;
        }
    }
    ctx->pc = 0x1C2880u;
    // 0x1c2880: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C2880u;
    SET_GPR_U32(ctx, 31, 0x1C2888u);
    ctx->pc = 0x1C2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2880u;
    // 0x1c2884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C2880u, 0x1C2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2888u;
label_1c2888:
    // 0x1c2888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c288c: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C288Cu;
    SET_GPR_U32(ctx, 31, 0x1C2894u);
    ctx->pc = 0x1C2890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C288Cu;
    // 0x1c2890: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C288Cu, 0x1C2894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2894u;
label_1c2894:
    // 0x1c2894: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C2894u;
    SET_GPR_U32(ctx, 31, 0x1C289Cu);
    ctx->pc = 0x1C2898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2894u;
    // 0x1c2898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C2894u, 0x1C289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C289Cu;
label_1c289c:
    // 0x1c289c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28a0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C28A0u;
    SET_GPR_U32(ctx, 31, 0x1C28A8u);
    ctx->pc = 0x1C28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28A0u;
    // 0x1c28a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C28A0u, 0x1C28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28A8u;
label_1c28a8:
    // 0x1c28a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C28A8u;
    {
        const bool branch_taken_0x1c28a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28A8u;
        // 0x1c28ac: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28a8) {
            ctx->pc = 0x1C28CCu;
            goto label_1c28cc;
        }
    }
    ctx->pc = 0x1C28B0u;
    // 0x1c28b0: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C28B0u;
    SET_GPR_U32(ctx, 31, 0x1C28B8u);
    ctx->pc = 0x1C28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28B0u;
    // 0x1c28b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C28B0u, 0x1C28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28B8u;
label_1c28b8:
    // 0x1c28b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28bc: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C28BCu;
    SET_GPR_U32(ctx, 31, 0x1C28C4u);
    ctx->pc = 0x1C28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28BCu;
    // 0x1c28c0: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C28BCu, 0x1C28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28C4u;
label_1c28c4:
    // 0x1c28c4: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C28C4u;
    SET_GPR_U32(ctx, 31, 0x1C28CCu);
    ctx->pc = 0x1C28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28C4u;
    // 0x1c28c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C28C4u, 0x1C28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28CCu;
label_1c28cc:
    // 0x1c28cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28d0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C28D0u;
    SET_GPR_U32(ctx, 31, 0x1C28D8u);
    ctx->pc = 0x1C28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28D0u;
    // 0x1c28d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C28D0u, 0x1C28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28D8u;
label_1c28d8:
    // 0x1c28d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28D8u;
    {
        const bool branch_taken_0x1c28d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28D8u;
        // 0x1c28dc: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28d8) {
            ctx->pc = 0x1C28ECu;
            goto label_1c28ec;
        }
    }
    ctx->pc = 0x1C28E0u;
    // 0x1c28e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28e4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C28E4u;
    SET_GPR_U32(ctx, 31, 0x1C28ECu);
    ctx->pc = 0x1C28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28E4u;
    // 0x1c28e8: 0x24a5b650  addiu       $a1, $a1, -0x49B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C28E4u, 0x1C28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28ECu;
label_1c28ec:
    // 0x1c28ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C28F0u;
    SET_GPR_U32(ctx, 31, 0x1C28F8u);
    ctx->pc = 0x1C28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28F0u;
    // 0x1c28f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C28F0u, 0x1C28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28F8u;
label_1c28f8:
    // 0x1c28f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C28F8u;
    {
        const bool branch_taken_0x1c28f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28F8u;
        // 0x1c28fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28f8) {
            ctx->pc = 0x1C2918u;
            goto label_1c2918;
        }
    }
    ctx->pc = 0x1C2900u;
    // 0x1c2900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2904: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c2908: 0x24a5b678  addiu       $a1, $a1, -0x4988
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948472));
    // 0x1c290c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c290cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2910: 0x806f8a0  j           func_1BE280
    ctx->pc = 0x1C2910u;
    ctx->pc = 0x1C2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2910u;
    // 0x1c2914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    ps2__Error_0x1be280(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2918u;
label_1c2918:
    // 0x1c2918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c291c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C291Cu;
        // 0x1c2920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2924u;
}
