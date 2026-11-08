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

// Function: entry_001624b4
// Address: 0x1624b4 - 0x1624cc
void entry_001624b4_0x1624b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001624b4_0x1624b4");
#endif

    ctx->pc = 0x1624b4u;

    // 0x1624b4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1624b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1624b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1624bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1624bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1624c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1624C0u;
    {
        const bool branch_taken_0x1624c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1624C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624C0u;
        // 0x1624c4: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624c0) {
            ctx->pc = 0x1624CCu;
            return;
        }
    }
    ctx->pc = 0x1624C8u;
    // 0x1624c8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->pc = 0x1624ccu;
}
