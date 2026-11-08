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

// Function: entry_001a8b08
// Address: 0x1a8b08 - 0x1a8b30
void entry_001a8b08_0x1a8b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8b08_0x1a8b08");
#endif

    ctx->pc = 0x1a8b08u;

    // 0x1a8b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8b0c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8b10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8b14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8b18: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8b1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8b20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8b24: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a8b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8b28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8B28u;
    {
        const bool branch_taken_0x1a8b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B28u;
        // 0x1a8b2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b28) {
            ctx->pc = 0x1A8B40u;
            return;
        }
    }
    ctx->pc = 0x1A8B30u;
}
