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

// Function: entry_00185b40
// Address: 0x185b40 - 0x185b68
void entry_00185b40_0x185b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b40_0x185b40");
#endif

    ctx->pc = 0x185b40u;

    // 0x185b40: 0x12220073  beq         $s1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x185B40u;
    {
        const bool branch_taken_0x185b40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B40u;
        // 0x185b44: 0x2a220101  slti        $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b40) {
            ctx->pc = 0x185D10u;
            return;
        }
    }
    ctx->pc = 0x185B48u;
    // 0x185b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185B48u;
    {
        const bool branch_taken_0x185b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B48u;
        // 0x185b4c: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b48) {
            ctx->pc = 0x185B68u;
            return;
        }
    }
    ctx->pc = 0x185B50u;
    // 0x185b50: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x185b54: 0x1222006f  beq         $s1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x185B54u;
    {
        const bool branch_taken_0x185b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B54u;
        // 0x185b58: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b54) {
            ctx->pc = 0x185D14u;
            return;
        }
    }
    ctx->pc = 0x185B5Cu;
    // 0x185b5c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x185B5Cu;
    {
        const bool branch_taken_0x185b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B5Cu;
        // 0x185b60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b5c) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185B64u;
    // 0x185b64: 0x0  nop
    ctx->pc = 0x185b64u;
    // NOP
    ctx->pc = 0x185b68u;
}
