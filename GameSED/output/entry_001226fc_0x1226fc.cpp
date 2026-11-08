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

// Function: entry_001226fc
// Address: 0x1226fc - 0x122710
void entry_001226fc_0x1226fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226fc_0x1226fc");
#endif

    ctx->pc = 0x1226fcu;

    // 0x1226fc: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226FCu;
    {
        const bool branch_taken_0x1226fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1226fc) {
            ctx->pc = 0x122700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226FCu;
            // 0x122700: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122710u;
            return;
        }
    }
    ctx->pc = 0x122704u;
    // 0x122704: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x122704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122708: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x122708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    // 0x12270c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x12270cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x122710u;
}
