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

// Function: entry_001663b0
// Address: 0x1663b0 - 0x1663fc
void entry_001663b0_0x1663b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001663b0_0x1663b0");
#endif

    switch (ctx->pc) {
        case 0x1663d4u: goto label_1663d4;
        case 0x1663ecu: goto label_1663ec;
        default: break;
    }

    ctx->pc = 0x1663b0u;

label_1663b0:
    // 0x1663b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1663b4: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x1663b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1663b8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1663bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1663c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1663c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1663c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1663c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1663c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1663cc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1663CCu;
    SET_GPR_U32(ctx, 31, 0x1663D4u);
    ctx->pc = 0x1663D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663CCu;
    // 0x1663d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1663CCu, 0x1663D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663D4u;
label_1663d4:
    // 0x1663d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1663d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1663d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663dc: 0x26c6aa70  addiu       $a2, $s6, -0x5590
    ctx->pc = 0x1663dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945392));
    // 0x1663e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1663e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1663e4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1663E4u;
    SET_GPR_U32(ctx, 31, 0x1663ECu);
    ctx->pc = 0x1663E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663E4u;
    // 0x1663e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1663E4u, 0x1663ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663ECu;
label_1663ec:
    // 0x1663ec: 0x8e8211e0  lw          $v0, 0x11E0($s4)
    ctx->pc = 0x1663ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4576)));
    // 0x1663f0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1663f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1663f4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1663F4u;
    {
        const bool branch_taken_0x1663f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1663f4) {
            ctx->pc = 0x1663F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1663F4u;
            // 0x1663f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1663B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1663b0;
        }
    }
    ctx->pc = 0x1663FCu;
}
