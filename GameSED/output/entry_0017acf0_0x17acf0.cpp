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

// Function: entry_0017acf0
// Address: 0x17acf0 - 0x17ad04
void entry_0017acf0_0x17acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017acf0_0x17acf0");
#endif

    ctx->pc = 0x17acf0u;

    // 0x17acf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17acf4: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17acf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17acf8: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x17acf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17acfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17ACFCu;
    {
        const bool branch_taken_0x17acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACFCu;
        // 0x17ad00: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acfc) {
            ctx->pc = 0x17ACD0u;
            return;
        }
    }
    ctx->pc = 0x17AD04u;
}
