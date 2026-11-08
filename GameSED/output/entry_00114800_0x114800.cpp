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

// Function: entry_00114800
// Address: 0x114800 - 0x114820
void entry_00114800_0x114800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114800_0x114800");
#endif

    ctx->pc = 0x114800u;

    // 0x114800: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114800u;
    {
        const bool branch_taken_0x114800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x114800) {
            ctx->pc = 0x114804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114800u;
            // 0x114804: 0x90660012  lbu         $a2, 0x12($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114820u;
            return;
        }
    }
    ctx->pc = 0x114808u;
    // 0x114808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x114808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11480c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11480Cu;
    {
        const bool branch_taken_0x11480c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11480c) {
            ctx->pc = 0x114810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11480Cu;
            // 0x114810: 0x90660013  lbu         $a2, 0x13($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114820u;
            return;
        }
    }
    ctx->pc = 0x114814u;
    // 0x114814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114814u;
    {
        const bool branch_taken_0x114814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114814u;
        // 0x114818: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114814) {
            ctx->pc = 0x114824u;
            return;
        }
    }
    ctx->pc = 0x11481Cu;
    // 0x11481c: 0x0  nop
    ctx->pc = 0x11481cu;
    // NOP
    ctx->pc = 0x114820u;
}
