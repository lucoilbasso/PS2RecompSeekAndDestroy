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

// Function: entry_00159778
// Address: 0x159778 - 0x159798
void entry_00159778_0x159778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159778_0x159778");
#endif

    ctx->pc = 0x159778u;

    // 0x159778: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x159778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x15977c: 0xae060090  sw          $a2, 0x90($s0)
    ctx->pc = 0x15977cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 6));
    // 0x159780: 0xae090094  sw          $t1, 0x94($s0)
    ctx->pc = 0x159780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 9));
    // 0x159784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159784u;
    {
        const bool branch_taken_0x159784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159784u;
        // 0x159788: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159784) {
            ctx->pc = 0x159798u;
            return;
        }
    }
    ctx->pc = 0x15978Cu;
    // 0x15978c: 0x8d030160  lw          $v1, 0x160($t0)
    ctx->pc = 0x15978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x159790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159794: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x159798u;
}
