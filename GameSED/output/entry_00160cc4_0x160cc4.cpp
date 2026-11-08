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

// Function: entry_00160cc4
// Address: 0x160cc4 - 0x160cd8
void entry_00160cc4_0x160cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160cc4_0x160cc4");
#endif

    ctx->pc = 0x160cc4u;

    // 0x160cc4: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x160cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160cc8: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x160cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x160ccc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160CCCu;
    {
        const bool branch_taken_0x160ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CCCu;
        // 0x160cd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ccc) {
            ctx->pc = 0x160CF4u;
            return;
        }
    }
    ctx->pc = 0x160CD4u;
    // 0x160cd4: 0x0  nop
    ctx->pc = 0x160cd4u;
    // NOP
    ctx->pc = 0x160cd8u;
}
