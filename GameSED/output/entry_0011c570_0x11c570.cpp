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

// Function: entry_0011c570
// Address: 0x11c570 - 0x11c598
void entry_0011c570_0x11c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c570_0x11c570");
#endif

    ctx->pc = 0x11c570u;

    // 0x11c570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c574: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11C574u;
    {
        const bool branch_taken_0x11c574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C574u;
        // 0x11c578: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c574) {
            ctx->pc = 0x11C5F8u;
            return;
        }
    }
    ctx->pc = 0x11C57Cu;
    // 0x11c57c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x11c57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c580: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C580u;
    {
        const bool branch_taken_0x11c580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c580) {
            ctx->pc = 0x11C584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C580u;
            // 0x11c584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C598u;
            return;
        }
    }
    ctx->pc = 0x11C588u;
    // 0x11c588: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C588u;
    {
        const bool branch_taken_0x11c588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C588u;
        // 0x11c58c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c588) {
            ctx->pc = 0x11C5A8u;
            return;
        }
    }
    ctx->pc = 0x11C590u;
    // 0x11c590: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x11C590u;
    {
        const bool branch_taken_0x11c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C590u;
        // 0x11c594: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c590) {
            ctx->pc = 0x11C710u;
            return;
        }
    }
    ctx->pc = 0x11C598u;
}
