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

// Function: entry_0018cebc
// Address: 0x18cebc - 0x18ced0
void entry_0018cebc_0x18cebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cebc_0x18cebc");
#endif

    ctx->pc = 0x18cebcu;

    // 0x18cebc: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x18cebcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18cec0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18cec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18cec4: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x18cec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x18cec8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18CEC8u;
    {
        const bool branch_taken_0x18cec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEC8u;
        // 0x18cecc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cec8) {
            ctx->pc = 0x18CE90u;
            return;
        }
    }
    ctx->pc = 0x18CED0u;
}
