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

// Function: entry_0015e788
// Address: 0x15e788 - 0x15e7a8
void entry_0015e788_0x15e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e788_0x15e788");
#endif

    ctx->pc = 0x15e788u;

    // 0x15e788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e78c: 0x24870da0  addiu       $a3, $a0, 0xDA0
    ctx->pc = 0x15e78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
    // 0x15e790: 0x8cc20200  lw          $v0, 0x200($a2)
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x15e794: 0x8cc30204  lw          $v1, 0x204($a2)
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
    // 0x15e798: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15E798u;
    {
        const bool branch_taken_0x15e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E798u;
        // 0x15e79c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e798) {
            ctx->pc = 0x15E7CCu;
            return;
        }
    }
    ctx->pc = 0x15E7A0u;
    // 0x15e7a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15e7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e7a4: 0x0  nop
    ctx->pc = 0x15e7a4u;
    // NOP
    ctx->pc = 0x15e7a8u;
}
