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

// Function: caseD_3
// Address: 0x113d68 - 0x113d98
void caseD_3_0x113d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x113d68");
#endif

    ctx->pc = 0x113d68u;

    // 0x113d68: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x113d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113d6c: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x113d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113d70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x113D70u;
    {
        const bool branch_taken_0x113d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D70u;
        // 0x113d74: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d70) {
            ctx->pc = 0x113D98u;
            return;
        }
    }
    ctx->pc = 0x113D78u;
    // 0x113d78: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x113d7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x113d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d80: 0xaf829124  sw          $v0, -0x6EDC($gp)
    ctx->pc = 0x113d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
    // 0x113d84: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x113d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x113d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x113d8c: 0x8c630730  lw          $v1, 0x730($v1)
    ctx->pc = 0x113d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x113d90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x113D90u;
    {
        const bool branch_taken_0x113d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D90u;
        // 0x113d94: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d90) {
            ctx->pc = 0x113DB8u;
            return;
        }
    }
    ctx->pc = 0x113D98u;
}
