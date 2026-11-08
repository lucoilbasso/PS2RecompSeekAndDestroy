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

// Function: entry_00130c78
// Address: 0x130c78 - 0x130cb0
void entry_00130c78_0x130c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130c78_0x130c78");
#endif

    ctx->pc = 0x130c78u;

    // 0x130c78: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x130C78u;
    {
        const bool branch_taken_0x130c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C78u;
        // 0x130c7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c78) {
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130C80u;
    // 0x130c80: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x130c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x130c84: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130c88: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x130C88u;
    {
        const bool branch_taken_0x130c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x130C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C88u;
        // 0x130c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c88) {
            ctx->pc = 0x130CF8u;
            return;
        }
    }
    ctx->pc = 0x130C90u;
    // 0x130c90: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x130c94: 0x508000b4  beql        $a0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x130C94u;
    {
        const bool branch_taken_0x130c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c94) {
            ctx->pc = 0x130C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C94u;
            // 0x130c98: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F68u;
            return;
        }
    }
    ctx->pc = 0x130C9Cu;
    // 0x130c9c: 0x8c820480  lw          $v0, 0x480($a0)
    ctx->pc = 0x130c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x130ca0: 0x184000b0  blez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x130CA0u;
    {
        const bool branch_taken_0x130ca0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x130CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA0u;
        // 0x130ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ca0) {
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130CA8u;
    // 0x130ca8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x130cac: 0x0  nop
    ctx->pc = 0x130cacu;
    // NOP
    ctx->pc = 0x130cb0u;
}
