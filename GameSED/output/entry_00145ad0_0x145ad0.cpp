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

// Function: entry_00145ad0
// Address: 0x145ad0 - 0x145b0c
void entry_00145ad0_0x145ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ad0_0x145ad0");
#endif

    switch (ctx->pc) {
        case 0x145af8u: goto label_145af8;
        default: break;
    }

    ctx->pc = 0x145ad0u;

    // 0x145ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145ad8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x145ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x145adc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x145ae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145ae4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x145AE4u;
    {
        const bool branch_taken_0x145ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AE4u;
        // 0x145ae8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ae4) {
            ctx->pc = 0x145B0Cu;
            return;
        }
    }
    ctx->pc = 0x145AECu;
    // 0x145aec: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x145af0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x145AF0u;
    SET_GPR_U32(ctx, 31, 0x145AF8u);
    ctx->pc = 0x145AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AF0u;
    // 0x145af4: 0x248469a0  addiu       $a0, $a0, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x145AF0u, 0x145AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AF8u;
label_145af8:
    // 0x145af8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145afc: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x145afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x145b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145B04u;
    SET_GPR_U32(ctx, 31, 0x145B0Cu);
    ctx->pc = 0x145B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B04u;
    // 0x145b08: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145B04u, 0x145B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B0Cu;
}
