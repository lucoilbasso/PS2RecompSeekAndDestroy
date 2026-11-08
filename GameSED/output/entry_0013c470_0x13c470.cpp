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

// Function: entry_0013c470
// Address: 0x13c470 - 0x13c48c
void entry_0013c470_0x13c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c470_0x13c470");
#endif

    ctx->pc = 0x13c470u;

    // 0x13c470: 0x8e240164  lw          $a0, 0x164($s1)
    ctx->pc = 0x13c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x13c474: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x13c474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13c478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13c47c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13c480: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C480u;
    {
        const bool branch_taken_0x13c480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C480u;
        // 0x13c484: 0xae2401ec  sw          $a0, 0x1EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c480) {
            ctx->pc = 0x13C48Cu;
            return;
        }
    }
    ctx->pc = 0x13C488u;
    // 0x13c488: 0xac9101d0  sw          $s1, 0x1D0($a0)
    ctx->pc = 0x13c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 17));
    ctx->pc = 0x13c48cu;
}
