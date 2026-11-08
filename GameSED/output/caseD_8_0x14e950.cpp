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

// Function: caseD_8
// Address: 0x14e950 - 0x14e978
void caseD_8_0x14e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x14e950");
#endif

    ctx->pc = 0x14e950u;

    // 0x14e950: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x14e954: 0xae20084c  sw          $zero, 0x84C($s1)
    ctx->pc = 0x14e954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 0));
    // 0x14e958: 0x24439aa8  addiu       $v1, $v0, -0x6558
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941352));
    // 0x14e95c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x209AA8u));
    // 0x14e960: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14E964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E960u;
            // 0x14e964: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E968u;
    // 0x14e968: 0x10520021  beq         $v0, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x14E968u;
    {
        const bool branch_taken_0x14e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x14E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E968u;
        // 0x14e96c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e968) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E970u;
    // 0x14e970: 0x8e22084c  lw          $v0, 0x84C($s1)
    ctx->pc = 0x14e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
    // 0x14e974: 0x0  nop
    ctx->pc = 0x14e974u;
    // NOP
    ctx->pc = 0x14e978u;
}
