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

// Function: entry_001645d0
// Address: 0x1645d0 - 0x1645e8
void entry_001645d0_0x1645d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645d0_0x1645d0");
#endif

    ctx->pc = 0x1645d0u;

    // 0x1645d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1645d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1645d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645d8: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1645D8u;
    {
        const bool branch_taken_0x1645d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1645DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645D8u;
        // 0x1645dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645d8) {
            ctx->pc = 0x1646B4u;
            return;
        }
    }
    ctx->pc = 0x1645E0u;
    // 0x1645e0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1645e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1645e4: 0x0  nop
    ctx->pc = 0x1645e4u;
    // NOP
    ctx->pc = 0x1645e8u;
}
