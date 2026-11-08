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

// Function: entry_00160570
// Address: 0x160570 - 0x160598
void entry_00160570_0x160570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160570_0x160570");
#endif

    ctx->pc = 0x160570u;

    // 0x160570: 0x1082011f  beq         $a0, $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x160570u;
    {
        const bool branch_taken_0x160570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x28822001  slti        $v0, $a0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160570) {
            ctx->pc = 0x1609F0u;
            return;
        }
    }
    ctx->pc = 0x160578u;
    // 0x160578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160578u;
    {
        const bool branch_taken_0x160578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160578u;
        // 0x16057c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160578) {
            ctx->pc = 0x160598u;
            return;
        }
    }
    ctx->pc = 0x160580u;
    // 0x160580: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x160580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x160584: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x160584u;
    {
        const bool branch_taken_0x160584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160584u;
        // 0x160588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160584) {
            ctx->pc = 0x1609F0u;
            return;
        }
    }
    ctx->pc = 0x16058Cu;
    // 0x16058c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x16058Cu;
    {
        const bool branch_taken_0x16058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16058Cu;
        // 0x160590: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16058c) {
            ctx->pc = 0x160A40u;
            return;
        }
    }
    ctx->pc = 0x160594u;
    // 0x160594: 0x0  nop
    ctx->pc = 0x160594u;
    // NOP
    ctx->pc = 0x160598u;
}
