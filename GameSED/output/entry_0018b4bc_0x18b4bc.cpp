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

// Function: entry_0018b4bc
// Address: 0x18b4bc - 0x18b4e0
void entry_0018b4bc_0x18b4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b4bc_0x18b4bc");
#endif

    ctx->pc = 0x18b4bcu;

    // 0x18b4bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b4c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b4c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18b4c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b4cc: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B4CCu;
    {
        const bool branch_taken_0x18b4cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4CCu;
        // 0x18b4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4cc) {
            ctx->pc = 0x18B4B0u;
            return;
        }
    }
    ctx->pc = 0x18B4D4u;
    // 0x18b4d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B4D4u;
    {
        const bool branch_taken_0x18b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4D4u;
        // 0x18b4d8: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4d4) {
            ctx->pc = 0x18B500u;
            return;
        }
    }
    ctx->pc = 0x18B4DCu;
    // 0x18b4dc: 0x0  nop
    ctx->pc = 0x18b4dcu;
    // NOP
    ctx->pc = 0x18b4e0u;
}
