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

// Function: entry_0013ba84
// Address: 0x13ba84 - 0x13baac
void entry_0013ba84_0x13ba84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba84_0x13ba84");
#endif

    ctx->pc = 0x13ba84u;

    // 0x13ba84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13ba88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13ba88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13ba8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13ba90: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BA90u;
    {
        const bool branch_taken_0x13ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA90u;
        // 0x13ba94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba90) {
            ctx->pc = 0x13BAE0u;
            return;
        }
    }
    ctx->pc = 0x13BA98u;
    // 0x13ba98: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x13ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13ba9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA9Cu;
    {
        const bool branch_taken_0x13ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba9c) {
            ctx->pc = 0x13BAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BA9Cu;
            // 0x13baa0: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BAACu;
            return;
        }
    }
    ctx->pc = 0x13BAA4u;
    // 0x13baa4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x13baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13baa8: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->pc = 0x13baacu;
}
