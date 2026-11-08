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

// Function: entry_0016a0a0
// Address: 0x16a0a0 - 0x16a0b8
void entry_0016a0a0_0x16a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a0a0_0x16a0a0");
#endif

    ctx->pc = 0x16a0a0u;

    // 0x16a0a0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x16a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16a0a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A0A4u;
    {
        const bool branch_taken_0x16a0a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0A4u;
        // 0x16a0a8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0a4) {
            ctx->pc = 0x16A0B8u;
            return;
        }
    }
    ctx->pc = 0x16A0ACu;
    // 0x16a0ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16a0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A0B0u;
    {
        const bool branch_taken_0x16a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0b0) {
            ctx->pc = 0x16A0BCu;
            return;
        }
    }
    ctx->pc = 0x16A0B8u;
}
