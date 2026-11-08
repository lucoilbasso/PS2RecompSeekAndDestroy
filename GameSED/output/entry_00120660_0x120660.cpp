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

// Function: entry_00120660
// Address: 0x120660 - 0x120670
void entry_00120660_0x120660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120660_0x120660");
#endif

    ctx->pc = 0x120660u;

    // 0x120660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120664: 0x2c43001a  sltiu       $v1, $v0, 0x1A
    ctx->pc = 0x120664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x120668: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120668u;
    {
        const bool branch_taken_0x120668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120668u;
        // 0x12066c: 0xacc20120  sw          $v0, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120668) {
            ctx->pc = 0x120674u;
            return;
        }
    }
    ctx->pc = 0x120670u;
}
