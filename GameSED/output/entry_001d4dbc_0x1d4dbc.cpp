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

// Function: entry_001d4dbc
// Address: 0x1d4dbc - 0x1d4ddc
void entry_001d4dbc_0x1d4dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4dbc_0x1d4dbc");
#endif

    switch (ctx->pc) {
        case 0x1d4dccu: goto label_1d4dcc;
        default: break;
    }

    ctx->pc = 0x1d4dbcu;

    // 0x1d4dbc: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4DBCu;
    {
        const bool branch_taken_0x1d4dbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dbc) {
            ctx->pc = 0x1D4DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4DBCu;
            // 0x1d4dc0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DDCu;
            return;
        }
    }
    ctx->pc = 0x1D4DC4u;
    // 0x1d4dc4: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D4DC4u;
    SET_GPR_U32(ctx, 31, 0x1D4DCCu);
    ctx->pc = 0x1D4DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4DC4u;
    // 0x1d4dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D4DC4u, 0x1D4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DCCu;
label_1d4dcc:
    // 0x1d4dcc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4DCCu;
            // 0x1d4dd0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DF8u;
            return;
        }
    }
    ctx->pc = 0x1D4DD4u;
    // 0x1d4dd4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d4dd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4dd8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->pc = 0x1d4ddcu;
}
