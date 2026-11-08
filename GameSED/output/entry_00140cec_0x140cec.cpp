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

// Function: entry_00140cec
// Address: 0x140cec - 0x140d00
void entry_00140cec_0x140cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140cec_0x140cec");
#endif

    ctx->pc = 0x140cecu;

    // 0x140cec: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x140cf0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x140cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x140cf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x140CF4u;
    {
        const bool branch_taken_0x140cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CF4u;
        // 0x140cf8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cf4) {
            ctx->pc = 0x140D1Cu;
            return;
        }
    }
    ctx->pc = 0x140CFCu;
    // 0x140cfc: 0x0  nop
    ctx->pc = 0x140cfcu;
    // NOP
    ctx->pc = 0x140d00u;
}
