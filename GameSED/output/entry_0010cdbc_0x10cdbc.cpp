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

// Function: entry_0010cdbc
// Address: 0x10cdbc - 0x10cdc8
void entry_0010cdbc_0x10cdbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cdbc_0x10cdbc");
#endif

    switch (ctx->pc) {
        case 0x10cdc4u: goto label_10cdc4;
        default: break;
    }

    ctx->pc = 0x10cdbcu;

    // 0x10cdbc: 0xc063b5e  jal         func_18ED78
    ctx->pc = 0x10CDBCu;
    SET_GPR_U32(ctx, 31, 0x10CDC4u);
    ctx->pc = 0x10CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDBCu;
    // 0x10cdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED78u, 0x10CDBCu, 0x10CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDC4u;
label_10cdc4:
    // 0x10cdc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10cdc8u;
}
