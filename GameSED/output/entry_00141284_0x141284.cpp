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

// Function: entry_00141284
// Address: 0x141284 - 0x1412d0
void entry_00141284_0x141284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141284_0x141284");
#endif

    ctx->pc = 0x141284u;

    // 0x141284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x141284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x141288: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x141288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14128c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x14128cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141290: 0x21b43  sra         $v1, $v0, 13
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 13));
    // 0x141294: 0x3047000f  andi        $a3, $v0, 0xF
    ctx->pc = 0x141294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x141298: 0x30750001  andi        $s5, $v1, 0x1
    ctx->pc = 0x141298u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14129c: 0x10e50074  beq         $a3, $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x14129Cu;
    {
        const bool branch_taken_0x14129c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1412A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14129Cu;
        // 0x1412a0: 0x3103000f  andi        $v1, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14129c) {
            ctx->pc = 0x141470u;
            return;
        }
    }
    ctx->pc = 0x1412A4u;
    // 0x1412a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1412a8: 0x14e20009  bne         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1412A8u;
    {
        const bool branch_taken_0x1412a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1412ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412A8u;
        // 0x1412ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412a8) {
            ctx->pc = 0x1412D0u;
            return;
        }
    }
    ctx->pc = 0x1412B0u;
    // 0x1412b0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1412b4: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1412b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1412b8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1412b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1412bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1412bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1412c0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1412c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1412c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1412C4u;
    {
        const bool branch_taken_0x1412c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412C4u;
        // 0x1412c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412c4) {
            ctx->pc = 0x141334u;
            return;
        }
    }
    ctx->pc = 0x1412CCu;
    // 0x1412cc: 0x0  nop
    ctx->pc = 0x1412ccu;
    // NOP
    ctx->pc = 0x1412d0u;
}
