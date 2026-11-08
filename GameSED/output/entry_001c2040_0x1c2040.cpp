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

// Function: entry_001c2040
// Address: 0x1c2040 - 0x1c206c
void entry_001c2040_0x1c2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2040_0x1c2040");
#endif

    ctx->pc = 0x1c2040u;

    // 0x1c2040: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c2040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c2044: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c2044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2048: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c2048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c204c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c204cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c2050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c2054: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2058: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c2058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c205c: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C205Cu;
    {
        const bool branch_taken_0x1c205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C205Cu;
        // 0x1c2060: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c205c) {
            ctx->pc = 0x1C2028u;
            return;
        }
    }
    ctx->pc = 0x1C2064u;
    // 0x1c2064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2064u;
    {
        const bool branch_taken_0x1c2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2064u;
        // 0x1c2068: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2064) {
            ctx->pc = 0x1C2070u;
            return;
        }
    }
    ctx->pc = 0x1C206Cu;
}
