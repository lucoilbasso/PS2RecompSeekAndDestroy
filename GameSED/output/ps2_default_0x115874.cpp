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

// Function: default
// Address: 0x115874 - 0x1158a8
void ps2_default_0x115874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x115874");
#endif

    ctx->pc = 0x115874u;

    // 0x115874: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115878: 0x172840  sll         $a1, $s7, 1
    ctx->pc = 0x115878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x11587c: 0x2446c0a8  addiu       $a2, $v0, -0x3F58
    ctx->pc = 0x11587cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x115880: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x115880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115884: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x115884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x115888: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x115888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11588c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x115890: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115890u;
        // 0x115894: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115890) {
            ctx->pc = 0x115964u;
            return;
        }
    }
    ctx->pc = 0x115898u;
    // 0x115898: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x115898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11589c: 0x17f200  sll         $fp, $s7, 8
    ctx->pc = 0x11589cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
    // 0x1158a0: 0x2495fcb0  addiu       $s5, $a0, -0x350
    ctx->pc = 0x1158a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x1158a4: 0x0  nop
    ctx->pc = 0x1158a4u;
    // NOP
    ctx->pc = 0x1158a8u;
}
