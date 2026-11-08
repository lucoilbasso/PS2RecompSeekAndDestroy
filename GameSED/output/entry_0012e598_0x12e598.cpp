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

// Function: entry_0012e598
// Address: 0x12e598 - 0x12e5d8
void entry_0012e598_0x12e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e598_0x12e598");
#endif

    switch (ctx->pc) {
        case 0x12e5a4u: goto label_12e5a4;
        case 0x12e5bcu: goto label_12e5bc;
        default: break;
    }

    ctx->pc = 0x12e598u;

    // 0x12e598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e59c: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E59Cu;
    SET_GPR_U32(ctx, 31, 0x12E5A4u);
    ctx->pc = 0x12E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E59Cu;
    // 0x12e5a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E59Cu, 0x12E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5A4u;
label_12e5a4:
    // 0x12e5a4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e5a8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12e5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12e5ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e5b4: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E5B4u;
    SET_GPR_U32(ctx, 31, 0x12E5BCu);
    ctx->pc = 0x12E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5B4u;
    // 0x12e5b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E5B4u, 0x12E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5BCu;
label_12e5bc:
    // 0x12e5bc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E5BCu;
    {
        const bool branch_taken_0x12e5bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5BCu;
        // 0x12e5c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5bc) {
            ctx->pc = 0x12E5D8u;
            return;
        }
    }
    ctx->pc = 0x12E5C4u;
    // 0x12e5c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e5c8: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E5C8u;
    {
        const bool branch_taken_0x12e5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x12e5c8) {
            ctx->pc = 0x12E5D8u;
            return;
        }
    }
    ctx->pc = 0x12E5D0u;
    // 0x12e5d0: 0xc04b876  jal         func_12E1D8
    ctx->pc = 0x12E5D0u;
    SET_GPR_U32(ctx, 31, 0x12E5D8u);
    ctx->pc = 0x12E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5D0u;
    // 0x12e5d4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E1D8u, 0x12E5D0u, 0x12E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5D8u;
}
