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

// Function: entry_0019fcf8
// Address: 0x19fcf8 - 0x19fd20
void entry_0019fcf8_0x19fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcf8_0x19fcf8");
#endif

    switch (ctx->pc) {
        case 0x19fd14u: goto label_19fd14;
        default: break;
    }

    ctx->pc = 0x19fcf8u;

    // 0x19fcf8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19fcf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcfc: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FCFCu;
    {
        const bool branch_taken_0x19fcfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fcfc) {
            ctx->pc = 0x19FD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FCFCu;
            // 0x19fd00: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD20u;
            return;
        }
    }
    ctx->pc = 0x19FD04u;
    // 0x19fd04: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fd08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd0c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x19FD0Cu;
    SET_GPR_U32(ctx, 31, 0x19FD14u);
    ctx->pc = 0x19FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD0Cu;
    // 0x19fd10: 0x248487f0  addiu       $a0, $a0, -0x7810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x19FD0Cu, 0x19FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD14u;
label_19fd14:
    // 0x19fd14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19FD14u;
    {
        const bool branch_taken_0x19fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD14u;
        // 0x19fd18: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd14) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD1Cu;
    // 0x19fd1c: 0x0  nop
    ctx->pc = 0x19fd1cu;
    // NOP
    ctx->pc = 0x19fd20u;
}
