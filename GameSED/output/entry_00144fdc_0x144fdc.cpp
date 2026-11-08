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

// Function: entry_00144fdc
// Address: 0x144fdc - 0x145008
void entry_00144fdc_0x144fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144fdc_0x144fdc");
#endif

    ctx->pc = 0x144fdcu;

    // 0x144fdc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144fe0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144fe4: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x144fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x144fe8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x144fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x144fec: 0x8e490328  lw          $t1, 0x328($s2)
    ctx->pc = 0x144fecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144ff0: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x144ff4: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x144ff8: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x144FF8u;
    {
        const bool branch_taken_0x144ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FF8u;
        // 0x144ffc: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ff8) {
            ctx->pc = 0x1450BCu;
            return;
        }
    }
    ctx->pc = 0x145000u;
    // 0x145000: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x145000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x145004: 0x0  nop
    ctx->pc = 0x145004u;
    // NOP
    ctx->pc = 0x145008u;
}
