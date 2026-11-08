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

// Function: entry_00162f1c
// Address: 0x162f1c - 0x162f4c
void entry_00162f1c_0x162f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162f1c_0x162f1c");
#endif

    ctx->pc = 0x162f1cu;

    // 0x162f1c: 0x265001b4  addiu       $s0, $s2, 0x1B4
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x162f20: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x162f20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x162f24: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x162f24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x162f2c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x162f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f30: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x162f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
    // 0x162f34: 0x16200029  bnez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x162F34u;
    {
        const bool branch_taken_0x162f34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F34u;
        // 0x162f38: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f34) {
            ctx->pc = 0x162FDCu;
            return;
        }
    }
    ctx->pc = 0x162F3Cu;
    // 0x162f3c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x162f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f40: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x162F40u;
    {
        const bool branch_taken_0x162f40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F40u;
        // 0x162f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f40) {
            ctx->pc = 0x162F4Cu;
            return;
        }
    }
    ctx->pc = 0x162F48u;
    // 0x162f48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x162f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x162f4cu;
}
