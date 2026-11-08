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

// Function: entry_00136504
// Address: 0x136504 - 0x136518
void entry_00136504_0x136504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136504_0x136504");
#endif

    ctx->pc = 0x136504u;

    // 0x136504: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x136508: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x136508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13650c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x13650cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x136510: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x136510u;
    {
        const bool branch_taken_0x136510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136510u;
        // 0x136514: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136510) {
            ctx->pc = 0x136298u;
            return;
        }
    }
    ctx->pc = 0x136518u;
}
