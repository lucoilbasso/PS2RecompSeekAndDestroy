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

// Function: entry_001008ec
// Address: 0x1008ec - 0x100908
void entry_001008ec_0x1008ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001008ec_0x1008ec");
#endif

    ctx->pc = 0x1008ecu;

    // 0x1008ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1008ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1008f0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1008f4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1008f8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1008fc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1008fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100900: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x100900u;
    {
        const bool branch_taken_0x100900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100900u;
        // 0x100904: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100900) {
            ctx->pc = 0x100890u;
            return;
        }
    }
    ctx->pc = 0x100908u;
}
