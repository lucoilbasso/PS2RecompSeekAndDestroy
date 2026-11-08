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

// Function: entry_0017cda8
// Address: 0x17cda8 - 0x17cdc8
void entry_0017cda8_0x17cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cda8_0x17cda8");
#endif

    switch (ctx->pc) {
        case 0x17cdb0u: goto label_17cdb0;
        default: break;
    }

    ctx->pc = 0x17cda8u;

    // 0x17cda8: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x17CDA8u;
    SET_GPR_U32(ctx, 31, 0x17CDB0u);
    ctx->pc = 0x17CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDA8u;
    // 0x17cdac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x17CDA8u, 0x17CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDB0u;
label_17cdb0:
    // 0x17cdb0: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x17CDB0u;
    {
        const bool branch_taken_0x17cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdb0) {
            ctx->pc = 0x17CDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDB0u;
            // 0x17cdb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            return;
        }
    }
    ctx->pc = 0x17CDB8u;
    // 0x17cdb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdbc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDBCu;
    {
        const bool branch_taken_0x17cdbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDBCu;
        // 0x17cdc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdbc) {
            ctx->pc = 0x17CDC8u;
            return;
        }
    }
    ctx->pc = 0x17CDC4u;
    // 0x17cdc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17cdc8u;
}
