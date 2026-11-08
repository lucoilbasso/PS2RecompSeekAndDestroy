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

// Function: entry_001a8290
// Address: 0x1a8290 - 0x1a82d8
void entry_001a8290_0x1a8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8290_0x1a8290");
#endif

    ctx->pc = 0x1a8290u;

    // 0x1a8290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8294: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a829c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a82a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a82a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a82a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a82a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a82a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a82ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a82b0: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A82B0u;
    {
        const bool branch_taken_0x1a82b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82B0u;
        // 0x1a82b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82b0) {
            ctx->pc = 0x1A83D4u;
            return;
        }
    }
    ctx->pc = 0x1A82B8u;
    // 0x1a82b8: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a82bc: 0x3c170026  lui         $s7, 0x26
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)38 << 16));
    // 0x1a82c0: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x1a82c4: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a82c8: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x1a82cc: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1a82ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1a82d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a82d4: 0x0  nop
    ctx->pc = 0x1a82d4u;
    // NOP
    ctx->pc = 0x1a82d8u;
}
