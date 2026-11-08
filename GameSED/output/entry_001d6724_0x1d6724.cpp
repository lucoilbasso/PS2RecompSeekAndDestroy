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

// Function: entry_001d6724
// Address: 0x1d6724 - 0x1d674c
void entry_001d6724_0x1d6724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6724_0x1d6724");
#endif

    switch (ctx->pc) {
        case 0x1d6730u: goto label_1d6730;
        default: break;
    }

    ctx->pc = 0x1d6724u;

    // 0x1d6724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6728: 0xc06bed6  jal         func_1AFB58
    ctx->pc = 0x1D6728u;
    SET_GPR_U32(ctx, 31, 0x1D6730u);
    ctx->pc = 0x1D672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6728u;
    // 0x1d672c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB58u, 0x1D6728u, 0x1D6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6730u;
label_1d6730:
    // 0x1d6730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6738: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6738u;
    {
        const bool branch_taken_0x1d6738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d6738) {
            ctx->pc = 0x1D673Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6738u;
            // 0x1d673c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6750u;
            return;
        }
    }
    ctx->pc = 0x1D6740u;
    // 0x1d6740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6744: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6744u;
    {
        const bool branch_taken_0x1d6744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6744) {
            ctx->pc = 0x1D6748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6744u;
            // 0x1d6748: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D674Cu;
            return;
        }
    }
    ctx->pc = 0x1D674Cu;
}
