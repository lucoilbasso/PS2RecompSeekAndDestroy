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

// Function: VSync2
// Address: 0x1af980 - 0x1afa24
void VSync2_0x1af980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync2_0x1af980");
#endif

    switch (ctx->pc) {
        case 0x1af998u: goto label_1af998;
        case 0x1af9a0u: goto label_1af9a0;
        case 0x1af9c4u: goto label_1af9c4;
        case 0x1af9d0u: goto label_1af9d0;
        case 0x1af9f4u: goto label_1af9f4;
        case 0x1afa14u: goto label_1afa14;
        default: break;
    }

    ctx->pc = 0x1af980u;

    // 0x1af980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af988: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af98c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1af98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1af990: 0xc06bdf4  jal         func_1AF7D0
    ctx->pc = 0x1AF990u;
    SET_GPR_U32(ctx, 31, 0x1AF998u);
    ctx->pc = 0x1AF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF990u;
    // 0x1af994: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF7D0u, 0x1AF990u, 0x1AF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF998u;
label_1af998:
    // 0x1af998: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1AF998u;
    SET_GPR_U32(ctx, 31, 0x1AF9A0u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1AF998u, 0x1AF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9A0u;
label_1af9a0:
    // 0x1af9a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1af9a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1af9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af9a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1af9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1af9ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1af9acu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x1af9b0: 0xf  sync
    ctx->pc = 0x1af9b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1af9b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF9B4u;
    {
        const bool branch_taken_0x1af9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B4u;
        // 0x1af9b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9b4) {
            ctx->pc = 0x1AF9C8u;
            goto label_1af9c8;
        }
    }
    ctx->pc = 0x1AF9BCu;
    // 0x1af9bc: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1AF9BCu;
    SET_GPR_U32(ctx, 31, 0x1AF9C4u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1AF9BCu, 0x1AF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9C4u;
label_1af9c4:
    // 0x1af9c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1af9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1af9c8:
    // 0x1af9c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1af9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1af9cc: 0x0  nop
    ctx->pc = 0x1af9ccu;
    // NOP
label_1af9d0:
    // 0x1af9d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af9d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1af9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1af9d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF9D8u;
    {
        const bool branch_taken_0x1af9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af9d8) {
            ctx->pc = 0x1AF9ECu;
            goto label_1af9ec;
        }
    }
    ctx->pc = 0x1AF9E0u;
    // 0x1af9e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF9E4u;
    {
        const bool branch_taken_0x1af9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af9e4) {
            ctx->pc = 0x1AF9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af9d0;
        }
    }
    ctx->pc = 0x1AF9ECu;
label_1af9ec:
    // 0x1af9ec: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1AF9ECu;
    SET_GPR_U32(ctx, 31, 0x1AF9F4u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1AF9ECu, 0x1AF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9F4u;
label_1af9f4:
    // 0x1af9f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1af9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af9f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1af9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1af9fc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x1af9fcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3));
    // 0x1afa00: 0xf  sync
    ctx->pc = 0x1afa00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afa04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFA04u;
    {
        const bool branch_taken_0x1afa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa04) {
            ctx->pc = 0x1AFA14u;
            goto label_1afa14;
        }
    }
    ctx->pc = 0x1AFA0Cu;
    // 0x1afa0c: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1AFA0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFA14u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1AFA0Cu, 0x1AFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA14u;
label_1afa14:
    // 0x1afa14: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1afa14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afa18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1afa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA1Cu;
        // 0x1afa20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFA24u;
}
