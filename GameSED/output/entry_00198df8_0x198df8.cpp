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

// Function: entry_00198df8
// Address: 0x198df8 - 0x198e20
void entry_00198df8_0x198df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198df8_0x198df8");
#endif

    ctx->pc = 0x198df8u;

    // 0x198df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198dfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x198dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x198e00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x198e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x198e04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x198e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x198e08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x198e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x198e0c: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x198e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x198e10: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x198E10u;
    {
        const bool branch_taken_0x198e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E10u;
        // 0x198e14: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e10) {
            ctx->pc = 0x198E84u;
            return;
        }
    }
    ctx->pc = 0x198E18u;
    // 0x198e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198e1c: 0x0  nop
    ctx->pc = 0x198e1cu;
    // NOP
    ctx->pc = 0x198e20u;
}
