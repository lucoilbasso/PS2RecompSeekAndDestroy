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

// Function: entry_001877ac
// Address: 0x1877ac - 0x1877e0
void entry_001877ac_0x1877ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001877ac_0x1877ac");
#endif

    ctx->pc = 0x1877acu;

    // 0x1877ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1877acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1877b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1877b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1877b4: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x1877b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1877b8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1877B8u;
    {
        const bool branch_taken_0x1877b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B8u;
        // 0x1877bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b8) {
            ctx->pc = 0x187834u;
            return;
        }
    }
    ctx->pc = 0x1877C0u;
    // 0x1877c0: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1877c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1877c8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1877c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1877cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1877CCu;
    {
        const bool branch_taken_0x1877cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877CCu;
        // 0x1877d0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877cc) {
            ctx->pc = 0x1877E0u;
            return;
        }
    }
    ctx->pc = 0x1877D4u;
    // 0x1877d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1877d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1877D8u;
    {
        const bool branch_taken_0x1877d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877D8u;
        // 0x1877dc: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877d8) {
            ctx->pc = 0x187818u;
            return;
        }
    }
    ctx->pc = 0x1877E0u;
}
