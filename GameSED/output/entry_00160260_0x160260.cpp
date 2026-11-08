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

// Function: entry_00160260
// Address: 0x160260 - 0x160280
void entry_00160260_0x160260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160260_0x160260");
#endif

    ctx->pc = 0x160260u;

    // 0x160260: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x160260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x160264: 0x24a5bc50  addiu       $a1, $a1, -0x43B0
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949968));
    // 0x160268: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x16026c: 0x8ca20400  lw          $v0, 0x400($a1)
    ctx->pc = 0x16026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x160270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160274: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x160274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x160278: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x160278u;
    {
        const bool branch_taken_0x160278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160278u;
        // 0x16027c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160278) {
            ctx->pc = 0x160000u;
            return;
        }
    }
    ctx->pc = 0x160280u;
}
