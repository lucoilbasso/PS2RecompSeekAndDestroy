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

// Function: entry_0014fcf8
// Address: 0x14fcf8 - 0x14fd10
void entry_0014fcf8_0x14fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fcf8_0x14fcf8");
#endif

    switch (ctx->pc) {
        case 0x14fd08u: goto label_14fd08;
        default: break;
    }

    ctx->pc = 0x14fcf8u;

    // 0x14fcf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcfc: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14fd00: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14FD00u;
    SET_GPR_U32(ctx, 31, 0x14FD08u);
    ctx->pc = 0x14FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD00u;
    // 0x14fd04: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14FD00u, 0x14FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD08u;
label_14fd08:
    // 0x14fd08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14FD08u;
    {
        const bool branch_taken_0x14fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD08u;
        // 0x14fd0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd08) {
            ctx->pc = 0x14FD40u;
            return;
        }
    }
    ctx->pc = 0x14FD10u;
}
