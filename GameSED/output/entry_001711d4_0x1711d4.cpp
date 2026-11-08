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

// Function: entry_001711d4
// Address: 0x1711d4 - 0x171200
void entry_001711d4_0x1711d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001711d4_0x1711d4");
#endif

    ctx->pc = 0x1711d4u;

    // 0x1711d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1711d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1711d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1711d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1711dc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1711DCu;
    {
        const bool branch_taken_0x1711dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1711E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711DCu;
        // 0x1711e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711dc) {
            ctx->pc = 0x171218u;
            return;
        }
    }
    ctx->pc = 0x1711E4u;
    // 0x1711e4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1711e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1711e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1711E8u;
    {
        const bool branch_taken_0x1711e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711E8u;
        // 0x1711ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711e8) {
            ctx->pc = 0x171200u;
            return;
        }
    }
    ctx->pc = 0x1711F0u;
    // 0x1711f0: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1711F0u;
    {
        const bool branch_taken_0x1711f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F0u;
        // 0x1711f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711f0) {
            ctx->pc = 0x171358u;
            return;
        }
    }
    ctx->pc = 0x1711F8u;
    // 0x1711f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1711F8u;
    {
        const bool branch_taken_0x1711f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F8u;
        // 0x1711fc: 0x8e0c0038  lw          $t4, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711f8) {
            ctx->pc = 0x171290u;
            return;
        }
    }
    ctx->pc = 0x171200u;
}
