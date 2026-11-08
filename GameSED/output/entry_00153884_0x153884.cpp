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

// Function: entry_00153884
// Address: 0x153884 - 0x153898
void entry_00153884_0x153884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153884_0x153884");
#endif

    ctx->pc = 0x153884u;

    // 0x153884: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153884u;
    {
        const bool branch_taken_0x153884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153884) {
            ctx->pc = 0x153888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153884u;
            // 0x153888: 0xc62103cc  lwc1        $f1, 0x3CC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x153898u;
            return;
        }
    }
    ctx->pc = 0x15388Cu;
    // 0x15388c: 0x8e220694  lw          $v0, 0x694($s1)
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x153890: 0xae220698  sw          $v0, 0x698($s1)
    ctx->pc = 0x153890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 2));
    // 0x153894: 0xc62103cc  lwc1        $f1, 0x3CC($s1)
    ctx->pc = 0x153894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x153898u;
}
