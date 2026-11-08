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

// Function: entry_0010d8e8
// Address: 0x10d8e8 - 0x10d908
void entry_0010d8e8_0x10d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8e8_0x10d8e8");
#endif

    ctx->pc = 0x10d8e8u;

    // 0x10d8e8: 0xac620150  sw          $v0, 0x150($v1)
    ctx->pc = 0x10d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
    // 0x10d8ec: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x10d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x10d8f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10d8f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d8f4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10D8F4u;
    {
        const bool branch_taken_0x10d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d8f4) {
            ctx->pc = 0x10D8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D8F4u;
            // 0x10d8f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D890u;
            return;
        }
    }
    ctx->pc = 0x10D8FCu;
    // 0x10d8fc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10D8FCu;
    {
        const bool branch_taken_0x10d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8FCu;
        // 0x10d900: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8fc) {
            ctx->pc = 0x10D97Cu;
            return;
        }
    }
    ctx->pc = 0x10D904u;
    // 0x10d904: 0x0  nop
    ctx->pc = 0x10d904u;
    // NOP
    ctx->pc = 0x10d908u;
}
