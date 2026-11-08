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

// Function: entry_0015989c
// Address: 0x15989c - 0x1598bc
void entry_0015989c_0x15989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015989c_0x15989c");
#endif

    ctx->pc = 0x15989cu;

    // 0x15989c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x15989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1598a0: 0xae070094  sw          $a3, 0x94($s0)
    ctx->pc = 0x1598a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 7));
    // 0x1598a4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1598a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1598a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1598A8u;
    {
        const bool branch_taken_0x1598a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A8u;
        // 0x1598ac: 0xae080090  sw          $t0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598a8) {
            ctx->pc = 0x1598BCu;
            return;
        }
    }
    ctx->pc = 0x1598B0u;
    // 0x1598b0: 0x8e830160  lw          $v1, 0x160($s4)
    ctx->pc = 0x1598b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x1598b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1598b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1598b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1598bcu;
}
