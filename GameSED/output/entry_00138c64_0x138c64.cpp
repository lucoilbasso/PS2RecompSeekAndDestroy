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

// Function: entry_00138c64
// Address: 0x138c64 - 0x138ca0
void entry_00138c64_0x138c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c64_0x138c64");
#endif

    ctx->pc = 0x138c64u;

    // 0x138c64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138c6c: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x138c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x138c70: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x138c74: 0x8c670040  lw          $a3, 0x40($v1)
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x138c78: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x138c7c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x138c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x138c80: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x138C80u;
    {
        const bool branch_taken_0x138c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x138c80) {
            ctx->pc = 0x138CACu;
            return;
        }
    }
    ctx->pc = 0x138C88u;
    // 0x138c88: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x138c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x138c8c: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138C8Cu;
    {
        const bool branch_taken_0x138c8c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x138c8c) {
            ctx->pc = 0x138CACu;
            return;
        }
    }
    ctx->pc = 0x138C94u;
    // 0x138c94: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x138c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x138c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138C98u;
    {
        const bool branch_taken_0x138c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C98u;
        // 0x138c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c98) {
            ctx->pc = 0x138CACu;
            return;
        }
    }
    ctx->pc = 0x138CA0u;
}
