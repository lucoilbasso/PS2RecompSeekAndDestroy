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

// Function: entry_00144cc4
// Address: 0x144cc4 - 0x144cf0
void entry_00144cc4_0x144cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144cc4_0x144cc4");
#endif

    switch (ctx->pc) {
        case 0x144ce0u: goto label_144ce0;
        default: break;
    }

    ctx->pc = 0x144cc4u;

    // 0x144cc4: 0x5500000a  bnel        $t0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x144CC4u;
    {
        const bool branch_taken_0x144cc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x144cc4) {
            ctx->pc = 0x144CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144CC4u;
            // 0x144cc8: 0x8d060160  lw          $a2, 0x160($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144CF0u;
            return;
        }
    }
    ctx->pc = 0x144CCCu;
    // 0x144ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x144cd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x144cd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd8: 0xc04ef9c  jal         func_13BE70
    ctx->pc = 0x144CD8u;
    SET_GPR_U32(ctx, 31, 0x144CE0u);
    ctx->pc = 0x144CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CD8u;
    // 0x144cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE70u, 0x144CD8u, 0x144CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CE0u;
label_144ce0:
    // 0x144ce0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x144ce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce4: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x144CE4u;
    {
        const bool branch_taken_0x144ce4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CE4u;
        // 0x144ce8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ce4) {
            ctx->pc = 0x144D68u;
            return;
        }
    }
    ctx->pc = 0x144CECu;
    // 0x144cec: 0x8d060160  lw          $a2, 0x160($t0)
    ctx->pc = 0x144cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    ctx->pc = 0x144cf0u;
}
