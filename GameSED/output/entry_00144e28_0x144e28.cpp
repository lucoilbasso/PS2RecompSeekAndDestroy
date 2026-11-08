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

// Function: entry_00144e28
// Address: 0x144e28 - 0x144e38
void entry_00144e28_0x144e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144e28_0x144e28");
#endif

    ctx->pc = 0x144e28u;

    // 0x144e28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144E28u;
    {
        const bool branch_taken_0x144e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E28u;
        // 0x144e2c: 0x8e420328  lw          $v0, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e28) {
            ctx->pc = 0x144E38u;
            return;
        }
    }
    ctx->pc = 0x144E30u;
    // 0x144e30: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x144E30u;
    {
        const bool branch_taken_0x144e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E30u;
        // 0x144e34: 0xe4544014  swc1        $f20, 0x4014($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e30) {
            ctx->pc = 0x1450BCu;
            return;
        }
    }
    ctx->pc = 0x144E38u;
}
