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

// Function: entry_00147cec
// Address: 0x147cec - 0x147d20
void entry_00147cec_0x147cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147cec_0x147cec");
#endif

    ctx->pc = 0x147cecu;

    // 0x147cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147cf0: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x147cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x147cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147cf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x147cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147cfc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147CFCu;
    {
        const bool branch_taken_0x147cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CFCu;
        // 0x147d00: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cfc) {
            ctx->pc = 0x147D2Cu;
            return;
        }
    }
    ctx->pc = 0x147D04u;
    // 0x147d04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x147d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x147d08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x147D08u;
    {
        const bool branch_taken_0x147d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d08) {
            ctx->pc = 0x147D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D08u;
            // 0x147d0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D20u;
            return;
        }
    }
    ctx->pc = 0x147D10u;
    // 0x147d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x147D14u;
    {
        const bool branch_taken_0x147d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D14u;
        // 0x147d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d14) {
            ctx->pc = 0x147D24u;
            return;
        }
    }
    ctx->pc = 0x147D1Cu;
    // 0x147d1c: 0x0  nop
    ctx->pc = 0x147d1cu;
    // NOP
    ctx->pc = 0x147d20u;
}
