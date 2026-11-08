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

// Function: entry_00184094
// Address: 0x184094 - 0x1840b8
void entry_00184094_0x184094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184094_0x184094");
#endif

    ctx->pc = 0x184094u;

    // 0x184094: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x184094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x184098: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x184098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18409c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1840a0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1840A0u;
    {
        const bool branch_taken_0x1840a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840A0u;
        // 0x1840a4: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840a0) {
            ctx->pc = 0x1840E4u;
            return;
        }
    }
    ctx->pc = 0x1840A8u;
    // 0x1840a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1840a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840ac: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1840acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1840b0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1840b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1840b4: 0x0  nop
    ctx->pc = 0x1840b4u;
    // NOP
    ctx->pc = 0x1840b8u;
}
