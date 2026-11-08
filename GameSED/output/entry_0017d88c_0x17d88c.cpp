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

// Function: entry_0017d88c
// Address: 0x17d88c - 0x17d8d0
void entry_0017d88c_0x17d88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d88c_0x17d88c");
#endif

    ctx->pc = 0x17d88cu;

    // 0x17d88c: 0x1a4000c6  blez        $s2, . + 4 + (0xC6 << 2)
    ctx->pc = 0x17D88Cu;
    {
        const bool branch_taken_0x17d88c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x17D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D88Cu;
        // 0x17d890: 0x8e2d002c  lw          $t5, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d88c) {
            ctx->pc = 0x17DBA8u;
            return;
        }
    }
    ctx->pc = 0x17D894u;
    // 0x17d894: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17d898: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x17d898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17d89c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17d8a0: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x17d8a0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8a4: 0x268f0010  addiu       $t7, $s4, 0x10
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x17d8a8: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x17d8ac: 0x2459ead0  addiu       $t9, $v0, -0x1530
    ctx->pc = 0x17d8acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x17d8b0: 0x2478eaf0  addiu       $t8, $v1, -0x1510
    ctx->pc = 0x17d8b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961904));
    // 0x17d8b4: 0x249eeb10  addiu       $fp, $a0, -0x14F0
    ctx->pc = 0x17d8b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
    // 0x17d8b8: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d8bc: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x17d8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17d8c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d8c4: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x17d8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x17d8c8: 0x26ac0010  addiu       $t4, $s5, 0x10
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17d8cc: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x17d8d0u;
}
