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

// Function: entry_00109874
// Address: 0x109874 - 0x109890
void entry_00109874_0x109874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109874_0x109874");
#endif

    switch (ctx->pc) {
        case 0x109884u: goto label_109884;
        default: break;
    }

    ctx->pc = 0x109874u;

    // 0x109874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10987c: 0xc06927c  jal         func_1A49F0
    ctx->pc = 0x10987Cu;
    SET_GPR_U32(ctx, 31, 0x109884u);
    ctx->pc = 0x109880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10987Cu;
    // 0x109880: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49F0u, 0x10987Cu, 0x109884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109884u;
label_109884:
    // 0x109884: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x109884u;
    {
        const bool branch_taken_0x109884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109884u;
        // 0x109888: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109884) {
            ctx->pc = 0x1098D8u;
            return;
        }
    }
    ctx->pc = 0x10988Cu;
    // 0x10988c: 0x0  nop
    ctx->pc = 0x10988cu;
    // NOP
    ctx->pc = 0x109890u;
}
