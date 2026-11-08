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

// Function: entry_001327ec
// Address: 0x1327ec - 0x132810
void entry_001327ec_0x1327ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001327ec_0x1327ec");
#endif

    ctx->pc = 0x1327ecu;

    // 0x1327ec: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1327ECu;
    {
        const bool branch_taken_0x1327ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327ECu;
        // 0x1327f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327ec) {
            ctx->pc = 0x132810u;
            return;
        }
    }
    ctx->pc = 0x1327F4u;
    // 0x1327f4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1327f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1327f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1327fc: 0x8c84a2b8  lw          $a0, -0x5D48($a0)
    ctx->pc = 0x1327fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943416)));
    // 0x132800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132808: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x132808u;
    SET_GPR_U32(ctx, 31, 0x132810u);
    ctx->pc = 0x13280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132808u;
    // 0x13280c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x132808u, 0x132810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132810u;
}
