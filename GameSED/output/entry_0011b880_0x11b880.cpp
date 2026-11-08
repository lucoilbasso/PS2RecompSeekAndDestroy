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

// Function: entry_0011b880
// Address: 0x11b880 - 0x11b890
void entry_0011b880_0x11b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b880_0x11b880");
#endif

    ctx->pc = 0x11b880u;

    // 0x11b880: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B880u;
    {
        const bool branch_taken_0x11b880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B880u;
        // 0x11b884: 0x8c4640a4  lw          $a2, 0x40A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b880) {
            ctx->pc = 0x11B890u;
            return;
        }
    }
    ctx->pc = 0x11B888u;
    // 0x11b888: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B888u;
    SET_GPR_U32(ctx, 31, 0x11B890u);
    ctx->pc = 0x11B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B888u;
    // 0x11b88c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B888u, 0x11B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B890u;
}
