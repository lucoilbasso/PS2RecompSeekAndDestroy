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

// Function: entry_00134cfc
// Address: 0x134cfc - 0x134d18
void entry_00134cfc_0x134cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134cfc_0x134cfc");
#endif

    switch (ctx->pc) {
        case 0x134d10u: goto label_134d10;
        default: break;
    }

    ctx->pc = 0x134cfcu;

    // 0x134cfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134d04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x134d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d08: 0xc04e8bc  jal         func_13A2F0
    ctx->pc = 0x134D08u;
    SET_GPR_U32(ctx, 31, 0x134D10u);
    ctx->pc = 0x134D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D08u;
    // 0x134d0c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A2F0u, 0x134D08u, 0x134D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D10u;
label_134d10:
    // 0x134d10: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x134D10u;
    {
        const bool branch_taken_0x134d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D10u;
        // 0x134d14: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d10) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134D18u;
}
