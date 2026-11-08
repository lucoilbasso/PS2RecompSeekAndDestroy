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

// Function: entry_00179e18
// Address: 0x179e18 - 0x179e30
void entry_00179e18_0x179e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e18_0x179e18");
#endif

    ctx->pc = 0x179e18u;

    // 0x179e18: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x179e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x179e1c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179E1Cu;
    {
        const bool branch_taken_0x179e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e1c) {
            ctx->pc = 0x179E34u;
            return;
        }
    }
    ctx->pc = 0x179E24u;
    // 0x179e24: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x179e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x179e28: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x179E28u;
    {
        const bool branch_taken_0x179e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x179e28) {
            ctx->pc = 0x179E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E28u;
            // 0x179e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E34u;
            return;
        }
    }
    ctx->pc = 0x179E30u;
}
