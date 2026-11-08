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

// Function: entry_00107b08
// Address: 0x107b08 - 0x107b28
void entry_00107b08_0x107b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b08_0x107b08");
#endif

    ctx->pc = 0x107b08u;

    // 0x107b08: 0x24020166  addiu       $v0, $zero, 0x166
    ctx->pc = 0x107b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x107b0c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x107B0Cu;
    {
        const bool branch_taken_0x107b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107b0c) {
            ctx->pc = 0x107B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107B0Cu;
            // 0x107b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107B14u;
    // 0x107b14: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x107B14u;
    {
        const bool branch_taken_0x107b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B14u;
        // 0x107b18: 0x8e020200  lw          $v0, 0x200($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b14) {
            ctx->pc = 0x107B28u;
            return;
        }
    }
    ctx->pc = 0x107B1Cu;
    // 0x107b1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107B1Cu;
    {
        const bool branch_taken_0x107b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B1Cu;
        // 0x107b20: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b1c) {
            ctx->pc = 0x107B30u;
            return;
        }
    }
    ctx->pc = 0x107B24u;
    // 0x107b24: 0x0  nop
    ctx->pc = 0x107b24u;
    // NOP
    ctx->pc = 0x107b28u;
}
