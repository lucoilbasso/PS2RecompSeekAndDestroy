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

// Function: entry_00155cac
// Address: 0x155cac - 0x155cc8
void entry_00155cac_0x155cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155cac_0x155cac");
#endif

    ctx->pc = 0x155cacu;

    // 0x155cac: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x155cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x155cb0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x155cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155cb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x155CB4u;
    {
        const bool branch_taken_0x155cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CB4u;
        // 0x155cb8: 0x3300a  movz        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cb4) {
            ctx->pc = 0x155CE4u;
            return;
        }
    }
    ctx->pc = 0x155CBCu;
    // 0x155cbc: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x155cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x155cc0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x155CC0u;
    {
        const bool branch_taken_0x155cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155cc0) {
            ctx->pc = 0x155CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155CC0u;
            // 0x155cc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155CE0u;
            return;
        }
    }
    ctx->pc = 0x155CC8u;
}
