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

// Function: entry_00186cb8
// Address: 0x186cb8 - 0x186cdc
void entry_00186cb8_0x186cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186cb8_0x186cb8");
#endif

    ctx->pc = 0x186cb8u;

    // 0x186cb8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x186cbc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x186CBCu;
    {
        const bool branch_taken_0x186cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CBCu;
        // 0x186cc0: 0x24900020  addiu       $s0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cbc) {
            ctx->pc = 0x186CE4u;
            return;
        }
    }
    ctx->pc = 0x186CC4u;
    // 0x186cc4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x186cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x186cc8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x186cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x186ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186CCCu;
    {
        const bool branch_taken_0x186ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ccc) {
            ctx->pc = 0x186CDCu;
            return;
        }
    }
    ctx->pc = 0x186CD4u;
    // 0x186cd4: 0xc061920  jal         func_186480
    ctx->pc = 0x186CD4u;
    SET_GPR_U32(ctx, 31, 0x186CDCu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x186CD4u, 0x186CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CDCu;
}
