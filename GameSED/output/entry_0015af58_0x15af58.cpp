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

// Function: entry_0015af58
// Address: 0x15af58 - 0x15af70
void entry_0015af58_0x15af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af58_0x15af58");
#endif

    ctx->pc = 0x15af58u;

    // 0x15af58: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x15af58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
    // 0x15af5c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x15af5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15af60: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15AF60u;
    {
        const bool branch_taken_0x15af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af60) {
            ctx->pc = 0x15AFB4u;
            return;
        }
    }
    ctx->pc = 0x15AF68u;
    // 0x15af68: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15af6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15af6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15af70u;
}
