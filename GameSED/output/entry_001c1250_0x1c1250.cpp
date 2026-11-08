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

// Function: entry_001c1250
// Address: 0x1c1250 - 0x1c1264
void entry_001c1250_0x1c1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1250_0x1c1250");
#endif

    ctx->pc = 0x1c1250u;

    // 0x1c1250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1254: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1254u;
    {
        const bool branch_taken_0x1c1254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1254) {
            ctx->pc = 0x1C1258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1254u;
            // 0x1c1258: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1264u;
            return;
        }
    }
    ctx->pc = 0x1C125Cu;
    // 0x1c125c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C125Cu;
    {
        const bool branch_taken_0x1c125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C125Cu;
        // 0x1c1260: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c125c) {
            ctx->pc = 0x1C1278u;
            return;
        }
    }
    ctx->pc = 0x1C1264u;
}
