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

// Function: entry_0018b56c
// Address: 0x18b56c - 0x18b590
void entry_0018b56c_0x18b56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b56c_0x18b56c");
#endif

    ctx->pc = 0x18b56cu;

    // 0x18b56c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b574: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18b578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b57c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B57Cu;
    {
        const bool branch_taken_0x18b57c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B57Cu;
        // 0x18b580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b57c) {
            ctx->pc = 0x18B560u;
            return;
        }
    }
    ctx->pc = 0x18B584u;
    // 0x18b584: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B584u;
    {
        const bool branch_taken_0x18b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B584u;
        // 0x18b588: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b584) {
            ctx->pc = 0x18B5B0u;
            return;
        }
    }
    ctx->pc = 0x18B58Cu;
    // 0x18b58c: 0x0  nop
    ctx->pc = 0x18b58cu;
    // NOP
    ctx->pc = 0x18b590u;
}
