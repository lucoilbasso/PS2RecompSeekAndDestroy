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

// Function: entry_0019cabc
// Address: 0x19cabc - 0x19cad0
void entry_0019cabc_0x19cabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cabc_0x19cabc");
#endif

    ctx->pc = 0x19cabcu;

    // 0x19cabc: 0x24c4ffd0  addiu       $a0, $a2, -0x30
    ctx->pc = 0x19cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19cac0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x19cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x19cac4: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19cac4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19cac8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19CAC8u;
    {
        const bool branch_taken_0x19cac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAC8u;
        // 0x19cacc: 0x2448ffd0  addiu       $t0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cac8) {
            ctx->pc = 0x19CAA0u;
            return;
        }
    }
    ctx->pc = 0x19CAD0u;
}
