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

// Function: entry_00159efc
// Address: 0x159efc - 0x159f1c
void entry_00159efc_0x159efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159efc_0x159efc");
#endif

    ctx->pc = 0x159efcu;

    // 0x159efc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x159efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x159f00: 0xae260094  sw          $a2, 0x94($s1)
    ctx->pc = 0x159f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 6));
    // 0x159f04: 0xe6340098  swc1        $f20, 0x98($s1)
    ctx->pc = 0x159f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x159f08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159F08u;
    {
        const bool branch_taken_0x159f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F08u;
        // 0x159f0c: 0xae270090  sw          $a3, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f08) {
            ctx->pc = 0x159F1Cu;
            return;
        }
    }
    ctx->pc = 0x159F10u;
    // 0x159f10: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x159f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159f18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x159f1cu;
}
