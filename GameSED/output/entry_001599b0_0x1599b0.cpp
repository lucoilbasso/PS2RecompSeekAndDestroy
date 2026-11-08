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

// Function: entry_001599b0
// Address: 0x1599b0 - 0x1599d0
void entry_001599b0_0x1599b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001599b0_0x1599b0");
#endif

    ctx->pc = 0x1599b0u;

    // 0x1599b0: 0xe60c0098  swc1        $f12, 0x98($s0)
    ctx->pc = 0x1599b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1599b4: 0xae070090  sw          $a3, 0x90($s0)
    ctx->pc = 0x1599b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    // 0x1599b8: 0xae060094  sw          $a2, 0x94($s0)
    ctx->pc = 0x1599b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 6));
    // 0x1599bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1599BCu;
    {
        const bool branch_taken_0x1599bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599BCu;
        // 0x1599c0: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599bc) {
            ctx->pc = 0x1599D0u;
            return;
        }
    }
    ctx->pc = 0x1599C4u;
    // 0x1599c4: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x1599c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x1599c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1599cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1599ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1599d0u;
}
