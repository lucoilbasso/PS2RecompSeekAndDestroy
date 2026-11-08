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

// Function: entry_00117424
// Address: 0x117424 - 0x117468
void entry_00117424_0x117424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117424_0x117424");
#endif

    ctx->pc = 0x117424u;

    // 0x117424: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x117424u;
    {
        const bool branch_taken_0x117424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117424u;
        // 0x117428: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117424) {
            ctx->pc = 0x1175A4u;
            return;
        }
    }
    ctx->pc = 0x11742Cu;
    // 0x11742c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117430: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x117430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x117434: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x117434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x117438: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x117438u;
    {
        const bool branch_taken_0x117438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117438u;
        // 0x11743c: 0xac5200b0  sw          $s2, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117438) {
            ctx->pc = 0x1174D8u;
            return;
        }
    }
    ctx->pc = 0x117440u;
    // 0x117440: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x117440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x117444: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x117444u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x117448: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11744c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117450: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117454: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117458: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x117458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11745c: 0x26103450  addiu       $s0, $s0, 0x3450
    ctx->pc = 0x11745cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13392));
    // 0x117460: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x117464: 0x0  nop
    ctx->pc = 0x117464u;
    // NOP
    ctx->pc = 0x117468u;
}
