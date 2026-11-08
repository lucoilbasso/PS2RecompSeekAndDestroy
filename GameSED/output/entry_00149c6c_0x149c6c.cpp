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

// Function: entry_00149c6c
// Address: 0x149c6c - 0x149ca8
void entry_00149c6c_0x149c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149c6c_0x149c6c");
#endif

    ctx->pc = 0x149c6cu;

    // 0x149c6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149c70: 0x246b0010  addiu       $t3, $v1, 0x10
    ctx->pc = 0x149c70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x149c74: 0x246a0020  addiu       $t2, $v1, 0x20
    ctx->pc = 0x149c74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x149c78: 0x8d660008  lw          $a2, 0x8($t3)
    ctx->pc = 0x149c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x149c7c: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x149c80: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x149c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149c84: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149C84u;
    {
        const bool branch_taken_0x149c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C84u;
        // 0x149c88: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c84) {
            ctx->pc = 0x149D10u;
            return;
        }
    }
    ctx->pc = 0x149C8Cu;
    // 0x149c8c: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x149c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x149c90: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x149c94: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x149c94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c98: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x149c9c: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x149c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x149ca0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x149ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x149ca4: 0x0  nop
    ctx->pc = 0x149ca4u;
    // NOP
    ctx->pc = 0x149ca8u;
}
