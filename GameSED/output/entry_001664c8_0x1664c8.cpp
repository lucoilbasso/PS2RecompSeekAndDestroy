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

// Function: entry_001664c8
// Address: 0x1664c8 - 0x166514
void entry_001664c8_0x1664c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001664c8_0x1664c8");
#endif

    switch (ctx->pc) {
        case 0x1664ecu: goto label_1664ec;
        case 0x166504u: goto label_166504;
        default: break;
    }

    ctx->pc = 0x1664c8u;

label_1664c8:
    // 0x1664c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1664cc: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x1664ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1664d0: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1664d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1664d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1664d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1664d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1664dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1664e0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1664e4: 0xc06164c  jal         func_185930
    ctx->pc = 0x1664E4u;
    SET_GPR_U32(ctx, 31, 0x1664ECu);
    ctx->pc = 0x1664E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664E4u;
    // 0x1664e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1664E4u, 0x1664ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664ECu;
label_1664ec:
    // 0x1664ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1664ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1664f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1664f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1664f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1664fc: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1664FCu;
    SET_GPR_U32(ctx, 31, 0x166504u);
    ctx->pc = 0x166500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664FCu;
    // 0x166500: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1664FCu, 0x166504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166504u;
label_166504:
    // 0x166504: 0x8e8211e0  lw          $v0, 0x11E0($s4)
    ctx->pc = 0x166504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4576)));
    // 0x166508: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x166508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16650c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16650Cu;
    {
        const bool branch_taken_0x16650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16650c) {
            ctx->pc = 0x166510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16650Cu;
            // 0x166510: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1664C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1664c8;
        }
    }
    ctx->pc = 0x166514u;
}
