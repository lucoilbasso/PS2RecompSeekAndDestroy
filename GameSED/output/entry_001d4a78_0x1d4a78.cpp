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

// Function: entry_001d4a78
// Address: 0x1d4a78 - 0x1d4aa8
void entry_001d4a78_0x1d4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4a78_0x1d4a78");
#endif

    ctx->pc = 0x1d4a78u;

    // 0x1d4a78: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d4a7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d4a80: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1d4a84: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
    ctx->pc = 0x1D4A84u;
    {
        const bool branch_taken_0x1d4a84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A84u;
        // 0x1d4a88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a84) {
            ctx->pc = 0x1D4E04u;
            return;
        }
    }
    ctx->pc = 0x1D4A8Cu;
    // 0x1d4a8c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d4a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d4a90: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d4a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d4a94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4A94u;
    {
        const bool branch_taken_0x1d4a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a94) {
            ctx->pc = 0x1D4AA8u;
            return;
        }
    }
    ctx->pc = 0x1D4A9Cu;
    // 0x1d4a9c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d4aa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4AA0u;
    {
        const bool branch_taken_0x1d4aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA0u;
        // 0x1d4aa4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa0) {
            ctx->pc = 0x1D4AC0u;
            return;
        }
    }
    ctx->pc = 0x1D4AA8u;
}
