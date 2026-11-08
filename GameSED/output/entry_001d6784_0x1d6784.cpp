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

// Function: entry_001d6784
// Address: 0x1d6784 - 0x1d67ac
void entry_001d6784_0x1d6784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6784_0x1d6784");
#endif

    switch (ctx->pc) {
        case 0x1d6790u: goto label_1d6790;
        default: break;
    }

    ctx->pc = 0x1d6784u;

    // 0x1d6784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6788: 0xc06beaa  jal         func_1AFAA8
    ctx->pc = 0x1D6788u;
    SET_GPR_U32(ctx, 31, 0x1D6790u);
    ctx->pc = 0x1D678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6788u;
    // 0x1d678c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAA8u, 0x1D6788u, 0x1D6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6790u;
label_1d6790:
    // 0x1d6790: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d6790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6794: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6798: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6798u;
    {
        const bool branch_taken_0x1d6798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6798u;
        // 0x1d679c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6798) {
            ctx->pc = 0x1D67ACu;
            return;
        }
    }
    ctx->pc = 0x1D67A0u;
    // 0x1d67a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d67a4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D67A4u;
    {
        const bool branch_taken_0x1d67a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d67a4) {
            ctx->pc = 0x1D67A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D67A4u;
            // 0x1d67a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D67ACu;
            return;
        }
    }
    ctx->pc = 0x1D67ACu;
}
