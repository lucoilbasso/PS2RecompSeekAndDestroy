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

// Function: entry_00101194
// Address: 0x101194 - 0x1011bc
void entry_00101194_0x101194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101194_0x101194");
#endif

    switch (ctx->pc) {
        case 0x1011b8u: goto label_1011b8;
        default: break;
    }

    ctx->pc = 0x101194u;

    // 0x101194: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101198: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x101198u;
    {
        const bool branch_taken_0x101198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101198) {
            ctx->pc = 0x10119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101198u;
            // 0x10119c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1011BCu;
            return;
        }
    }
    ctx->pc = 0x1011A0u;
    // 0x1011a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1011a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1011a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1011a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011a8: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x1011a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x1011ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1011acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1011b0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1011B0u;
    SET_GPR_U32(ctx, 31, 0x1011B8u);
    ctx->pc = 0x1011B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011B0u;
    // 0x1011b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1011B0u, 0x1011B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011B8u;
label_1011b8:
    // 0x1011b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1011bcu;
}
